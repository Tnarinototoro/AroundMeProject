// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeEditorData.h"
#include "StateTreeEditorNode.h"
#include "StateTreeEditorPropertyBindings.h"
#include "StateTreeState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeEditorData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	STATETREEEDITORMODULE_API UClass* Z_Construct_UClass_UStateTreeEditorData();
	STATETREEEDITORMODULE_API UClass* Z_Construct_UClass_UStateTreeEditorData_NoRegister();
	STATETREEEDITORMODULE_API UClass* Z_Construct_UClass_UStateTreeEditorPropertyBindingsOwner_NoRegister();
	STATETREEEDITORMODULE_API UClass* Z_Construct_UClass_UStateTreeState_NoRegister();
	STATETREEEDITORMODULE_API UEnum* Z_Construct_UEnum_StateTreeEditorModule_EStateTreeVisitor();
	STATETREEEDITORMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEditorBreakpoint();
	STATETREEEDITORMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEditorNode();
	STATETREEEDITORMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEditorPropertyBindings();
	STATETREEEDITORMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeStateParameters();
	STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeSchema_NoRegister();
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeBreakpointType();
	UPackage* Z_Construct_UPackage__Script_StateTreeEditorModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeEditorBreakpoint;
class UScriptStruct* FStateTreeEditorBreakpoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeEditorBreakpoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeEditorBreakpoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeEditorBreakpoint, (UObject*)Z_Construct_UPackage__Script_StateTreeEditorModule(), TEXT("StateTreeEditorBreakpoint"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeEditorBreakpoint.OuterSingleton;
}
template<> STATETREEEDITORMODULE_API UScriptStruct* StaticStruct<FStateTreeEditorBreakpoint>()
{
	return FStateTreeEditorBreakpoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeEditorBreakpoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BreakpointType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BreakpointType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BreakpointType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeEditorBreakpoint_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateTreeEditorData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeEditorBreakpoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeEditorBreakpoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeEditorBreakpoint_Statics::NewProp_ID_MetaData[] = {
		{ "Comment", "/** Unique Id of the Node or State associated to the breakpoint. */" },
		{ "ModuleRelativePath", "Public/StateTreeEditorData.h" },
		{ "ToolTip", "Unique Id of the Node or State associated to the breakpoint." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeEditorBreakpoint_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeEditorBreakpoint, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEditorBreakpoint_Statics::NewProp_ID_MetaData), Z_Construct_UScriptStruct_FStateTreeEditorBreakpoint_Statics::NewProp_ID_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeEditorBreakpoint_Statics::NewProp_BreakpointType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeEditorBreakpoint_Statics::NewProp_BreakpointType_MetaData[] = {
		{ "Comment", "/** The event type that should trigger the breakpoint (e.g. OnEnter, OnExit, etc.). */" },
		{ "ModuleRelativePath", "Public/StateTreeEditorData.h" },
		{ "ToolTip", "The event type that should trigger the breakpoint (e.g. OnEnter, OnExit, etc.)." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreeEditorBreakpoint_Statics::NewProp_BreakpointType = { "BreakpointType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeEditorBreakpoint, BreakpointType), Z_Construct_UEnum_StateTreeModule_EStateTreeBreakpointType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEditorBreakpoint_Statics::NewProp_BreakpointType_MetaData), Z_Construct_UScriptStruct_FStateTreeEditorBreakpoint_Statics::NewProp_BreakpointType_MetaData) }; // 1700541664
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeEditorBreakpoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeEditorBreakpoint_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeEditorBreakpoint_Statics::NewProp_BreakpointType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeEditorBreakpoint_Statics::NewProp_BreakpointType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeEditorBreakpoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeEditorModule,
		nullptr,
		&NewStructOps,
		"StateTreeEditorBreakpoint",
		Z_Construct_UScriptStruct_FStateTreeEditorBreakpoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEditorBreakpoint_Statics::PropPointers),
		sizeof(FStateTreeEditorBreakpoint),
		alignof(FStateTreeEditorBreakpoint),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEditorBreakpoint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeEditorBreakpoint_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEditorBreakpoint_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEditorBreakpoint()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeEditorBreakpoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeEditorBreakpoint.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeEditorBreakpoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeEditorBreakpoint.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeVisitor;
	static UEnum* EStateTreeVisitor_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeVisitor.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStateTreeVisitor.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeEditorModule_EStateTreeVisitor, (UObject*)Z_Construct_UPackage__Script_StateTreeEditorModule(), TEXT("EStateTreeVisitor"));
		}
		return Z_Registration_Info_UEnum_EStateTreeVisitor.OuterSingleton;
	}
	template<> STATETREEEDITORMODULE_API UEnum* StaticEnum<EStateTreeVisitor>()
	{
		return EStateTreeVisitor_StaticEnum();
	}
	struct Z_Construct_UEnum_StateTreeEditorModule_EStateTreeVisitor_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StateTreeEditorModule_EStateTreeVisitor_Statics::Enumerators[] = {
		{ "EStateTreeVisitor::Continue", (int64)EStateTreeVisitor::Continue },
		{ "EStateTreeVisitor::Break", (int64)EStateTreeVisitor::Break },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StateTreeEditorModule_EStateTreeVisitor_Statics::Enum_MetaDataParams[] = {
		{ "Break.Name", "EStateTreeVisitor::Break" },
		{ "Continue.Name", "EStateTreeVisitor::Continue" },
		{ "ModuleRelativePath", "Public/StateTreeEditorData.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeEditorModule_EStateTreeVisitor_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StateTreeEditorModule,
		nullptr,
		"EStateTreeVisitor",
		"EStateTreeVisitor",
		Z_Construct_UEnum_StateTreeEditorModule_EStateTreeVisitor_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeEditorModule_EStateTreeVisitor_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeEditorModule_EStateTreeVisitor_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeEditorModule_EStateTreeVisitor_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_StateTreeEditorModule_EStateTreeVisitor()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeVisitor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeVisitor.InnerSingleton, Z_Construct_UEnum_StateTreeEditorModule_EStateTreeVisitor_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStateTreeVisitor.InnerSingleton;
	}
	void UStateTreeEditorData::StaticRegisterNativesUStateTreeEditorData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStateTreeEditorData);
	UClass* Z_Construct_UClass_UStateTreeEditorData_NoRegister()
	{
		return UStateTreeEditorData::StaticClass();
	}
	struct Z_Construct_UClass_UStateTreeEditorData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Schema_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Schema;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootParameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Evaluators_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Evaluators_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Evaluators;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalTasks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalTasks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GlobalTasks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorBindings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditorBindings;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SubTrees_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubTrees_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SubTrees;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Breakpoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Breakpoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Breakpoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStateTreeEditorData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeEditorModule,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeEditorData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeEditorData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Edit time data for StateTree asset. This data gets baked into runtime format before being used by the StateTreeInstance.\n */" },
		{ "IncludePath", "StateTreeEditorData.h" },
		{ "ModuleRelativePath", "Public/StateTreeEditorData.h" },
		{ "ToolTip", "Edit time data for StateTree asset. This data gets baked into runtime format before being used by the StateTreeInstance." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_Schema_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "/** Schema describing which inputs, evaluators, and tasks a StateTree can contain */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StateTreeEditorData.h" },
		{ "ToolTip", "Schema describing which inputs, evaluators, and tasks a StateTree can contain" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_Schema = { "Schema", nullptr, (EPropertyFlags)0x0016000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTreeEditorData, Schema), Z_Construct_UClass_UStateTreeSchema_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_Schema_MetaData), Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_Schema_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_RootParameters_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/** Public parameters that could be used for bindings within the Tree. */" },
		{ "ModuleRelativePath", "Public/StateTreeEditorData.h" },
		{ "ToolTip", "Public parameters that could be used for bindings within the Tree." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_RootParameters = { "RootParameters", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTreeEditorData, RootParameters), Z_Construct_UScriptStruct_FStateTreeStateParameters, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_RootParameters_MetaData), Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_RootParameters_MetaData) }; // 2347466896
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_Evaluators_Inner = { "Evaluators", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStateTreeEditorNode, METADATA_PARAMS(0, nullptr) }; // 1073282742
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_Evaluators_MetaData[] = {
		{ "BaseClass", "/Script/StateTreeModule.StateTreeEvaluatorBlueprintBase" },
		{ "BaseStruct", "/Script/StateTreeModule.StateTreeEvaluatorBase" },
		{ "Category", "Evaluators" },
		{ "ModuleRelativePath", "Public/StateTreeEditorData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_Evaluators = { "Evaluators", nullptr, (EPropertyFlags)0x0010008000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTreeEditorData, Evaluators), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_Evaluators_MetaData), Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_Evaluators_MetaData) }; // 1073282742
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_GlobalTasks_Inner = { "GlobalTasks", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStateTreeEditorNode, METADATA_PARAMS(0, nullptr) }; // 1073282742
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_GlobalTasks_MetaData[] = {
		{ "BaseClass", "/Script/StateTreeModule.StateTreeTaskBlueprintBase" },
		{ "BaseStruct", "/Script/StateTreeModule.StateTreeTaskBase" },
		{ "Category", "Global Tasks" },
		{ "ModuleRelativePath", "Public/StateTreeEditorData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_GlobalTasks = { "GlobalTasks", nullptr, (EPropertyFlags)0x0010008000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTreeEditorData, GlobalTasks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_GlobalTasks_MetaData), Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_GlobalTasks_MetaData) }; // 1073282742
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_EditorBindings_MetaData[] = {
		{ "ExcludeFromHash", "" },
		{ "ModuleRelativePath", "Public/StateTreeEditorData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_EditorBindings = { "EditorBindings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTreeEditorData, EditorBindings), Z_Construct_UScriptStruct_FStateTreeEditorPropertyBindings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_EditorBindings_MetaData), Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_EditorBindings_MetaData) }; // 1774043625
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_SubTrees_Inner = { "SubTrees", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStateTreeState_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_SubTrees_MetaData[] = {
		{ "Comment", "/** Top level States. */" },
		{ "ModuleRelativePath", "Public/StateTreeEditorData.h" },
		{ "ToolTip", "Top level States." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_SubTrees = { "SubTrees", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTreeEditorData, SubTrees), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_SubTrees_MetaData), Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_SubTrees_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_Breakpoints_Inner = { "Breakpoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStateTreeEditorBreakpoint, METADATA_PARAMS(0, nullptr) }; // 3194929906
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_Breakpoints_MetaData[] = {
		{ "Comment", "/**\n\x09 * Transient list of breakpoints added in the debugging session.\n\x09 * These will be lost if the asset gets reloaded.\n\x09 * If there is eventually a change to make those persist with the asset\n\x09 * we need to prune all dangling breakpoints after states/tasks got removed. (see RemoveUnusedBindings)\n\x09 */" },
		{ "ModuleRelativePath", "Public/StateTreeEditorData.h" },
		{ "ToolTip", "Transient list of breakpoints added in the debugging session.\nThese will be lost if the asset gets reloaded.\nIf there is eventually a change to make those persist with the asset\nwe need to prune all dangling breakpoints after states/tasks got removed. (see RemoveUnusedBindings)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_Breakpoints = { "Breakpoints", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTreeEditorData, Breakpoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_Breakpoints_MetaData), Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_Breakpoints_MetaData) }; // 3194929906
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStateTreeEditorData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_Schema,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_RootParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_Evaluators_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_Evaluators,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_GlobalTasks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_GlobalTasks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_EditorBindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_SubTrees_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_SubTrees,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_Breakpoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeEditorData_Statics::NewProp_Breakpoints,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UStateTreeEditorData_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UStateTreeEditorPropertyBindingsOwner_NoRegister, (int32)VTABLE_OFFSET(UStateTreeEditorData, IStateTreeEditorPropertyBindingsOwner), false },  // 1636495396
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeEditorData_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStateTreeEditorData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateTreeEditorData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStateTreeEditorData_Statics::ClassParams = {
		&UStateTreeEditorData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStateTreeEditorData_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeEditorData_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009030A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeEditorData_Statics::Class_MetaDataParams), Z_Construct_UClass_UStateTreeEditorData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeEditorData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UStateTreeEditorData()
	{
		if (!Z_Registration_Info_UClass_UStateTreeEditorData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStateTreeEditorData.OuterSingleton, Z_Construct_UClass_UStateTreeEditorData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStateTreeEditorData.OuterSingleton;
	}
	template<> STATETREEEDITORMODULE_API UClass* StaticClass<UStateTreeEditorData>()
	{
		return UStateTreeEditorData::StaticClass();
	}
	UStateTreeEditorData::UStateTreeEditorData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStateTreeEditorData);
	UStateTreeEditorData::~UStateTreeEditorData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_Statics::EnumInfo[] = {
		{ EStateTreeVisitor_StaticEnum, TEXT("EStateTreeVisitor"), &Z_Registration_Info_UEnum_EStateTreeVisitor, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3018213481U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_Statics::ScriptStructInfo[] = {
		{ FStateTreeEditorBreakpoint::StaticStruct, Z_Construct_UScriptStruct_FStateTreeEditorBreakpoint_Statics::NewStructOps, TEXT("StateTreeEditorBreakpoint"), &Z_Registration_Info_UScriptStruct_StateTreeEditorBreakpoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeEditorBreakpoint), 3194929906U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStateTreeEditorData, UStateTreeEditorData::StaticClass, TEXT("UStateTreeEditorData"), &Z_Registration_Info_UClass_UStateTreeEditorData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStateTreeEditorData), 2170214263U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_3954488118(TEXT("/Script/StateTreeEditorModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
