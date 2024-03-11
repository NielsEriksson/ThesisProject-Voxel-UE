// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enums.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THESISVOXELWORLD_Enums_generated_h
#error "Enums.generated.h already included, missing '#pragma once' in Enums.h"
#endif
#define THESISVOXELWORLD_Enums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_test11_ThesisVoxelWorld_Source_ThesisVoxelWorld_Enums_h


#define FOREACH_ENUM_EDIRECTION(op) \
	op(EDirection::Forward) \
	op(EDirection::Right) \
	op(EDirection::Back) \
	op(EDirection::Left) \
	op(EDirection::Up) \
	op(EDirection::Down) 

enum class EDirection : uint8;
template<> struct TIsUEnumClass<EDirection> { enum { Value = true }; };
template<> THESISVOXELWORLD_API UEnum* StaticEnum<EDirection>();

#define FOREACH_ENUM_EBLOCK(op) \
	op(EBlock::Null) \
	op(EBlock::Air) \
	op(EBlock::Stone) \
	op(EBlock::Dirt) \
	op(EBlock::Grass) 

enum class EBlock : uint8;
template<> struct TIsUEnumClass<EBlock> { enum { Value = true }; };
template<> THESISVOXELWORLD_API UEnum* StaticEnum<EBlock>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
