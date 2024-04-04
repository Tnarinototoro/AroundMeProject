// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsCritic.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULearningAgentsInteractor;
class ULearningAgentsNeuralNetwork;
struct FFilePath;
struct FLearningAgentsCriticSettings;
#ifdef LEARNINGAGENTS_LearningAgentsCritic_generated_h
#error "LearningAgentsCritic.generated.h already included, missing '#pragma once' in LearningAgentsCritic.h"
#endif
#define LEARNINGAGENTS_LearningAgentsCritic_generated_h

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLearningAgentsCriticSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LEARNINGAGENTS_API UScriptStruct* StaticStruct<struct FLearningAgentsCriticSettings>();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_48_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_48_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_48_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEstimatedDiscountedReturn); \
	DECLARE_FUNCTION(execEvaluateCritic); \
	DECLARE_FUNCTION(execSaveCriticToAsset); \
	DECLARE_FUNCTION(execLoadCriticFromAsset); \
	DECLARE_FUNCTION(execUseCriticFromAsset); \
	DECLARE_FUNCTION(execSaveCriticToSnapshot); \
	DECLARE_FUNCTION(execLoadCriticFromSnapshot); \
	DECLARE_FUNCTION(execSetupCritic);


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_48_ACCESSORS
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsCritic(); \
	friend struct Z_Construct_UClass_ULearningAgentsCritic_Statics; \
public: \
	DECLARE_CLASS(ULearningAgentsCritic, ULearningAgentsManagerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LearningAgents"), NO_API) \
	DECLARE_SERIALIZER(ULearningAgentsCritic)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_48_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULearningAgentsCritic(ULearningAgentsCritic&&); \
	NO_API ULearningAgentsCritic(const ULearningAgentsCritic&); \
public: \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsCritic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULearningAgentsCritic)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_45_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_48_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_48_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_48_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_48_ACCESSORS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_48_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEARNINGAGENTS_API UClass* StaticClass<class ULearningAgentsCritic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
