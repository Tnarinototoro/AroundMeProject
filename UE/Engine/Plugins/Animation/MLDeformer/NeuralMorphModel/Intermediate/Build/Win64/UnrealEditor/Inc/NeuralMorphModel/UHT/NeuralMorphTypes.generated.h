// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NeuralMorphTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NEURALMORPHMODEL_NeuralMorphTypes_generated_h
#error "NeuralMorphTypes.generated.h already included, missing '#pragma once' in NeuralMorphTypes.h"
#endif
#define NEURALMORPHMODEL_NeuralMorphTypes_generated_h

#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphTypes_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NEURALMORPHMODEL_API UScriptStruct* StaticStruct<struct FNeuralMorphBoneGroup>();

#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphTypes_h_82_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NEURALMORPHMODEL_API UScriptStruct* StaticStruct<struct FNeuralMorphCurveGroup>();

#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphTypes_h_104_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNeuralMorphMaskInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NEURALMORPHMODEL_API UScriptStruct* StaticStruct<struct FNeuralMorphMaskInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphTypes_h


#define FOREACH_ENUM_ENEURALMORPHMODE(op) \
	op(ENeuralMorphMode::Local) \
	op(ENeuralMorphMode::Global) 

enum class ENeuralMorphMode : uint8;
template<> struct TIsUEnumClass<ENeuralMorphMode> { enum { Value = true }; };
template<> NEURALMORPHMODEL_API UEnum* StaticEnum<ENeuralMorphMode>();

#define FOREACH_ENUM_ENEURALMORPHMASKVIZMODE(op) \
	op(ENeuralMorphMaskVizMode::Off) \
	op(ENeuralMorphMaskVizMode::WhenInFocus) \
	op(ENeuralMorphMaskVizMode::Always) 

enum class ENeuralMorphMaskVizMode : uint8;
template<> struct TIsUEnumClass<ENeuralMorphMaskVizMode> { enum { Value = true }; };
template<> NEURALMORPHMODEL_API UEnum* StaticEnum<ENeuralMorphMaskVizMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
