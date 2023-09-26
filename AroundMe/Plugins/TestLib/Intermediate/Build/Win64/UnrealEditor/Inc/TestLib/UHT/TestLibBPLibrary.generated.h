// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TestLibBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTLIB_TestLibBPLibrary_generated_h
#error "TestLibBPLibrary.generated.h already included, missing '#pragma once' in TestLibBPLibrary.h"
#endif
#define TESTLIB_TestLibBPLibrary_generated_h

#define FID_AroundMe_Plugins_TestLib_Source_TestLib_Public_TestLibBPLibrary_h_28_SPARSE_DATA
#define FID_AroundMe_Plugins_TestLib_Source_TestLib_Public_TestLibBPLibrary_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTestLibSampleFunction);


#define FID_AroundMe_Plugins_TestLib_Source_TestLib_Public_TestLibBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTestLibSampleFunction);


#define FID_AroundMe_Plugins_TestLib_Source_TestLib_Public_TestLibBPLibrary_h_28_ACCESSORS
#define FID_AroundMe_Plugins_TestLib_Source_TestLib_Public_TestLibBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestLibBPLibrary(); \
	friend struct Z_Construct_UClass_UTestLibBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UTestLibBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TestLib"), NO_API) \
	DECLARE_SERIALIZER(UTestLibBPLibrary)


#define FID_AroundMe_Plugins_TestLib_Source_TestLib_Public_TestLibBPLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUTestLibBPLibrary(); \
	friend struct Z_Construct_UClass_UTestLibBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UTestLibBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TestLib"), NO_API) \
	DECLARE_SERIALIZER(UTestLibBPLibrary)


#define FID_AroundMe_Plugins_TestLib_Source_TestLib_Public_TestLibBPLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTestLibBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestLibBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestLibBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestLibBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTestLibBPLibrary(UTestLibBPLibrary&&); \
	NO_API UTestLibBPLibrary(const UTestLibBPLibrary&); \
public: \
	NO_API virtual ~UTestLibBPLibrary();


#define FID_AroundMe_Plugins_TestLib_Source_TestLib_Public_TestLibBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTestLibBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTestLibBPLibrary(UTestLibBPLibrary&&); \
	NO_API UTestLibBPLibrary(const UTestLibBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestLibBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestLibBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestLibBPLibrary) \
	NO_API virtual ~UTestLibBPLibrary();


#define FID_AroundMe_Plugins_TestLib_Source_TestLib_Public_TestLibBPLibrary_h_25_PROLOG
#define FID_AroundMe_Plugins_TestLib_Source_TestLib_Public_TestLibBPLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AroundMe_Plugins_TestLib_Source_TestLib_Public_TestLibBPLibrary_h_28_SPARSE_DATA \
	FID_AroundMe_Plugins_TestLib_Source_TestLib_Public_TestLibBPLibrary_h_28_RPC_WRAPPERS \
	FID_AroundMe_Plugins_TestLib_Source_TestLib_Public_TestLibBPLibrary_h_28_ACCESSORS \
	FID_AroundMe_Plugins_TestLib_Source_TestLib_Public_TestLibBPLibrary_h_28_INCLASS \
	FID_AroundMe_Plugins_TestLib_Source_TestLib_Public_TestLibBPLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AroundMe_Plugins_TestLib_Source_TestLib_Public_TestLibBPLibrary_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AroundMe_Plugins_TestLib_Source_TestLib_Public_TestLibBPLibrary_h_28_SPARSE_DATA \
	FID_AroundMe_Plugins_TestLib_Source_TestLib_Public_TestLibBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AroundMe_Plugins_TestLib_Source_TestLib_Public_TestLibBPLibrary_h_28_ACCESSORS \
	FID_AroundMe_Plugins_TestLib_Source_TestLib_Public_TestLibBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
	FID_AroundMe_Plugins_TestLib_Source_TestLib_Public_TestLibBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TestLibBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTLIB_API UClass* StaticClass<class UTestLibBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AroundMe_Plugins_TestLib_Source_TestLib_Public_TestLibBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
