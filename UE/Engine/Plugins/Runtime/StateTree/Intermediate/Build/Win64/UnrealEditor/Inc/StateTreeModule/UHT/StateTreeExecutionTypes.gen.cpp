// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeExecutionTypes.h"
#include "StateTreeIndexTypes.h"
#include "StateTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeExecutionTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeConditionEvaluationMode();
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement();
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus();
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeStateChangeType();
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority();
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionSourceType();
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeUpdatePhase();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeActiveStates();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeExecutionState();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeExternalDataDesc();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeExternalDataHandle();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeIndex16();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeStateHandle();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTransitionRequest();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTransitionResult();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTransitionSource();
	UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeUpdatePhase;
	static UEnum* EStateTreeUpdatePhase_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeUpdatePhase.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStateTreeUpdatePhase.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeUpdatePhase, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeUpdatePhase"));
		}
		return Z_Registration_Info_UEnum_EStateTreeUpdatePhase.OuterSingleton;
	}
	template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeUpdatePhase>()
	{
		return EStateTreeUpdatePhase_StaticEnum();
	}
	struct Z_Construct_UEnum_StateTreeModule_EStateTreeUpdatePhase_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StateTreeModule_EStateTreeUpdatePhase_Statics::Enumerators[] = {
		{ "EStateTreeUpdatePhase::Unset", (int64)EStateTreeUpdatePhase::Unset },
		{ "EStateTreeUpdatePhase::StartTree", (int64)EStateTreeUpdatePhase::StartTree },
		{ "EStateTreeUpdatePhase::StopTree", (int64)EStateTreeUpdatePhase::StopTree },
		{ "EStateTreeUpdatePhase::StartGlobalTasks", (int64)EStateTreeUpdatePhase::StartGlobalTasks },
		{ "EStateTreeUpdatePhase::StopGlobalTasks", (int64)EStateTreeUpdatePhase::StopGlobalTasks },
		{ "EStateTreeUpdatePhase::TickStateTree", (int64)EStateTreeUpdatePhase::TickStateTree },
		{ "EStateTreeUpdatePhase::ApplyTransitions", (int64)EStateTreeUpdatePhase::ApplyTransitions },
		{ "EStateTreeUpdatePhase::TriggerTransitions", (int64)EStateTreeUpdatePhase::TriggerTransitions },
		{ "EStateTreeUpdatePhase::TickingGlobalTasks", (int64)EStateTreeUpdatePhase::TickingGlobalTasks },
		{ "EStateTreeUpdatePhase::TickingTasks", (int64)EStateTreeUpdatePhase::TickingTasks },
		{ "EStateTreeUpdatePhase::TransitionConditions", (int64)EStateTreeUpdatePhase::TransitionConditions },
		{ "EStateTreeUpdatePhase::StateSelection", (int64)EStateTreeUpdatePhase::StateSelection },
		{ "EStateTreeUpdatePhase::EnterConditions", (int64)EStateTreeUpdatePhase::EnterConditions },
		{ "EStateTreeUpdatePhase::EnterStates", (int64)EStateTreeUpdatePhase::EnterStates },
		{ "EStateTreeUpdatePhase::ExitStates", (int64)EStateTreeUpdatePhase::ExitStates },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StateTreeModule_EStateTreeUpdatePhase_Statics::Enum_MetaDataParams[] = {
		{ "ApplyTransitions.DisplayName", "Transition" },
		{ "ApplyTransitions.Name", "EStateTreeUpdatePhase::ApplyTransitions" },
		{ "Comment", "/**\n * Enumeration for the different update phases.\n * This is used as context information when tracing debug events.\n */" },
		{ "EnterConditions.DisplayName", "Enter conditions" },
		{ "EnterConditions.Name", "EStateTreeUpdatePhase::EnterConditions" },
		{ "EnterStates.DisplayName", "Enter States" },
		{ "EnterStates.Name", "EStateTreeUpdatePhase::EnterStates" },
		{ "ExitStates.DisplayName", "Exit States" },
		{ "ExitStates.Name", "EStateTreeUpdatePhase::ExitStates" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "StartGlobalTasks.DisplayName", "Start Global Tasks & Evaluators" },
		{ "StartGlobalTasks.Name", "EStateTreeUpdatePhase::StartGlobalTasks" },
		{ "StartTree.DisplayName", "Start Tree" },
		{ "StartTree.Name", "EStateTreeUpdatePhase::StartTree" },
		{ "StateSelection.DisplayName", "Try Enter" },
		{ "StateSelection.Name", "EStateTreeUpdatePhase::StateSelection" },
		{ "StopGlobalTasks.DisplayName", "Stop Global Tasks & Evaluators" },
		{ "StopGlobalTasks.Name", "EStateTreeUpdatePhase::StopGlobalTasks" },
		{ "StopTree.DisplayName", "Stop Tree" },
		{ "StopTree.Name", "EStateTreeUpdatePhase::StopTree" },
		{ "TickingGlobalTasks.DisplayName", "Tick Global Tasks & Evaluators" },
		{ "TickingGlobalTasks.Name", "EStateTreeUpdatePhase::TickingGlobalTasks" },
		{ "TickingTasks.DisplayName", "Tick Tasks" },
		{ "TickingTasks.Name", "EStateTreeUpdatePhase::TickingTasks" },
		{ "TickStateTree.DisplayName", "Tick State Tree" },
		{ "TickStateTree.Name", "EStateTreeUpdatePhase::TickStateTree" },
		{ "ToolTip", "Enumeration for the different update phases.\nThis is used as context information when tracing debug events." },
		{ "TransitionConditions.DisplayName", "Transition conditions" },
		{ "TransitionConditions.Name", "EStateTreeUpdatePhase::TransitionConditions" },
		{ "TriggerTransitions.DisplayName", "Trigger Transitions" },
		{ "TriggerTransitions.Name", "EStateTreeUpdatePhase::TriggerTransitions" },
		{ "Unset.Name", "EStateTreeUpdatePhase::Unset" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeUpdatePhase_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		"EStateTreeUpdatePhase",
		"EStateTreeUpdatePhase",
		Z_Construct_UEnum_StateTreeModule_EStateTreeUpdatePhase_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeUpdatePhase_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeUpdatePhase_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeModule_EStateTreeUpdatePhase_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeUpdatePhase()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeUpdatePhase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeUpdatePhase.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeUpdatePhase_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStateTreeUpdatePhase.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeRunStatus;
	static UEnum* EStateTreeRunStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeRunStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStateTreeRunStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeRunStatus"));
		}
		return Z_Registration_Info_UEnum_EStateTreeRunStatus.OuterSingleton;
	}
	template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeRunStatus>()
	{
		return EStateTreeRunStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus_Statics::Enumerators[] = {
		{ "EStateTreeRunStatus::Running", (int64)EStateTreeRunStatus::Running },
		{ "EStateTreeRunStatus::Failed", (int64)EStateTreeRunStatus::Failed },
		{ "EStateTreeRunStatus::Succeeded", (int64)EStateTreeRunStatus::Succeeded },
		{ "EStateTreeRunStatus::Stopped", (int64)EStateTreeRunStatus::Stopped },
		{ "EStateTreeRunStatus::Unset", (int64)EStateTreeRunStatus::Unset },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Status describing current run status of a State Tree. */" },
		{ "Failed.Comment", "/** Tree execution has stopped on failure. */" },
		{ "Failed.Name", "EStateTreeRunStatus::Failed" },
		{ "Failed.ToolTip", "Tree execution has stopped on failure." },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "Running.Comment", "/** Tree is still running. */" },
		{ "Running.Name", "EStateTreeRunStatus::Running" },
		{ "Running.ToolTip", "Tree is still running." },
		{ "Stopped.Comment", "/** The State Tree was requested to stop without a particular success or failure state. */" },
		{ "Stopped.Name", "EStateTreeRunStatus::Stopped" },
		{ "Stopped.ToolTip", "The State Tree was requested to stop without a particular success or failure state." },
		{ "Succeeded.Comment", "/** Tree execution has stopped on success. */" },
		{ "Succeeded.Name", "EStateTreeRunStatus::Succeeded" },
		{ "Succeeded.ToolTip", "Tree execution has stopped on success." },
		{ "ToolTip", "Status describing current run status of a State Tree." },
		{ "Unset.Comment", "/** Status not set. */" },
		{ "Unset.Name", "EStateTreeRunStatus::Unset" },
		{ "Unset.ToolTip", "Status not set." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		"EStateTreeRunStatus",
		"EStateTreeRunStatus",
		Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeRunStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeRunStatus.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStateTreeRunStatus.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeStateChangeType;
	static UEnum* EStateTreeStateChangeType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeStateChangeType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStateTreeStateChangeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeStateChangeType, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeStateChangeType"));
		}
		return Z_Registration_Info_UEnum_EStateTreeStateChangeType.OuterSingleton;
	}
	template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeStateChangeType>()
	{
		return EStateTreeStateChangeType_StaticEnum();
	}
	struct Z_Construct_UEnum_StateTreeModule_EStateTreeStateChangeType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StateTreeModule_EStateTreeStateChangeType_Statics::Enumerators[] = {
		{ "EStateTreeStateChangeType::None", (int64)EStateTreeStateChangeType::None },
		{ "EStateTreeStateChangeType::Changed", (int64)EStateTreeStateChangeType::Changed },
		{ "EStateTreeStateChangeType::Sustained", (int64)EStateTreeStateChangeType::Sustained },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StateTreeModule_EStateTreeStateChangeType_Statics::Enum_MetaDataParams[] = {
		{ "Changed.Comment", "/** The state became activated or deactivated. */" },
		{ "Changed.Name", "EStateTreeStateChangeType::Changed" },
		{ "Changed.ToolTip", "The state became activated or deactivated." },
		{ "Comment", "/** State change type. Passed to EnterState() and ExitState() to indicate how the state change affects the state and Evaluator or Task is on. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "None.Comment", "/** Not an activation */" },
		{ "None.Name", "EStateTreeStateChangeType::None" },
		{ "None.ToolTip", "Not an activation" },
		{ "Sustained.Comment", "/** The state is parent of new active state and sustained previous active state. */" },
		{ "Sustained.Name", "EStateTreeStateChangeType::Sustained" },
		{ "Sustained.ToolTip", "The state is parent of new active state and sustained previous active state." },
		{ "ToolTip", "State change type. Passed to EnterState() and ExitState() to indicate how the state change affects the state and Evaluator or Task is on." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeStateChangeType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		"EStateTreeStateChangeType",
		"EStateTreeStateChangeType",
		Z_Construct_UEnum_StateTreeModule_EStateTreeStateChangeType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeStateChangeType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeStateChangeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeModule_EStateTreeStateChangeType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeStateChangeType()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeStateChangeType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeStateChangeType.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeStateChangeType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStateTreeStateChangeType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeConditionEvaluationMode;
	static UEnum* EStateTreeConditionEvaluationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeConditionEvaluationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStateTreeConditionEvaluationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeConditionEvaluationMode, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeConditionEvaluationMode"));
		}
		return Z_Registration_Info_UEnum_EStateTreeConditionEvaluationMode.OuterSingleton;
	}
	template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeConditionEvaluationMode>()
	{
		return EStateTreeConditionEvaluationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_StateTreeModule_EStateTreeConditionEvaluationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StateTreeModule_EStateTreeConditionEvaluationMode_Statics::Enumerators[] = {
		{ "EStateTreeConditionEvaluationMode::Evaluated", (int64)EStateTreeConditionEvaluationMode::Evaluated },
		{ "EStateTreeConditionEvaluationMode::ForcedTrue", (int64)EStateTreeConditionEvaluationMode::ForcedTrue },
		{ "EStateTreeConditionEvaluationMode::ForcedFalse", (int64)EStateTreeConditionEvaluationMode::ForcedFalse },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StateTreeModule_EStateTreeConditionEvaluationMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Defines how to assign the result of a condition to evaluate.  */" },
		{ "Evaluated.Comment", "/** Condition is evaluated to set the result. This is the normal behavior. */" },
		{ "Evaluated.Name", "EStateTreeConditionEvaluationMode::Evaluated" },
		{ "Evaluated.ToolTip", "Condition is evaluated to set the result. This is the normal behavior." },
		{ "ForcedFalse.Comment", "/** Do not evaluate the condition and force result to 'false'. */" },
		{ "ForcedFalse.Name", "EStateTreeConditionEvaluationMode::ForcedFalse" },
		{ "ForcedFalse.ToolTip", "Do not evaluate the condition and force result to 'false'." },
		{ "ForcedTrue.Comment", "/** Do not evaluate the condition and force result to 'true'. */" },
		{ "ForcedTrue.Name", "EStateTreeConditionEvaluationMode::ForcedTrue" },
		{ "ForcedTrue.ToolTip", "Do not evaluate the condition and force result to 'true'." },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Defines how to assign the result of a condition to evaluate." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeConditionEvaluationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		"EStateTreeConditionEvaluationMode",
		"EStateTreeConditionEvaluationMode",
		Z_Construct_UEnum_StateTreeModule_EStateTreeConditionEvaluationMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeConditionEvaluationMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeConditionEvaluationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeModule_EStateTreeConditionEvaluationMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeConditionEvaluationMode()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeConditionEvaluationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeConditionEvaluationMode.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeConditionEvaluationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStateTreeConditionEvaluationMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeExternalDataHandle;
class UScriptStruct* FStateTreeExternalDataHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeExternalDataHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeExternalDataHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeExternalDataHandle, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeExternalDataHandle"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeExternalDataHandle.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeExternalDataHandle>()
{
	return FStateTreeExternalDataHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataViewIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataViewIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Handle to access an external struct or object.\n * Note: Use the templated version below. \n */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Handle to access an external struct or object.\nNote: Use the templated version below." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeExternalDataHandle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::NewProp_DataViewIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::NewProp_DataViewIndex = { "DataViewIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeExternalDataHandle, DataViewIndex), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::NewProp_DataViewIndex_MetaData), Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::NewProp_DataViewIndex_MetaData) }; // 1063223217
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::NewProp_DataViewIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeExternalDataHandle",
		Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::PropPointers),
		sizeof(FStateTreeExternalDataHandle),
		alignof(FStateTreeExternalDataHandle),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeExternalDataHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeExternalDataHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeExternalDataHandle.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeExternalDataHandle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeExternalDataDesc;
class UScriptStruct* FStateTreeExternalDataDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeExternalDataDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeExternalDataDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeExternalDataDesc, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeExternalDataDesc"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeExternalDataDesc.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeExternalDataDesc>()
{
	return FStateTreeExternalDataDesc::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Struct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Requirement_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Requirement_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Requirement;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ID;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Describes an external data. The data can point to a struct or object.\n * The code that handles StateTree ticking is responsible for passing in the actually data, see FStateTreeExecutionContext.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Describes an external data. The data can point to a struct or object.\nThe code that handles StateTree ticking is responsible for passing in the actually data, see FStateTreeExecutionContext." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeExternalDataDesc>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Struct_MetaData[] = {
		{ "Comment", "/** Class or struct of the external data. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Class or struct of the external data." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeExternalDataDesc, Struct), Z_Construct_UClass_UStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Struct_MetaData), Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Struct_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "/**\n\x09 * Name of the external data. Used only for bindable external data (enforced by the schema).\n\x09 * External data linked explicitly by the nodes (i.e. LinkExternalData) are identified only\n\x09 * by their type since they are used for unique instance of a given type.  \n\x09 */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Name of the external data. Used only for bindable external data (enforced by the schema).\nExternal data linked explicitly by the nodes (i.e. LinkExternalData) are identified only\nby their type since they are used for unique instance of a given type." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeExternalDataDesc, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Handle_MetaData[] = {
		{ "Comment", "/** Handle/Index to the StateTreeExecutionContext data views array */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Handle/Index to the StateTreeExecutionContext data views array" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeExternalDataDesc, Handle), Z_Construct_UScriptStruct_FStateTreeExternalDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Handle_MetaData), Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Handle_MetaData) }; // 3909938875
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Requirement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Requirement_MetaData[] = {
		{ "Comment", "/** Describes if the data is required or not. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Describes if the data is required or not." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Requirement = { "Requirement", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeExternalDataDesc, Requirement), Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Requirement_MetaData), Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Requirement_MetaData) }; // 3321854298
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_ID_MetaData[] = {
		{ "Comment", "/** Unique identifier. Used only for bindable external data. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Unique identifier. Used only for bindable external data." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeExternalDataDesc, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_ID_MetaData), Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_ID_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Struct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Requirement_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Requirement,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_ID,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeExternalDataDesc",
		Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::PropPointers),
		sizeof(FStateTreeExternalDataDesc),
		alignof(FStateTreeExternalDataDesc),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeExternalDataDesc()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeExternalDataDesc.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeExternalDataDesc.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeExternalDataDesc.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeTransitionRequest;
