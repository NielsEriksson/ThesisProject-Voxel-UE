// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThesisVoxelWorld/GreedyChunk.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGreedyChunk() {}
// Cross Module References
	THESISVOXELWORLD_API UClass* Z_Construct_UClass_AChunkBase();
	THESISVOXELWORLD_API UClass* Z_Construct_UClass_AGreedyChunk();
	THESISVOXELWORLD_API UClass* Z_Construct_UClass_AGreedyChunk_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ThesisVoxelWorld();
// End Cross Module References
	void AGreedyChunk::StaticRegisterNativesAGreedyChunk()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGreedyChunk);
	UClass* Z_Construct_UClass_AGreedyChunk_NoRegister()
	{
		return AGreedyChunk::StaticClass();
	}
	struct Z_Construct_UClass_AGreedyChunk_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGreedyChunk_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AChunkBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ThesisVoxelWorld,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGreedyChunk_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGreedyChunk_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GreedyChunk.h" },
		{ "ModuleRelativePath", "GreedyChunk.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGreedyChunk_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGreedyChunk>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGreedyChunk_Statics::ClassParams = {
		&AGreedyChunk::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGreedyChunk_Statics::Class_MetaDataParams), Z_Construct_UClass_AGreedyChunk_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AGreedyChunk()
	{
		if (!Z_Registration_Info_UClass_AGreedyChunk.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGreedyChunk.OuterSingleton, Z_Construct_UClass_AGreedyChunk_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGreedyChunk.OuterSingleton;
	}
	template<> THESISVOXELWORLD_API UClass* StaticClass<AGreedyChunk>()
	{
		return AGreedyChunk::StaticClass();
	}
	AGreedyChunk::AGreedyChunk() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGreedyChunk);
	AGreedyChunk::~AGreedyChunk() {}
	struct Z_CompiledInDeferFile_FID_Git_test11_ThesisVoxelWorld_Source_ThesisVoxelWorld_GreedyChunk_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_test11_ThesisVoxelWorld_Source_ThesisVoxelWorld_GreedyChunk_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGreedyChunk, AGreedyChunk::StaticClass, TEXT("AGreedyChunk"), &Z_Registration_Info_UClass_AGreedyChunk, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGreedyChunk), 184627193U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_test11_ThesisVoxelWorld_Source_ThesisVoxelWorld_GreedyChunk_h_3550217896(TEXT("/Script/ThesisVoxelWorld"),
		Z_CompiledInDeferFile_FID_Git_test11_ThesisVoxelWorld_Source_ThesisVoxelWorld_GreedyChunk_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_test11_ThesisVoxelWorld_Source_ThesisVoxelWorld_GreedyChunk_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
