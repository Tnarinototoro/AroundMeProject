// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMModel/RigVMGraph.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URigVMFunctionEntryNode;
class URigVMFunctionLibrary;
class URigVMFunctionReturnNode;
class URigVMGraph;
class URigVMLink;
class URigVMNode;
class URigVMPin;
struct FRigVMGraphVariableDescription;
#ifdef RIGVMDEVELOPER_RigVMGraph_generated_h
#error "RigVMGraph.generated.h already included, missing '#pragma once' in RigVMGraph.h"
#endif
#define RIGVMDEVELOPER_RigVMGraph_generated_h

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMGraph_h_30_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMGraph_h_30_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMGraph_h_30_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMGraph_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOutputArguments); \
	DECLARE_FUNCTION(execGetInputArguments); \
	DECLARE_FUNCTION(execGetLocalVariables); \
	DECLARE_FUNCTION(execSetDefaultFunctionLibrary); \
	DECLARE_FUNCTION(execGetDefaultFunctionLibrary); \
	DECLARE_FUNCTION(execIsTopLevelGraph); \
	DECLARE_FUNCTION(execGetSelectNodes); \
	DECLARE_FUNCTION(execIsNodeSelected); \
	DECLARE_FUNCTION(execFindLink); \
	DECLARE_FUNCTION(execFindPin); \
	DECLARE_FUNCTION(execFindNode); \
	DECLARE_FUNCTION(execFindNodeByName); \
	DECLARE_FUNCTION(execGetGraphName); \
	DECLARE_FUNCTION(execGetNodePath); \
	DECLARE_FUNCTION(execGetVariableDescriptions); \
	DECLARE_FUNCTION(execGetEventNames); \
	DECLARE_FUNCTION(execGetReturnNode); \
	DECLARE_FUNCTION(execGetEntryNode); \
	DECLARE_FUNCTION(execIsRootGraph); \
	DECLARE_FUNCTION(execGetGraphDepth); \
	DECLARE_FUNCTION(execGetRootGraph); \
	DECLARE_FUNCTION(execGetParentGraph); \
	DECLARE_FUNCTION(execGetContainedGraphs); \
	DECLARE_FUNCTION(execContainsLink); \
	DECLARE_FUNCTION(execGetLinks); \
	DECLARE_FUNCTION(execGetNodes);


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMGraph_h_30_ACCESSORS
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMGraph_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMGraph(); \
	friend struct Z_Construct_UClass_URigVMGraph_Statics; \
public: \
	DECLARE_CLASS(URigVMGraph, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), NO_API) \
	DECLARE_SERIALIZER(URigVMGraph)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMGraph_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URigVMGraph(URigVMGraph&&); \
	NO_API URigVMGraph(const URigVMGraph&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigVMGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMGraph); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigVMGraph) \
	NO_API virtual ~URigVMGraph();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMGraph_h_27_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMGraph_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMGraph_h_30_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMGraph_h_30_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMGraph_h_30_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMGraph_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMGraph_h_30_ACCESSORS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMGraph_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMGraph_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIGVMDEVELOPER_API UClass* StaticClass<class URigVMGraph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMGraph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
