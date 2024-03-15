#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enums.h"
#include "ChunkBase.h"
#include "ChunkWorld.generated.h"

UCLASS()
class THESISVOXELWORLD_API AChunkWorld : public AActor
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditInstanceOnly, Category = "World")
	TSubclassOf<AChunkBase> ChunkType;

	UPROPERTY(EditInstanceOnly, Category = "World")
	int DrawDistance = 5;

	UPROPERTY(EditInstanceOnly, Category = "Chunk")
	TObjectPtr<UMaterialInterface> Material;

	UPROPERTY(EditInstanceOnly, Category = "Chunk", BlueprintReadWrite)
	int Size = 32;

	UPROPERTY(EditInstanceOnly, Category = "Height Map")
	float FrequencyMin = 0.02f;
	UPROPERTY(EditInstanceOnly, Category = "Height Map")
	float FrequencyMax = 0.15f;
	UPROPERTY(EditInstanceOnly, Category = "Height Map")
	float HeightMin;
	// Sets default values for this actor's properties
	AChunkWorld();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	int ChunkCount;

	void Generate2DWorld();
	void GenerateAirLayer();
};
