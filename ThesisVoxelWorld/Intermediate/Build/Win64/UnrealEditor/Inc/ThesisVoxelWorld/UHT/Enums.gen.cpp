// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThesisVoxelWorld/Enums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnums() {}
// Cross Module References
	THESISVOXELWORLD_API UEnum* Z_Construct_UEnum_ThesisVoxelWorld_EBlock();
	THESISVOXELWORLD_API UEnum* Z_Construct_UEnum_ThesisVoxelWorld_EDirection();
	UPackage* Z_Construct_UPackage__Script_ThesisVoxelWorld();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDirection;
	static UEnum* EDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ThesisVoxelWorld_EDirection, (UObject*)Z_Construct_UPackage__Script_ThesisVoxelWorld(), TEXT("EDirection"));
		}
		return Z_Registration_Info_UEnum_EDirection.OuterSingleton;
	}
	template<> THESISVOXELWORLD_API UEnum* StaticEnum<EDirection>()
	{
		return EDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_ThesisVoxelWorld_EDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ThesisVoxelWorld_EDirection_Statics::Enumerators[] = {
		{ "EDirection::Forward", (int64)EDirection::Forward },
		{ "EDirection::Right", (int64)EDirection::Right },
		{ "EDirection::Back", (int64)EDirection::Back },
		{ "EDirection::Left", (int64)EDirection::Left },
		{ "EDirection::Up", (int64)EDirection::Up },
		{ "EDirection::Down", (int64)EDirection::Down },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ThesisVoxelWorld_EDirection_Statics::Enum_MetaDataParams[] = {
		{ "Back.Name", "EDirection::Back" },
		{ "BlueprintType", "true" },
		{ "Down.Name", "EDirection::Down" },
		{ "Forward.Name", "EDirection::Forward" },
		{ "Left.Name", "EDirection::Left" },
		{ "ModuleRelativePath", "Enums.h" },
		{ "Right.Name", "EDirection::Right" },
		{ "Up.Name", "EDirection::Up" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ThesisVoxelWorld_EDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ThesisVoxelWorld,
		nullptr,
		"EDirection",
		"EDirection",
		Z_Construct_UEnum_ThesisVoxelWorld_EDirection_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ThesisVoxelWorld_EDirection_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ThesisVoxelWorld_EDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ThesisVoxelWorld_EDirection_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ThesisVoxelWorld_EDirection()
	{
		if (!Z_Registration_Info_UEnum_EDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDirection.InnerSingleton, Z_Construct_UEnum_ThesisVoxelWorld_EDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDirection.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlock;
	static UEnum* EBlock_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBlock.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBlock.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ThesisVoxelWorld_EBlock, (UObject*)Z_Construct_UPackage__Script_ThesisVoxelWorld(), TEXT("EBlock"));
		}
		return Z_Registration_Info_UEnum_EBlock.OuterSingleton;
	}
	template<> THESISVOXELWORLD_API UEnum* StaticEnum<EBlock>()
	{
		return EBlock_StaticEnum();
	}
	struct Z_Construct_UEnum_ThesisVoxelWorld_EBlock_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ThesisVoxelWorld_EBlock_Statics::Enumerators[] = {
		{ "EBlock::Null", (int64)EBlock::Null },
		{ "EBlock::Air", (int64)EBlock::Air },
		{ "EBlock::Stone", (int64)EBlock::Stone },
		{ "EBlock::Dirt", (int64)EBlock::Dirt },
		{ "EBlock::Grass", (int64)EBlock::Grass },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ThesisVoxelWorld_EBlock_Statics::Enum_MetaDataParams[] = {
		{ "Air.Name", "EBlock::Air" },
		{ "BlueprintType", "true" },
		{ "Dirt.Name", "EBlock::Dirt" },
		{ "Grass.Name", "EBlock::Grass" },
		{ "ModuleRelativePath", "Enums.h" },
		{ "Null.Name", "EBlock::Null" },
		{ "Stone.Name", "EBlock::Stone" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ThesisVoxelWorld_EBlock_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ThesisVoxelWorld,
		nullptr,
		"EBlock",
		"EBlock",
		Z_Construct_UEnum_ThesisVoxelWorld_EBlock_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ThesisVoxelWorld_EBlock_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ThesisVoxelWorld_EBlock_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ThesisVoxelWorld_EBlock_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ThesisVoxelWorld_EBlock()
	{
		if (!Z_Registration_Info_UEnum_EBlock.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlock.InnerSingleton, Z_Construct_UEnum_ThesisVoxelWorld_EBlock_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBlock.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Git_test11_ThesisVoxelWorld_Source_ThesisVoxelWorld_Enums_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_test11_ThesisVoxelWorld_Source_ThesisVoxelWorld_Enums_h_Statics::EnumInfo[] = {
		{ EDirection_StaticEnum, TEXT("EDirection"), &Z_Registration_Info_UEnum_EDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3887231032U) },
		{ EBlock_StaticEnum, TEXT("EBlock"), &Z_Registration_Info_UEnum_EBlock, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1053329992U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_test11_ThesisVoxelWorld_Source_ThesisVoxelWorld_Enums_h_846332706(TEXT("/Script/ThesisVoxelWorld"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Git_test11_ThesisVoxelWorld_Source_ThesisVoxelWorld_Enums_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_test11_ThesisVoxelWorld_Source_ThesisVoxelWorld_Enums_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
