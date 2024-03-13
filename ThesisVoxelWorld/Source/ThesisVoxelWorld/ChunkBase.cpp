// Fill out your copyright notice in the Description page of Project Settings.

#include "ChunkBase.h"
#include "ProceduralMeshComponent.h"



// Sets default values
AChunkBase::AChunkBase()
{
	PrimaryActorTick.bCanEverTick = false;

	Mesh = CreateDefaultSubobject<UProceduralMeshComponent>("Mesh");

	// Mesh Settings
	Mesh->SetCastShadow(false);

	// Set Mesh as root
	SetRootComponent(Mesh);
}

// Called when the game starts or when spawned
void AChunkBase::BeginPlay()
{
	Super::BeginPlay();
	Setup();

	GenerateHeightMap();

	GenerateMesh();

	UE_LOG(LogTemp, Warning, TEXT("Vertex Count : %d"), VertexCount);

	ApplyMesh();
	
}
void AChunkBase::GenerateHeightMap()
{
	Generate2DHeightMap(GetActorLocation() / 100);
}

void AChunkBase::ApplyMesh() const
{
	Mesh->SetMaterial(0, Material);
	Mesh->CreateMeshSection(
		0,
		MeshData.Vertices,
		MeshData.Triangles,
		MeshData.Normals,
		MeshData.UV0,
		MeshData.Colors,
		TArray<FProcMeshTangent>(),
		true
	);
}

void AChunkBase::ClearMesh()
{
	VertexCount = 0;
	MeshData.Clear();
}

void AChunkBase::ModifyVoxel(const FIntVector Position, const EBlock Block)
{
	if (Position.X >= Size || Position.Y >= Size || Position.Z >= Size || Position.X < 0 || Position.Y < 0 || Position.Z < 0) return;

	ModifyVoxelData(Position, Block);

	ClearMesh();

	GenerateMesh();

	ApplyMesh();
}

