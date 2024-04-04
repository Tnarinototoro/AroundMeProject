// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimNode_RemapCurvesBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CURVEEXPRESSION_AnimNode_RemapCurvesBase_generated_h
#error "AnimNode_RemapCurvesBase.generated.h already included, missing '#pragma once' in AnimNode_RemapCurvesBase.h"
#endif
#define CURVEEXPRESSION_AnimNode_RemapCurvesBase_generated_h

#define FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Runtime_Public_AnimNode_RemapCurvesBase_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_Base Super;


template<> CURVEEXPRESSION_API UScriptStruct* StaticStruct<struct FAnimNode_RemapCurvesBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Runtime_Public_AnimNode_RemapCurvesBase_h


#define FOREACH_ENUM_EREMAPCURVESEXPRESSIONSOURCE(op) \
	op(ERemapCurvesExpressionSource::ExpressionList) \
	op(ERemapCurvesExpressionSource::DataAsset) \
	op(ERemapCurvesExpressionSource::ExpressionMap) 

enum class ERemapCurvesExpressionSource : uint8;
template<> struct TIsUEnumClass<ERemapCurvesExpressionSource> { enum { Value = true }; };
template<> CURVEEXPRESSION_API UEnum* StaticEnum<ERemapCurvesExpressionSource>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
