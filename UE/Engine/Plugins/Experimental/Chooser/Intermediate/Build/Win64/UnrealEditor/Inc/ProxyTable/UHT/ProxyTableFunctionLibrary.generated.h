// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProxyTableFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UProxyAsset;
class UProxyTable;
struct FInstancedStruct;
#ifdef PROXYTABLE_ProxyTableFunctionLibrary_generated_h
#error "ProxyTableFunctionLibrary.generated.h already included, missing '#pragma once' in ProxyTableFunctionLibrary.h"
#endif
#define PROXYTABLE_ProxyTableFunctionLibrary_generated_h

#define FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_ProxyTableFunctionLibrary_h_16_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_ProxyTableFunctionLibrary_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_ProxyTableFunctionLibrary_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_ProxyTableFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMakeLookupProxyWithOverrideTable); \
	DECLARE_FUNCTION(execMakeLookupProxy); \
	DECLARE_FUNCTION(execEvaluateProxyAsset); \
	DECLARE_FUNCTION(execEvaluateProxyTable);


#define FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_ProxyTableFunctionLibrary_h_16_ACCESSORS
#define FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_ProxyTableFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProxyTableFunctionLibrary(); \
	friend struct Z_Construct_UClass_UProxyTableFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UProxyTableFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProxyTable"), NO_API) \
	DECLARE_SERIALIZER(UProxyTableFunctionLibrary)


#define FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_ProxyTableFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProxyTableFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProxyTableFunctionLibrary(UProxyTableFunctionLibrary&&); \
	NO_API UProxyTableFunctionLibrary(const UProxyTableFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProxyTableFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProxyTableFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProxyTableFunctionLibrary) \
	NO_API virtual ~UProxyTableFunctionLibrary();


#define FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_ProxyTableFunctionLibrary_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_ProxyTableFunctionLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_ProxyTableFunctionLibrary_h_16_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_ProxyTableFunctionLibrary_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_ProxyTableFunctionLibrary_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_ProxyTableFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_ProxyTableFunctionLibrary_h_16_ACCESSORS \
	FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_ProxyTableFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_ProxyTableFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROXYTABLE_API UClass* StaticClass<class UProxyTableFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_ProxyTableFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
