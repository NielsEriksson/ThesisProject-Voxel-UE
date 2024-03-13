// Fill out your copyright notice in the Description page of Project Settings.


#include "NaiveChunk.h"

void ANaiveChunk::Setup()
{
	// Initialize Blocks
	Blocks.SetNum(Size * Size * Size);
}

void ANaiveChunk::Generate2DHeightMap(const FVector Position)
{
	for (int x = 0; x < Size; x++)
	{
		for (int y = 0; y < Size; y++)
		{
			const float Xpos = x + Position.X;
			const float ypos = y + Position.Y;

			const int Height = FMath::RandRange(Size - 5, Size);

			for (int z = 0; z < Height; z++)
			{
				if (z < Height - 3) Blocks[GetBlockIndex(x, y, z)] = EBlock::Stone;
				else if (z < Height - 1) Blocks[GetBlockIndex(x, y, z)] = EBlock::Dirt;
				else if (z == Height - 1) Blocks[GetBlockIndex(x, y, z)] = EBlock::Grass;
			}


			for (int z = Height; z < Size; z++)
			{
				Blocks[GetBlockIndex(x, y, z)] = EBlock::Air;
			}

		}
	}
}
void ANaiveChunk::Generate3DHeightMap(const FVector Position)
{
	for (int x = 0; x < Size; ++x)
	{
		for (int y = 0; y < Size; ++y)
		{
			for (int z = 0; z < Size; ++z)
			{
				const auto NoiseValue = -1;

				if (NoiseValue >= 0)
				{
					Blocks[GetBlockIndex(x, y, z)] = EBlock::Air;
				}
				else
				{
					Blocks[GetBlockIndex(x, y, z)] = EBlock::Stone;
				}
			}
		}
	}
}

void ANaiveChunk::GenerateMesh()
{
	for (int x = 0; x < Size; x++)
	{
		for (int y = 0; y < Size; y++)
		{
			for (int z = 0; z < Size; z++)
			{
				if (Blocks[GetBlockIndex(x, y, z)] != EBlock::Air)
				{
					const auto Position = FVector(x, y, z);

					for (auto Direction : { EDirection::Forward, EDirection::Right, EDirection::Back, EDirection::Left, EDirection::Up, EDirection::Down })
					{
						if (Check(GetPositionInDirection(Direction, Position)))
						{
							CreateFace(Direction, Position * 100, Blocks[GetBlockIndex(x, y, z)]);
						}
					}
				}
			}
		}
	}
}

bool ANaiveChunk::Check(const FVector Position) const
{
	if (Position.X >= Size || Position.Y >= Size || Position.X < 0 || Position.Y < 0 || Position.Z < 0) return true;
	if (Position.Z >= Size) return true;
	return Blocks[GetBlockIndex(Position.X, Position.Y, Position.Z)] == EBlock::Air;
}

void ANaiveChunk::CreateFace(const EDirection Direction, const FVector Position, EBlock BlockType)
{
	const auto Color = FColor(0, 0, 0, GetTextureIndex(BlockType, Direction));
	const auto Normal = GetNormal(Direction);

	MeshData.Vertices.Append(GetFaceVertices(Direction, Position));
	MeshData.Triangles.Append({ VertexCount + 3, VertexCount + 2, VertexCount, VertexCount + 2, VertexCount + 1, VertexCount });
	MeshData.Normals.Append({ Normal, Normal, Normal, Normal });
	MeshData.Colors.Append({ Color, Color, Color, Color });
	
	MeshData.UV0.Append({ FVector2D(1, 0),
		FVector2D(0, 0),
		FVector2D(0, 1),
		FVector2D(1, 1) });



	VertexCount += 4;
}

TArray<FVector> ANaiveChunk::GetFaceVertices(EDirection Direction, const FVector Position) const
{
	TArray<FVector> Vertices;

	for (int i = 0; i < 4; i++)
	{
		Vertices.Add(BlockVertexData[BlockTriangleData[i + static_cast<int>(Direction) * 4]] + Position);
	}

	return Vertices;
}

FVector ANaiveChunk::GetPositionInDirection(const EDirection Direction, const FVector Position) const
{
	switch (Direction)
	{
	case EDirection::Forward: return Position + FVector::ForwardVector;
	case EDirection::Back: return Position + FVector::BackwardVector;
	case EDirection::Left: return Position + FVector::LeftVector;
	case EDirection::Right: return Position + FVector::RightVector;
	case EDirection::Up: return Position + FVector::UpVector;
	case EDirection::Down: return Position + FVector::DownVector;
	default: throw std::invalid_argument("Invalid direction");
	}
}

FVector ANaiveChunk::GetNormal(const EDirection Direction) const
{
	switch (Direction)
	{
	case EDirection::Forward: return FVector::ForwardVector;
	case EDirection::Right: return FVector::RightVector;
	case EDirection::Back: return FVector::BackwardVector;
	case EDirection::Left: return FVector::LeftVector;
	case EDirection::Up: return FVector::UpVector;
	case EDirection::Down: return FVector::DownVector;
	default: throw std::invalid_argument("Invalid direction");
	}
}

void ANaiveChunk::ModifyVoxelData(const FIntVector Position, const EBlock Block)
{
	const int Index = GetBlockIndex(Position.X, Position.Y, Position.Z);

	Blocks[Index] = Block;
}

int ANaiveChunk::GetBlockIndex(const int X, const int Y, const int Z) const
{
	return Z * Size * Size + Y * Size + X;
}

int ANaiveChunk::GetTextureIndex(const EBlock Block, const EDirection direction) const
{
	switch (Block) {
	case EBlock::Grass:
	{
		if (direction == EDirection::Up) return 0;
		return 1;
	}
	case EBlock::Dirt: return 2;
	case EBlock::Stone: return 3;
	default: return 255;
	}
}