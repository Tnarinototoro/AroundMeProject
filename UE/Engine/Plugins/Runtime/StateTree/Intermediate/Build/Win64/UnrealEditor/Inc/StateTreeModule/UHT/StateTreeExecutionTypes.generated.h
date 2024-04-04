// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateTreeExecutionTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STATETREEMODULE_StateTreeExecutionTypes_generated_h
#error "StateTreeExecutionTypes.generated.h already included, missing '#pragma once' in StateTreeExecutionTypes.h"
#endif
#define STATETREEMODULE_StateTreeExecutionTypes_generated_h

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeExecutionTypes_h_91_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreeExternalDataHandle>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeExecutionTypes_h_143_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreeExternalDataDesc>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeExecutionTypes_h_193_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreeTransitionRequest>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeExecutionTypes_h_223_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreeActiveStates>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeExecutionTypes_h_387_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreeTransitionSource_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreeTransitionSource>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeExecutionTypes_h_435_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreeTransitionResult>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeExecutionTypes_h_527_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreeExecutionState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeExecutionTypes_h


#define FOREACH_ENUM_ESTATETREEUPDATEPHASE(op) \
	op(EStateTreeUpdatePhase::Unset) \
	op(EStateTreeUpdatePhase::StartTree) \
	op(EStateTreeUpdatePhase::StopTree) \
	op(EStateTreeUpdatePhase::StartGlobalTasks) \
	op(EStateTreeUpdatePhase::StopGlobalTasks) \
	op(EStateTreeUpdatePhase::TickStateTree) \
	op(EStateTreeUpdatePhase::ApplyTransitions) \
	op(EStateTreeUpdatePhase::TriggerTransitions) \
	op(EStateTreeUpdatePhase::TickingGlobalTasks) \
	op(EStateTreeUpdatePhase::TickingTasks) \
	op(EStateTreeUpdatePhase::TransitionConditions) \
	op(EStateTreeUpdatePhase::StateSelection) \
	op(EStateTreeUpdatePhase::EnterConditions) \
	op(EStateTreeUpdatePhase::EnterStates) \
	op(EStateTreeUpdatePhase::ExitStates) 

enum class EStateTreeUpdatePhase : uint8;
template<> struct TIsUEnumClass<EStateTreeUpdatePhase> { enum { Value = true }; };
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeUpdatePhase>();

#define FOREACH_ENUM_ESTATETREERUNSTATUS(op) \
	op(EStateTreeRunStatus::Running) \
	op(EStateTreeRunStatus::Failed) \
	op(EStateTreeRunStatus::Succeeded) \
	op(EStateTreeRunStatus::Stopped) \
	op(EStateTreeRunStatus::Unset) 

enum class EStateTreeRunStatus : uint8;
template<> struct TIsUEnumClass<EStateTreeRunStatus> { enum { Value = true }; };
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeRunStatus>();

#define FOREACH_ENUM_ESTATETREESTATECHANGETYPE(op) \
	op(EStateTreeStateChangeType::None) \
	op(EStateTreeStateChangeType::Changed) \
	op(EStateTreeStateChangeType::Sustained) 

enum class EStateTreeStateChangeType : uint8;
template<> struct TIsUEnumClass<EStateTreeStateChangeType> { enum { Value = true }; };
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeStateChangeType>();

#define FOREACH_ENUM_ESTATETREECONDITIONEVALUATIONMODE(op) \
	op(EStateTreeConditionEvaluationMode::Evaluated) \
	op(EStateTreeConditionEvaluationMode::ForcedTrue) \
	op(EStateTreeConditionEvaluationMode::ForcedFalse) 

enum class EStateTreeConditionEvaluationMode : uint8;
template<> struct TIsUEnumClass<EStateTreeConditionEvaluationMode> { enum { Value = true }; };
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeConditionEvaluationMode>();

#define FOREACH_ENUM_ESTATETREETRANSITIONSOURCETYPE(op) \
	op(EStateTreeTransitionSourceType::Unset) \
	op(EStateTreeTransitionSourceType::Asset) \
	op(EStateTreeTransitionSourceType::ExternalRequest) \
	op(EStateTreeTransitionSourceType::Internal) 

enum class EStateTreeTransitionSourceType : uint8;
template<> struct TIsUEnumClass<EStateTreeTransitionSourceType> { enum { Value = true }; };
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeTransitionSourceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
