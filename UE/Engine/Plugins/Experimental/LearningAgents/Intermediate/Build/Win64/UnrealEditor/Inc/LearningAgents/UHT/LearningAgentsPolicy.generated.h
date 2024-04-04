// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsPolicy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULearningAgentsInteractor;
class ULearningAgentsNeuralNetwork;
struct FFilePath;
struct FLearningAgentsPolicySettings;
#ifdef LEARNINGAGENTS_LearningAgentsPolicy_generated_h
#error "LearningAgentsPolicy.generated.h already included, missing '#pragma once' in LearningAgentsPolicy.h"
#endif
#define LEARNINGAGENTS_LearningAgentsPolicy_generated_h

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LEARNINGAGENTS_API UScriptStruct* StaticStruct<struct FLearningAgentsPolicySettings>();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_64_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_64_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_64_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetActionNoiseScale); \
	DECLARE_FUNCTION(execGetActionNoiseScale); \
	DECLARE_FUNCTION(execRunInference); \
	DECLARE_FUNCTION(execEvaluatePolicy); \
	DECLARE_FUNCTION(execSavePolicyToAsset); \
	DECLARE_FUNCTION(execLoadPolicyFromAsset); \
	DECLARE_FUNCTION(execUsePolicyFromAsset); \
	DECLARE_FUNCTION(execSavePolicyToSnapshot); \
	DECLARE_FUNCTION(execLoadPolicyFromSnapshot); \
	DECLARE_FUNCTION(execSetupPolicy);


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_64_ACCESSORS
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsPolicy(); \
	friend struct Z_Construct_UClass_ULearningAgentsPolicy_Statics; \
public: \
	DECLARE_CLASS(ULearningAgentsPolicy, ULearningAgentsManagerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LearningAgents"), NO_API) \
	DECLARE_SERIALIZER(ULearningAgentsPolicy)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_64_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULearningAgentsPolicy(ULearningAgentsPolicy&&); \
	NO_API ULearningAgentsPolicy(const ULearningAgentsPolicy&); \
public: \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsPolicy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULearningAgentsPolicy)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_61_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_64_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_64_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_64_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_64_ACCESSORS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_64_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEARNINGAGENTS_API UClass* StaticClass<class ULearningAgentsPolicy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
