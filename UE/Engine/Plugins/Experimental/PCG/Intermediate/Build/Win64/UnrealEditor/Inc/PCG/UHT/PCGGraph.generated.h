// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGGraph.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPCGGraph;
class UPCGNode;
class UPCGSettings;
struct FEdGraphPinType;
struct FGuid;
#ifdef PCG_PCGGraph_generated_h
#error "PCGGraph.generated.h already included, missing '#pragma once' in PCGGraph.h"
#endif
#define PCG_PCGGraph_generated_h

#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPCGOverrideInstancedPropertyBag_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PCG_API UScriptStruct* StaticStruct<struct FPCGOverrideInstancedPropertyBag>();

#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_83_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_83_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_83_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetConstPCGGraph); \
	DECLARE_FUNCTION(execGetMutablePCGGraph);


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_83_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_83_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGGraphInterface(); \
	friend struct Z_Construct_UClass_UPCGGraphInterface_Statics; \
public: \
	DECLARE_CLASS(UPCGGraphInterface, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGGraphInterface)


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_83_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGGraphInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGGraphInterface(UPCGGraphInterface&&); \
	NO_API UPCGGraphInterface(const UPCGGraphInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGGraphInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGGraphInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGGraphInterface) \
	NO_API virtual ~UPCGGraphInterface();


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_80_PROLOG
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_83_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_83_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_83_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_83_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_83_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_83_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_83_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCG_API UClass* StaticClass<class UPCGGraphInterface>();

#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_124_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_124_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_124_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_124_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOutputNode); \
	DECLARE_FUNCTION(execGetInputNode); \
	DECLARE_FUNCTION(execRemoveEdge); \
	DECLARE_FUNCTION(execAddEdge); \
	DECLARE_FUNCTION(execRemoveNode); \
	DECLARE_FUNCTION(execAddNodeCopy); \
	DECLARE_FUNCTION(execAddNodeInstance); \
	DECLARE_FUNCTION(execAddNodeOfType);


#if WITH_EDITOR
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_124_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUserParametersCanRemoveProperty); \
	DECLARE_FUNCTION(execUserParametersIsPinTypeAccepted); \
	DECLARE_FUNCTION(execForceNotificationForEditor);


#else
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_124_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_124_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_124_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGGraph(); \
	friend struct Z_Construct_UClass_UPCGGraph_Statics; \
public: \
	DECLARE_CLASS(UPCGGraph, UPCGGraphInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGGraph)


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_124_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGGraph(UPCGGraph&&); \
	NO_API UPCGGraph(const UPCGGraph&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGGraph) \
	NO_API virtual ~UPCGGraph();


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_116_PROLOG
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_124_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_124_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_124_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_124_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_124_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_124_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_124_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_124_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_124_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCG_API UClass* StaticClass<class UPCGGraph>();

#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_336_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_336_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_336_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_336_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_336_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_336_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGGraphInstance(); \
	friend struct Z_Construct_UClass_UPCGGraphInstance_Statics; \
public: \
	DECLARE_CLASS(UPCGGraphInstance, UPCGGraphInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGGraphInstance)


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_336_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGGraphInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGGraphInstance(UPCGGraphInstance&&); \
	NO_API UPCGGraphInstance(const UPCGGraphInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGGraphInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGGraphInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGGraphInstance) \
	NO_API virtual ~UPCGGraphInstance();


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_333_PROLOG
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_336_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_336_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_336_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_336_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_336_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_336_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_336_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h_336_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCG_API UClass* StaticClass<class UPCGGraphInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGGraph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
