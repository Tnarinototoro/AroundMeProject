// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/MovieGraphCommon.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIERENDERPIPELINECORE_MovieGraphCommon_generated_h
#error "MovieGraphCommon.generated.h already included, missing '#pragma once' in MovieGraphCommon.h"
#endif
#define MOVIERENDERPIPELINECORE_MovieGraphCommon_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphCommon_h


#define FOREACH_ENUM_EMOVIEGRAPHVALUETYPE(op) \
	op(EMovieGraphValueType::None) \
	op(EMovieGraphValueType::Bool) \
	op(EMovieGraphValueType::Byte) \
	op(EMovieGraphValueType::Int32) \
	op(EMovieGraphValueType::Int64) \
	op(EMovieGraphValueType::Float) \
	op(EMovieGraphValueType::Double) \
	op(EMovieGraphValueType::Name) \
	op(EMovieGraphValueType::String) \
	op(EMovieGraphValueType::Text) \
	op(EMovieGraphValueType::Enum) \
	op(EMovieGraphValueType::Struct) \
	op(EMovieGraphValueType::Object) \
	op(EMovieGraphValueType::SoftObject) \
	op(EMovieGraphValueType::Class) \
	op(EMovieGraphValueType::SoftClass) \
	op(EMovieGraphValueType::Count) 

enum class EMovieGraphValueType : uint8;
template<> struct TIsUEnumClass<EMovieGraphValueType> { enum { Value = true }; };
template<> MOVIERENDERPIPELINECORE_API UEnum* StaticEnum<EMovieGraphValueType>();

#define FOREACH_ENUM_EMOVIEGRAPHCONTAINERTYPE(op) \
	op(EMovieGraphContainerType::None) \
	op(EMovieGraphContainerType::Array) \
	op(EMovieGraphContainerType::Count) 

enum class EMovieGraphContainerType : uint8;
template<> struct TIsUEnumClass<EMovieGraphContainerType> { enum { Value = true }; };
template<> MOVIERENDERPIPELINECORE_API UEnum* StaticEnum<EMovieGraphContainerType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
