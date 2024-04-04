// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGPin.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPCGExclusiveDataType : uint8;
struct FPCGPinProperties;
#ifdef PCG_PCGPin_generated_h
#error "PCGPin.generated.h already included, missing '#pragma once' in PCGPin.h"
#endif
#define PCG_PCGPin_generated_h

#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPCGPinProperties_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PCG_API UScriptStruct* StaticStruct<struct FPCGPinProperties>();

#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_59_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_59_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_59_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMakePinProperty); \
	DECLARE_FUNCTION(execBreakPinProperty);


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_59_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGBlueprintPinHelpers(); \
	friend struct Z_Construct_UClass_UPCGBlueprintPinHelpers_Statics; \
public: \
	DECLARE_CLASS(UPCGBlueprintPinHelpers, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGBlueprintPinHelpers)


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGBlueprintPinHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGBlueprintPinHelpers(UPCGBlueprintPinHelpers&&); \
	NO_API UPCGBlueprintPinHelpers(const UPCGBlueprintPinHelpers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGBlueprintPinHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGBlueprintPinHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGBlueprintPinHelpers) \
	NO_API virtual ~UPCGBlueprintPinHelpers();


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_56_PROLOG
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_59_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_59_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_59_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_59_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_59_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCG_API UClass* StaticClass<class UPCGBlueprintPinHelpers>();

#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_122_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_122_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_122_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_122_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetTooltip); \
	DECLARE_FUNCTION(execGetTooltip);


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_122_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_122_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGPin(); \
	friend struct Z_Construct_UClass_UPCGPin_Statics; \
public: \
	DECLARE_CLASS(UPCGPin, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGPin)


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_122_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGPin(UPCGPin&&); \
	NO_API UPCGPin(const UPCGPin&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGPin); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGPin); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGPin) \
	NO_API virtual ~UPCGPin();


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_119_PROLOG
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_122_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_122_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_122_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_122_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_122_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_122_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_122_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_122_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCG_API UClass* StaticClass<class UPCGPin>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h


#define FOREACH_ENUM_EPCGTYPECONVERSION(op) \
	op(EPCGTypeConversion::NoConversionRequired) \
	op(EPCGTypeConversion::CollapseToPoint) \
	op(EPCGTypeConversion::Filter) \
	op(EPCGTypeConversion::MakeConcrete) \
	op(EPCGTypeConversion::Failed) 

enum class EPCGTypeConversion : uint8;
template<> struct TIsUEnumClass<EPCGTypeConversion> { enum { Value = true }; };
template<> PCG_API UEnum* StaticEnum<EPCGTypeConversion>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
