// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeTypes.h"
#include "GameplayTagContainer.h"
#include "PropertyBag.h"
#include "StateTreeIndexTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeConditionOperand();
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement();
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreePropertyUsage();
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeStateSelectionBehavior();
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeStateType();
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority();
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger();
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FCompactStateTransition();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FCompactStateTreeParameters();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FCompactStateTreeState();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeIndex16();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeStateHandle();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeStateIdToHandle();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeStateLink();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeStructRef();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedPropertyBag();
	UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeTransitionType;
	static UEnum* EStateTreeTransitionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeTransitionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStateTreeTransitionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeTransitionType"));
		}
		return Z_Registration_Info_UEnum_EStateTreeTransitionType.OuterSingleton;
	}
	template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeTransitionType>()
	{
		return EStateTreeTransitionType_StaticEnum();
	}
	struct Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType_Statics::Enumerators[] = {
		{ "EStateTreeTransitionType::None", (int64)EStateTreeTransitionType::None },
		{ "EStateTreeTransitionType::Succeeded", (int64)EStateTreeTransitionType::Succeeded },
		{ "EStateTreeTransitionType::Failed", (int64)EStateTreeTransitionType::Failed },
		{ "EStateTreeTransitionType::GotoState", (int64)EStateTreeTransitionType::GotoState },
		{ "EStateTreeTransitionType::NextState", (int64)EStateTreeTransitionType::NextState },
		{ "EStateTreeTransitionType::NotSet", (int64)EStateTreeTransitionType::NotSet },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Transitions behavior. */" },
		{ "Failed.Comment", "/** Stop State Tree or sub-tree and mark execution failed. */" },
		{ "Failed.Name", "EStateTreeTransitionType::Failed" },
		{ "Failed.ToolTip", "Stop State Tree or sub-tree and mark execution failed." },
		{ "GotoState.Comment", "/** Transition to the specified state. */" },
		{ "GotoState.Name", "EStateTreeTransitionType::GotoState" },
		{ "GotoState.ToolTip", "Transition to the specified state." },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "NextState.Comment", "/** Transition to the next sibling state. */" },
		{ "NextState.Name", "EStateTreeTransitionType::NextState" },
		{ "NextState.ToolTip", "Transition to the next sibling state." },
		{ "None.Comment", "/** No transition will take place. */" },
		{ "None.Name", "EStateTreeTransitionType::None" },
		{ "None.ToolTip", "No transition will take place." },
		{ "NotSet.Name", "EStateTreeTransitionType::NotSet" },
		{ "Succeeded.Comment", "/** Stop State Tree or sub-tree and mark execution succeeded. */" },
		{ "Succeeded.Name", "EStateTreeTransitionType::Succeeded" },
		{ "Succeeded.ToolTip", "Stop State Tree or sub-tree and mark execution succeeded." },
		{ "ToolTip", "Transitions behavior." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		"EStateTreeTransitionType",
		"EStateTreeTransitionType",
		Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeTransitionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeTransitionType.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStateTreeTransitionType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeConditionOperand;
	static UEnum* EStateTreeConditionOperand_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeConditionOperand.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStateTreeConditionOperand.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeConditionOperand, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeConditionOperand"));
		}
		return Z_Registration_Info_UEnum_EStateTreeConditionOperand.OuterSingleton;
	}
	template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeConditionOperand>()
	{
		return EStateTreeConditionOperand_StaticEnum();
	}
	struct Z_Construct_UEnum_StateTreeModule_EStateTreeConditionOperand_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StateTreeModule_EStateTreeConditionOperand_Statics::Enumerators[] = {
		{ "EStateTreeConditionOperand::Copy", (int64)EStateTreeConditionOperand::Copy },
		{ "EStateTreeConditionOperand::And", (int64)EStateTreeConditionOperand::And },
		{ "EStateTreeConditionOperand::Or", (int64)EStateTreeConditionOperand::Or },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StateTreeModule_EStateTreeConditionOperand_Statics::Enum_MetaDataParams[] = {
		{ "And.Comment", "/** Combine results with AND. */" },
		{ "And.Name", "EStateTreeConditionOperand::And" },
		{ "And.ToolTip", "Combine results with AND." },
		{ "Comment", "/** Operand between conditions */" },
		{ "Copy.Comment", "/** Copy result */" },
		{ "Copy.Hidden", "" },
		{ "Copy.Name", "EStateTreeConditionOperand::Copy" },
		{ "Copy.ToolTip", "Copy result" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "Or.Comment", "/** Combine results with OR. */" },
		{ "Or.Name", "EStateTreeConditionOperand::Or" },
		{ "Or.ToolTip", "Combine results with OR." },
		{ "ToolTip", "Operand between conditions" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeConditionOperand_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		"EStateTreeConditionOperand",
		"EStateTreeConditionOperand",
		Z_Construct_UEnum_StateTreeModule_EStateTreeConditionOperand_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeConditionOperand_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeConditionOperand_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeModule_EStateTreeConditionOperand_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeConditionOperand()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeConditionOperand.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeConditionOperand.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeConditionOperand_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStateTreeConditionOperand.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeStateType;
	static UEnum* EStateTreeStateType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeStateType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStateTreeStateType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeStateType, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeStateType"));
		}
		return Z_Registration_Info_UEnum_EStateTreeStateType.OuterSingleton;
	}
	template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeStateType>()
	{
		return EStateTreeStateType_StaticEnum();
	}
	struct Z_Construct_UEnum_StateTreeModule_EStateTreeStateType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StateTreeModule_EStateTreeStateType_Statics::Enumerators[] = {
		{ "EStateTreeStateType::State", (int64)EStateTreeStateType::State },
		{ "EStateTreeStateType::Group", (int64)EStateTreeStateType::Group },
		{ "EStateTreeStateType::Linked", (int64)EStateTreeStateType::Linked },
		{ "EStateTreeStateType::Subtree", (int64)EStateTreeStateType::Subtree },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StateTreeModule_EStateTreeStateType_Statics::Enum_MetaDataParams[] = {
		{ "Group.Comment", "/** A State containing just child states. */" },
		{ "Group.Name", "EStateTreeStateType::Group" },
		{ "Group.ToolTip", "A State containing just child states." },
		{ "Linked.Comment", "/** A State that is linked to another state in the tree (the execution continues on the linked state). */" },
		{ "Linked.Name", "EStateTreeStateType::Linked" },
		{ "Linked.ToolTip", "A State that is linked to another state in the tree (the execution continues on the linked state)." },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "State.Comment", "/** A State containing tasks and child states. */" },
		{ "State.Name", "EStateTreeStateType::State" },
		{ "State.ToolTip", "A State containing tasks and child states." },
		{ "Subtree.Comment", "/** A subtree that can be linked to. */" },
		{ "Subtree.Name", "EStateTreeStateType::Subtree" },
		{ "Subtree.ToolTip", "A subtree that can be linked to." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeStateType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		"EStateTreeStateType",
		"EStateTreeStateType",
		Z_Construct_UEnum_StateTreeModule_EStateTreeStateType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeStateType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeStateType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeModule_EStateTreeStateType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeStateType()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeStateType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeStateType.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeStateType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStateTreeStateType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeStateSelectionBehavior;
	static UEnum* EStateTreeStateSelectionBehavior_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeStateSelectionBehavior.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStateTreeStateSelectionBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeStateSelectionBehavior, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeStateSelectionBehavior"));
		}
		return Z_Registration_Info_UEnum_EStateTreeStateSelectionBehavior.OuterSingleton;
	}
	template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeStateSelectionBehavior>()
	{
		return EStateTreeStateSelectionBehavior_StaticEnum();
	}
	struct Z_Construct_UEnum_StateTreeModule_EStateTreeStateSelectionBehavior_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StateTreeModule_EStateTreeStateSelectionBehavior_Statics::Enumerators[] = {
		{ "EStateTreeStateSelectionBehavior::None", (int64)EStateTreeStateSelectionBehavior::None },
		{ "EStateTreeStateSelectionBehavior::TryEnterState", (int64)EStateTreeStateSelectionBehavior::TryEnterState },
		{ "EStateTreeStateSelectionBehavior::TrySelectChildrenInOrder", (int64)EStateTreeStateSelectionBehavior::TrySelectChildrenInOrder },
		{ "EStateTreeStateSelectionBehavior::TryFollowTransitions", (int64)EStateTreeStateSelectionBehavior::TryFollowTransitions },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StateTreeModule_EStateTreeStateSelectionBehavior_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "None.Comment", "/** The State cannot be directly selected. */" },
		{ "None.Name", "EStateTreeStateSelectionBehavior::None" },
		{ "None.ToolTip", "The State cannot be directly selected." },
		{ "TryEnterState.Comment", "/** When state is considered for selection, it is selected even if it has child states. */" },
		{ "TryEnterState.DisplayName", "Try Enter" },
		{ "TryEnterState.Name", "EStateTreeStateSelectionBehavior::TryEnterState" },
		{ "TryEnterState.ToolTip", "When state is considered for selection, it is selected even if it has child states." },
		{ "TryFollowTransitions.Comment", "/** When state is considered for selection, try to trigger the transitions instead. */" },
		{ "TryFollowTransitions.DisplayName", "Try Follow Transitions" },
		{ "TryFollowTransitions.Name", "EStateTreeStateSelectionBehavior::TryFollowTransitions" },
		{ "TryFollowTransitions.ToolTip", "When state is considered for selection, try to trigger the transitions instead." },
		{ "TrySelectChildrenInOrder.Comment", "/** When state is considered for selection, try to selects the first child state (in order they appear in the child list). If no child states are present, behaves like SelectState. */" },
		{ "TrySelectChildrenInOrder.DisplayName", "Try Select Children In Order" },
		{ "TrySelectChildrenInOrder.Name", "EStateTreeStateSelectionBehavior::TrySelectChildrenInOrder" },
		{ "TrySelectChildrenInOrder.ToolTip", "When state is considered for selection, try to selects the first child state (in order they appear in the child list). If no child states are present, behaves like SelectState." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeStateSelectionBehavior_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		"EStateTreeStateSelectionBehavior",
		"EStateTreeStateSelectionBehavior",
		Z_Construct_UEnum_StateTreeModule_EStateTreeStateSelectionBehavior_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeStateSelectionBehavior_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeStateSelectionBehavior_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeModule_EStateTreeStateSelectionBehavior_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeStateSelectionBehavior()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeStateSelectionBehavior.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeStateSelectionBehavior.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeStateSelectionBehavior_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStateTreeStateSelectionBehavior.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeTransitionTrigger;
	static UEnum* EStateTreeTransitionTrigger_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeTransitionTrigger.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStateTreeTransitionTrigger.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeTransitionTrigger"));
		}
		return Z_Registration_Info_UEnum_EStateTreeTransitionTrigger.OuterSingleton;
	}
	template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeTransitionTrigger>()
	{
		return EStateTreeTransitionTrigger_StaticEnum();
	}
	struct Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger_Statics::Enumerators[] = {
		{ "EStateTreeTransitionTrigger::None", (int64)EStateTreeTransitionTrigger::None },
		{ "EStateTreeTransitionTrigger::OnStateCompleted", (int64)EStateTreeTransitionTrigger::OnStateCompleted },
		{ "EStateTreeTransitionTrigger::OnStateSucceeded", (int64)EStateTreeTransitionTrigger::OnStateSucceeded },
		{ "EStateTreeTransitionTrigger::OnStateFailed", (int64)EStateTreeTransitionTrigger::OnStateFailed },
		{ "EStateTreeTransitionTrigger::OnTick", (int64)EStateTreeTransitionTrigger::OnTick },
		{ "EStateTreeTransitionTrigger::OnEvent", (int64)EStateTreeTransitionTrigger::OnEvent },
		{ "EStateTreeTransitionTrigger::MAX", (int64)EStateTreeTransitionTrigger::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Transitions trigger. */" },
		{ "MAX.Name", "EStateTreeTransitionTrigger::MAX" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EStateTreeTransitionTrigger::None" },
		{ "OnEvent.Comment", "/** Try trigger transition on specific State Tree event. */" },
		{ "OnEvent.Name", "EStateTreeTransitionTrigger::OnEvent" },
		{ "OnEvent.ToolTip", "Try trigger transition on specific State Tree event." },
		{ "OnStateCompleted.Comment", "/** Try trigger transition when a state succeeded or failed. */" },
		{ "OnStateCompleted.Name", "EStateTreeTransitionTrigger::OnStateCompleted" },
		{ "OnStateCompleted.ToolTip", "Try trigger transition when a state succeeded or failed." },
		{ "OnStateFailed.Comment", "/** Try trigger transition when a state failed. */" },
		{ "OnStateFailed.Name", "EStateTreeTransitionTrigger::OnStateFailed" },
		{ "OnStateFailed.ToolTip", "Try trigger transition when a state failed." },
		{ "OnStateSucceeded.Comment", "/** Try trigger transition when a state succeeded. */" },
		{ "OnStateSucceeded.Name", "EStateTreeTransitionTrigger::OnStateSucceeded" },
		{ "OnStateSucceeded.ToolTip", "Try trigger transition when a state succeeded." },
		{ "OnTick.Comment", "/** Try trigger transition each State Tree tick. */" },
		{ "OnTick.Name", "EStateTreeTransitionTrigger::OnTick" },
		{ "OnTick.ToolTip", "Try trigger transition each State Tree tick." },
		{ "ToolTip", "Transitions trigger." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		"EStateTreeTransitionTrigger",
		"EStateTreeTransitionTrigger",
		Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeTransitionTrigger.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeTransitionTrigger.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStateTreeTransitionTrigger.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeTransitionPriority;
	static UEnum* EStateTreeTransitionPriority_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeTransitionPriority.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStateTreeTransitionPriority.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeTransitionPriority"));
		}
		return Z_Registration_Info_UEnum_EStateTreeTransitionPriority.OuterSingleton;
	}
	template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeTransitionPriority>()
	{
		return EStateTreeTransitionPriority_StaticEnum();
	}
	struct Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority_Statics::Enumerators[] = {
		{ "EStateTreeTransitionPriority::None", (int64)EStateTreeTransitionPriority::None },
		{ "EStateTreeTransitionPriority::Normal", (int64)EStateTreeTransitionPriority::Normal },
		{ "EStateTreeTransitionPriority::Medium", (int64)EStateTreeTransitionPriority::Medium },
		{ "EStateTreeTransitionPriority::High", (int64)EStateTreeTransitionPriority::High },
		{ "EStateTreeTransitionPriority::Critical", (int64)EStateTreeTransitionPriority::Critical },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Transition priority. When multiple transitions trigger at the same time, the first transition of highest priority is selected. */" },
		{ "Critical.Comment", "/** Critical priority. */" },
		{ "Critical.Name", "EStateTreeTransitionPriority::Critical" },
		{ "Critical.ToolTip", "Critical priority." },
		{ "High.Comment", "/** High priority. */" },
		{ "High.Name", "EStateTreeTransitionPriority::High" },
		{ "High.ToolTip", "High priority." },
		{ "Medium.Comment", "/** Medium priority. */" },
		{ "Medium.Name", "EStateTreeTransitionPriority::Medium" },
		{ "Medium.ToolTip", "Medium priority." },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EStateTreeTransitionPriority::None" },
		{ "Normal.Comment", "/** Normal priority. */" },
		{ "Normal.Name", "EStateTreeTransitionPriority::Normal" },
		{ "Normal.ToolTip", "Normal priority." },
		{ "ToolTip", "Transition priority. When multiple transitions trigger at the same time, the first transition of highest priority is selected." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		"EStateTreeTransitionPriority",
		"EStateTreeTransitionPriority",
		Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeTransitionPriority.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeTransitionPriority.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStateTreeTransitionPriority.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeStateHandle;
class UScriptStruct* FStateTreeStateHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeStateHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeStateHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeStateHandle, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeStateHandle"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeStateHandle.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeStateHandle>()
{
	return FStateTreeStateHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FUInt16PropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Handle to a StateTree state */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Handle to a StateTree state" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeStateHandle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
#endif
	const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeStateHandle, Index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::NewProp_Index_MetaData), Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::NewProp_Index_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::NewProp_Index,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeStateHandle",
		Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::PropPointers),
		sizeof(FStateTreeStateHandle),
		alignof(FStateTreeStateHandle),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeStateHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeStateHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeStateHandle.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeStateHandle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeRandomTimeDuration;
class UScriptStruct* FStateTreeRandomTimeDuration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeRandomTimeDuration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeRandomTimeDuration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeRandomTimeDuration"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeRandomTimeDuration.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeRandomTimeDuration>()
{
	return FStateTreeRandomTimeDuration::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FUInt16PropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomVariance_MetaData[];
#endif
		static const UECodeGen_Private::FUInt16PropertyParams NewProp_RandomVariance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Time duration with random variance. Stored compactly as two uint16s, which gives time range of about 650 seconds.\n * The variance is symmetric (+-) around the specified duration.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Time duration with random variance. Stored compactly as two uint16s, which gives time range of about 650 seconds.\nThe variance is symmetric (+-) around the specified duration." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeRandomTimeDuration>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
#endif
	const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeRandomTimeDuration, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::NewProp_Duration_MetaData), Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::NewProp_Duration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::NewProp_RandomVariance_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
#endif
	const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::NewProp_RandomVariance = { "RandomVariance", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeRandomTimeDuration, RandomVariance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::NewProp_RandomVariance_MetaData), Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::NewProp_RandomVariance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::NewProp_RandomVariance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeRandomTimeDuration",
		Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::PropPointers),
		sizeof(FStateTreeRandomTimeDuration),
		alignof(FStateTreeRandomTimeDuration),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeRandomTimeDuration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeRandomTimeDuration.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeRandomTimeDuration.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CompactStateTransition;
class UScriptStruct* FCompactStateTransition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CompactStateTransition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CompactStateTransition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompactStateTransition, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("CompactStateTransition"));
	}
	return Z_Registration_Info_UScriptStruct_CompactStateTransition.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FCompactStateTransition>()
{
	return FCompactStateTransition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCompactStateTransition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConditionsBegin_MetaData[];
#endif
		static const UECodeGen_Private::FUInt16PropertyParams NewProp_ConditionsBegin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_State;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Delay_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Delay;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Trigger_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Trigger_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Trigger;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Priority_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConditionsNum_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ConditionsNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTransitionEnabled_MetaData[];
#endif
		static void NewProp_bTransitionEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransitionEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTransition_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *  Runtime representation of a StateTree transition.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Runtime representation of a StateTree transition." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompactStateTransition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_EventTag_MetaData[] = {
		{ "Comment", "/** Transition event tag, used when trigger type is event. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Transition event tag, used when trigger type is event." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTransition, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_EventTag_MetaData), Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_EventTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_ConditionsBegin_MetaData[] = {
		{ "Comment", "/** Index to first condition to test */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Index to first condition to test" },
	};
#endif
	const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_ConditionsBegin = { "ConditionsBegin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTransition, ConditionsBegin), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_ConditionsBegin_MetaData), Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_ConditionsBegin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_State_MetaData[] = {
		{ "Comment", "/** Target state of the transition */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Target state of the transition" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTransition, State), Z_Construct_UScriptStruct_FStateTreeStateHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_State_MetaData), Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_State_MetaData) }; // 3823543209
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Delay_MetaData[] = {
		{ "Comment", "/** Transition delay. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Transition delay." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTransition, Delay), Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Delay_MetaData), Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Delay_MetaData) }; // 110105832
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Trigger_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Trigger_MetaData[] = {
		{ "Comment", "/* Type of the transition trigger. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Type of the transition trigger." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Trigger = { "Trigger", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTransition, Trigger), Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Trigger_MetaData), Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Trigger_MetaData) }; // 2239744009
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Priority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Priority_MetaData[] = {
		{ "Comment", "/* Priority of the transition. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Priority of the transition." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTransition, Priority), Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Priority_MetaData), Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Priority_MetaData) }; // 3440802846
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_ConditionsNum_MetaData[] = {
		{ "Comment", "/** Number of conditions to test. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Number of conditions to test." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_ConditionsNum = { "ConditionsNum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTransition, ConditionsNum), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_ConditionsNum_MetaData), Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_ConditionsNum_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_bTransitionEnabled_MetaData[] = {
		{ "Comment", "/** Indicates if the transition is enabled and should be considered. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Indicates if the transition is enabled and should be considered." },
	};
#endif
	void Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_bTransitionEnabled_SetBit(void* Obj)
	{
		((FCompactStateTransition*)Obj)->bTransitionEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_bTransitionEnabled = { "bTransitionEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FCompactStateTransition), &Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_bTransitionEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_bTransitionEnabled_MetaData), Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_bTransitionEnabled_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompactStateTransition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_EventTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_ConditionsBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_State,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Delay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Trigger_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Trigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Priority_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_ConditionsNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_bTransitionEnabled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompactStateTransition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"CompactStateTransition",
		Z_Construct_UScriptStruct_FCompactStateTransition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTransition_Statics::PropPointers),
		sizeof(FCompactStateTransition),
		alignof(FCompactStateTransition),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTransition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCompactStateTransition_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTransition_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCompactStateTransition()
	{
		if (!Z_Registration_Info_UScriptStruct_CompactStateTransition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CompactStateTransition.InnerSingleton, Z_Construct_UScriptStruct_FCompactStateTransition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CompactStateTransition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CompactStateTreeState;
class UScriptStruct* FCompactStateTreeState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CompactStateTreeState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CompactStateTreeState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompactStateTreeState, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("CompactStateTreeState"));
	}
	return Z_Registration_Info_UScriptStruct_CompactStateTreeState.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FCompactStateTreeState>()
{
	return FCompactStateTreeState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCompactStateTreeState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkedState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinkedState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildrenBegin_MetaData[];
#endif
		static const UECodeGen_Private::FUInt16PropertyParams NewProp_ChildrenBegin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildrenEnd_MetaData[];
#endif
		static const UECodeGen_Private::FUInt16PropertyParams NewProp_ChildrenEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnterConditionsBegin_MetaData[];
#endif
		static const UECodeGen_Private::FUInt16PropertyParams NewProp_EnterConditionsBegin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionsBegin_MetaData[];
#endif
		static const UECodeGen_Private::FUInt16PropertyParams NewProp_TransitionsBegin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TasksBegin_MetaData[];
#endif
		static const UECodeGen_Private::FUInt16PropertyParams NewProp_TasksBegin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterInstanceIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterInstanceIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterDataViewIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterDataViewIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnterConditionsNum_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EnterConditionsNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionsNum_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TransitionsNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TasksNum_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TasksNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskInstanceStructNum_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TaskInstanceStructNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskInstanceObjectNum_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TaskInstanceObjectNum;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionBehavior_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectionBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasTransitionTasks_MetaData[];
#endif
		static void NewProp_bHasTransitionTasks_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasTransitionTasks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *  Runtime representation of a StateTree state.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Runtime representation of a StateTree state." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompactStateTreeState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** Name of the State */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Name of the State" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeState, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_LinkedState_MetaData[] = {
		{ "Comment", "/** Linked state handle if the state type is linked state. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Linked state handle if the state type is linked state." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_LinkedState = { "LinkedState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeState, LinkedState), Z_Construct_UScriptStruct_FStateTreeStateHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_LinkedState_MetaData), Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_LinkedState_MetaData) }; // 3823543209
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Parent_MetaData[] = {
		{ "Comment", "/** Parent state handle, invalid if root state. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Parent state handle, invalid if root state." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeState, Parent), Z_Construct_UScriptStruct_FStateTreeStateHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Parent_MetaData), Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Parent_MetaData) }; // 3823543209
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ChildrenBegin_MetaData[] = {
		{ "Comment", "/** Index to first child state */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Index to first child state" },
	};
#endif
	const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ChildrenBegin = { "ChildrenBegin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeState, ChildrenBegin), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ChildrenBegin_MetaData), Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ChildrenBegin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ChildrenEnd_MetaData[] = {
		{ "Comment", "/** Index one past the last child state. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Index one past the last child state." },
	};
#endif
	const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ChildrenEnd = { "ChildrenEnd", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeState, ChildrenEnd), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ChildrenEnd_MetaData), Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ChildrenEnd_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_EnterConditionsBegin_MetaData[] = {
		{ "Comment", "/** Index to first state enter condition */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Index to first state enter condition" },
	};
#endif
	const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_EnterConditionsBegin = { "EnterConditionsBegin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeState, EnterConditionsBegin), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_EnterConditionsBegin_MetaData), Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_EnterConditionsBegin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TransitionsBegin_MetaData[] = {
		{ "Comment", "/** Index to first transition */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Index to first transition" },
	};
#endif
	const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TransitionsBegin = { "TransitionsBegin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeState, TransitionsBegin), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TransitionsBegin_MetaData), Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TransitionsBegin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TasksBegin_MetaData[] = {
		{ "Comment", "/** Index to first task */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Index to first task" },
	};
#endif
	const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TasksBegin = { "TasksBegin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeState, TasksBegin), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TasksBegin_MetaData), Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TasksBegin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ParameterInstanceIndex_MetaData[] = {
		{ "Comment", "/** Index to state instance data. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Index to state instance data." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ParameterInstanceIndex = { "ParameterInstanceIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeState, ParameterInstanceIndex), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ParameterInstanceIndex_MetaData), Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ParameterInstanceIndex_MetaData) }; // 1063223217
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ParameterDataViewIndex_MetaData[] = {
		{ "Comment", "/** Data view index of the input parameters. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Data view index of the input parameters." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ParameterDataViewIndex = { "ParameterDataViewIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeState, ParameterDataViewIndex), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ParameterDataViewIndex_MetaData), Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ParameterDataViewIndex_MetaData) }; // 1063223217
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_EnterConditionsNum_MetaData[] = {
		{ "Comment", "/** Number of enter conditions */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Number of enter conditions" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_EnterConditionsNum = { "EnterConditionsNum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeState, EnterConditionsNum), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_EnterConditionsNum_MetaData), Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_EnterConditionsNum_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TransitionsNum_MetaData[] = {
		{ "Comment", "/** Number of transitions */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Number of transitions" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TransitionsNum = { "TransitionsNum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeState, TransitionsNum), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TransitionsNum_MetaData), Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TransitionsNum_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TasksNum_MetaData[] = {
		{ "Comment", "/** Number of tasks */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Number of tasks" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TasksNum = { "TasksNum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeState, TasksNum), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TasksNum_MetaData), Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TasksNum_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TaskInstanceStructNum_MetaData[] = {
		{ "Comment", "/** Number of tasks with struct instance data. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Number of tasks with struct instance data." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TaskInstanceStructNum = { "TaskInstanceStructNum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeState, TaskInstanceStructNum), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TaskInstanceStructNum_MetaData), Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TaskInstanceStructNum_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TaskInstanceObjectNum_MetaData[] = {
		{ "Comment", "/** Number of tasks with object instance data. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Number of tasks with object instance data." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TaskInstanceObjectNum = { "TaskInstanceObjectNum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeState, TaskInstanceObjectNum), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TaskInstanceObjectNum_MetaData), Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TaskInstanceObjectNum_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "/** Type of the state */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Type of the state" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeState, Type), Z_Construct_UEnum_StateTreeModule_EStateTreeStateType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Type_MetaData), Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Type_MetaData) }; // 3371915205
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_SelectionBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_SelectionBehavior_MetaData[] = {
		{ "Comment", "/** What to do when the state is considered for selection. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "What to do when the state is considered for selection." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_SelectionBehavior = { "SelectionBehavior", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeState, SelectionBehavior), Z_Construct_UEnum_StateTreeModule_EStateTreeStateSelectionBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_SelectionBehavior_MetaData), Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_SelectionBehavior_MetaData) }; // 2911112580
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bHasTransitionTasks_MetaData[] = {
		{ "Comment", "/** True if the state contains tasks that should be called during transition handling. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "True if the state contains tasks that should be called during transition handling." },
	};
#endif
	void Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bHasTransitionTasks_SetBit(void* Obj)
	{
		((FCompactStateTreeState*)Obj)->bHasTransitionTasks = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bHasTransitionTasks = { "bHasTransitionTasks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FCompactStateTreeState), &Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bHasTransitionTasks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bHasTransitionTasks_MetaData), Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bHasTransitionTasks_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Comment", "/** True if the state is Enabled (i.e. not explicitly marked as disabled). */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "True if the state is Enabled (i.e. not explicitly marked as disabled)." },
	};
#endif
	void Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FCompactStateTreeState*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FCompactStateTreeState), &Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bEnabled_MetaData), Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bEnabled_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_LinkedState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ChildrenBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ChildrenEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_EnterConditionsBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TransitionsBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TasksBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ParameterInstanceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ParameterDataViewIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_EnterConditionsNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TransitionsNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TasksNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TaskInstanceStructNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TaskInstanceObjectNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_SelectionBehavior_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_SelectionBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bHasTransitionTasks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bEnabled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"CompactStateTreeState",
		Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::PropPointers),
		sizeof(FCompactStateTreeState),
		alignof(FCompactStateTreeState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCompactStateTreeState()
	{
		if (!Z_Registration_Info_UScriptStruct_CompactStateTreeState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CompactStateTreeState.InnerSingleton, Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CompactStateTreeState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CompactStateTreeParameters;
class UScriptStruct* FCompactStateTreeParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CompactStateTreeParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CompactStateTreeParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompactStateTreeParameters, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("CompactStateTreeParameters"));
	}
	return Z_Registration_Info_UScriptStruct_CompactStateTreeParameters.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FCompactStateTreeParameters>()
{
	return FCompactStateTreeParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingsBatch_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BindingsBatch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompactStateTreeParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::NewProp_BindingsBatch_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::NewProp_BindingsBatch = { "BindingsBatch", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeParameters, BindingsBatch), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::NewProp_BindingsBatch_MetaData), Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::NewProp_BindingsBatch_MetaData) }; // 1063223217
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::NewProp_Parameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompactStateTreeParameters, Parameters), Z_Construct_UScriptStruct_FInstancedPropertyBag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::NewProp_Parameters_MetaData), Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::NewProp_Parameters_MetaData) }; // 4097115139
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::NewProp_BindingsBatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::NewProp_Parameters,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"CompactStateTreeParameters",
		Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::PropPointers),
		sizeof(FCompactStateTreeParameters),
		alignof(FCompactStateTreeParameters),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCompactStateTreeParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_CompactStateTreeParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CompactStateTreeParameters.InnerSingleton, Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CompactStateTreeParameters.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeExternalDataRequirement;
	static UEnum* EStateTreeExternalDataRequirement_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeExternalDataRequirement.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStateTreeExternalDataRequirement.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeExternalDataRequirement"));
		}
		return Z_Registration_Info_UEnum_EStateTreeExternalDataRequirement.OuterSingleton;
	}
	template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeExternalDataRequirement>()
	{
		return EStateTreeExternalDataRequirement_StaticEnum();
	}
	struct Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement_Statics::Enumerators[] = {
		{ "EStateTreeExternalDataRequirement::Required", (int64)EStateTreeExternalDataRequirement::Required },
		{ "EStateTreeExternalDataRequirement::Optional", (int64)EStateTreeExternalDataRequirement::Optional },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "Optional.Comment", "// StateTree cannot be executed if the data is not present.\n" },
		{ "Optional.Name", "EStateTreeExternalDataRequirement::Optional" },
		{ "Optional.ToolTip", "StateTree cannot be executed if the data is not present." },
		{ "Required.Name", "EStateTreeExternalDataRequirement::Required" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		"EStateTreeExternalDataRequirement",
		"EStateTreeExternalDataRequirement",
		Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeExternalDataRequirement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeExternalDataRequirement.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStateTreeExternalDataRequirement.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreePropertyUsage;
	static UEnum* EStateTreePropertyUsage_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStateTreePropertyUsage.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStateTreePropertyUsage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreePropertyUsage, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreePropertyUsage"));
		}
		return Z_Registration_Info_UEnum_EStateTreePropertyUsage.OuterSingleton;
	}
	template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreePropertyUsage>()
	{
		return EStateTreePropertyUsage_StaticEnum();
	}
	struct Z_Construct_UEnum_StateTreeModule_EStateTreePropertyUsage_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StateTreeModule_EStateTreePropertyUsage_Statics::Enumerators[] = {
		{ "EStateTreePropertyUsage::Invalid", (int64)EStateTreePropertyUsage::Invalid },
		{ "EStateTreePropertyUsage::Context", (int64)EStateTreePropertyUsage::Context },
		{ "EStateTreePropertyUsage::Input", (int64)EStateTreePropertyUsage::Input },
		{ "EStateTreePropertyUsage::Parameter", (int64)EStateTreePropertyUsage::Parameter },
		{ "EStateTreePropertyUsage::Output", (int64)EStateTreePropertyUsage::Output },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StateTreeModule_EStateTreePropertyUsage_Statics::Enum_MetaDataParams[] = {
		{ "Context.Name", "EStateTreePropertyUsage::Context" },
		{ "Input.Name", "EStateTreePropertyUsage::Input" },
		{ "Invalid.Name", "EStateTreePropertyUsage::Invalid" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "Output.Name", "EStateTreePropertyUsage::Output" },
		{ "Parameter.Name", "EStateTreePropertyUsage::Parameter" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreePropertyUsage_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		"EStateTreePropertyUsage",
		"EStateTreePropertyUsage",
		Z_Construct_UEnum_StateTreeModule_EStateTreePropertyUsage_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreePropertyUsage_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreePropertyUsage_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeModule_EStateTreePropertyUsage_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreePropertyUsage()
	{
		if (!Z_Registration_Info_UEnum_EStateTreePropertyUsage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreePropertyUsage.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreePropertyUsage_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStateTreePropertyUsage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeStateIdToHandle;
class UScriptStruct* FStateTreeStateIdToHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeStateIdToHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeStateIdToHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeStateIdToHandle, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeStateIdToHandle"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeStateIdToHandle.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeStateIdToHandle>()
{
	return FStateTreeStateIdToHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeStateIdToHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeStateIdToHandle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Pair of state guid and its associated state handle created at compilation.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Pair of state guid and its associated state handle created at compilation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeStateIdToHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeStateIdToHandle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeStateIdToHandle_Statics::NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeStateIdToHandle_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeStateIdToHandle, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStateIdToHandle_Statics::NewProp_Id_MetaData), Z_Construct_UScriptStruct_FStateTreeStateIdToHandle_Statics::NewProp_Id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeStateIdToHandle_Statics::NewProp_Handle_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeStateIdToHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeStateIdToHandle, Handle), Z_Construct_UScriptStruct_FStateTreeStateHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStateIdToHandle_Statics::NewProp_Handle_MetaData), Z_Construct_UScriptStruct_FStateTreeStateIdToHandle_Statics::NewProp_Handle_MetaData) }; // 3823543209
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeStateIdToHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeStateIdToHandle_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeStateIdToHandle_Statics::NewProp_Handle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeStateIdToHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeStateIdToHandle",
		Z_Construct_UScriptStruct_FStateTreeStateIdToHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStateIdToHandle_Statics::PropPointers),
		sizeof(FStateTreeStateIdToHandle),
		alignof(FStateTreeStateIdToHandle),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStateIdToHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeStateIdToHandle_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStateIdToHandle_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeStateIdToHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeStateIdToHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeStateIdToHandle.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeStateIdToHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeStateIdToHandle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeNodeIdToIndex;
class UScriptStruct* FStateTreeNodeIdToIndex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeNodeIdToIndex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeNodeIdToIndex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeNodeIdToIndex"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeNodeIdToIndex.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeNodeIdToIndex>()
{
	return FStateTreeNodeIdToIndex::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Pair of node id and its associated node index created at compilation.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Pair of node id and its associated node index created at compilation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeNodeIdToIndex>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex_Statics::NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeNodeIdToIndex, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex_Statics::NewProp_Id_MetaData), Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex_Statics::NewProp_Id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex_Statics::NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeNodeIdToIndex, Index), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex_Statics::NewProp_Index_MetaData), Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex_Statics::NewProp_Index_MetaData) }; // 1063223217
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex_Statics::NewProp_Index,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeNodeIdToIndex",
		Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex_Statics::PropPointers),
		sizeof(FStateTreeNodeIdToIndex),
		alignof(FStateTreeNodeIdToIndex),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeNodeIdToIndex.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeNodeIdToIndex.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeNodeIdToIndex.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeTransitionIdToIndex;
class UScriptStruct* FStateTreeTransitionIdToIndex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeTransitionIdToIndex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeTransitionIdToIndex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeTransitionIdToIndex"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeTransitionIdToIndex.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeTransitionIdToIndex>()
{
	return FStateTreeTransitionIdToIndex::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Pair of transition id and its associated compact transition index created at compilation.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Pair of transition id and its associated compact transition index created at compilation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeTransitionIdToIndex>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex_Statics::NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTransitionIdToIndex, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex_Statics::NewProp_Id_MetaData), Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex_Statics::NewProp_Id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex_Statics::NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTransitionIdToIndex, Index), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex_Statics::NewProp_Index_MetaData), Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex_Statics::NewProp_Index_MetaData) }; // 1063223217
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex_Statics::NewProp_Index,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeTransitionIdToIndex",
		Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex_Statics::PropPointers),
		sizeof(FStateTreeTransitionIdToIndex),
		alignof(FStateTreeTransitionIdToIndex),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeTransitionIdToIndex.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeTransitionIdToIndex.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeTransitionIdToIndex.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeStructRef;
class UScriptStruct* FStateTreeStructRef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeStructRef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeStructRef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeStructRef, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeStructRef"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeStructRef.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeStructRef>()
{
	return FStateTreeStructRef::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeStructRef_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeStructRef_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * StateTree struct ref allows to get a reference/pointer to a specified type via property binding.\n * It is useful for referencing larger properties to avoid copies of the data, or to be able to write to a bounds property.\n *\n * The expected type of the reference should be set in \"BaseStruct\" meta tag.\n *\n * Example:\n *\n *\x09USTRUCT()\n *\x09struct FAwesomeTaskInstanceData\n *\x09{\n *\x09\x09GENERATED_BODY()\n *\n *\x09\x09UPROPERTY(VisibleAnywhere, Category = Input, meta = (BaseStruct = \"/Script/AwesomeModule.AwesomeData\"))\n *\x09\x09""FStateTreeStructRef Data;\n *\x09};\n *\n *\n *\x09if (const FAwesomeData* Awesome = InstanceData.Data.GetPtr<FAwesomeData>())\n *\x09{\n *\x09\x09...\n *\x09}\n */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "StateTree struct ref allows to get a reference/pointer to a specified type via property binding.\nIt is useful for referencing larger properties to avoid copies of the data, or to be able to write to a bounds property.\n\nThe expected type of the reference should be set in \"BaseStruct\" meta tag.\n\nExample:\n\n    USTRUCT()\n    struct FAwesomeTaskInstanceData\n    {\n            GENERATED_BODY()\n\n            UPROPERTY(VisibleAnywhere, Category = Input, meta = (BaseStruct = \"/Script/AwesomeModule.AwesomeData\"))\n            FStateTreeStructRef Data;\n    };\n\n\n    if (const FAwesomeData* Awesome = InstanceData.Data.GetPtr<FAwesomeData>())\n    {\n            ...\n    }" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeStructRef_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeStructRef>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeStructRef_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeStructRef",
		nullptr,
		0,
		sizeof(FStateTreeStructRef),
		alignof(FStateTreeStructRef),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStructRef_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeStructRef_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeStructRef()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeStructRef.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeStructRef.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeStructRef_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeStructRef.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeStateLink;
class UScriptStruct* FStateTreeStateLink::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeStateLink.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeStateLink.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeStateLink, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeStateLink"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeStateLink.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeStateLink>()
{
	return FStateTreeStateLink::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeStateLink_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LinkType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LinkType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StateHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Link to another state in StateTree\n */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Link to another state in StateTree" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeStateLink>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Link" },
		{ "Comment", "/** Name of the state at the time of linking, used for error reporting. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Name of the state at the time of linking, used for error reporting." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeStateLink, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Link" },
		{ "Comment", "/** ID of the state linked to. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "ID of the state linked to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeStateLink, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_ID_MetaData), Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_ID_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_LinkType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_LinkType_MetaData[] = {
		{ "Category", "Link" },
		{ "Comment", "/** Type of the transition, used at edit time to describe e.g. next state (which is calculated at compile time). */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Type of the transition, used at edit time to describe e.g. next state (which is calculated at compile time)." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_LinkType = { "LinkType", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeStateLink, LinkType), Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_LinkType_MetaData), Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_LinkType_MetaData) }; // 2885401850
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeStateLink, Type_DEPRECATED), Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_Type_MetaData), Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_Type_MetaData) }; // 2885401850
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_StateHandle_MetaData[] = {
		{ "Comment", "/** Handle of the linked state. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Handle of the linked state." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_StateHandle = { "StateHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeStateLink, StateHandle), Z_Construct_UScriptStruct_FStateTreeStateHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_StateHandle_MetaData), Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_StateHandle_MetaData) }; // 3823543209
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_LinkType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_LinkType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_Type,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_StateHandle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeStateLink",
		Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::PropPointers),
		sizeof(FStateTreeStateLink),
		alignof(FStateTreeStateLink),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeStateLink()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeStateLink.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeStateLink.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeStateLink.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_Statics::EnumInfo[] = {
		{ EStateTreeTransitionType_StaticEnum, TEXT("EStateTreeTransitionType"), &Z_Registration_Info_UEnum_EStateTreeTransitionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2885401850U) },
		{ EStateTreeConditionOperand_StaticEnum, TEXT("EStateTreeConditionOperand"), &Z_Registration_Info_UEnum_EStateTreeConditionOperand, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1591817578U) },
		{ EStateTreeStateType_StaticEnum, TEXT("EStateTreeStateType"), &Z_Registration_Info_UEnum_EStateTreeStateType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3371915205U) },
		{ EStateTreeStateSelectionBehavior_StaticEnum, TEXT("EStateTreeStateSelectionBehavior"), &Z_Registration_Info_UEnum_EStateTreeStateSelectionBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2911112580U) },
		{ EStateTreeTransitionTrigger_StaticEnum, TEXT("EStateTreeTransitionTrigger"), &Z_Registration_Info_UEnum_EStateTreeTransitionTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2239744009U) },
		{ EStateTreeTransitionPriority_StaticEnum, TEXT("EStateTreeTransitionPriority"), &Z_Registration_Info_UEnum_EStateTreeTransitionPriority, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3440802846U) },
		{ EStateTreeExternalDataRequirement_StaticEnum, TEXT("EStateTreeExternalDataRequirement"), &Z_Registration_Info_UEnum_EStateTreeExternalDataRequirement, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3321854298U) },
		{ EStateTreePropertyUsage_StaticEnum, TEXT("EStateTreePropertyUsage"), &Z_Registration_Info_UEnum_EStateTreePropertyUsage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3039526800U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_Statics::ScriptStructInfo[] = {
		{ FStateTreeStateHandle::StaticStruct, Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::NewStructOps, TEXT("StateTreeStateHandle"), &Z_Registration_Info_UScriptStruct_StateTreeStateHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeStateHandle), 3823543209U) },
		{ FStateTreeRandomTimeDuration::StaticStruct, Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::NewStructOps, TEXT("StateTreeRandomTimeDuration"), &Z_Registration_Info_UScriptStruct_StateTreeRandomTimeDuration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeRandomTimeDuration), 110105832U) },
		{ FCompactStateTransition::StaticStruct, Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewStructOps, TEXT("CompactStateTransition"), &Z_Registration_Info_UScriptStruct_CompactStateTransition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCompactStateTransition), 1888468208U) },
		{ FCompactStateTreeState::StaticStruct, Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewStructOps, TEXT("CompactStateTreeState"), &Z_Registration_Info_UScriptStruct_CompactStateTreeState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCompactStateTreeState), 3203059373U) },
		{ FCompactStateTreeParameters::StaticStruct, Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::NewStructOps, TEXT("CompactStateTreeParameters"), &Z_Registration_Info_UScriptStruct_CompactStateTreeParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCompactStateTreeParameters), 1222105865U) },
		{ FStateTreeStateIdToHandle::StaticStruct, Z_Construct_UScriptStruct_FStateTreeStateIdToHandle_Statics::NewStructOps, TEXT("StateTreeStateIdToHandle"), &Z_Registration_Info_UScriptStruct_StateTreeStateIdToHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeStateIdToHandle), 3987546877U) },
		{ FStateTreeNodeIdToIndex::StaticStruct, Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex_Statics::NewStructOps, TEXT("StateTreeNodeIdToIndex"), &Z_Registration_Info_UScriptStruct_StateTreeNodeIdToIndex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeNodeIdToIndex), 4016101880U) },
		{ FStateTreeTransitionIdToIndex::StaticStruct, Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex_Statics::NewStructOps, TEXT("StateTreeTransitionIdToIndex"), &Z_Registration_Info_UScriptStruct_StateTreeTransitionIdToIndex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeTransitionIdToIndex), 3638182947U) },
		{ FStateTreeStructRef::StaticStruct, Z_Construct_UScriptStruct_FStateTreeStructRef_Statics::NewStructOps, TEXT("StateTreeStructRef"), &Z_Registration_Info_UScriptStruct_StateTreeStructRef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeStructRef), 4016687004U) },
		{ FStateTreeStateLink::StaticStruct, Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewStructOps, TEXT("StateTreeStateLink"), &Z_Registration_Info_UScriptStruct_StateTreeStateLink, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeStateLink), 3119722934U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_225297316(TEXT("/Script/StateTreeModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
