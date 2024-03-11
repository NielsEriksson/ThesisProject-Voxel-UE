// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThesisVoxelWorld/NaiveChunk.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaiveChunk() {}
// Cross Module References
	THESISVOXELWORLD_API UClass* Z_Construct_UClass_AChunkBase();
	THESISVOXELWORLD_API UClass* Z_Construct_UClass_ANaiveChunk();
	THESISVOXELWORLD_API UClass* Z_Construct_UClass_ANaiveChunk_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ThesisVoxelWorld();
// End Cross Module References
	void ANaiveChunk::StaticRegisterNativesANaiveChunk()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANaiveChunk);
	UClass* Z_Construct_UClass_ANaiveChunk_NoRegister()
	{
		return ANaiveChunk::StaticClass();
	}
	struct Z_Construct_UClass_ANaiveChunk_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaiveChunk_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AChunkBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ThesisVoxelWorld,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANaiveChunk_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaiveChunk_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaiveChunk.h" },
		{ "ModuleRelativePath", "NaiveChunk.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaiveChunk_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaiveChunk>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANaiveChunk_Statics::ClassParams = {
		&ANaiveChunk::StaticClass,
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
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANaiveChunk_Statics::Class_MetaDataParams), Z_Construct_UClass_ANaiveChunk_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ANaiveChunk()
	{
		if (!Z_Registration_Info_UClass_ANaiveChunk.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANaiveChunk.OuterSingleton, Z_Construct_UClass_ANaiveChunk_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANaiveChunk.OuterSingleton;
	}
	template<> THESISVOXELWORLD_API UClass* StaticClass<ANaiveChunk>()
	{
		return ANaiveChunk::StaticClass();
	}
	ANaiveChunk::ANaiveChunk() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaiveChunk);
	ANaiveChunk::~ANaiveChunk() {}
	struct Z_CompiledInDeferFile_FID_Git_test11_ThesisVoxelWorld_Source_ThesisVoxelWorld_NaiveChunk_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_test11_ThesisVoxelWorld_Source_ThesisVoxelWorld_NaiveChunk_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANaiveChunk, ANaiveChunk::StaticClass, TEXT("ANaiveChunk"), &Z_Registration_Info_UClass_ANaiveChunk, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANaiveChunk), 657304334U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_test11_ThesisVoxelWorld_Source_ThesisVoxelWorld_NaiveChunk_h_2310170954(TEXT("/Script/ThesisVoxelWorld"),
		Z_CompiledInDeferFile_FID_Git_test11_ThesisVoxelWorld_Source_ThesisVoxelWorld_NaiveChunk_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_test11_ThesisVoxelWorld_Source_ThesisVoxelWorld_NaiveChunk_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
