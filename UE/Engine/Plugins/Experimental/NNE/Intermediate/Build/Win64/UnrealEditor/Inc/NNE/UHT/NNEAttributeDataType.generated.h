// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NNEAttributeDataType.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NNE_NNEAttributeDataType_generated_h
#error "NNEAttributeDataType.generated.h already included, missing '#pragma once' in NNEAttributeDataType.h"
#endif
#define NNE_NNEAttributeDataType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_NNE_Source_NNE_Internal_NNEAttributeDataType_h


#define FOREACH_ENUM_ENNEATTRIBUTEDATATYPE(op) \
	op(ENNEAttributeDataType::None) \
	op(ENNEAttributeDataType::Float) \
	op(ENNEAttributeDataType::FloatArray) \
	op(ENNEAttributeDataType::Int32) \
	op(ENNEAttributeDataType::Int32Array) \
	op(ENNEAttributeDataType::String) \
	op(ENNEAttributeDataType::StringArray) 

enum class ENNEAttributeDataType : uint8;
template<> struct TIsUEnumClass<ENNEAttributeDataType> { enum { Value = true }; };
template<> NNE_API UEnum* StaticEnum<ENNEAttributeDataType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
