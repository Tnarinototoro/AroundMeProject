// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HttpRequestProxyObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHttpRequestProxyObject;
struct FHttpHeader;
#ifdef HTTPBLUEPRINT_HttpRequestProxyObject_generated_h
#error "HttpRequestProxyObject.generated.h already included, missing '#pragma once' in HttpRequestProxyObject.h"
#endif
#define HTTPBLUEPRINT_HttpRequestProxyObject_generated_h

#define FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Internal_HttpRequestProxyObject_h_10_DELEGATE \
HTTPBLUEPRINT_API void FOnRequestComplete_DelegateWrapper(const FMulticastScriptDelegate& OnRequestComplete, const FString& Response, bool bSuccessful, FHttpHeader OutHeader);


#define FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Internal_HttpRequestProxyObject_h_15_SPARSE_DATA
#define FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Internal_HttpRequestProxyObject_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Internal_HttpRequestProxyObject_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Internal_HttpRequestProxyObject_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateHttpRequestProxyObject);


#define FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Internal_HttpRequestProxyObject_h_15_ACCESSORS
#define FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Internal_HttpRequestProxyObject_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHttpRequestProxyObject(); \
	friend struct Z_Construct_UClass_UHttpRequestProxyObject_Statics; \
public: \
	DECLARE_CLASS(UHttpRequestProxyObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HttpBlueprint"), HTTPBLUEPRINT_API) \
	DECLARE_SERIALIZER(UHttpRequestProxyObject)


#define FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Internal_HttpRequestProxyObject_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HTTPBLUEPRINT_API UHttpRequestProxyObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	HTTPBLUEPRINT_API UHttpRequestProxyObject(UHttpRequestProxyObject&&); \
	HTTPBLUEPRINT_API UHttpRequestProxyObject(const UHttpRequestProxyObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HTTPBLUEPRINT_API, UHttpRequestProxyObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHttpRequestProxyObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHttpRequestProxyObject) \
	HTTPBLUEPRINT_API virtual ~UHttpRequestProxyObject();


#define FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Internal_HttpRequestProxyObject_h_12_PROLOG
#define FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Internal_HttpRequestProxyObject_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Internal_HttpRequestProxyObject_h_15_SPARSE_DATA \
	FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Internal_HttpRequestProxyObject_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Internal_HttpRequestProxyObject_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Internal_HttpRequestProxyObject_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Internal_HttpRequestProxyObject_h_15_ACCESSORS \
	FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Internal_HttpRequestProxyObject_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Internal_HttpRequestProxyObject_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HTTPBLUEPRINT_API UClass* StaticClass<class UHttpRequestProxyObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Internal_HttpRequestProxyObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
