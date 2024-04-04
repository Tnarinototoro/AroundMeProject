// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/GraphEdge.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYGRAPH_GraphEdge_generated_h
#error "GraphEdge.generated.h already included, missing '#pragma once' in GraphEdge.h"
#endif
#define GAMEPLAYGRAPH_GraphEdge_generated_h

#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphEdge_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSerializedEdgeData_Statics; \
	GAMEPLAYGRAPH_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYGRAPH_API UScriptStruct* StaticStruct<struct FSerializedEdgeData>();

#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphEdge_h_24_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphEdge_h_24_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphEdge_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphEdge_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphEdge_h_24_ACCESSORS
#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphEdge_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGraphEdge(); \
	friend struct Z_Construct_UClass_UGraphEdge_Statics; \
public: \
	DECLARE_CLASS(UGraphEdge, UGraphElement, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayGraph"), NO_API) \
	DECLARE_SERIALIZER(UGraphEdge)


#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphEdge_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGraphEdge(UGraphEdge&&); \
	NO_API UGraphEdge(const UGraphEdge&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGraphEdge); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGraphEdge); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGraphEdge) \
	NO_API virtual ~UGraphEdge();


#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphEdge_h_21_PROLOG
#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphEdge_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphEdge_h_24_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphEdge_h_24_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphEdge_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphEdge_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphEdge_h_24_ACCESSORS \
	FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphEdge_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphEdge_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYGRAPH_API UClass* StaticClass<class UGraphEdge>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphEdge_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
