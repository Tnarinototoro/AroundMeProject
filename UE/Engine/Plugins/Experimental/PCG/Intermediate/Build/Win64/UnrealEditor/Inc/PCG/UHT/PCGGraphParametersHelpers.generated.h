// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Helpers/PCGGraphParametersHelpers.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEnum;
class UObject;
class UPCGGraphInstance;
#ifdef PCG_PCGGraphParametersHelpers_generated_h
#error "PCGGraphParametersHelpers.generated.h already included, missing '#pragma once' in PCGGraphParametersHelpers.h"
#endif
#define PCG_PCGGraphParametersHelpers_generated_h

#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Helpers_PCGGraphParametersHelpers_h_17_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Helpers_PCGGraphParametersHelpers_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Helpers_PCGGraphParametersHelpers_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Helpers_PCGGraphParametersHelpers_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetTransformParameter); \
	DECLARE_FUNCTION(execSetRotatorParameter); \
	DECLARE_FUNCTION(execSetVectorParameter); \
	DECLARE_FUNCTION(execSetSoftClassParameter); \
	DECLARE_FUNCTION(execSetSoftObjectParameter); \
	DECLARE_FUNCTION(execSetEnumParameter); \
	DECLARE_FUNCTION(execSetStringParameter); \
	DECLARE_FUNCTION(execSetNameParameter); \
	DECLARE_FUNCTION(execSetInt64Parameter); \
	DECLARE_FUNCTION(execSetInt32Parameter); \
	DECLARE_FUNCTION(execSetByteParameter); \
	DECLARE_FUNCTION(execSetBoolParameter); \
	DECLARE_FUNCTION(execSetDoubleParameter); \
	DECLARE_FUNCTION(execSetFloatParameter); \
	DECLARE_FUNCTION(execGetTransformParameter); \
	DECLARE_FUNCTION(execGetRotatorParameter); \
	DECLARE_FUNCTION(execGetVectorParameter); \
	DECLARE_FUNCTION(execGetSoftClassParameter); \
	DECLARE_FUNCTION(execGetSoftObjectParameter); \
	DECLARE_FUNCTION(execGetStringParameter); \
	DECLARE_FUNCTION(execGetNameParameter); \
	DECLARE_FUNCTION(execGetInt64Parameter); \
	DECLARE_FUNCTION(execGetInt32Parameter); \
	DECLARE_FUNCTION(execGetByteParameter); \
	DECLARE_FUNCTION(execGetBoolParameter); \
	DECLARE_FUNCTION(execGetDoubleParameter); \
	DECLARE_FUNCTION(execGetFloatParameter); \
	DECLARE_FUNCTION(execIsOverridden);


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Helpers_PCGGraphParametersHelpers_h_17_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Helpers_PCGGraphParametersHelpers_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGGraphParametersHelpers(); \
	friend struct Z_Construct_UClass_UPCGGraphParametersHelpers_Statics; \
public: \
	DECLARE_CLASS(UPCGGraphParametersHelpers, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGGraphParametersHelpers)


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Helpers_PCGGraphParametersHelpers_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGGraphParametersHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGGraphParametersHelpers(UPCGGraphParametersHelpers&&); \
	NO_API UPCGGraphParametersHelpers(const UPCGGraphParametersHelpers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGGraphParametersHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGGraphParametersHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGGraphParametersHelpers) \
	NO_API virtual ~UPCGGraphParametersHelpers();


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Helpers_PCGGraphParametersHelpers_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Helpers_PCGGraphParametersHelpers_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Helpers_PCGGraphParametersHelpers_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Helpers_PCGGraphParametersHelpers_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Helpers_PCGGraphParametersHelpers_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Helpers_PCGGraphParametersHelpers_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Helpers_PCGGraphParametersHelpers_h_17_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Helpers_PCGGraphParametersHelpers_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Helpers_PCGGraphParametersHelpers_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCG_API UClass* StaticClass<class UPCGGraphParametersHelpers>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Helpers_PCGGraphParametersHelpers_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
