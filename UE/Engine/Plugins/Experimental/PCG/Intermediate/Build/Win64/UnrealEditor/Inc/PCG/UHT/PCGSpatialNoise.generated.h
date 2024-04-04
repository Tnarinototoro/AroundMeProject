// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGSpatialNoise.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PCG_PCGSpatialNoise_generated_h
#error "PCGSpatialNoise.generated.h already included, missing '#pragma once' in PCGSpatialNoise.h"
#endif
#define PCG_PCGSpatialNoise_generated_h

#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGSpatialNoise_h_54_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGSpatialNoise_h_54_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGSpatialNoise_h_54_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGSpatialNoise_h_54_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGSpatialNoise_h_54_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGSpatialNoise_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSpatialNoiseSettings(); \
	friend struct Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics; \
public: \
	DECLARE_CLASS(UPCGSpatialNoiseSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGSpatialNoiseSettings)


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGSpatialNoise_h_54_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGSpatialNoiseSettings(UPCGSpatialNoiseSettings&&); \
	NO_API UPCGSpatialNoiseSettings(const UPCGSpatialNoiseSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGSpatialNoiseSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSpatialNoiseSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGSpatialNoiseSettings) \
	NO_API virtual ~UPCGSpatialNoiseSettings();


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGSpatialNoise_h_51_PROLOG
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGSpatialNoise_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGSpatialNoise_h_54_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGSpatialNoise_h_54_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGSpatialNoise_h_54_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGSpatialNoise_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGSpatialNoise_h_54_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGSpatialNoise_h_54_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGSpatialNoise_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCG_API UClass* StaticClass<class UPCGSpatialNoiseSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGSpatialNoise_h


#define FOREACH_ENUM_PCGSPATIALNOISEMODE(op) \
	op(PCGSpatialNoiseMode::Perlin2D) \
	op(PCGSpatialNoiseMode::Caustic2D) \
	op(PCGSpatialNoiseMode::Voronoi2D) \
	op(PCGSpatialNoiseMode::FractionalBrownian2D) \
	op(PCGSpatialNoiseMode::EdgeMask2D) 

enum class PCGSpatialNoiseMode;
template<> struct TIsUEnumClass<PCGSpatialNoiseMode> { enum { Value = true }; };
template<> PCG_API UEnum* StaticEnum<PCGSpatialNoiseMode>();

#define FOREACH_ENUM_PCGSPATIALNOISEMASK2DMODE(op) \
	op(PCGSpatialNoiseMask2DMode::Perlin) \
	op(PCGSpatialNoiseMask2DMode::Caustic) \
	op(PCGSpatialNoiseMask2DMode::FractionalBrownian) 

enum class PCGSpatialNoiseMask2DMode;
template<> struct TIsUEnumClass<PCGSpatialNoiseMask2DMode> { enum { Value = true }; };
template<> PCG_API UEnum* StaticEnum<PCGSpatialNoiseMask2DMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
