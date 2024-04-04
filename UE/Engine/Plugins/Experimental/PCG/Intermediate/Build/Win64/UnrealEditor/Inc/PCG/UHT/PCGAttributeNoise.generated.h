// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGAttributeNoise.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PCG_PCGAttributeNoise_generated_h
#error "PCGAttributeNoise.generated.h already included, missing '#pragma once' in PCGAttributeNoise.h"
#endif
#define PCG_PCGAttributeNoise_generated_h

#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGAttributeNoise_h_34_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGAttributeNoise_h_34_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGAttributeNoise_h_34_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGAttributeNoise_h_34_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGAttributeNoise_h_34_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGAttributeNoise_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGAttributeNoiseSettings(); \
	friend struct Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics; \
public: \
	DECLARE_CLASS(UPCGAttributeNoiseSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGAttributeNoiseSettings)


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGAttributeNoise_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGAttributeNoiseSettings(UPCGAttributeNoiseSettings&&); \
	NO_API UPCGAttributeNoiseSettings(const UPCGAttributeNoiseSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGAttributeNoiseSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGAttributeNoiseSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGAttributeNoiseSettings) \
	NO_API virtual ~UPCGAttributeNoiseSettings();


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGAttributeNoise_h_31_PROLOG
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGAttributeNoise_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGAttributeNoise_h_34_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGAttributeNoise_h_34_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGAttributeNoise_h_34_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGAttributeNoise_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGAttributeNoise_h_34_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGAttributeNoise_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGAttributeNoise_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCG_API UClass* StaticClass<class UPCGAttributeNoiseSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGAttributeNoise_h


#define FOREACH_ENUM_EPCGATTRIBUTENOISEMODE(op) \
	op(EPCGAttributeNoiseMode::Set) \
	op(EPCGAttributeNoiseMode::Minimum) \
	op(EPCGAttributeNoiseMode::Maximum) \
	op(EPCGAttributeNoiseMode::Add) \
	op(EPCGAttributeNoiseMode::Multiply) 

enum class EPCGAttributeNoiseMode : uint8;
template<> struct TIsUEnumClass<EPCGAttributeNoiseMode> { enum { Value = true }; };
template<> PCG_API UEnum* StaticEnum<EPCGAttributeNoiseMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
