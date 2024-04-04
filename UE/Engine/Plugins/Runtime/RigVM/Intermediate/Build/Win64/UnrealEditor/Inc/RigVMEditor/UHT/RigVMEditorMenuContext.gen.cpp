// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/RigVMEditorMenuContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMEditorMenuContext() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	RIGVM_API UClass* Z_Construct_UClass_URigVMHost_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMBlueprint_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMGraph_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMNode_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMPin_NoRegister();
	RIGVMEDITOR_API UClass* Z_Construct_UClass_URigVMEditorMenuContext();
	RIGVMEDITOR_API UClass* Z_Construct_UClass_URigVMEditorMenuContext_NoRegister();
	RIGVMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMEditorGraphMenuContext();
	UPackage* Z_Construct_UPackage__Script_RigVMEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMEditorGraphMenuContext;
class UScriptStruct* FRigVMEditorGraphMenuContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMEditorGraphMenuContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMEditorGraphMenuContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMEditorGraphMenuContext, (UObject*)Z_Construct_UPackage__Script_RigVMEditor(), TEXT("RigVMEditorGraphMenuContext"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMEditorGraphMenuContext.OuterSingleton;
}
template<> RIGVMEDITOR_API UScriptStruct* StaticStruct<FRigVMEditorGraphMenuContext>()
{
	return FRigVMEditorGraphMenuContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMEditorGraphMenuContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Graph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Graph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Node;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pin_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Pin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMEditorGraphMenuContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Editor/RigVMEditorMenuContext.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMEditorGraphMenuContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMEditorGraphMenuContext>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMEditorGraphMenuContext_Statics::NewProp_Graph_MetaData[] = {
		{ "Category", "RigVMEditor" },
		{ "Comment", "/** The graph associated with this context. */" },
		{ "ModuleRelativePath", "Public/Editor/RigVMEditorMenuContext.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The graph associated with this context." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRigVMEditorGraphMenuContext_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMEditorGraphMenuContext, Graph), Z_Construct_UClass_URigVMGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMEditorGraphMenuContext_Statics::NewProp_Graph_MetaData), Z_Construct_UScriptStruct_FRigVMEditorGraphMenuContext_Statics::NewProp_Graph_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMEditorGraphMenuContext_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "RigVMEditor" },
		{ "Comment", "/** The node associated with this context. */" },
		{ "ModuleRelativePath", "Public/Editor/RigVMEditorMenuContext.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The node associated with this context." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRigVMEditorGraphMenuContext_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMEditorGraphMenuContext, Node), Z_Construct_UClass_URigVMNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMEditorGraphMenuContext_Statics::NewProp_Node_MetaData), Z_Construct_UScriptStruct_FRigVMEditorGraphMenuContext_Statics::NewProp_Node_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMEditorGraphMenuContext_Statics::NewProp_Pin_MetaData[] = {
		{ "Category", "RigVMEditor" },
		{ "Comment", "/** The pin associated with this context; may be NULL when over a node. */" },
		{ "ModuleRelativePath", "Public/Editor/RigVMEditorMenuContext.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The pin associated with this context; may be NULL when over a node." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRigVMEditorGraphMenuContext_Statics::NewProp_Pin = { "Pin", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMEditorGraphMenuContext, Pin), Z_Construct_UClass_URigVMPin_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMEditorGraphMenuContext_Statics::NewProp_Pin_MetaData), Z_Construct_UScriptStruct_FRigVMEditorGraphMenuContext_Statics::NewProp_Pin_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMEditorGraphMenuContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMEditorGraphMenuContext_Statics::NewProp_Graph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMEditorGraphMenuContext_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMEditorGraphMenuContext_Statics::NewProp_Pin,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMEditorGraphMenuContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMEditor,
		nullptr,
		&NewStructOps,
		"RigVMEditorGraphMenuContext",
		Z_Construct_UScriptStruct_FRigVMEditorGraphMenuContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMEditorGraphMenuContext_Statics::PropPointers),
		sizeof(FRigVMEditorGraphMenuContext),
		alignof(FRigVMEditorGraphMenuContext),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMEditorGraphMenuContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMEditorGraphMenuContext_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMEditorGraphMenuContext_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMEditorGraphMenuContext()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMEditorGraphMenuContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMEditorGraphMenuContext.InnerSingleton, Z_Construct_UScriptStruct_FRigVMEditorGraphMenuContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMEditorGraphMenuContext.InnerSingleton;
	}
	DEFINE_FUNCTION(URigVMEditorMenuContext::execGetGraphMenuContext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRigVMEditorGraphMenuContext*)Z_Param__Result=P_THIS->GetGraphMenuContext();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMEditorMenuContext::execIsAltDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAltDown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMEditorMenuContext::execGetRigVMHost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMHost**)Z_Param__Result=P_THIS->GetRigVMHost();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMEditorMenuContext::execGetRigVMBlueprint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMBlueprint**)Z_Param__Result=P_THIS->GetRigVMBlueprint();
		P_NATIVE_END;
	}
	void URigVMEditorMenuContext::StaticRegisterNativesURigVMEditorMenuContext()
	{
		UClass* Class = URigVMEditorMenuContext::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGraphMenuContext", &URigVMEditorMenuContext::execGetGraphMenuContext },
			{ "GetRigVMBlueprint", &URigVMEditorMenuContext::execGetRigVMBlueprint },
			{ "GetRigVMHost", &URigVMEditorMenuContext::execGetRigVMHost },
			{ "IsAltDown", &URigVMEditorMenuContext::execIsAltDown },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URigVMEditorMenuContext_GetGraphMenuContext_Statics
	{
		struct RigVMEditorMenuContext_eventGetGraphMenuContext_Parms
		{
			FRigVMEditorGraphMenuContext ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigVMEditorMenuContext_GetGraphMenuContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMEditorMenuContext_eventGetGraphMenuContext_Parms, ReturnValue), Z_Construct_UScriptStruct_FRigVMEditorGraphMenuContext, METADATA_PARAMS(0, nullptr) }; // 1253784281
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMEditorMenuContext_GetGraphMenuContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMEditorMenuContext_GetGraphMenuContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMEditorMenuContext_GetGraphMenuContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMEditor" },
		{ "Comment", "/** Returns context for graph node context menu */" },
		{ "ModuleRelativePath", "Public/Editor/RigVMEditorMenuContext.h" },
		{ "ToolTip", "Returns context for graph node context menu" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMEditorMenuContext_GetGraphMenuContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMEditorMenuContext, nullptr, "GetGraphMenuContext", nullptr, nullptr, Z_Construct_UFunction_URigVMEditorMenuContext_GetGraphMenuContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMEditorMenuContext_GetGraphMenuContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMEditorMenuContext_GetGraphMenuContext_Statics::RigVMEditorMenuContext_eventGetGraphMenuContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMEditorMenuContext_GetGraphMenuContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMEditorMenuContext_GetGraphMenuContext_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMEditorMenuContext_GetGraphMenuContext_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URigVMEditorMenuContext_GetGraphMenuContext_Statics::RigVMEditorMenuContext_eventGetGraphMenuContext_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URigVMEditorMenuContext_GetGraphMenuContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMEditorMenuContext_GetGraphMenuContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMEditorMenuContext_GetRigVMBlueprint_Statics
	{
		struct RigVMEditorMenuContext_eventGetRigVMBlueprint_Parms
		{
			URigVMBlueprint* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMEditorMenuContext_GetRigVMBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMEditorMenuContext_eventGetRigVMBlueprint_Parms, ReturnValue), Z_Construct_UClass_URigVMBlueprint_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMEditorMenuContext_GetRigVMBlueprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMEditorMenuContext_GetRigVMBlueprint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMEditorMenuContext_GetRigVMBlueprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMEditor" },
		{ "Comment", "/** Get the rigvm blueprint that we are editing */" },
		{ "ModuleRelativePath", "Public/Editor/RigVMEditorMenuContext.h" },
		{ "ToolTip", "Get the rigvm blueprint that we are editing" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMEditorMenuContext_GetRigVMBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMEditorMenuContext, nullptr, "GetRigVMBlueprint", nullptr, nullptr, Z_Construct_UFunction_URigVMEditorMenuContext_GetRigVMBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMEditorMenuContext_GetRigVMBlueprint_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMEditorMenuContext_GetRigVMBlueprint_Statics::RigVMEditorMenuContext_eventGetRigVMBlueprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMEditorMenuContext_GetRigVMBlueprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMEditorMenuContext_GetRigVMBlueprint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMEditorMenuContext_GetRigVMBlueprint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URigVMEditorMenuContext_GetRigVMBlueprint_Statics::RigVMEditorMenuContext_eventGetRigVMBlueprint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URigVMEditorMenuContext_GetRigVMBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMEditorMenuContext_GetRigVMBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMEditorMenuContext_GetRigVMHost_Statics
	{
		struct RigVMEditorMenuContext_eventGetRigVMHost_Parms
		{
			URigVMHost* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMEditorMenuContext_GetRigVMHost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMEditorMenuContext_eventGetRigVMHost_Parms, ReturnValue), Z_Construct_UClass_URigVMHost_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMEditorMenuContext_GetRigVMHost_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMEditorMenuContext_GetRigVMHost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMEditorMenuContext_GetRigVMHost_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMEditor" },
		{ "Comment", "/** Get the active rigvm host instance in the viewport */" },
		{ "ModuleRelativePath", "Public/Editor/RigVMEditorMenuContext.h" },
		{ "ToolTip", "Get the active rigvm host instance in the viewport" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMEditorMenuContext_GetRigVMHost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMEditorMenuContext, nullptr, "GetRigVMHost", nullptr, nullptr, Z_Construct_UFunction_URigVMEditorMenuContext_GetRigVMHost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMEditorMenuContext_GetRigVMHost_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMEditorMenuContext_GetRigVMHost_Statics::RigVMEditorMenuContext_eventGetRigVMHost_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMEditorMenuContext_GetRigVMHost_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMEditorMenuContext_GetRigVMHost_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMEditorMenuContext_GetRigVMHost_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URigVMEditorMenuContext_GetRigVMHost_Statics::RigVMEditorMenuContext_eventGetRigVMHost_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URigVMEditorMenuContext_GetRigVMHost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMEditorMenuContext_GetRigVMHost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMEditorMenuContext_IsAltDown_Statics
	{
		struct RigVMEditorMenuContext_eventIsAltDown_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URigVMEditorMenuContext_IsAltDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMEditorMenuContext_eventIsAltDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMEditorMenuContext_IsAltDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigVMEditorMenuContext_eventIsAltDown_Parms), &Z_Construct_UFunction_URigVMEditorMenuContext_IsAltDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMEditorMenuContext_IsAltDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMEditorMenuContext_IsAltDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMEditorMenuContext_IsAltDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMEditor" },
		{ "Comment", "/** Returns true if either alt key is down */" },
		{ "ModuleRelativePath", "Public/Editor/RigVMEditorMenuContext.h" },
		{ "ToolTip", "Returns true if either alt key is down" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMEditorMenuContext_IsAltDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMEditorMenuContext, nullptr, "IsAltDown", nullptr, nullptr, Z_Construct_UFunction_URigVMEditorMenuContext_IsAltDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMEditorMenuContext_IsAltDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMEditorMenuContext_IsAltDown_Statics::RigVMEditorMenuContext_eventIsAltDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMEditorMenuContext_IsAltDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMEditorMenuContext_IsAltDown_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMEditorMenuContext_IsAltDown_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URigVMEditorMenuContext_IsAltDown_Statics::RigVMEditorMenuContext_eventIsAltDown_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URigVMEditorMenuContext_IsAltDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMEditorMenuContext_IsAltDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMEditorMenuContext);
	UClass* Z_Construct_UClass_URigVMEditorMenuContext_NoRegister()
	{
		return URigVMEditorMenuContext::StaticClass();
	}
	struct Z_Construct_UClass_URigVMEditorMenuContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMEditorMenuContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEditorMenuContext_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_URigVMEditorMenuContext_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URigVMEditorMenuContext_GetGraphMenuContext, "GetGraphMenuContext" }, // 931671278
		{ &Z_Construct_UFunction_URigVMEditorMenuContext_GetRigVMBlueprint, "GetRigVMBlueprint" }, // 1479142356
		{ &Z_Construct_UFunction_URigVMEditorMenuContext_GetRigVMHost, "GetRigVMHost" }, // 961370920
		{ &Z_Construct_UFunction_URigVMEditorMenuContext_IsAltDown, "IsAltDown" }, // 2092272720
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEditorMenuContext_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMEditorMenuContext_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Editor/RigVMEditorMenuContext.h" },
		{ "ModuleRelativePath", "Public/Editor/RigVMEditorMenuContext.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMEditorMenuContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMEditorMenuContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMEditorMenuContext_Statics::ClassParams = {
		&URigVMEditorMenuContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEditorMenuContext_Statics::Class_MetaDataParams), Z_Construct_UClass_URigVMEditorMenuContext_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_URigVMEditorMenuContext()
	{
		if (!Z_Registration_Info_UClass_URigVMEditorMenuContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMEditorMenuContext.OuterSingleton, Z_Construct_UClass_URigVMEditorMenuContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMEditorMenuContext.OuterSingleton;
	}
	template<> RIGVMEDITOR_API UClass* StaticClass<URigVMEditorMenuContext>()
	{
		return URigVMEditorMenuContext::StaticClass();
	}
	URigVMEditorMenuContext::URigVMEditorMenuContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMEditorMenuContext);
	URigVMEditorMenuContext::~URigVMEditorMenuContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_Editor_RigVMEditorMenuContext_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_Editor_RigVMEditorMenuContext_h_Statics::ScriptStructInfo[] = {
		{ FRigVMEditorGraphMenuContext::StaticStruct, Z_Construct_UScriptStruct_FRigVMEditorGraphMenuContext_Statics::NewStructOps, TEXT("RigVMEditorGraphMenuContext"), &Z_Registration_Info_UScriptStruct_RigVMEditorGraphMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMEditorGraphMenuContext), 1253784281U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_Editor_RigVMEditorMenuContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMEditorMenuContext, URigVMEditorMenuContext::StaticClass, TEXT("URigVMEditorMenuContext"), &Z_Registration_Info_UClass_URigVMEditorMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMEditorMenuContext), 3912121188U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_Editor_RigVMEditorMenuContext_h_2637360976(TEXT("/Script/RigVMEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_Editor_RigVMEditorMenuContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_Editor_RigVMEditorMenuContext_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_Editor_RigVMEditorMenuContext_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_Editor_RigVMEditorMenuContext_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
