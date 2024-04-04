// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGCommon.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PCG_PCGCommon_generated_h
#error "PCGCommon.generated.h already included, missing '#pragma once' in PCGCommon.h"
#endif
#define PCG_PCGCommon_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGCommon_h


#define FOREACH_ENUM_EPCGCHANGETYPE(op) \
	op(EPCGChangeType::None) \
	op(EPCGChangeType::Cosmetic) \
	op(EPCGChangeType::Settings) \
	op(EPCGChangeType::Input) \
	op(EPCGChangeType::Edge) \
	op(EPCGChangeType::Node) \
	op(EPCGChangeType::Structural) 

enum class EPCGChangeType : uint8;
template<> struct TIsUEnumClass<EPCGChangeType> { enum { Value = true }; };
template<> PCG_API UEnum* StaticEnum<EPCGChangeType>();

#define FOREACH_ENUM_EPCGDATATYPE(op) \
	op(EPCGDataType::None) \
	op(EPCGDataType::Point) \
	op(EPCGDataType::Spline) \
	op(EPCGDataType::LandscapeSpline) \
	op(EPCGDataType::PolyLine) \
	op(EPCGDataType::Landscape) \
	op(EPCGDataType::Texture) \
	op(EPCGDataType::RenderTarget) \
	op(EPCGDataType::BaseTexture) \
	op(EPCGDataType::Surface) \
	op(EPCGDataType::Volume) \
	op(EPCGDataType::Primitive) \
	op(EPCGDataType::Concrete) \
	op(EPCGDataType::Composite) \
	op(EPCGDataType::Spatial) \
	op(EPCGDataType::Param) \
	op(EPCGDataType::Settings) \
	op(EPCGDataType::Other) \
	op(EPCGDataType::Any) 

enum class EPCGDataType : uint32;
template<> struct TIsUEnumClass<EPCGDataType> { enum { Value = true }; };
template<> PCG_API UEnum* StaticEnum<EPCGDataType>();

#define FOREACH_ENUM_EPCGEXCLUSIVEDATATYPE(op) \
	op(EPCGExclusiveDataType::None) \
	op(EPCGExclusiveDataType::Point) \
	op(EPCGExclusiveDataType::Spline) \
	op(EPCGExclusiveDataType::LandscapeSpline) \
	op(EPCGExclusiveDataType::PolyLine) \
	op(EPCGExclusiveDataType::Landscape) \
	op(EPCGExclusiveDataType::Texture) \
	op(EPCGExclusiveDataType::RenderTarget) \
	op(EPCGExclusiveDataType::BaseTexture) \
	op(EPCGExclusiveDataType::Surface) \
	op(EPCGExclusiveDataType::Volume) \
	op(EPCGExclusiveDataType::Primitive) \
	op(EPCGExclusiveDataType::Concrete) \
	op(EPCGExclusiveDataType::Composite) \
	op(EPCGExclusiveDataType::Spatial) \
	op(EPCGExclusiveDataType::Param) \
	op(EPCGExclusiveDataType::Settings) \
	op(EPCGExclusiveDataType::Other) \
	op(EPCGExclusiveDataType::Any) 

enum class EPCGExclusiveDataType : uint8;
template<> struct TIsUEnumClass<EPCGExclusiveDataType> { enum { Value = true }; };
template<> PCG_API UEnum* StaticEnum<EPCGExclusiveDataType>();

#define FOREACH_ENUM_EPCGHIGENGRID(op) \
	op(EPCGHiGenGrid::Uninitialized) \
	op(EPCGHiGenGrid::Grid32) \
	op(EPCGHiGenGrid::Grid64) \
	op(EPCGHiGenGrid::Grid128) \
	op(EPCGHiGenGrid::Grid256) \
	op(EPCGHiGenGrid::Grid512) \
	op(EPCGHiGenGrid::Grid1024) \
	op(EPCGHiGenGrid::Grid2048) \
	op(EPCGHiGenGrid::GridMin) \
	op(EPCGHiGenGrid::GridMax) \
	op(EPCGHiGenGrid::Unbounded) \
	op(EPCGHiGenGrid::GenerationDefault) 

enum class EPCGHiGenGrid : uint32;
template<> struct TIsUEnumClass<EPCGHiGenGrid> { enum { Value = true }; };
template<> PCG_API UEnum* StaticEnum<EPCGHiGenGrid>();

#define FOREACH_ENUM_EPCGATTACHOPTIONS(op) \
	op(EPCGAttachOptions::NotAttached) \
	op(EPCGAttachOptions::Attached) \
	op(EPCGAttachOptions::InFolder) 

enum class EPCGAttachOptions : uint32;
template<> struct TIsUEnumClass<EPCGAttachOptions> { enum { Value = true }; };
template<> PCG_API UEnum* StaticEnum<EPCGAttachOptions>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
