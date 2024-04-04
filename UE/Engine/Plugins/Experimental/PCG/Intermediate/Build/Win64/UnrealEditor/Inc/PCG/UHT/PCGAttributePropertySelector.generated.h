// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Metadata/PCGAttributePropertySelector.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPCGData;
enum class EPCGAttributePropertySelection : int32;
enum class EPCGExtraProperties : uint8;
enum class EPCGPointProperties : uint8;
struct FPCGAttributePropertyInputSelector;
struct FPCGAttributePropertyOutputSelector;
struct FPCGAttributePropertySelector;
#ifdef PCG_PCGAttributePropertySelector_generated_h
#error "PCGAttributePropertySelector.generated.h already included, missing '#pragma once' in PCGAttributePropertySelector.h"
#endif
#define PCG_PCGAttributePropertySelector_generated_h

#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PCG_API UScriptStruct* StaticStruct<struct FPCGAttributePropertySelector>();

#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_104_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FPCGAttributePropertySelector Super;


template<> PCG_API UScriptStruct* StaticStruct<struct FPCGAttributePropertyInputSelector>();

#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_122_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPCGAttributePropertyOutputSelector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FPCGAttributePropertySelector Super;


template<> PCG_API UScriptStruct* StaticStruct<struct FPCGAttributePropertyOutputSelector>();

#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_137_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPCGAttributePropertyOutputNoSourceSelector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FPCGAttributePropertySelector Super;


template<> PCG_API UScriptStruct* StaticStruct<struct FPCGAttributePropertyOutputNoSourceSelector>();

#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_165_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_165_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_165_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_165_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCopyAndFixSource); \
	DECLARE_FUNCTION(execCopyAndFixLast); \
	DECLARE_FUNCTION(execGetName); \
	DECLARE_FUNCTION(execGetExtraNames); \
	DECLARE_FUNCTION(execGetExtraProperty); \
	DECLARE_FUNCTION(execGetAttributeName); \
	DECLARE_FUNCTION(execGetPointProperty); \
	DECLARE_FUNCTION(execGetSelection); \
	DECLARE_FUNCTION(execSetExtraProperty); \
	DECLARE_FUNCTION(execSetAttributeName); \
	DECLARE_FUNCTION(execSetPointProperty);


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_165_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_165_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGAttributePropertySelectorBlueprintHelpers(); \
	friend struct Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers_Statics; \
public: \
	DECLARE_CLASS(UPCGAttributePropertySelectorBlueprintHelpers, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGAttributePropertySelectorBlueprintHelpers)


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_165_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGAttributePropertySelectorBlueprintHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGAttributePropertySelectorBlueprintHelpers(UPCGAttributePropertySelectorBlueprintHelpers&&); \
	NO_API UPCGAttributePropertySelectorBlueprintHelpers(const UPCGAttributePropertySelectorBlueprintHelpers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGAttributePropertySelectorBlueprintHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGAttributePropertySelectorBlueprintHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGAttributePropertySelectorBlueprintHelpers) \
	NO_API virtual ~UPCGAttributePropertySelectorBlueprintHelpers();


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_162_PROLOG
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_165_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_165_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_165_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_165_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_165_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_165_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_165_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_165_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCG_API UClass* StaticClass<class UPCGAttributePropertySelectorBlueprintHelpers>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h


#define FOREACH_ENUM_EPCGATTRIBUTEPROPERTYSELECTION(op) \
	op(EPCGAttributePropertySelection::Attribute) \
	op(EPCGAttributePropertySelection::PointProperty) \
	op(EPCGAttributePropertySelection::ExtraProperty) 

enum class EPCGAttributePropertySelection;
template<> struct TIsUEnumClass<EPCGAttributePropertySelection> { enum { Value = true }; };
template<> PCG_API UEnum* StaticEnum<EPCGAttributePropertySelection>();

#define FOREACH_ENUM_EPCGEXTRAPROPERTIES(op) \
	op(EPCGExtraProperties::Index) 

enum class EPCGExtraProperties : uint8;
template<> struct TIsUEnumClass<EPCGExtraProperties> { enum { Value = true }; };
template<> PCG_API UEnum* StaticEnum<EPCGExtraProperties>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
