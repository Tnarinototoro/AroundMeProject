// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshPaintModeHelpers.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MESHPAINTEDITORMODE_MeshPaintModeHelpers_generated_h
#error "MeshPaintModeHelpers.generated.h already included, missing '#pragma once' in MeshPaintModeHelpers.h"
#endif
#define MESHPAINTEDITORMODE_MeshPaintModeHelpers_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MeshPainting_Source_MeshPaintEditorMode_Public_MeshPaintModeHelpers_h


#define FOREACH_ENUM_EMESHPAINTACTIVEMODE(op) \
	op(EMeshPaintActiveMode::Color) \
	op(EMeshPaintActiveMode::Weights) \
	op(EMeshPaintActiveMode::Texture) 

enum class EMeshPaintActiveMode : uint8;
template<> struct TIsUEnumClass<EMeshPaintActiveMode> { enum { Value = true }; };
template<> MESHPAINTEDITORMODE_API UEnum* StaticEnum<EMeshPaintActiveMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
