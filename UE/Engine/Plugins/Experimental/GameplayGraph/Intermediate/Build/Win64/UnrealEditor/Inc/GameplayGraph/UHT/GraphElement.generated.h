// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/GraphElement.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYGRAPH_GraphElement_generated_h
#error "GraphElement.generated.h already included, missing '#pragma once' in GraphElement.h"
#endif
#define GAMEPLAYGRAPH_GraphElement_generated_h

#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphElement_h_23_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphElement_h_23_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphElement_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphElement_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphElement_h_23_ACCESSORS
#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphElement_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGraphElement(); \
	friend struct Z_Construct_UClass_UGraphElement_Statics; \
public: \
	DECLARE_CLASS(UGraphElement, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameplayGraph"), NO_API) \
	DECLARE_SERIALIZER(UGraphElement)


#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphElement_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGraphElement(UGraphElement&&); \
	NO_API UGraphElement(const UGraphElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGraphElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGraphElement); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UGraphElement) \
	NO_API virtual ~UGraphElement();


#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphElement_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphElement_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphElement_h_23_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphElement_h_23_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphElement_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphElement_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphElement_h_23_ACCESSORS \
	FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphElement_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphElement_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYGRAPH_API UClass* StaticClass<class UGraphElement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphElement_h


#define FOREACH_ENUM_EGRAPHELEMENTTYPE(op) \
	op(EGraphElementType::Node) \
	op(EGraphElementType::Edge) \
	op(EGraphElementType::Island) \
	op(EGraphElementType::Unknown) 

enum class EGraphElementType;
template<> struct TIsUEnumClass<EGraphElementType> { enum { Value = true }; };
template<> GAMEPLAYGRAPH_API UEnum* StaticEnum<EGraphElementType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