class UScriptStruct* FStateTreeTransitionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeTransitionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeTransitionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeTransitionRequest, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeTransitionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeTransitionRequest.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeTransitionRequest>()
{
	return FStateTreeTransitionRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetState;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Priority_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Priority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Transition request */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Transition request" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeTransitionRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_SourceState_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Source state of the transition. Filled in by the StateTree execution context. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Source state of the transition. Filled in by the StateTree execution context." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_SourceState = { "SourceState", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTransitionRequest, SourceState), Z_Construct_UScriptStruct_FStateTreeStateHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_SourceState_MetaData), Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_SourceState_MetaData) }; // 3823543209
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_TargetState_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Target state of the transition. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Target state of the transition." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_TargetState = { "TargetState", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTransitionRequest, TargetState), Z_Construct_UScriptStruct_FStateTreeStateHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_TargetState_MetaData), Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_TargetState_MetaData) }; // 3823543209
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_Priority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Priority of the transition. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Priority of the transition." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTransitionRequest, Priority), Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_Priority_MetaData), Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_Priority_MetaData) }; // 3440802846
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_SourceState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_TargetState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_Priority_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_Priority,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeTransitionRequest",
		Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::PropPointers),
		sizeof(FStateTreeTransitionRequest),
		alignof(FStateTreeTransitionRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTransitionRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeTransitionRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeTransitionRequest.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeTransitionRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeActiveStates;
class UScriptStruct* FStateTreeActiveStates::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeActiveStates.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeActiveStates.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeActiveStates, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeActiveStates"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeActiveStates.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeActiveStates>()
{
	return FStateTreeActiveStates::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_States_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_States;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumStates_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_NumStates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Describes an array of active states in a State Tree.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Describes an array of active states in a State Tree." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeActiveStates>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::NewProp_States_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::NewProp_States = { "States", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(States, FStateTreeActiveStates), STRUCT_OFFSET(FStateTreeActiveStates, States), Z_Construct_UScriptStruct_FStateTreeStateHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::NewProp_States_MetaData), Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::NewProp_States_MetaData) }; // 3823543209
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::NewProp_NumStates_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::NewProp_NumStates = { "NumStates", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeActiveStates, NumStates), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::NewProp_NumStates_MetaData), Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::NewProp_NumStates_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::NewProp_States,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::NewProp_NumStates,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeActiveStates",
		Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::PropPointers),
		sizeof(FStateTreeActiveStates),
		alignof(FStateTreeActiveStates),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeActiveStates()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeActiveStates.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeActiveStates.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeActiveStates.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeTransitionSourceType;
	static UEnum* EStateTreeTransitionSourceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeTransitionSourceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStateTreeTransitionSourceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionSourceType, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeTransitionSourceType"));
		}
		return Z_Registration_Info_UEnum_EStateTreeTransitionSourceType.OuterSingleton;
	}
	template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeTransitionSourceType>()
	{
		return EStateTreeTransitionSourceType_StaticEnum();
	}
	struct Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionSourceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionSourceType_Statics::Enumerators[] = {
		{ "EStateTreeTransitionSourceType::Unset", (int64)EStateTreeTransitionSourceType::Unset },
		{ "EStateTreeTransitionSourceType::Asset", (int64)EStateTreeTransitionSourceType::Asset },
		{ "EStateTreeTransitionSourceType::ExternalRequest", (int64)EStateTreeTransitionSourceType::ExternalRequest },
		{ "EStateTreeTransitionSourceType::Internal", (int64)EStateTreeTransitionSourceType::Internal },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionSourceType_Statics::Enum_MetaDataParams[] = {
		{ "Asset.Name", "EStateTreeTransitionSourceType::Asset" },
		{ "ExternalRequest.Name", "EStateTreeTransitionSourceType::ExternalRequest" },
		{ "Internal.Name", "EStateTreeTransitionSourceType::Internal" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "Unset.Name", "EStateTreeTransitionSourceType::Unset" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionSourceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		"EStateTreeTransitionSourceType",
		"EStateTreeTransitionSourceType",
		Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionSourceType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionSourceType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionSourceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionSourceType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionSourceType()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeTransitionSourceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeTransitionSourceType.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionSourceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStateTreeTransitionSourceType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeTransitionSource;
class UScriptStruct* FStateTreeTransitionSource::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeTransitionSource.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeTransitionSource.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeTransitionSource, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeTransitionSource"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeTransitionSource.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeTransitionSource>()
{
	return FStateTreeTransitionSource::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeTransitionSource_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTransitionSource_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Describes the origin of an applied transition.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Describes the origin of an applied transition." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeTransitionSource_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeTransitionSource>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeTransitionSource_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeTransitionSource",
		nullptr,
		0,
		sizeof(FStateTreeTransitionSource),
		alignof(FStateTreeTransitionSource),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionSource_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeTransitionSource_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTransitionSource()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeTransitionSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeTransitionSource.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeTransitionSource_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeTransitionSource.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeTransitionResult;
class UScriptStruct* FStateTreeTransitionResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeTransitionResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeTransitionResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeTransitionResult, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeTransitionResult"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeTransitionResult.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeTransitionResult>()
{
	return FStateTreeTransitionResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentActiveStates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentActiveStates;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentRunStatus_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRunStatus_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentRunStatus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextActiveStates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NextActiveStates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentState;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ChangeType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChangeType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ChangeType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Priority_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Priority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Describes a state tree transition. Source is the state where the transition started, Target describes the state where the transition pointed at,\n * and Next describes the selected state. The reason Transition and Next are different is that Transition state can be a selector state,\n * in which case the children will be visited until a leaf state is found, which will be the next state.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Describes a state tree transition. Source is the state where the transition started, Target describes the state where the transition pointed at,\nand Next describes the selected state. The reason Transition and Next are different is that Transition state can be a selector state,\nin which case the children will be visited until a leaf state is found, which will be the next state." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeTransitionResult>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_CurrentActiveStates_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Current active states, where the transition started. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Current active states, where the transition started." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_CurrentActiveStates = { "CurrentActiveStates", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTransitionResult, CurrentActiveStates), Z_Construct_UScriptStruct_FStateTreeActiveStates, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_CurrentActiveStates_MetaData), Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_CurrentActiveStates_MetaData) }; // 2705429093
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_CurrentRunStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_CurrentRunStatus_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Current Run status. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Current Run status." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_CurrentRunStatus = { "CurrentRunStatus", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTransitionResult, CurrentRunStatus), Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_CurrentRunStatus_MetaData), Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_CurrentRunStatus_MetaData) }; // 2636554957
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_SourceState_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Transition source state */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Transition source state" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_SourceState = { "SourceState", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTransitionResult, SourceState), Z_Construct_UScriptStruct_FStateTreeStateHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_SourceState_MetaData), Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_SourceState_MetaData) }; // 3823543209
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_TargetState_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Transition target state */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Transition target state" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_TargetState = { "TargetState", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTransitionResult, TargetState), Z_Construct_UScriptStruct_FStateTreeStateHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_TargetState_MetaData), Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_TargetState_MetaData) }; // 3823543209
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_NextActiveStates_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** States selected as result of the transition. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "States selected as result of the transition." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_NextActiveStates = { "NextActiveStates", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTransitionResult, NextActiveStates), Z_Construct_UScriptStruct_FStateTreeActiveStates, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_NextActiveStates_MetaData), Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_NextActiveStates_MetaData) }; // 2705429093
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_CurrentState_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** The current state being executed. On enter/exit callbacks this is the state of the task. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "The current state being executed. On enter/exit callbacks this is the state of the task." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTransitionResult, CurrentState), Z_Construct_UScriptStruct_FStateTreeStateHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_CurrentState_MetaData), Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_CurrentState_MetaData) }; // 3823543209
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_ChangeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_ChangeType_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** If the change type is Sustained, then the CurrentState was reselected, or if Changed then the state was just activated. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "If the change type is Sustained, then the CurrentState was reselected, or if Changed then the state was just activated." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_ChangeType = { "ChangeType", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTransitionResult, ChangeType), Z_Construct_UEnum_StateTreeModule_EStateTreeStateChangeType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_ChangeType_MetaData), Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_ChangeType_MetaData) }; // 1747992240
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_Priority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Priority of the transition that caused the state change. */" },
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
		{ "ToolTip", "Priority of the transition that caused the state change." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTransitionResult, Priority), Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_Priority_MetaData), Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_Priority_MetaData) }; // 3440802846
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_CurrentActiveStates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_CurrentRunStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_CurrentRunStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_SourceState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_TargetState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_NextActiveStates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_CurrentState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_ChangeType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_ChangeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_Priority_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_Priority,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeTransitionResult",
		Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::PropPointers),
		sizeof(FStateTreeTransitionResult),
		alignof(FStateTreeTransitionResult),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTransitionResult()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeTransitionResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeTransitionResult.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeTransitionResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeExecutionState;
