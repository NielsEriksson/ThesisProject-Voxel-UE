// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThesisVoxelWorld/ChunkBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChunkBase() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	THESISVOXELWORLD_API UClass* Z_Construct_UClass_AChunkBase();
	THESISVOXELWORLD_API UClass* Z_Construct_UClass_AChunkBase_NoRegister();
	THESISVOXELWORLD_API UEnum* Z_Construct_UEnum_ThesisVoxelWorld_EBlock();
	UPackage* Z_Construct_UPackage__Script_ThesisVoxelWorld();
// End Cross Module References
	DEFINE_FUNCTION(AChunkBase::execModifyVoxel)
	{
		P_GET_STRUCT(FIntVector,Z_Param_Position);
		P_GET_ENUM(EBlock,Z_Param_Block);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ModifyVoxel(Z_Param_Position,EBlock(Z_Param_Block));
		P_NATIVE_END;
	}
	void AChunkBase::StaticRegisterNativesAChunkBase()
	{
		UClass* Class = AChunkBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ModifyVoxel", &AChunkBase::execModifyVoxel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AChunkBase_ModifyVoxel_Statics
	{
		struct ChunkBase_eventModifyVoxel_Parms
		{
			FIntVector Position;
			EBlock Block;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Block_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Block_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Block;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChunkBase_ModifyVoxel_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AChunkBase_ModifyVoxel_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkBase_eventModifyVoxel_Parms, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkBase_ModifyVoxel_Statics::NewProp_Position_MetaData), Z_Construct_UFunction_AChunkBase_ModifyVoxel_Statics::NewProp_Position_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AChunkBase_ModifyVoxel_Statics::NewProp_Block_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChunkBase_ModifyVoxel_Statics::NewProp_Block_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AChunkBase_ModifyVoxel_Statics::NewProp_Block = { "Block", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkBase_eventModifyVoxel_Parms, Block), Z_Construct_UEnum_ThesisVoxelWorld_EBlock, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkBase_ModifyVoxel_Statics::NewProp_Block_MetaData), Z_Construct_UFunction_AChunkBase_ModifyVoxel_Statics::NewProp_Block_MetaData) }; // 1053329992
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChunkBase_ModifyVoxel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkBase_ModifyVoxel_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkBase_ModifyVoxel_Statics::NewProp_Block_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkBase_ModifyVoxel_Statics::NewProp_Block,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChunkBase_ModifyVoxel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chunk" },
		{ "ModuleRelativePath", "ChunkBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChunkBase_ModifyVoxel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChunkBase, nullptr, "ModifyVoxel", nullptr, nullptr, Z_Construct_UFunction_AChunkBase_ModifyVoxel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkBase_ModifyVoxel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChunkBase_ModifyVoxel_Statics::ChunkBase_eventModifyVoxel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkBase_ModifyVoxel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChunkBase_ModifyVoxel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkBase_ModifyVoxel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AChunkBase_ModifyVoxel_Statics::ChunkBase_eventModifyVoxel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AChunkBase_ModifyVoxel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChunkBase_ModifyVoxel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChunkBase);
	UClass* Z_Construct_UClass_AChunkBase_NoRegister()
	{
		return AChunkBase::StaticClass();
	}
	struct Z_Construct_UClass_AChunkBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Size;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChunkBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ThesisVoxelWorld,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChunkBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AChunkBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AChunkBase_ModifyVoxel, "ModifyVoxel" }, // 647769066
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChunkBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunkBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChunkBase.h" },
		{ "ModuleRelativePath", "ChunkBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunkBase_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Chunk" },
		{ "ModuleRelativePath", "ChunkBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AChunkBase_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkBase, Size), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChunkBase_Statics::NewProp_Size_MetaData), Z_Construct_UClass_AChunkBase_Statics::NewProp_Size_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChunkBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkBase_Statics::NewProp_Size,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChunkBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChunkBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AChunkBase_Statics::ClassParams = {
		&AChunkBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AChunkBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AChunkBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChunkBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AChunkBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChunkBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AChunkBase()
	{
		if (!Z_Registration_Info_UClass_AChunkBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChunkBase.OuterSingleton, Z_Construct_UClass_AChunkBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AChunkBase.OuterSingleton;
	}
	template<> THESISVOXELWORLD_API UClass* StaticClass<AChunkBase>()
	{
		return AChunkBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChunkBase);
	AChunkBase::~AChunkBase() {}
	struct Z_CompiledInDeferFile_FID_Git_test11_ThesisVoxelWorld_Source_ThesisVoxelWorld_ChunkBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_test11_ThesisVoxelWorld_Source_ThesisVoxelWorld_ChunkBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AChunkBase, AChunkBase::StaticClass, TEXT("AChunkBase"), &Z_Registration_Info_UClass_AChunkBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChunkBase), 1337068623U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_test11_ThesisVoxelWorld_Source_ThesisVoxelWorld_ChunkBase_h_2963718116(TEXT("/Script/ThesisVoxelWorld"),
		Z_CompiledInDeferFile_FID_Git_test11_ThesisVoxelWorld_Source_ThesisVoxelWorld_ChunkBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_test11_ThesisVoxelWorld_Source_ThesisVoxelWorld_ChunkBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
