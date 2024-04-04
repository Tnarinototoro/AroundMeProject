// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NNETypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NNE_NNETypes_generated_h
#error "NNETypes.generated.h already included, missing '#pragma once' in NNETypes.h"
#endif
#define NNE_NNETypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_NNE_Source_NNE_Public_NNETypes_h


#define FOREACH_ENUM_ENNETENSORDATATYPE(op) \
	op(ENNETensorDataType::None) \
	op(ENNETensorDataType::Char) \
	op(ENNETensorDataType::Boolean) \
	op(ENNETensorDataType::Half) \
	op(ENNETensorDataType::Float) \
	op(ENNETensorDataType::Double) \
	op(ENNETensorDataType::Int8) \
	op(ENNETensorDataType::Int16) \
	op(ENNETensorDataType::Int32) \
	op(ENNETensorDataType::Int64) \
	op(ENNETensorDataType::UInt8) \
	op(ENNETensorDataType::UInt16) \
	op(ENNETensorDataType::UInt32) \
	op(ENNETensorDataType::UInt64) \
	op(ENNETensorDataType::Complex64) \
	op(ENNETensorDataType::Complex128) \
	op(ENNETensorDataType::BFloat16) 

enum class ENNETensorDataType : uint8;
template<> struct TIsUEnumClass<ENNETensorDataType> { enum { Value = true }; };
template<> NNE_API UEnum* StaticEnum<ENNETensorDataType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
