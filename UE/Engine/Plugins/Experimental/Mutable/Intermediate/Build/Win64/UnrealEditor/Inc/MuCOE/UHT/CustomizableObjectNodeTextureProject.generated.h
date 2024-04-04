// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOE/Nodes/CustomizableObjectNodeTextureProject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeTextureProject_generated_h
#error "CustomizableObjectNodeTextureProject.generated.h already included, missing '#pragma once' in CustomizableObjectNodeTextureProject.h"
#endif
#define CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeTextureProject_generated_h

#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureProject_h_37_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureProject_h_37_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureProject_h_37_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureProject_h_37_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureProject_h_37_ACCESSORS
#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureProject_h_37_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UCustomizableObjectNodeTextureProject, NO_API)


#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureProject_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObjectNodeTextureProject(); \
	friend struct Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics; \
public: \
	DECLARE_CLASS(UCustomizableObjectNodeTextureProject, UCustomizableObjectNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObjectEditor"), NO_API) \
	DECLARE_SERIALIZER(UCustomizableObjectNodeTextureProject) \
	FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureProject_h_37_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureProject_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomizableObjectNodeTextureProject(UCustomizableObjectNodeTextureProject&&); \
	NO_API UCustomizableObjectNodeTextureProject(const UCustomizableObjectNodeTextureProject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomizableObjectNodeTextureProject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectNodeTextureProject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomizableObjectNodeTextureProject) \
	NO_API virtual ~UCustomizableObjectNodeTextureProject();


#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureProject_h_33_PROLOG
#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureProject_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureProject_h_37_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureProject_h_37_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureProject_h_37_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureProject_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureProject_h_37_ACCESSORS \
	FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureProject_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureProject_h_37_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<class UCustomizableObjectNodeTextureProject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureProject_h


#define FOREACH_ENUM_ETEXTUREPROJECTSAMPLINGMETHOD(op) \
	op(ETextureProjectSamplingMethod::Point) \
	op(ETextureProjectSamplingMethod::BiLinear) 

enum class ETextureProjectSamplingMethod;
template<> struct TIsUEnumClass<ETextureProjectSamplingMethod> { enum { Value = true }; };
template<> CUSTOMIZABLEOBJECTEDITOR_API UEnum* StaticEnum<ETextureProjectSamplingMethod>();

#define FOREACH_ENUM_ETEXTUREPROJECTMINFILTERMETHOD(op) \
	op(ETextureProjectMinFilterMethod::None) \
	op(ETextureProjectMinFilterMethod::TotalAreaHeuristic) 

enum class ETextureProjectMinFilterMethod;
template<> struct TIsUEnumClass<ETextureProjectMinFilterMethod> { enum { Value = true }; };
template<> CUSTOMIZABLEOBJECTEDITOR_API UEnum* StaticEnum<ETextureProjectMinFilterMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
