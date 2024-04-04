// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/StateTree/GameplayInteractionModifySlotTagTask.h"
#include "GameplayTagContainer.h"
#include "SmartObjectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayInteractionModifySlotTagTask() {}
// Cross Module References
	GAMEPLAYINTERACTIONSMODULE_API UEnum* Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionModifyGameplayTagOperation();
	GAMEPLAYINTERACTIONSMODULE_API UEnum* Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionTaskModify();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTask();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTaskInstanceData();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionStateTreeTask();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotHandle();
	UPackage* Z_Construct_UPackage__Script_GameplayInteractionsModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayInteractionModifySlotTagTaskInstanceData;
class UScriptStruct* FGameplayInteractionModifySlotTagTaskInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayInteractionModifySlotTagTaskInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayInteractionModifySlotTagTaskInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTaskInstanceData, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("GameplayInteractionModifySlotTagTaskInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayInteractionModifySlotTagTaskInstanceData.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FGameplayInteractionModifySlotTagTaskInstanceData>()
{
	return FGameplayInteractionModifySlotTagTaskInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTaskInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetSlot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTagRemoved_MetaData[];
#endif
		static void NewProp_bTagRemoved_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTagRemoved;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTaskInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionModifySlotTagTask.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTaskInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayInteractionModifySlotTagTaskInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTaskInstanceData_Statics::NewProp_TargetSlot_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Target slot whose tags are modified. */" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionModifySlotTagTask.h" },
		{ "ToolTip", "Target slot whose tags are modified." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTaskInstanceData_Statics::NewProp_TargetSlot = { "TargetSlot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayInteractionModifySlotTagTaskInstanceData, TargetSlot), Z_Construct_UScriptStruct_FSmartObjectSlotHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTaskInstanceData_Statics::NewProp_TargetSlot_MetaData), Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTaskInstanceData_Statics::NewProp_TargetSlot_MetaData) }; // 3459972307
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTaskInstanceData_Statics::NewProp_bTagRemoved_MetaData[] = {
		{ "Comment", "/** When using OnEnterStateUndoOnExitState, indicates if a tag was removed, and whether is should be restored on ExitState(). */" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionModifySlotTagTask.h" },
		{ "ToolTip", "When using OnEnterStateUndoOnExitState, indicates if a tag was removed, and whether is should be restored on ExitState()." },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTaskInstanceData_Statics::NewProp_bTagRemoved_SetBit(void* Obj)
	{
		((FGameplayInteractionModifySlotTagTaskInstanceData*)Obj)->bTagRemoved = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTaskInstanceData_Statics::NewProp_bTagRemoved = { "bTagRemoved", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameplayInteractionModifySlotTagTaskInstanceData), &Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTaskInstanceData_Statics::NewProp_bTagRemoved_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTaskInstanceData_Statics::NewProp_bTagRemoved_MetaData), Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTaskInstanceData_Statics::NewProp_bTagRemoved_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTaskInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTaskInstanceData_Statics::NewProp_TargetSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTaskInstanceData_Statics::NewProp_bTagRemoved,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTaskInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		nullptr,
		&NewStructOps,
		"GameplayInteractionModifySlotTagTaskInstanceData",
		Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTaskInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTaskInstanceData_Statics::PropPointers),
		sizeof(FGameplayInteractionModifySlotTagTaskInstanceData),
		alignof(FGameplayInteractionModifySlotTagTaskInstanceData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTaskInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTaskInstanceData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTaskInstanceData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTaskInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayInteractionModifySlotTagTaskInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayInteractionModifySlotTagTaskInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTaskInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayInteractionModifySlotTagTaskInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGameplayInteractionModifySlotTagTask>() == std::is_polymorphic<FGameplayInteractionStateTreeTask>(), "USTRUCT FGameplayInteractionModifySlotTagTask cannot be polymorphic unless super FGameplayInteractionStateTreeTask is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayInteractionModifySlotTagTask;
class UScriptStruct* FGameplayInteractionModifySlotTagTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayInteractionModifySlotTagTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayInteractionModifySlotTagTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTask, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("GameplayInteractionModifySlotTagTask"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayInteractionModifySlotTagTask.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FGameplayInteractionModifySlotTagTask>()
{
	return FGameplayInteractionModifySlotTagTask::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Modify_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modify_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Modify;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHandleExternalStopAsFailure_MetaData[];
#endif
		static void NewProp_bHandleExternalStopAsFailure_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHandleExternalStopAsFailure;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Operation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Operation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTask_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Gameplay Interactions|Smart Object" },
		{ "Comment", "/**\n * Task to modify Smart Object Slot tags.\n * The tags can be added or removed, and they can be modified for the duration of the task (OnEnterStateUndoOnExitState),\n * or permanently modified at the beginning or end of the state.\n */" },
		{ "DisplayName", "Modify Slot Tag" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionModifySlotTagTask.h" },
		{ "ToolTip", "Task to modify Smart Object Slot tags.\nThe tags can be added or removed, and they can be modified for the duration of the task (OnEnterStateUndoOnExitState),\nor permanently modified at the beginning or end of the state." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayInteractionModifySlotTagTask>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTask_Statics::NewProp_Modify_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTask_Statics::NewProp_Modify_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** When to modify the tags. */" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionModifySlotTagTask.h" },
		{ "ToolTip", "When to modify the tags." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTask_Statics::NewProp_Modify = { "Modify", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayInteractionModifySlotTagTask, Modify), Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionTaskModify, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTask_Statics::NewProp_Modify_MetaData), Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTask_Statics::NewProp_Modify_MetaData) }; // 4162065491
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTask_Statics::NewProp_bHandleExternalStopAsFailure_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** If true, handle external State Tree stop as a failure. */" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionModifySlotTagTask.h" },
		{ "ToolTip", "If true, handle external State Tree stop as a failure." },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTask_Statics::NewProp_bHandleExternalStopAsFailure_SetBit(void* Obj)
	{
		((FGameplayInteractionModifySlotTagTask*)Obj)->bHandleExternalStopAsFailure = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTask_Statics::NewProp_bHandleExternalStopAsFailure = { "bHandleExternalStopAsFailure", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameplayInteractionModifySlotTagTask), &Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTask_Statics::NewProp_bHandleExternalStopAsFailure_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTask_Statics::NewProp_bHandleExternalStopAsFailure_MetaData), Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTask_Statics::NewProp_bHandleExternalStopAsFailure_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTask_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTask_Statics::NewProp_Operation_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** How to modify the tags. */" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionModifySlotTagTask.h" },
		{ "ToolTip", "How to modify the tags." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTask_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayInteractionModifySlotTagTask, Operation), Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionModifyGameplayTagOperation, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTask_Statics::NewProp_Operation_MetaData), Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTask_Statics::NewProp_Operation_MetaData) }; // 2422808751
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTask_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** Tag to add or remove. */" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionModifySlotTagTask.h" },
		{ "ToolTip", "Tag to add or remove." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTask_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayInteractionModifySlotTagTask, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTask_Statics::NewProp_Tag_MetaData), Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTask_Statics::NewProp_Tag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTask_Statics::NewProp_Modify_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTask_Statics::NewProp_Modify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTask_Statics::NewProp_bHandleExternalStopAsFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTask_Statics::NewProp_Operation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTask_Statics::NewProp_Operation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTask_Statics::NewProp_Tag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		Z_Construct_UScriptStruct_FGameplayInteractionStateTreeTask,
		&NewStructOps,
		"GameplayInteractionModifySlotTagTask",
		Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTask_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTask_Statics::PropPointers),
		sizeof(FGameplayInteractionModifySlotTagTask),
		alignof(FGameplayInteractionModifySlotTagTask),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTask_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTask_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTask()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayInteractionModifySlotTagTask.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayInteractionModifySlotTagTask.InnerSingleton, Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTask_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayInteractionModifySlotTagTask.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionModifySlotTagTask_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionModifySlotTagTask_h_Statics::ScriptStructInfo[] = {
		{ FGameplayInteractionModifySlotTagTaskInstanceData::StaticStruct, Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTaskInstanceData_Statics::NewStructOps, TEXT("GameplayInteractionModifySlotTagTaskInstanceData"), &Z_Registration_Info_UScriptStruct_GameplayInteractionModifySlotTagTaskInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayInteractionModifySlotTagTaskInstanceData), 3027684654U) },
		{ FGameplayInteractionModifySlotTagTask::StaticStruct, Z_Construct_UScriptStruct_FGameplayInteractionModifySlotTagTask_Statics::NewStructOps, TEXT("GameplayInteractionModifySlotTagTask"), &Z_Registration_Info_UScriptStruct_GameplayInteractionModifySlotTagTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayInteractionModifySlotTagTask), 528091553U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionModifySlotTagTask_h_100419839(TEXT("/Script/GameplayInteractionsModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionModifySlotTagTask_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionModifySlotTagTask_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
