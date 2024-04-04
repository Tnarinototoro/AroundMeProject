// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOE/Nodes/CustomizableObjectNodeMeshReshape.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeMeshReshape_generated_h
#error "CustomizableObjectNodeMeshReshape.generated.h already included, missing '#pragma once' in CustomizableObjectNodeMeshReshape.h"
#endif
#define CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeMeshReshape_generated_h

#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics; \
	CUSTOMIZABLEOBJECTEDITOR_API static class UScriptStruct* StaticStruct();


template<> CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* StaticStruct<struct FMeshReshapeColorUsage>();

#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_46_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_46_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_46_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_46_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_46_ACCESSORS
#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_46_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UCustomizableObjectNodeMeshReshape, NO_API)


#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObjectNodeMeshReshape(); \
	friend struct Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics; \
public: \
	DECLARE_CLASS(UCustomizableObjectNodeMeshReshape, UCustomizableObjectNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObjectEditor"), NO_API) \
	DECLARE_SERIALIZER(UCustomizableObjectNodeMeshReshape) \
	FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_46_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_46_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomizableObjectNodeMeshReshape(UCustomizableObjectNodeMeshReshape&&); \
	NO_API UCustomizableObjectNodeMeshReshape(const UCustomizableObjectNodeMeshReshape&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomizableObjectNodeMeshReshape); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectNodeMeshReshape); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomizableObjectNodeMeshReshape) \
	NO_API virtual ~UCustomizableObjectNodeMeshReshape();


#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_42_PROLOG
#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_46_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_46_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_46_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_46_ACCESSORS \
	FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_46_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<class UCustomizableObjectNodeMeshReshape>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h


#define FOREACH_ENUM_EMESHRESHAPEVERTEXCOLORCHANNELUSAGE(op) \
	op(EMeshReshapeVertexColorChannelUsage::None) \
	op(EMeshReshapeVertexColorChannelUsage::RigidClusterId) \
	op(EMeshReshapeVertexColorChannelUsage::MaskWeight) 

enum class EMeshReshapeVertexColorChannelUsage;
template<> struct TIsUEnumClass<EMeshReshapeVertexColorChannelUsage> { enum { Value = true }; };
template<> CUSTOMIZABLEOBJECTEDITOR_API UEnum* StaticEnum<EMeshReshapeVertexColorChannelUsage>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