class UScriptStruct* FStateTreeExecutionState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeExecutionState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeExecutionState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeExecutionState, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeExecutionState"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeExecutionState.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeExecutionState>()
{
	return FStateTreeExecutionState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateTreeExecutionTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeExecutionState>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeExecutionState",
		nullptr,
		0,
		sizeof(FStateTreeExecutionState),
		alignof(FStateTreeExecutionState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeExecutionState()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeExecutionState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeExecutionState.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeExecutionState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeExecutionTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeExecutionTypes_h_Statics::EnumInfo[] = {
		{ EStateTreeUpdatePhase_StaticEnum, TEXT("EStateTreeUpdatePhase"), &Z_Registration_Info_UEnum_EStateTreeUpdatePhase, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2349422352U) },
		{ EStateTreeRunStatus_StaticEnum, TEXT("EStateTreeRunStatus"), &Z_Registration_Info_UEnum_EStateTreeRunStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2636554957U) },
		{ EStateTreeStateChangeType_StaticEnum, TEXT("EStateTreeStateChangeType"), &Z_Registration_Info_UEnum_EStateTreeStateChangeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1747992240U) },
		{ EStateTreeConditionEvaluationMode_StaticEnum, TEXT("EStateTreeConditionEvaluationMode"), &Z_Registration_Info_UEnum_EStateTreeConditionEvaluationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 502141676U) },
		{ EStateTreeTransitionSourceType_StaticEnum, TEXT("EStateTreeTransitionSourceType"), &Z_Registration_Info_UEnum_EStateTreeTransitionSourceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1195281432U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeExecutionTypes_h_Statics::ScriptStructInfo[] = {
		{ FStateTreeExternalDataHandle::StaticStruct, Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::NewStructOps, TEXT("StateTreeExternalDataHandle"), &Z_Registration_Info_UScriptStruct_StateTreeExternalDataHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeExternalDataHandle), 3909938875U) },
		{ FStateTreeExternalDataDesc::StaticStruct, Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewStructOps, TEXT("StateTreeExternalDataDesc"), &Z_Registration_Info_UScriptStruct_StateTreeExternalDataDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeExternalDataDesc), 1227302780U) },
		{ FStateTreeTransitionRequest::StaticStruct, Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewStructOps, TEXT("StateTreeTransitionRequest"), &Z_Registration_Info_UScriptStruct_StateTreeTransitionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeTransitionRequest), 1125986339U) },
		{ FStateTreeActiveStates::StaticStruct, Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::NewStructOps, TEXT("StateTreeActiveStates"), &Z_Registration_Info_UScriptStruct_StateTreeActiveStates, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeActiveStates), 2705429093U) },
		{ FStateTreeTransitionSource::StaticStruct, Z_Construct_UScriptStruct_FStateTreeTransitionSource_Statics::NewStructOps, TEXT("StateTreeTransitionSource"), &Z_Registration_Info_UScriptStruct_StateTreeTransitionSource, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeTransitionSource), 3418012988U) },
		{ FStateTreeTransitionResult::StaticStruct, Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewStructOps, TEXT("StateTreeTransitionResult"), &Z_Registration_Info_UScriptStruct_StateTreeTransitionResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeTransitionResult), 3276855612U) },
		{ FStateTreeExecutionState::StaticStruct, Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewStructOps, TEXT("StateTreeExecutionState"), &Z_Registration_Info_UScriptStruct_StateTreeExecutionState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeExecutionState), 260030353U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeExecutionTypes_h_1586341933(TEXT("/Script/StateTreeModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeExecutionTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeExecutionTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeExecutionTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeExecutionTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
