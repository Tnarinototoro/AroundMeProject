// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuR/System.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MUTABLERUNTIME_System_generated_h
#error "System.generated.h already included, missing '#pragma once' in System.h"
#endif
#define MUTABLERUNTIME_System_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mutable_Source_MutableRuntime_Public_MuR_System_h


#define FOREACH_ENUM_ETEXTURECOMPRESSIONSTRATEGY(op) \
	op(ETextureCompressionStrategy::None) \
	op(ETextureCompressionStrategy::DontCompressRuntime) \
	op(ETextureCompressionStrategy::NeverCompress) 

enum class ETextureCompressionStrategy : uint8;
template<> struct TIsUEnumClass<ETextureCompressionStrategy> { enum { Value = true }; };
template<> MUTABLERUNTIME_API UEnum* StaticEnum<ETextureCompressionStrategy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
