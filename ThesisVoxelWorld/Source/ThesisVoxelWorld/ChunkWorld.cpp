// Fill out your copyright notice in the Description page of Project Settings.


#include "ChunkWorld.h"
#include "ChunkBase.h"

AChunkWorld::AChunkWorld()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
}

// Called when the game starts or when spawned
void AChunkWorld::BeginPlay()
{
	Super::BeginPlay();

	Generate2DWorld();
	
	UE_LOG(LogTemp, Warning, TEXT("%d Chunks Created"), ChunkCount);
}

void AChunkWorld::Generate2DWorld()
{
	for (int x = -DrawDistance; x <= DrawDistance; x++)
	{
		for (int y = -DrawDistance; y <= DrawDistance; y++)
		{
			auto transform = FTransform(
				FRotator::ZeroRotator,
				FVector(x * Size * 100, y * Size * 100, 0),
				FVector::OneVector
			);

			const auto chunk = GetWorld()->SpawnActorDeferred<AChunkBase>(
				ChunkType,
				transform,
				this
			);
			
			chunk->HeightMin = HeightMin;
			chunk->Frequency = FMath::RandRange(FrequencyMin, FrequencyMax);
			chunk->Material = Material;
			chunk->Size = Size;

			ChunkCount++;
		}
	}
	GenerateAirLayer();
}

void AChunkWorld::GenerateAirLayer()
{
	for (int x = -DrawDistance; x <= DrawDistance; x++)
	{
		for (int y = -DrawDistance; y <= DrawDistance; y++)
		{

			auto transform = FTransform(
				FRotator::ZeroRotator,
				FVector(x * Size * 100, y * Size * 100, Size * 100),
				FVector::OneVector
			);

			const auto chunk = GetWorld()->SpawnActorDeferred<AChunkBase>(
				ChunkType,
				transform,
				this
			);

			chunk->Material = Material;
			chunk->Size = Size;
			chunk->isAir = true;

			ChunkCount++;
		}
	}
}



