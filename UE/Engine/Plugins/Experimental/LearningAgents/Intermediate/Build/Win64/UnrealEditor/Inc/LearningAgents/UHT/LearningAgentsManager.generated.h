// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
#ifdef LEARNINGAGENTS_LearningAgentsManager_generated_h
#error "LearningAgentsManager.generated.h already included, missing '#pragma once' in LearningAgentsManager.h"
#endif
#define LEARNINGAGENTS_LearningAgentsManager_generated_h

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManager_h_34_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManager_h_34_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManager_h_34_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManager_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddAgentsAsTickPrerequisiteOfManager); \
	DECLARE_FUNCTION(execAddManagerAsTickPrerequisiteOfAgents); \
	DECLARE_FUNCTION(execHasAgent); \
	DECLARE_FUNCTION(execHasAgentObject); \
	DECLARE_FUNCTION(execGetAgentNum); \
	DECLARE_FUNCTION(execGetAgentIds); \
	DECLARE_FUNCTION(execGetAgentId); \
	DECLARE_FUNCTION(execGetAllAgents); \
	DECLARE_FUNCTION(execGetAgents); \
	DECLARE_FUNCTION(execGetAgent); \
	DECLARE_FUNCTION(execResetAllAgents); \
	DECLARE_FUNCTION(execResetAgents); \
	DECLARE_FUNCTION(execResetAgent); \
	DECLARE_FUNCTION(execRemoveAllAgents); \
	DECLARE_FUNCTION(execRemoveAgents); \
	DECLARE_FUNCTION(execRemoveAgent); \
	DECLARE_FUNCTION(execAddAgents); \
	DECLARE_FUNCTION(execAddAgent); \
	DECLARE_FUNCTION(execGetMaxAgentNum);


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManager_h_34_ACCESSORS
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManager_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALearningAgentsManager(); \
	friend struct Z_Construct_UClass_ALearningAgentsManager_Statics; \
public: \
	DECLARE_CLASS(ALearningAgentsManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LearningAgents"), NO_API) \
	DECLARE_SERIALIZER(ALearningAgentsManager)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManager_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALearningAgentsManager(ALearningAgentsManager&&); \
	NO_API ALearningAgentsManager(const ALearningAgentsManager&); \
public: \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALearningAgentsManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALearningAgentsManager)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManager_h_31_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManager_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManager_h_34_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManager_h_34_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManager_h_34_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManager_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManager_h_34_ACCESSORS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManager_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManager_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEARNINGAGENTS_API UClass* StaticClass<class ALearningAgentsManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
