// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsInteractor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LEARNINGAGENTS_LearningAgentsInteractor_generated_h
#error "LearningAgentsInteractor.generated.h already included, missing '#pragma once' in LearningAgentsInteractor.h"
#endif
#define LEARNINGAGENTS_LearningAgentsInteractor_generated_h

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_40_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_40_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_40_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void GetActions_Implementation(TArray<int32> const& AgentIds); \
	virtual void SetupActions_Implementation(); \
	virtual void SetObservations_Implementation(TArray<int32> const& AgentIds); \
	virtual void SetupObservations_Implementation(); \
 \
	DECLARE_FUNCTION(execGetActionVector); \
	DECLARE_FUNCTION(execGetObservationVector); \
	DECLARE_FUNCTION(execDecodeActions); \
	DECLARE_FUNCTION(execEncodeObservations); \
	DECLARE_FUNCTION(execGetActions); \
	DECLARE_FUNCTION(execSetupActions); \
	DECLARE_FUNCTION(execSetObservations); \
	DECLARE_FUNCTION(execSetupObservations); \
	DECLARE_FUNCTION(execSetupInteractor);


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_40_ACCESSORS
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_40_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsInteractor(); \
	friend struct Z_Construct_UClass_ULearningAgentsInteractor_Statics; \
public: \
	DECLARE_CLASS(ULearningAgentsInteractor, ULearningAgentsManagerComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/LearningAgents"), NO_API) \
	DECLARE_SERIALIZER(ULearningAgentsInteractor)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULearningAgentsInteractor(ULearningAgentsInteractor&&); \
	NO_API ULearningAgentsInteractor(const ULearningAgentsInteractor&); \
public: \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsInteractor); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ULearningAgentsInteractor)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_37_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_40_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_40_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_40_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_40_ACCESSORS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_40_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEARNINGAGENTS_API UClass* StaticClass<class ULearningAgentsInteractor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
