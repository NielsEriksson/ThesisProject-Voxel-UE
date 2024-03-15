// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThesisVoxelWorld/ChunkWorld.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChunkWorld() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	THESISVOXELWORLD_API UClass* Z_Construct_UClass_AChunkBase_NoRegister();
	THESISVOXELWORLD_API UClass* Z_Construct_UClass_AChunkWorld();
	THESISVOXELWORLD_API UClass* Z_Construct_UClass_AChunkWorld_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ThesisVoxelWorld();
// End Cross Module References
	void AChunkWorld::StaticRegisterNativesAChunkWorld()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChunkWorld);
	UClass* Z_Construct_UClass_AChunkWorld_NoRegister()
	{
		return AChunkWorld::StaticClass();
	}
	struct Z_Construct_UClass_AChunkWorld_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChunkType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ChunkType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawDistance_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DrawDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrequencyMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrequencyMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrequencyMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrequencyMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightMin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChunkWorld_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ThesisVoxelWorld,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChunkWorld_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunkWorld_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChunkWorld.h" },
		{ "ModuleRelativePath", "ChunkWorld.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunkWorld_Statics::NewProp_ChunkType_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "ChunkWorld.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChunkWorld_Statics::NewProp_ChunkType = { "ChunkType", nullptr, (EPropertyFlags)0x0014000000000801, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkWorld, ChunkType), Z_Construct_UClass_UClass, Z_Construct_UClass_AChunkBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChunkWorld_Statics::NewProp_ChunkType_MetaData), Z_Construct_UClass_AChunkWorld_Statics::NewProp_ChunkType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunkWorld_Statics::NewProp_DrawDistance_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "ChunkWorld.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AChunkWorld_Statics::NewProp_DrawDistance = { "DrawDistance", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkWorld, DrawDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChunkWorld_Statics::NewProp_DrawDistance_MetaData), Z_Construct_UClass_AChunkWorld_Statics::NewProp_DrawDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunkWorld_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Chunk" },
		{ "ModuleRelativePath", "ChunkWorld.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AChunkWorld_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000801, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkWorld, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChunkWorld_Statics::NewProp_Material_MetaData), Z_Construct_UClass_AChunkWorld_Statics::NewProp_Material_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunkWorld_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Chunk" },
		{ "ModuleRelativePath", "ChunkWorld.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AChunkWorld_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkWorld, Size), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChunkWorld_Statics::NewProp_Size_MetaData), Z_Construct_UClass_AChunkWorld_Statics::NewProp_Size_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunkWorld_Statics::NewProp_FrequencyMin_MetaData[] = {
		{ "Category", "Height Map" },
		{ "ModuleRelativePath", "ChunkWorld.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChunkWorld_Statics::NewProp_FrequencyMin = { "FrequencyMin", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkWorld, FrequencyMin), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChunkWorld_Statics::NewProp_FrequencyMin_MetaData), Z_Construct_UClass_AChunkWorld_Statics::NewProp_FrequencyMin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunkWorld_Statics::NewProp_FrequencyMax_MetaData[] = {
		{ "Category", "Height Map" },
		{ "ModuleRelativePath", "ChunkWorld.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChunkWorld_Statics::NewProp_FrequencyMax = { "FrequencyMax", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkWorld, FrequencyMax), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChunkWorld_Statics::NewProp_FrequencyMax_MetaData), Z_Construct_UClass_AChunkWorld_Statics::NewProp_FrequencyMax_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunkWorld_Statics::NewProp_HeightMin_MetaData[] = {
		{ "Category", "Height Map" },
		{ "ModuleRelativePath", "ChunkWorld.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChunkWorld_Statics::NewProp_HeightMin = { "HeightMin", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkWorld, HeightMin), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChunkWorld_Statics::NewProp_HeightMin_MetaData), Z_Construct_UClass_AChunkWorld_Statics::NewProp_HeightMin_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChunkWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkWorld_Statics::NewProp_ChunkType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkWorld_Statics::NewProp_DrawDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkWorld_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkWorld_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkWorld_Statics::NewProp_FrequencyMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkWorld_Statics::NewProp_FrequencyMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkWorld_Statics::NewProp_HeightMin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChunkWorld_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChunkWorld>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AChunkWorld_Statics::ClassParams = {
		&AChunkWorld::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AChunkWorld_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AChunkWorld_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChunkWorld_Statics::Class_MetaDataParams), Z_Construct_UClass_AChunkWorld_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChunkWorld_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AChunkWorld()
	{
		if (!Z_Registration_Info_UClass_AChunkWorld.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChunkWorld.OuterSingleton, Z_Construct_UClass_AChunkWorld_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AChunkWorld.OuterSingleton;
	}
	template<> THESISVOXELWORLD_API UClass* StaticClass<AChunkWorld>()
	{
		return AChunkWorld::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChunkWorld);
	AChunkWorld::~AChunkWorld() {}
	struct Z_CompiledInDeferFile_FID_Git_test11_ThesisVoxelWorld_Source_ThesisVoxelWorld_ChunkWorld_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_test11_ThesisVoxelWorld_Source_ThesisVoxelWorld_ChunkWorld_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AChunkWorld, AChunkWorld::StaticClass, TEXT("AChunkWorld"), &Z_Registration_Info_UClass_AChunkWorld, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChunkWorld), 1585324290U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_test11_ThesisVoxelWorld_Source_ThesisVoxelWorld_ChunkWorld_h_3717399966(TEXT("/Script/ThesisVoxelWorld"),
		Z_CompiledInDeferFile_FID_Git_test11_ThesisVoxelWorld_Source_ThesisVoxelWorld_ChunkWorld_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_test11_ThesisVoxelWorld_Source_ThesisVoxelWorld_ChunkWorld_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
