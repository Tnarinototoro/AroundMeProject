// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "XRLoadingScreenFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture;
#ifdef XRBASE_XRLoadingScreenFunctionLibrary_generated_h
#error "XRLoadingScreenFunctionLibrary.generated.h already included, missing '#pragma once' in XRLoadingScreenFunctionLibrary.h"
#endif
#define XRBASE_XRLoadingScreenFunctionLibrary_generated_h

#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRLoadingScreenFunctionLibrary_h_20_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRLoadingScreenFunctionLibrary_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRLoadingScreenFunctionLibrary_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRLoadingScreenFunctionLibrary_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHideLoadingScreen); \
	DECLARE_FUNCTION(execShowLoadingScreen); \
	DECLARE_FUNCTION(execAddLoadingScreenSplash); \
	DECLARE_FUNCTION(execClearLoadingScreenSplashes); \
	DECLARE_FUNCTION(execSetLoadingScreen);


#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRLoadingScreenFunctionLibrary_h_20_ACCESSORS
#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRLoadingScreenFunctionLibrary_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUXRLoadingScreenFunctionLibrary(); \
	friend struct Z_Construct_UClass_UXRLoadingScreenFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UXRLoadingScreenFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/XRBase"), NO_API) \
	DECLARE_SERIALIZER(UXRLoadingScreenFunctionLibrary)


#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRLoadingScreenFunctionLibrary_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXRLoadingScreenFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXRLoadingScreenFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXRLoadingScreenFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXRLoadingScreenFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UXRLoadingScreenFunctionLibrary(UXRLoadingScreenFunctionLibrary&&); \
	NO_API UXRLoadingScreenFunctionLibrary(const UXRLoadingScreenFunctionLibrary&); \
public: \
	NO_API virtual ~UXRLoadingScreenFunctionLibrary();


#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRLoadingScreenFunctionLibrary_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRLoadingScreenFunctionLibrary_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRLoadingScreenFunctionLibrary_h_20_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRLoadingScreenFunctionLibrary_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRLoadingScreenFunctionLibrary_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRLoadingScreenFunctionLibrary_h_20_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRLoadingScreenFunctionLibrary_h_20_ACCESSORS \
	FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRLoadingScreenFunctionLibrary_h_20_INCLASS \
	FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRLoadingScreenFunctionLibrary_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> XRBASE_API UClass* StaticClass<class UXRLoadingScreenFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRLoadingScreenFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
