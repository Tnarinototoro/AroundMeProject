// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusNodeGraph.h"
#include "OptimusDataType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusNodeGraph() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComponentSourceBinding_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeDataInterface_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeGraph();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeGraph_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeGraphCollectionOwner_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeLink_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodePin_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusResourceDescription_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusVariableDescription_NoRegister();
	OPTIMUSCORE_API UEnum* Z_Construct_UEnum_OptimusCore_EOptimusNodeGraphType();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusDataTypeRef();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOptimusNodeGraphType;
	static UEnum* EOptimusNodeGraphType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOptimusNodeGraphType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOptimusNodeGraphType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OptimusCore_EOptimusNodeGraphType, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("EOptimusNodeGraphType"));
		}
		return Z_Registration_Info_UEnum_EOptimusNodeGraphType.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UEnum* StaticEnum<EOptimusNodeGraphType>()
	{
		return EOptimusNodeGraphType_StaticEnum();
	}
	struct Z_Construct_UEnum_OptimusCore_EOptimusNodeGraphType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OptimusCore_EOptimusNodeGraphType_Statics::Enumerators[] = {
		{ "EOptimusNodeGraphType::Setup", (int64)EOptimusNodeGraphType::Setup },
		{ "EOptimusNodeGraphType::Update", (int64)EOptimusNodeGraphType::Update },
		{ "EOptimusNodeGraphType::ExternalTrigger", (int64)EOptimusNodeGraphType::ExternalTrigger },
		{ "EOptimusNodeGraphType::Function", (int64)EOptimusNodeGraphType::Function },
		{ "EOptimusNodeGraphType::SubGraph", (int64)EOptimusNodeGraphType::SubGraph },
		{ "EOptimusNodeGraphType::Transient", (int64)EOptimusNodeGraphType::Transient },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OptimusCore_EOptimusNodeGraphType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** The use type of a particular graph */" },
		{ "ExternalTrigger.Comment", "/** Called on every tick */" },
		{ "ExternalTrigger.Name", "EOptimusNodeGraphType::ExternalTrigger" },
		{ "ExternalTrigger.ToolTip", "Called on every tick" },
		{ "Function.Comment", "/** Called when triggered from a blueprint */// Storage graphs\n" },
		{ "Function.Name", "EOptimusNodeGraphType::Function" },
		{ "Function.ToolTip", "Called when triggered from a blueprint // Storage graphs" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
		{ "Setup.Comment", "// Execution graphs\n" },
		{ "Setup.Name", "EOptimusNodeGraphType::Setup" },
		{ "Setup.ToolTip", "Execution graphs" },
		{ "SubGraph.Comment", "/** Used to store function graphs */" },
		{ "SubGraph.Name", "EOptimusNodeGraphType::SubGraph" },
		{ "SubGraph.ToolTip", "Used to store function graphs" },
		{ "ToolTip", "The use type of a particular graph" },
		{ "Transient.Comment", "/** Used to store sub-graphs within other graphs */" },
		{ "Transient.Name", "EOptimusNodeGraphType::Transient" },
		{ "Transient.ToolTip", "Used to store sub-graphs within other graphs" },
		{ "Update.Comment", "/** Called once during an actor's setup event */" },
		{ "Update.Name", "EOptimusNodeGraphType::Update" },
		{ "Update.ToolTip", "Called once during an actor's setup event" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OptimusCore_EOptimusNodeGraphType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OptimusCore,
		nullptr,
		"EOptimusNodeGraphType",
		"EOptimusNodeGraphType",
		Z_Construct_UEnum_OptimusCore_EOptimusNodeGraphType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OptimusCore_EOptimusNodeGraphType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OptimusCore_EOptimusNodeGraphType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OptimusCore_EOptimusNodeGraphType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OptimusCore_EOptimusNodeGraphType()
	{
		if (!Z_Registration_Info_UEnum_EOptimusNodeGraphType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOptimusNodeGraphType.InnerSingleton, Z_Construct_UEnum_OptimusCore_EOptimusNodeGraphType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOptimusNodeGraphType.InnerSingleton;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execRenameGraph)
	{
		P_GET_OBJECT(UOptimusNodeGraph,Z_Param_InGraph);
		P_GET_PROPERTY(FStrProperty,Z_Param_InNewName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RenameGraph(Z_Param_InGraph,Z_Param_InNewName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execMoveGraph)
	{
		P_GET_OBJECT(UOptimusNodeGraph,Z_Param_InGraph);
		P_GET_PROPERTY(FIntProperty,Z_Param_InInsertBefore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->MoveGraph(Z_Param_InGraph,Z_Param_InInsertBefore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execGetGraphs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UOptimusNodeGraph*>*)Z_Param__Result=P_THIS->GetGraphs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execIsSubGraphReference)
	{
		P_GET_OBJECT(UOptimusNode,Z_Param_InNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSubGraphReference(Z_Param_InNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execIsFunctionReference)
	{
		P_GET_OBJECT(UOptimusNode,Z_Param_InNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFunctionReference(Z_Param_InNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execIsKernelFunction)
	{
		P_GET_OBJECT(UOptimusNode,Z_Param_InNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsKernelFunction(Z_Param_InNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execIsCustomKernel)
	{
		P_GET_OBJECT(UOptimusNode,Z_Param_InNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCustomKernel(Z_Param_InNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execExpandCollapsedNodes)
	{
		P_GET_OBJECT(UOptimusNode,Z_Param_InFunctionNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UOptimusNode*>*)Z_Param__Result=P_THIS->ExpandCollapsedNodes(Z_Param_InFunctionNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execCollapseNodesToSubGraph)
	{
		P_GET_TARRAY_REF(UOptimusNode*,Z_Param_Out_InNodes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOptimusNode**)Z_Param__Result=P_THIS->CollapseNodesToSubGraph(Z_Param_Out_InNodes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execCollapseNodesToFunction)
	{
		P_GET_TARRAY_REF(UOptimusNode*,Z_Param_Out_InNodes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOptimusNode**)Z_Param__Result=P_THIS->CollapseNodesToFunction(Z_Param_Out_InNodes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execConvertFunctionToCustomKernel)
	{
		P_GET_OBJECT(UOptimusNode,Z_Param_InKernelFunction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOptimusNode**)Z_Param__Result=P_THIS->ConvertFunctionToCustomKernel(Z_Param_InKernelFunction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execConvertCustomKernelToFunction)
	{
		P_GET_OBJECT(UOptimusNode,Z_Param_InCustomKernel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOptimusNode**)Z_Param__Result=P_THIS->ConvertCustomKernelToFunction(Z_Param_InCustomKernel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execRemoveAllLinks)
	{
		P_GET_OBJECT(UOptimusNodePin,Z_Param_InNodePin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveAllLinks(Z_Param_InNodePin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execRemoveLink)
	{
		P_GET_OBJECT(UOptimusNodePin,Z_Param_InNodeOutputPin);
		P_GET_OBJECT(UOptimusNodePin,Z_Param_InNodeInputPin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveLink(Z_Param_InNodeOutputPin,Z_Param_InNodeInputPin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execAddLink)
	{
		P_GET_OBJECT(UOptimusNodePin,Z_Param_InNodeOutputPin);
		P_GET_OBJECT(UOptimusNodePin,Z_Param_InNodeInputPin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddLink(Z_Param_InNodeOutputPin,Z_Param_InNodeInputPin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execDuplicateNodes)
	{
		P_GET_TARRAY_REF(UOptimusNode*,Z_Param_Out_InNodes);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DuplicateNodes(Z_Param_Out_InNodes,Z_Param_Out_InPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execDuplicateNode)
	{
		P_GET_OBJECT(UOptimusNode,Z_Param_InNode);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOptimusNode**)Z_Param__Result=P_THIS->DuplicateNode(Z_Param_InNode,Z_Param_Out_InPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execRemoveNodes)
	{
		P_GET_TARRAY_REF(UOptimusNode*,Z_Param_Out_InNodes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveNodes(Z_Param_Out_InNodes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execRemoveNode)
	{
		P_GET_OBJECT(UOptimusNode,Z_Param_InNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveNode(Z_Param_InNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execAddComponentBindingGetNode)
	{
		P_GET_OBJECT(UOptimusComponentSourceBinding,Z_Param_InComponentBinding);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOptimusNode**)Z_Param__Result=P_THIS->AddComponentBindingGetNode(Z_Param_InComponentBinding,Z_Param_Out_InPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execAddVariableGetNode)
	{
		P_GET_OBJECT(UOptimusVariableDescription,Z_Param_InVariableDesc);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOptimusNode**)Z_Param__Result=P_THIS->AddVariableGetNode(Z_Param_InVariableDesc,Z_Param_Out_InPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execAddResourceSetNode)
	{
		P_GET_OBJECT(UOptimusResourceDescription,Z_Param_InResourceDesc);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOptimusNode**)Z_Param__Result=P_THIS->AddResourceSetNode(Z_Param_InResourceDesc,Z_Param_Out_InPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execAddResourceGetNode)
	{
		P_GET_OBJECT(UOptimusResourceDescription,Z_Param_InResourceDesc);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOptimusNode**)Z_Param__Result=P_THIS->AddResourceGetNode(Z_Param_InResourceDesc,Z_Param_Out_InPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execAddResourceNode)
	{
		P_GET_OBJECT(UOptimusResourceDescription,Z_Param_InResourceDesc);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOptimusNode**)Z_Param__Result=P_THIS->AddResourceNode(Z_Param_InResourceDesc,Z_Param_Out_InPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execAddDataInterfaceNode)
	{
		P_GET_OBJECT(UClass,Z_Param_InDataInterfaceClass);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOptimusNode**)Z_Param__Result=P_THIS->AddDataInterfaceNode(Z_Param_InDataInterfaceClass,Z_Param_Out_InPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execAddValueNode)
	{
		P_GET_STRUCT(FOptimusDataTypeRef,Z_Param_InDataTypeRef);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOptimusNode**)Z_Param__Result=P_THIS->AddValueNode(Z_Param_InDataTypeRef,Z_Param_Out_InPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execAddNode)
	{
		P_GET_OBJECT(UClass,Z_Param_InNodeClass);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOptimusNode**)Z_Param__Result=P_THIS->AddNode(Z_Param_InNodeClass,Z_Param_Out_InPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execGetGraphIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetGraphIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execIsFunctionGraph)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFunctionGraph();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execIsExecutionGraph)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsExecutionGraph();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execGetGraphType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOptimusNodeGraphType*)Z_Param__Result=P_THIS->GetGraphType();
		P_NATIVE_END;
	}
	void UOptimusNodeGraph::StaticRegisterNativesUOptimusNodeGraph()
	{
		UClass* Class = UOptimusNodeGraph::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddComponentBindingGetNode", &UOptimusNodeGraph::execAddComponentBindingGetNode },
			{ "AddDataInterfaceNode", &UOptimusNodeGraph::execAddDataInterfaceNode },
			{ "AddLink", &UOptimusNodeGraph::execAddLink },
			{ "AddNode", &UOptimusNodeGraph::execAddNode },
			{ "AddResourceGetNode", &UOptimusNodeGraph::execAddResourceGetNode },
			{ "AddResourceNode", &UOptimusNodeGraph::execAddResourceNode },
			{ "AddResourceSetNode", &UOptimusNodeGraph::execAddResourceSetNode },
			{ "AddValueNode", &UOptimusNodeGraph::execAddValueNode },
			{ "AddVariableGetNode", &UOptimusNodeGraph::execAddVariableGetNode },
			{ "CollapseNodesToFunction", &UOptimusNodeGraph::execCollapseNodesToFunction },
			{ "CollapseNodesToSubGraph", &UOptimusNodeGraph::execCollapseNodesToSubGraph },
			{ "ConvertCustomKernelToFunction", &UOptimusNodeGraph::execConvertCustomKernelToFunction },
			{ "ConvertFunctionToCustomKernel", &UOptimusNodeGraph::execConvertFunctionToCustomKernel },
			{ "DuplicateNode", &UOptimusNodeGraph::execDuplicateNode },
			{ "DuplicateNodes", &UOptimusNodeGraph::execDuplicateNodes },
			{ "ExpandCollapsedNodes", &UOptimusNodeGraph::execExpandCollapsedNodes },
			{ "GetGraphIndex", &UOptimusNodeGraph::execGetGraphIndex },
			{ "GetGraphs", &UOptimusNodeGraph::execGetGraphs },
			{ "GetGraphType", &UOptimusNodeGraph::execGetGraphType },
			{ "IsCustomKernel", &UOptimusNodeGraph::execIsCustomKernel },
			{ "IsExecutionGraph", &UOptimusNodeGraph::execIsExecutionGraph },
			{ "IsFunctionGraph", &UOptimusNodeGraph::execIsFunctionGraph },
			{ "IsFunctionReference", &UOptimusNodeGraph::execIsFunctionReference },
			{ "IsKernelFunction", &UOptimusNodeGraph::execIsKernelFunction },
			{ "IsSubGraphReference", &UOptimusNodeGraph::execIsSubGraphReference },
			{ "MoveGraph", &UOptimusNodeGraph::execMoveGraph },
			{ "RemoveAllLinks", &UOptimusNodeGraph::execRemoveAllLinks },
			{ "RemoveLink", &UOptimusNodeGraph::execRemoveLink },
			{ "RemoveNode", &UOptimusNodeGraph::execRemoveNode },
			{ "RemoveNodes", &UOptimusNodeGraph::execRemoveNodes },
			{ "RenameGraph", &UOptimusNodeGraph::execRenameGraph },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode_Statics
	{
		struct OptimusNodeGraph_eventAddComponentBindingGetNode_Parms
		{
			UOptimusComponentSourceBinding* InComponentBinding;
			FVector2D InPosition;
			UOptimusNode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponentBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPosition;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode_Statics::NewProp_InComponentBinding = { "InComponentBinding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventAddComponentBindingGetNode_Parms, InComponentBinding), Z_Construct_UClass_UOptimusComponentSourceBinding_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode_Statics::NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventAddComponentBindingGetNode_Parms, InPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode_Statics::NewProp_InPosition_MetaData), Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode_Statics::NewProp_InPosition_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventAddComponentBindingGetNode_Parms, ReturnValue), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode_Statics::NewProp_InComponentBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode_Statics::NewProp_InPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "AddComponentBindingGetNode", nullptr, nullptr, Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode_Statics::OptimusNodeGraph_eventAddComponentBindingGetNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode_Statics::OptimusNodeGraph_eventAddComponentBindingGetNode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics
	{
		struct OptimusNodeGraph_eventAddDataInterfaceNode_Parms
		{
			const TSubclassOf<UOptimusComputeDataInterface>  InDataInterfaceClass;
			FVector2D InPosition;
			UOptimusNode* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDataInterfaceClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InDataInterfaceClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPosition;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::NewProp_InDataInterfaceClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::NewProp_InDataInterfaceClass = { "InDataInterfaceClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventAddDataInterfaceNode_Parms, InDataInterfaceClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UOptimusComputeDataInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::NewProp_InDataInterfaceClass_MetaData), Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::NewProp_InDataInterfaceClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventAddDataInterfaceNode_Parms, InPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::NewProp_InPosition_MetaData), Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::NewProp_InPosition_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventAddDataInterfaceNode_Parms, ReturnValue), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::NewProp_InDataInterfaceClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::NewProp_InPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "AddDataInterfaceNode", nullptr, nullptr, Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::OptimusNodeGraph_eventAddDataInterfaceNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::OptimusNodeGraph_eventAddDataInterfaceNode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_AddLink_Statics
	{
		struct OptimusNodeGraph_eventAddLink_Parms
		{
			UOptimusNodePin* InNodeOutputPin;
			UOptimusNodePin* InNodeInputPin;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InNodeOutputPin;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InNodeInputPin;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddLink_Statics::NewProp_InNodeOutputPin = { "InNodeOutputPin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventAddLink_Parms, InNodeOutputPin), Z_Construct_UClass_UOptimusNodePin_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddLink_Statics::NewProp_InNodeInputPin = { "InNodeInputPin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventAddLink_Parms, InNodeInputPin), Z_Construct_UClass_UOptimusNodePin_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UOptimusNodeGraph_AddLink_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OptimusNodeGraph_eventAddLink_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddLink_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusNodeGraph_eventAddLink_Parms), &Z_Construct_UFunction_UOptimusNodeGraph_AddLink_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_AddLink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddLink_Statics::NewProp_InNodeOutputPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddLink_Statics::NewProp_InNodeInputPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddLink_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_AddLink_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_AddLink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "AddLink", nullptr, nullptr, Z_Construct_UFunction_UOptimusNodeGraph_AddLink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddLink_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusNodeGraph_AddLink_Statics::OptimusNodeGraph_eventAddLink_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddLink_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusNodeGraph_AddLink_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddLink_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOptimusNodeGraph_AddLink_Statics::OptimusNodeGraph_eventAddLink_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_AddLink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_AddLink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics
	{
		struct OptimusNodeGraph_eventAddNode_Parms
		{
			const TSubclassOf<UOptimusNode>  InNodeClass;
			FVector2D InPosition;
			UOptimusNode* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNodeClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InNodeClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPosition;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::NewProp_InNodeClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::NewProp_InNodeClass = { "InNodeClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventAddNode_Parms, InNodeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::NewProp_InNodeClass_MetaData), Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::NewProp_InNodeClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventAddNode_Parms, InPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::NewProp_InPosition_MetaData), Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::NewProp_InPosition_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventAddNode_Parms, ReturnValue), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::NewProp_InNodeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::NewProp_InPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "Comment", "// TODO: Add magic connection from a pin.\n" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
		{ "ToolTip", "TODO: Add magic connection from a pin." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "AddNode", nullptr, nullptr, Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::OptimusNodeGraph_eventAddNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::OptimusNodeGraph_eventAddNode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_AddNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode_Statics
	{
		struct OptimusNodeGraph_eventAddResourceGetNode_Parms
		{
			UOptimusResourceDescription* InResourceDesc;
			FVector2D InPosition;
			UOptimusNode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InResourceDesc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPosition;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode_Statics::NewProp_InResourceDesc = { "InResourceDesc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventAddResourceGetNode_Parms, InResourceDesc), Z_Construct_UClass_UOptimusResourceDescription_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode_Statics::NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventAddResourceGetNode_Parms, InPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode_Statics::NewProp_InPosition_MetaData), Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode_Statics::NewProp_InPosition_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventAddResourceGetNode_Parms, ReturnValue), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode_Statics::NewProp_InResourceDesc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode_Statics::NewProp_InPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "AddResourceGetNode", nullptr, nullptr, Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode_Statics::OptimusNodeGraph_eventAddResourceGetNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode_Statics::OptimusNodeGraph_eventAddResourceGetNode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode_Statics
	{
		struct OptimusNodeGraph_eventAddResourceNode_Parms
		{
			UOptimusResourceDescription* InResourceDesc;
			FVector2D InPosition;
			UOptimusNode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InResourceDesc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPosition;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode_Statics::NewProp_InResourceDesc = { "InResourceDesc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventAddResourceNode_Parms, InResourceDesc), Z_Construct_UClass_UOptimusResourceDescription_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode_Statics::NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventAddResourceNode_Parms, InPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode_Statics::NewProp_InPosition_MetaData), Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode_Statics::NewProp_InPosition_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventAddResourceNode_Parms, ReturnValue), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode_Statics::NewProp_InResourceDesc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode_Statics::NewProp_InPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "AddResourceNode", nullptr, nullptr, Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode_Statics::OptimusNodeGraph_eventAddResourceNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode_Statics::OptimusNodeGraph_eventAddResourceNode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode_Statics
	{
		struct OptimusNodeGraph_eventAddResourceSetNode_Parms
		{
			UOptimusResourceDescription* InResourceDesc;
			FVector2D InPosition;
			UOptimusNode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InResourceDesc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPosition;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode_Statics::NewProp_InResourceDesc = { "InResourceDesc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventAddResourceSetNode_Parms, InResourceDesc), Z_Construct_UClass_UOptimusResourceDescription_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode_Statics::NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventAddResourceSetNode_Parms, InPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode_Statics::NewProp_InPosition_MetaData), Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode_Statics::NewProp_InPosition_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventAddResourceSetNode_Parms, ReturnValue), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode_Statics::NewProp_InResourceDesc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode_Statics::NewProp_InPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "AddResourceSetNode", nullptr, nullptr, Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode_Statics::OptimusNodeGraph_eventAddResourceSetNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode_Statics::OptimusNodeGraph_eventAddResourceSetNode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode_Statics
	{
		struct OptimusNodeGraph_eventAddValueNode_Parms
		{
			FOptimusDataTypeRef InDataTypeRef;
			FVector2D InPosition;
			UOptimusNode* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InDataTypeRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPosition;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode_Statics::NewProp_InDataTypeRef = { "InDataTypeRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventAddValueNode_Parms, InDataTypeRef), Z_Construct_UScriptStruct_FOptimusDataTypeRef, METADATA_PARAMS(0, nullptr) }; // 4267076562
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode_Statics::NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventAddValueNode_Parms, InPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode_Statics::NewProp_InPosition_MetaData), Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode_Statics::NewProp_InPosition_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventAddValueNode_Parms, ReturnValue), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode_Statics::NewProp_InDataTypeRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode_Statics::NewProp_InPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "AddValueNode", nullptr, nullptr, Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode_Statics::OptimusNodeGraph_eventAddValueNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode_Statics::OptimusNodeGraph_eventAddValueNode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode_Statics
	{
		struct OptimusNodeGraph_eventAddVariableGetNode_Parms
		{
			UOptimusVariableDescription* InVariableDesc;
			FVector2D InPosition;
			UOptimusNode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InVariableDesc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPosition;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode_Statics::NewProp_InVariableDesc = { "InVariableDesc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventAddVariableGetNode_Parms, InVariableDesc), Z_Construct_UClass_UOptimusVariableDescription_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode_Statics::NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventAddVariableGetNode_Parms, InPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode_Statics::NewProp_InPosition_MetaData), Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode_Statics::NewProp_InPosition_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventAddVariableGetNode_Parms, ReturnValue), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode_Statics::NewProp_InVariableDesc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode_Statics::NewProp_InPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "AddVariableGetNode", nullptr, nullptr, Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode_Statics::OptimusNodeGraph_eventAddVariableGetNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode_Statics::OptimusNodeGraph_eventAddVariableGetNode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction_Statics
	{
		struct OptimusNodeGraph_eventCollapseNodesToFunction_Parms
		{
			TArray<UOptimusNode*> InNodes;
			UOptimusNode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InNodes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction_Statics::NewProp_InNodes_Inner = { "InNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction_Statics::NewProp_InNodes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction_Statics::NewProp_InNodes = { "InNodes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventCollapseNodesToFunction_Parms, InNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction_Statics::NewProp_InNodes_MetaData), Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction_Statics::NewProp_InNodes_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventCollapseNodesToFunction_Parms, ReturnValue), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction_Statics::NewProp_InNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction_Statics::NewProp_InNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "Comment", "/** Take a set of nodes and collapse them into a single function, replacing the given nodes\n\x09 *  with the new function node and returning it. A new function definition is made available\n\x09 *  as a new Function graph in the package.\n\x09 */" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
		{ "ToolTip", "Take a set of nodes and collapse them into a single function, replacing the given nodes\nwith the new function node and returning it. A new function definition is made available\nas a new Function graph in the package." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "CollapseNodesToFunction", nullptr, nullptr, Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction_Statics::OptimusNodeGraph_eventCollapseNodesToFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction_Statics::OptimusNodeGraph_eventCollapseNodesToFunction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph_Statics
	{
		struct OptimusNodeGraph_eventCollapseNodesToSubGraph_Parms
		{
			TArray<UOptimusNode*> InNodes;
			UOptimusNode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InNodes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph_Statics::NewProp_InNodes_Inner = { "InNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph_Statics::NewProp_InNodes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph_Statics::NewProp_InNodes = { "InNodes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventCollapseNodesToSubGraph_Parms, InNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph_Statics::NewProp_InNodes_MetaData), Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph_Statics::NewProp_InNodes_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventCollapseNodesToSubGraph_Parms, ReturnValue), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph_Statics::NewProp_InNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph_Statics::NewProp_InNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "Comment", "/** Take a set of nodes and collapse them into a subgraph, replacing the given nodes\n\x09 *  with a new subgraph node and returning it. \n\x09 */" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
		{ "ToolTip", "Take a set of nodes and collapse them into a subgraph, replacing the given nodes\nwith a new subgraph node and returning it." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "CollapseNodesToSubGraph", nullptr, nullptr, Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph_Statics::OptimusNodeGraph_eventCollapseNodesToSubGraph_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph_Statics::OptimusNodeGraph_eventCollapseNodesToSubGraph_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_ConvertCustomKernelToFunction_Statics
	{
		struct OptimusNodeGraph_eventConvertCustomKernelToFunction_Parms
		{
			UOptimusNode* InCustomKernel;
			UOptimusNode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InCustomKernel;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_ConvertCustomKernelToFunction_Statics::NewProp_InCustomKernel = { "InCustomKernel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventConvertCustomKernelToFunction_Parms, InCustomKernel), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_ConvertCustomKernelToFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventConvertCustomKernelToFunction_Parms, ReturnValue), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_ConvertCustomKernelToFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_ConvertCustomKernelToFunction_Statics::NewProp_InCustomKernel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_ConvertCustomKernelToFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_ConvertCustomKernelToFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "Comment", "/** Takes a custom kernel and converts to a packaged function. If the given node is not a\n\x09 *  custom kernel or cannot be converted, a nullptr is returned.\n\x09 */" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
		{ "ToolTip", "Takes a custom kernel and converts to a packaged function. If the given node is not a\ncustom kernel or cannot be converted, a nullptr is returned." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_ConvertCustomKernelToFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "ConvertCustomKernelToFunction", nullptr, nullptr, Z_Construct_UFunction_UOptimusNodeGraph_ConvertCustomKernelToFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_ConvertCustomKernelToFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusNodeGraph_ConvertCustomKernelToFunction_Statics::OptimusNodeGraph_eventConvertCustomKernelToFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_ConvertCustomKernelToFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusNodeGraph_ConvertCustomKernelToFunction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_ConvertCustomKernelToFunction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOptimusNodeGraph_ConvertCustomKernelToFunction_Statics::OptimusNodeGraph_eventConvertCustomKernelToFunction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_ConvertCustomKernelToFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_ConvertCustomKernelToFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_ConvertFunctionToCustomKernel_Statics
	{
		struct OptimusNodeGraph_eventConvertFunctionToCustomKernel_Parms
		{
			UOptimusNode* InKernelFunction;
			UOptimusNode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InKernelFunction;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_ConvertFunctionToCustomKernel_Statics::NewProp_InKernelFunction = { "InKernelFunction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventConvertFunctionToCustomKernel_Parms, InKernelFunction), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_ConvertFunctionToCustomKernel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventConvertFunctionToCustomKernel_Parms, ReturnValue), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_ConvertFunctionToCustomKernel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_ConvertFunctionToCustomKernel_Statics::NewProp_InKernelFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_ConvertFunctionToCustomKernel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_ConvertFunctionToCustomKernel_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "Comment", "/** Takes a kernel function and unpackages to a custom kernel. If the given node is not a \n\x09 *  kernel function or cannot be converted, a nullptr is returned.\n\x09 */" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
		{ "ToolTip", "Takes a kernel function and unpackages to a custom kernel. If the given node is not a\nkernel function or cannot be converted, a nullptr is returned." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_ConvertFunctionToCustomKernel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "ConvertFunctionToCustomKernel", nullptr, nullptr, Z_Construct_UFunction_UOptimusNodeGraph_ConvertFunctionToCustomKernel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_ConvertFunctionToCustomKernel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusNodeGraph_ConvertFunctionToCustomKernel_Statics::OptimusNodeGraph_eventConvertFunctionToCustomKernel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_ConvertFunctionToCustomKernel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusNodeGraph_ConvertFunctionToCustomKernel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_ConvertFunctionToCustomKernel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOptimusNodeGraph_ConvertFunctionToCustomKernel_Statics::OptimusNodeGraph_eventConvertFunctionToCustomKernel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_ConvertFunctionToCustomKernel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_ConvertFunctionToCustomKernel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode_Statics
	{
		struct OptimusNodeGraph_eventDuplicateNode_Parms
		{
			UOptimusNode* InNode;
			FVector2D InPosition;
			UOptimusNode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPosition;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode_Statics::NewProp_InNode = { "InNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventDuplicateNode_Parms, InNode), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode_Statics::NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventDuplicateNode_Parms, InPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode_Statics::NewProp_InPosition_MetaData), Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode_Statics::NewProp_InPosition_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventDuplicateNode_Parms, ReturnValue), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode_Statics::NewProp_InNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode_Statics::NewProp_InPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "DuplicateNode", nullptr, nullptr, Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode_Statics::OptimusNodeGraph_eventDuplicateNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode_Statics::OptimusNodeGraph_eventDuplicateNode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics
	{
		struct OptimusNodeGraph_eventDuplicateNodes_Parms
		{
			TArray<UOptimusNode*> InNodes;
			FVector2D InPosition;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPosition;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::NewProp_InNodes_Inner = { "InNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::NewProp_InNodes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::NewProp_InNodes = { "InNodes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventDuplicateNodes_Parms, InNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::NewProp_InNodes_MetaData), Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::NewProp_InNodes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventDuplicateNodes_Parms, InPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::NewProp_InPosition_MetaData), Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::NewProp_InPosition_MetaData) };
	void Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OptimusNodeGraph_eventDuplicateNodes_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusNodeGraph_eventDuplicateNodes_Parms), &Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::NewProp_InNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::NewProp_InNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::NewProp_InPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "Comment", "/// Duplicate a collection of nodes from the same graph, using the InPosition position\n/// to be the top-left origin of the pasted nodes.\n" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
		{ "ToolTip", "Duplicate a collection of nodes from the same graph, using the InPosition position\nto be the top-left origin of the pasted nodes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "DuplicateNodes", nullptr, nullptr, Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::OptimusNodeGraph_eventDuplicateNodes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::OptimusNodeGraph_eventDuplicateNodes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_ExpandCollapsedNodes_Statics
	{
		struct OptimusNodeGraph_eventExpandCollapsedNodes_Parms
		{
			UOptimusNode* InFunctionNode;
			TArray<UOptimusNode*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InFunctionNode;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_ExpandCollapsedNodes_Statics::NewProp_InFunctionNode = { "InFunctionNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventExpandCollapsedNodes_Parms, InFunctionNode), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_ExpandCollapsedNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_ExpandCollapsedNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventExpandCollapsedNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_ExpandCollapsedNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_ExpandCollapsedNodes_Statics::NewProp_InFunctionNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_ExpandCollapsedNodes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_ExpandCollapsedNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_ExpandCollapsedNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "Comment", "/** Take a function or subgraph node and expand it in-place, replacing the given function \n\x09 *  node. The function definition still remains, if a function node was expanded. If a\n\x09 *  sub-graph was expanded, the sub-graph is deleted.\n\x09 */" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
		{ "ToolTip", "Take a function or subgraph node and expand it in-place, replacing the given function\nnode. The function definition still remains, if a function node was expanded. If a\nsub-graph was expanded, the sub-graph is deleted." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_ExpandCollapsedNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "ExpandCollapsedNodes", nullptr, nullptr, Z_Construct_UFunction_UOptimusNodeGraph_ExpandCollapsedNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_ExpandCollapsedNodes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusNodeGraph_ExpandCollapsedNodes_Statics::OptimusNodeGraph_eventExpandCollapsedNodes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_ExpandCollapsedNodes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusNodeGraph_ExpandCollapsedNodes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_ExpandCollapsedNodes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOptimusNodeGraph_ExpandCollapsedNodes_Statics::OptimusNodeGraph_eventExpandCollapsedNodes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_ExpandCollapsedNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_ExpandCollapsedNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_GetGraphIndex_Statics
	{
		struct OptimusNodeGraph_eventGetGraphIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_GetGraphIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventGetGraphIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_GetGraphIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_GetGraphIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_GetGraphIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_GetGraphIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "GetGraphIndex", nullptr, nullptr, Z_Construct_UFunction_UOptimusNodeGraph_GetGraphIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_GetGraphIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusNodeGraph_GetGraphIndex_Statics::OptimusNodeGraph_eventGetGraphIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_GetGraphIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusNodeGraph_GetGraphIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_GetGraphIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOptimusNodeGraph_GetGraphIndex_Statics::OptimusNodeGraph_eventGetGraphIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_GetGraphIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_GetGraphIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_GetGraphs_Statics
	{
		struct OptimusNodeGraph_eventGetGraphs_Parms
		{
			TArray<UOptimusNodeGraph*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_GetGraphs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOptimusNodeGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_GetGraphs_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_GetGraphs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventGetGraphs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_GetGraphs_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UOptimusNodeGraph_GetGraphs_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_GetGraphs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_GetGraphs_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_GetGraphs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_GetGraphs_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_GetGraphs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "GetGraphs", nullptr, nullptr, Z_Construct_UFunction_UOptimusNodeGraph_GetGraphs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_GetGraphs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusNodeGraph_GetGraphs_Statics::OptimusNodeGraph_eventGetGraphs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_GetGraphs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusNodeGraph_GetGraphs_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_GetGraphs_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOptimusNodeGraph_GetGraphs_Statics::OptimusNodeGraph_eventGetGraphs_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_GetGraphs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_GetGraphs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_GetGraphType_Statics
	{
		struct OptimusNodeGraph_eventGetGraphType_Parms
		{
			EOptimusNodeGraphType ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_GetGraphType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_GetGraphType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventGetGraphType_Parms, ReturnValue), Z_Construct_UEnum_OptimusCore_EOptimusNodeGraphType, METADATA_PARAMS(0, nullptr) }; // 387396319
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_GetGraphType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_GetGraphType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_GetGraphType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_GetGraphType_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_GetGraphType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "GetGraphType", nullptr, nullptr, Z_Construct_UFunction_UOptimusNodeGraph_GetGraphType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_GetGraphType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusNodeGraph_GetGraphType_Statics::OptimusNodeGraph_eventGetGraphType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_GetGraphType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusNodeGraph_GetGraphType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_GetGraphType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOptimusNodeGraph_GetGraphType_Statics::OptimusNodeGraph_eventGetGraphType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_GetGraphType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_GetGraphType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_IsCustomKernel_Statics
	{
		struct OptimusNodeGraph_eventIsCustomKernel_Parms
		{
			UOptimusNode* InNode;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InNode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_IsCustomKernel_Statics::NewProp_InNode = { "InNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventIsCustomKernel_Parms, InNode), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UOptimusNodeGraph_IsCustomKernel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OptimusNodeGraph_eventIsCustomKernel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_IsCustomKernel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusNodeGraph_eventIsCustomKernel_Parms), &Z_Construct_UFunction_UOptimusNodeGraph_IsCustomKernel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_IsCustomKernel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_IsCustomKernel_Statics::NewProp_InNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_IsCustomKernel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_IsCustomKernel_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "Comment", "/** Returns true if the node in question is a custom kernel node that can be converted to\n\x09  * a kernel function with ConvertCustomKernelToFunction.\n\x09  */" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
		{ "ToolTip", "Returns true if the node in question is a custom kernel node that can be converted to\na kernel function with ConvertCustomKernelToFunction." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_IsCustomKernel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "IsCustomKernel", nullptr, nullptr, Z_Construct_UFunction_UOptimusNodeGraph_IsCustomKernel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_IsCustomKernel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusNodeGraph_IsCustomKernel_Statics::OptimusNodeGraph_eventIsCustomKernel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_IsCustomKernel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusNodeGraph_IsCustomKernel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_IsCustomKernel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOptimusNodeGraph_IsCustomKernel_Statics::OptimusNodeGraph_eventIsCustomKernel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_IsCustomKernel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_IsCustomKernel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_IsExecutionGraph_Statics
	{
		struct OptimusNodeGraph_eventIsExecutionGraph_Parms
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
	void Z_Construct_UFunction_UOptimusNodeGraph_IsExecutionGraph_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OptimusNodeGraph_eventIsExecutionGraph_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_IsExecutionGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusNodeGraph_eventIsExecutionGraph_Parms), &Z_Construct_UFunction_UOptimusNodeGraph_IsExecutionGraph_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_IsExecutionGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_IsExecutionGraph_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_IsExecutionGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_IsExecutionGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "IsExecutionGraph", nullptr, nullptr, Z_Construct_UFunction_UOptimusNodeGraph_IsExecutionGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_IsExecutionGraph_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusNodeGraph_IsExecutionGraph_Statics::OptimusNodeGraph_eventIsExecutionGraph_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_IsExecutionGraph_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusNodeGraph_IsExecutionGraph_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_IsExecutionGraph_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOptimusNodeGraph_IsExecutionGraph_Statics::OptimusNodeGraph_eventIsExecutionGraph_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_IsExecutionGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_IsExecutionGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionGraph_Statics
	{
		struct OptimusNodeGraph_eventIsFunctionGraph_Parms
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
	void Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionGraph_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OptimusNodeGraph_eventIsFunctionGraph_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusNodeGraph_eventIsFunctionGraph_Parms), &Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionGraph_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionGraph_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "IsFunctionGraph", nullptr, nullptr, Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionGraph_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionGraph_Statics::OptimusNodeGraph_eventIsFunctionGraph_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionGraph_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionGraph_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionGraph_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionGraph_Statics::OptimusNodeGraph_eventIsFunctionGraph_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionReference_Statics
	{
		struct OptimusNodeGraph_eventIsFunctionReference_Parms
		{
			UOptimusNode* InNode;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InNode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionReference_Statics::NewProp_InNode = { "InNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventIsFunctionReference_Parms, InNode), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionReference_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OptimusNodeGraph_eventIsFunctionReference_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusNodeGraph_eventIsFunctionReference_Parms), &Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionReference_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionReference_Statics::NewProp_InNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "Comment", "/** Returns true if the node in question is a function reference node that can be expanded \n\x09 *  into a group of nodes using ExpandFunctionToNodes.\n\x09  */" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
		{ "ToolTip", "Returns true if the node in question is a function reference node that can be expanded\ninto a group of nodes using ExpandFunctionToNodes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "IsFunctionReference", nullptr, nullptr, Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionReference_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionReference_Statics::OptimusNodeGraph_eventIsFunctionReference_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionReference_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionReference_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionReference_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionReference_Statics::OptimusNodeGraph_eventIsFunctionReference_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_IsKernelFunction_Statics
	{
		struct OptimusNodeGraph_eventIsKernelFunction_Parms
		{
			UOptimusNode* InNode;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InNode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_IsKernelFunction_Statics::NewProp_InNode = { "InNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventIsKernelFunction_Parms, InNode), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UOptimusNodeGraph_IsKernelFunction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OptimusNodeGraph_eventIsKernelFunction_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_IsKernelFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusNodeGraph_eventIsKernelFunction_Parms), &Z_Construct_UFunction_UOptimusNodeGraph_IsKernelFunction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_IsKernelFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_IsKernelFunction_Statics::NewProp_InNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_IsKernelFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_IsKernelFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "Comment", "/** Returns true if the node in question is a kernel function node that can be converted to\n\x09  * a custom kernel using ConvertFunctionToCustomKernel. \n\x09  */" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
		{ "ToolTip", "Returns true if the node in question is a kernel function node that can be converted to\na custom kernel using ConvertFunctionToCustomKernel." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_IsKernelFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "IsKernelFunction", nullptr, nullptr, Z_Construct_UFunction_UOptimusNodeGraph_IsKernelFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_IsKernelFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusNodeGraph_IsKernelFunction_Statics::OptimusNodeGraph_eventIsKernelFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_IsKernelFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusNodeGraph_IsKernelFunction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_IsKernelFunction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOptimusNodeGraph_IsKernelFunction_Statics::OptimusNodeGraph_eventIsKernelFunction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_IsKernelFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_IsKernelFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_IsSubGraphReference_Statics
	{
		struct OptimusNodeGraph_eventIsSubGraphReference_Parms
		{
			UOptimusNode* InNode;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InNode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_IsSubGraphReference_Statics::NewProp_InNode = { "InNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventIsSubGraphReference_Parms, InNode), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UOptimusNodeGraph_IsSubGraphReference_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OptimusNodeGraph_eventIsSubGraphReference_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_IsSubGraphReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusNodeGraph_eventIsSubGraphReference_Parms), &Z_Construct_UFunction_UOptimusNodeGraph_IsSubGraphReference_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_IsSubGraphReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_IsSubGraphReference_Statics::NewProp_InNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_IsSubGraphReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_IsSubGraphReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "Comment", "/** Returns true if the node in question is a function sub-graph node that can be expanded \n\x09 *  into a group of nodes using ExpandFunctionToNodes.\n\x09  */" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
		{ "ToolTip", "Returns true if the node in question is a function sub-graph node that can be expanded\ninto a group of nodes using ExpandFunctionToNodes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_IsSubGraphReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "IsSubGraphReference", nullptr, nullptr, Z_Construct_UFunction_UOptimusNodeGraph_IsSubGraphReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_IsSubGraphReference_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusNodeGraph_IsSubGraphReference_Statics::OptimusNodeGraph_eventIsSubGraphReference_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_IsSubGraphReference_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusNodeGraph_IsSubGraphReference_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_IsSubGraphReference_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOptimusNodeGraph_IsSubGraphReference_Statics::OptimusNodeGraph_eventIsSubGraphReference_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_IsSubGraphReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_IsSubGraphReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_MoveGraph_Statics
	{
		struct OptimusNodeGraph_eventMoveGraph_Parms
		{
			UOptimusNodeGraph* InGraph;
			int32 InInsertBefore;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InGraph;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InInsertBefore;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_MoveGraph_Statics::NewProp_InGraph = { "InGraph", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventMoveGraph_Parms, InGraph), Z_Construct_UClass_UOptimusNodeGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_MoveGraph_Statics::NewProp_InInsertBefore = { "InInsertBefore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventMoveGraph_Parms, InInsertBefore), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UOptimusNodeGraph_MoveGraph_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OptimusNodeGraph_eventMoveGraph_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_MoveGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusNodeGraph_eventMoveGraph_Parms), &Z_Construct_UFunction_UOptimusNodeGraph_MoveGraph_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_MoveGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_MoveGraph_Statics::NewProp_InGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_MoveGraph_Statics::NewProp_InInsertBefore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_MoveGraph_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_MoveGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_MoveGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "MoveGraph", nullptr, nullptr, Z_Construct_UFunction_UOptimusNodeGraph_MoveGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_MoveGraph_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusNodeGraph_MoveGraph_Statics::OptimusNodeGraph_eventMoveGraph_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_MoveGraph_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusNodeGraph_MoveGraph_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_MoveGraph_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOptimusNodeGraph_MoveGraph_Statics::OptimusNodeGraph_eventMoveGraph_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_MoveGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_MoveGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_RemoveAllLinks_Statics
	{
		struct OptimusNodeGraph_eventRemoveAllLinks_Parms
		{
			UOptimusNodePin* InNodePin;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InNodePin;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_RemoveAllLinks_Statics::NewProp_InNodePin = { "InNodePin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventRemoveAllLinks_Parms, InNodePin), Z_Construct_UClass_UOptimusNodePin_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UOptimusNodeGraph_RemoveAllLinks_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OptimusNodeGraph_eventRemoveAllLinks_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_RemoveAllLinks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusNodeGraph_eventRemoveAllLinks_Parms), &Z_Construct_UFunction_UOptimusNodeGraph_RemoveAllLinks_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_RemoveAllLinks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_RemoveAllLinks_Statics::NewProp_InNodePin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_RemoveAllLinks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_RemoveAllLinks_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "Comment", "/// @brief Removes all links to the given pin, whether it's an input or an output pin.\n" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
		{ "ToolTip", "@brief Removes all links to the given pin, whether it's an input or an output pin." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_RemoveAllLinks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "RemoveAllLinks", nullptr, nullptr, Z_Construct_UFunction_UOptimusNodeGraph_RemoveAllLinks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_RemoveAllLinks_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusNodeGraph_RemoveAllLinks_Statics::OptimusNodeGraph_eventRemoveAllLinks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_RemoveAllLinks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusNodeGraph_RemoveAllLinks_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_RemoveAllLinks_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOptimusNodeGraph_RemoveAllLinks_Statics::OptimusNodeGraph_eventRemoveAllLinks_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_RemoveAllLinks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_RemoveAllLinks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_RemoveLink_Statics
	{
		struct OptimusNodeGraph_eventRemoveLink_Parms
		{
			UOptimusNodePin* InNodeOutputPin;
			UOptimusNodePin* InNodeInputPin;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InNodeOutputPin;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InNodeInputPin;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_RemoveLink_Statics::NewProp_InNodeOutputPin = { "InNodeOutputPin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventRemoveLink_Parms, InNodeOutputPin), Z_Construct_UClass_UOptimusNodePin_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_RemoveLink_Statics::NewProp_InNodeInputPin = { "InNodeInputPin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventRemoveLink_Parms, InNodeInputPin), Z_Construct_UClass_UOptimusNodePin_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UOptimusNodeGraph_RemoveLink_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OptimusNodeGraph_eventRemoveLink_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_RemoveLink_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusNodeGraph_eventRemoveLink_Parms), &Z_Construct_UFunction_UOptimusNodeGraph_RemoveLink_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_RemoveLink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_RemoveLink_Statics::NewProp_InNodeOutputPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_RemoveLink_Statics::NewProp_InNodeInputPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_RemoveLink_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_RemoveLink_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "Comment", "/// @brief Removes a single link between two nodes.\n// FIXME: Use UOptimusNodeLink instead.\n" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
		{ "ToolTip", "@brief Removes a single link between two nodes.\nFIXME: Use UOptimusNodeLink instead." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_RemoveLink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "RemoveLink", nullptr, nullptr, Z_Construct_UFunction_UOptimusNodeGraph_RemoveLink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_RemoveLink_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusNodeGraph_RemoveLink_Statics::OptimusNodeGraph_eventRemoveLink_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_RemoveLink_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusNodeGraph_RemoveLink_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_RemoveLink_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOptimusNodeGraph_RemoveLink_Statics::OptimusNodeGraph_eventRemoveLink_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_RemoveLink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_RemoveLink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_RemoveNode_Statics
	{
		struct OptimusNodeGraph_eventRemoveNode_Parms
		{
			UOptimusNode* InNode;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InNode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_RemoveNode_Statics::NewProp_InNode = { "InNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventRemoveNode_Parms, InNode), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UOptimusNodeGraph_RemoveNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OptimusNodeGraph_eventRemoveNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_RemoveNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusNodeGraph_eventRemoveNode_Parms), &Z_Construct_UFunction_UOptimusNodeGraph_RemoveNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_RemoveNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_RemoveNode_Statics::NewProp_InNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_RemoveNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_RemoveNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_RemoveNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "RemoveNode", nullptr, nullptr, Z_Construct_UFunction_UOptimusNodeGraph_RemoveNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_RemoveNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusNodeGraph_RemoveNode_Statics::OptimusNodeGraph_eventRemoveNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_RemoveNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusNodeGraph_RemoveNode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_RemoveNode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOptimusNodeGraph_RemoveNode_Statics::OptimusNodeGraph_eventRemoveNode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_RemoveNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_RemoveNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics
	{
		struct OptimusNodeGraph_eventRemoveNodes_Parms
		{
			TArray<UOptimusNode*> InNodes;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InNodes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics::NewProp_InNodes_Inner = { "InNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics::NewProp_InNodes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics::NewProp_InNodes = { "InNodes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventRemoveNodes_Parms, InNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics::NewProp_InNodes_MetaData), Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics::NewProp_InNodes_MetaData) };
	void Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OptimusNodeGraph_eventRemoveNodes_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusNodeGraph_eventRemoveNodes_Parms), &Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics::NewProp_InNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics::NewProp_InNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "RemoveNodes", nullptr, nullptr, Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics::OptimusNodeGraph_eventRemoveNodes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics::OptimusNodeGraph_eventRemoveNodes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics
	{
		struct OptimusNodeGraph_eventRenameGraph_Parms
		{
			UOptimusNodeGraph* InGraph;
			FString InNewName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNewName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InNewName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics::NewProp_InGraph = { "InGraph", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventRenameGraph_Parms, InGraph), Z_Construct_UClass_UOptimusNodeGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics::NewProp_InNewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics::NewProp_InNewName = { "InNewName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNodeGraph_eventRenameGraph_Parms, InNewName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics::NewProp_InNewName_MetaData), Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics::NewProp_InNewName_MetaData) };
	void Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OptimusNodeGraph_eventRenameGraph_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusNodeGraph_eventRenameGraph_Parms), &Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics::NewProp_InGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics::NewProp_InNewName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "RenameGraph", nullptr, nullptr, Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics::OptimusNodeGraph_eventRenameGraph_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics::OptimusNodeGraph_eventRenameGraph_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNodeGraph);
	UClass* Z_Construct_UClass_UOptimusNodeGraph_NoRegister()
	{
		return UOptimusNodeGraph::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusNodeGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GraphType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GraphType;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bViewLocationSet_MetaData[];
#endif
		static void NewProp_bViewLocationSet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bViewLocationSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewZoom_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewZoom;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Nodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Nodes;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Links_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Links_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Links;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SubGraphs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubGraphs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SubGraphs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusNodeGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeGraph_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOptimusNodeGraph_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode, "AddComponentBindingGetNode" }, // 3472517315
		{ &Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode, "AddDataInterfaceNode" }, // 1961085725
		{ &Z_Construct_UFunction_UOptimusNodeGraph_AddLink, "AddLink" }, // 20301475
		{ &Z_Construct_UFunction_UOptimusNodeGraph_AddNode, "AddNode" }, // 2790153012
		{ &Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode, "AddResourceGetNode" }, // 989516131
		{ &Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode, "AddResourceNode" }, // 1783010562
		{ &Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode, "AddResourceSetNode" }, // 1590030850
		{ &Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode, "AddValueNode" }, // 3323462831
		{ &Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode, "AddVariableGetNode" }, // 1035063974
		{ &Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction, "CollapseNodesToFunction" }, // 4077648395
		{ &Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph, "CollapseNodesToSubGraph" }, // 2467422550
		{ &Z_Construct_UFunction_UOptimusNodeGraph_ConvertCustomKernelToFunction, "ConvertCustomKernelToFunction" }, // 4115475864
		{ &Z_Construct_UFunction_UOptimusNodeGraph_ConvertFunctionToCustomKernel, "ConvertFunctionToCustomKernel" }, // 1687472118
		{ &Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode, "DuplicateNode" }, // 3489720616
		{ &Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes, "DuplicateNodes" }, // 2315270250
		{ &Z_Construct_UFunction_UOptimusNodeGraph_ExpandCollapsedNodes, "ExpandCollapsedNodes" }, // 1718761193
		{ &Z_Construct_UFunction_UOptimusNodeGraph_GetGraphIndex, "GetGraphIndex" }, // 3985707845
		{ &Z_Construct_UFunction_UOptimusNodeGraph_GetGraphs, "GetGraphs" }, // 580563966
		{ &Z_Construct_UFunction_UOptimusNodeGraph_GetGraphType, "GetGraphType" }, // 1291989477
		{ &Z_Construct_UFunction_UOptimusNodeGraph_IsCustomKernel, "IsCustomKernel" }, // 4239012768
		{ &Z_Construct_UFunction_UOptimusNodeGraph_IsExecutionGraph, "IsExecutionGraph" }, // 660667963
		{ &Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionGraph, "IsFunctionGraph" }, // 1718321938
		{ &Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionReference, "IsFunctionReference" }, // 2278982673
		{ &Z_Construct_UFunction_UOptimusNodeGraph_IsKernelFunction, "IsKernelFunction" }, // 741681026
		{ &Z_Construct_UFunction_UOptimusNodeGraph_IsSubGraphReference, "IsSubGraphReference" }, // 143174892
		{ &Z_Construct_UFunction_UOptimusNodeGraph_MoveGraph, "MoveGraph" }, // 2656025785
		{ &Z_Construct_UFunction_UOptimusNodeGraph_RemoveAllLinks, "RemoveAllLinks" }, // 1594960414
		{ &Z_Construct_UFunction_UOptimusNodeGraph_RemoveLink, "RemoveLink" }, // 1797975576
		{ &Z_Construct_UFunction_UOptimusNodeGraph_RemoveNode, "RemoveNode" }, // 2769744288
		{ &Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes, "RemoveNodes" }, // 1527369486
		{ &Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph, "RenameGraph" }, // 290916169
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeGraph_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNodeGraph_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OptimusNodeGraph.h" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_GraphType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_GraphType_MetaData[] = {
		{ "Category", "Overview" },
		{ "Comment", "// The type of graph this represents. \n" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
		{ "ToolTip", "The type of graph this represents." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_GraphType = { "GraphType", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNodeGraph, GraphType), Z_Construct_UEnum_OptimusCore_EOptimusNodeGraphType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_GraphType_MetaData), Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_GraphType_MetaData) }; // 387396319
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_bViewLocationSet_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	void Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_bViewLocationSet_SetBit(void* Obj)
	{
		((UOptimusNodeGraph*)Obj)->bViewLocationSet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_bViewLocationSet = { "bViewLocationSet", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimusNodeGraph), &Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_bViewLocationSet_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_bViewLocationSet_MetaData), Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_bViewLocationSet_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_ViewLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_ViewLocation = { "ViewLocation", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNodeGraph, ViewLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_ViewLocation_MetaData), Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_ViewLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_ViewZoom_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_ViewZoom = { "ViewZoom", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNodeGraph, ViewZoom), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_ViewZoom_MetaData), Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_ViewZoom_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_Nodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0044000400000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNodeGraph, Nodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_Nodes_MetaData), Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_Nodes_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_Links_Inner = { "Links", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOptimusNodeLink_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_Links_MetaData[] = {
		{ "Comment", "// FIXME: Use a map.\n" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
		{ "ToolTip", "FIXME: Use a map." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_Links = { "Links", nullptr, (EPropertyFlags)0x0044000400000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNodeGraph, Links), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_Links_MetaData), Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_Links_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_SubGraphs_Inner = { "SubGraphs", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOptimusNodeGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_SubGraphs_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_SubGraphs = { "SubGraphs", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNodeGraph, SubGraphs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_SubGraphs_MetaData), Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_SubGraphs_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusNodeGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_GraphType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_GraphType,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_bViewLocationSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_ViewLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_ViewZoom,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_Nodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_Nodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_Links_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_Links,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_SubGraphs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_SubGraphs,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOptimusNodeGraph_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UOptimusNodeGraphCollectionOwner_NoRegister, (int32)VTABLE_OFFSET(UOptimusNodeGraph, IOptimusNodeGraphCollectionOwner), false },  // 3000716097
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeGraph_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusNodeGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusNodeGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNodeGraph_Statics::ClassParams = {
		&UOptimusNodeGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOptimusNodeGraph_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeGraph_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusNodeGraph_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeGraph_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOptimusNodeGraph()
	{
		if (!Z_Registration_Info_UClass_UOptimusNodeGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNodeGraph.OuterSingleton, Z_Construct_UClass_UOptimusNodeGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusNodeGraph.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNodeGraph>()
	{
		return UOptimusNodeGraph::StaticClass();
	}
	UOptimusNodeGraph::UOptimusNodeGraph(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNodeGraph);
	UOptimusNodeGraph::~UOptimusNodeGraph() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeGraph_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeGraph_h_Statics::EnumInfo[] = {
		{ EOptimusNodeGraphType_StaticEnum, TEXT("EOptimusNodeGraphType"), &Z_Registration_Info_UEnum_EOptimusNodeGraphType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 387396319U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNodeGraph, UOptimusNodeGraph::StaticClass, TEXT("UOptimusNodeGraph"), &Z_Registration_Info_UClass_UOptimusNodeGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNodeGraph), 2537250204U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeGraph_h_775091112(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeGraph_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeGraph_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeGraph_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
