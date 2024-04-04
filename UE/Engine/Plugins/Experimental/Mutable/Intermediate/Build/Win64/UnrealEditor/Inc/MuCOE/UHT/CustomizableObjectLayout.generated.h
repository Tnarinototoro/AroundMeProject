// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOE/CustomizableObjectLayout.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectLayout_generated_h
#error "CustomizableObjectLayout.generated.h already included, missing '#pragma once' in CustomizableObjectLayout.h"
#endif
#define CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectLayout_generated_h

#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectLayout_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* StaticStruct<struct FCustomizableObjectLayoutBlock>();

#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectLayout_h_59_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectLayout_h_59_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectLayout_h_59_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectLayout_h_59_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectLayout_h_59_ACCESSORS
#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectLayout_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObjectLayout(); \
	friend struct Z_Construct_UClass_UCustomizableObjectLayout_Statics; \
public: \
	DECLARE_CLASS(UCustomizableObjectLayout, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObjectEditor"), NO_API) \
	DECLARE_SERIALIZER(UCustomizableObjectLayout)


#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectLayout_h_59_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomizableObjectLayout(UCustomizableObjectLayout&&); \
	NO_API UCustomizableObjectLayout(const UCustomizableObjectLayout&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomizableObjectLayout); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectLayout); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomizableObjectLayout) \
	NO_API virtual ~UCustomizableObjectLayout();


#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectLayout_h_56_PROLOG
#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectLayout_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectLayout_h_59_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectLayout_h_59_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectLayout_h_59_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectLayout_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectLayout_h_59_ACCESSORS \
	FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectLayout_h_59_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectLayout_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<class UCustomizableObjectLayout>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectLayout_h


#define FOREACH_ENUM_ECUSTOMIZABLEOBJECTTEXTURELAYOUTPACKINGSTRATEGY(op) \
	op(ECustomizableObjectTextureLayoutPackingStrategy::Resizable) \
	op(ECustomizableObjectTextureLayoutPackingStrategy::Fixed) 

enum class ECustomizableObjectTextureLayoutPackingStrategy : uint8;
template<> struct TIsUEnumClass<ECustomizableObjectTextureLayoutPackingStrategy> { enum { Value = true }; };
template<> CUSTOMIZABLEOBJECTEDITOR_API UEnum* StaticEnum<ECustomizableObjectTextureLayoutPackingStrategy>();

#define FOREACH_ENUM_ECUSTOMIZABLEOBJECTLAYOUTBLOCKREDUCTIONMETHOD(op) \
	op(ECustomizableObjectLayoutBlockReductionMethod::Halve) \
	op(ECustomizableObjectLayoutBlockReductionMethod::Unitary) 

enum class ECustomizableObjectLayoutBlockReductionMethod : uint8;
template<> struct TIsUEnumClass<ECustomizableObjectLayoutBlockReductionMethod> { enum { Value = true }; };
template<> CUSTOMIZABLEOBJECTEDITOR_API UEnum* StaticEnum<ECustomizableObjectLayoutBlockReductionMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
