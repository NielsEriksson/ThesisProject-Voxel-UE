// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThesisVoxelWorld/ChunkMeshData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChunkMeshData() {}
// Cross Module References
	THESISVOXELWORLD_API UScriptStruct* Z_Construct_UScriptStruct_FChunkMeshData();
	UPackage* Z_Construct_UPackage__Script_ThesisVoxelWorld();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChunkMeshData;
class UScriptStruct* FChunkMeshData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChunkMeshData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChunkMeshData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChunkMeshData, (UObject*)Z_Construct_UPackage__Script_ThesisVoxelWorld(), TEXT("ChunkMeshData"));
	}
	return Z_Registration_Info_UScriptStruct_ChunkMeshData.OuterSingleton;
}
template<> THESISVOXELWORLD_API UScriptStruct* StaticStruct<FChunkMeshData>()
{
	return FChunkMeshData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChunkMeshData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkMeshData_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//#include \"ChunkMeshData.generated.h\"\n" },
#endif
		{ "ModuleRelativePath", "ChunkMeshData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "#include \"ChunkMeshData.generated.h\"" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FChunkMeshData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChunkMeshData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChunkMeshData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThesisVoxelWorld,
		nullptr,
		&NewStructOps,
		"ChunkMeshData",
		nullptr,
		0,
		sizeof(FChunkMeshData),
		alignof(FChunkMeshData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkMeshData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChunkMeshData_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChunkMeshData()
	{
		if (!Z_Registration_Info_UScriptStruct_ChunkMeshData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChunkMeshData.InnerSingleton, Z_Construct_UScriptStruct_FChunkMeshData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChunkMeshData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Git_test11_ThesisVoxelWorld_Source_ThesisVoxelWorld_ChunkMeshData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_test11_ThesisVoxelWorld_Source_ThesisVoxelWorld_ChunkMeshData_h_Statics::ScriptStructInfo[] = {
		{ FChunkMeshData::StaticStruct, Z_Construct_UScriptStruct_FChunkMeshData_Statics::NewStructOps, TEXT("ChunkMeshData"), &Z_Registration_Info_UScriptStruct_ChunkMeshData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChunkMeshData), 2834851683U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_test11_ThesisVoxelWorld_Source_ThesisVoxelWorld_ChunkMeshData_h_1860352265(TEXT("/Script/ThesisVoxelWorld"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Git_test11_ThesisVoxelWorld_Source_ThesisVoxelWorld_ChunkMeshData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_test11_ThesisVoxelWorld_Source_ThesisVoxelWorld_ChunkMeshData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
