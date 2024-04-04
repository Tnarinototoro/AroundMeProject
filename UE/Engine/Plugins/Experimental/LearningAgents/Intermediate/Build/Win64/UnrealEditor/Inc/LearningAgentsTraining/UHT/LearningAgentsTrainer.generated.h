// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsTrainer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULearningAgentsCritic;
class ULearningAgentsInteractor;
class ULearningAgentsPolicy;
enum class ELearningAgentsCompletion : uint8;
struct FLearningAgentsCriticSettings;
struct FLearningAgentsTrainerGameSettings;
struct FLearningAgentsTrainerPathSettings;
struct FLearningAgentsTrainerSettings;
struct FLearningAgentsTrainerTrainingSettings;
#ifdef LEARNINGAGENTSTRAINING_LearningAgentsTrainer_generated_h
#error "LearningAgentsTrainer.generated.h already included, missing '#pragma once' in LearningAgentsTrainer.h"
#endif
#define LEARNINGAGENTSTRAINING_LearningAgentsTrainer_generated_h

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainer_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LEARNINGAGENTSTRAINING_API UScriptStruct* StaticStruct<struct FLearningAgentsTrainerSettings>();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainer_h_92_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LEARNINGAGENTSTRAINING_API UScriptStruct* StaticStruct<struct FLearningAgentsTrainerGameSettings>();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainer_h_146_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LEARNINGAGENTSTRAINING_API UScriptStruct* StaticStruct<struct FLearningAgentsTrainerTrainingSettings>();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainer_h_268_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLearningAgentsTrainerPathSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LEARNINGAGENTSTRAINING_API UScriptStruct* StaticStruct<struct FLearningAgentsTrainerPathSettings>();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainer_h_329_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainer_h_329_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainer_h_329_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainer_h_329_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ResetEpisodes_Implementation(TArray<int32> const& AgentIds); \
	virtual void SetCompletions_Implementation(TArray<int32> const& AgentIds); \
	virtual void SetupCompletions_Implementation(); \
	virtual void SetRewards_Implementation(TArray<int32> const& AgentIds); \
	virtual void SetupRewards_Implementation(); \
 \
	DECLARE_FUNCTION(execHasTrainingFailed); \
	DECLARE_FUNCTION(execIsCompleted); \
	DECLARE_FUNCTION(execGetReward); \
	DECLARE_FUNCTION(execRunTraining); \
	DECLARE_FUNCTION(execProcessExperience); \
	DECLARE_FUNCTION(execEvaluateCompletions); \
	DECLARE_FUNCTION(execEvaluateRewards); \
	DECLARE_FUNCTION(execEndTraining); \
	DECLARE_FUNCTION(execBeginTraining); \
	DECLARE_FUNCTION(execIsTraining); \
	DECLARE_FUNCTION(execResetEpisodes); \
	DECLARE_FUNCTION(execSetCompletions); \
	DECLARE_FUNCTION(execSetupCompletions); \
	DECLARE_FUNCTION(execSetRewards); \
	DECLARE_FUNCTION(execSetupRewards); \
	DECLARE_FUNCTION(execSetupTrainer);


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainer_h_329_ACCESSORS
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainer_h_329_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainer_h_329_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsTrainer(); \
	friend struct Z_Construct_UClass_ULearningAgentsTrainer_Statics; \
public: \
	DECLARE_CLASS(ULearningAgentsTrainer, ULearningAgentsManagerComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/LearningAgentsTraining"), NO_API) \
	DECLARE_SERIALIZER(ULearningAgentsTrainer)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainer_h_329_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULearningAgentsTrainer(ULearningAgentsTrainer&&); \
	NO_API ULearningAgentsTrainer(const ULearningAgentsTrainer&); \
public: \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsTrainer); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ULearningAgentsTrainer)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainer_h_326_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainer_h_329_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainer_h_329_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainer_h_329_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainer_h_329_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainer_h_329_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainer_h_329_ACCESSORS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainer_h_329_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainer_h_329_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainer_h_329_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEARNINGAGENTSTRAINING_API UClass* StaticClass<class ULearningAgentsTrainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainer_h


#define FOREACH_ENUM_ELEARNINGAGENTSCOMPLETION(op) \
	op(ELearningAgentsCompletion::Truncation) \
	op(ELearningAgentsCompletion::Termination) 

enum class ELearningAgentsCompletion : uint8;
template<> struct TIsUEnumClass<ELearningAgentsCompletion> { enum { Value = true }; };
template<> LEARNINGAGENTSTRAINING_API UEnum* StaticEnum<ELearningAgentsCompletion>();

#define FOREACH_ENUM_ELEARNINGAGENTSTRAINERDEVICE(op) \
	op(ELearningAgentsTrainerDevice::CPU) \
	op(ELearningAgentsTrainerDevice::GPU) 

enum class ELearningAgentsTrainerDevice : uint8;
template<> struct TIsUEnumClass<ELearningAgentsTrainerDevice> { enum { Value = true }; };
template<> LEARNINGAGENTSTRAINING_API UEnum* StaticEnum<ELearningAgentsTrainerDevice>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
