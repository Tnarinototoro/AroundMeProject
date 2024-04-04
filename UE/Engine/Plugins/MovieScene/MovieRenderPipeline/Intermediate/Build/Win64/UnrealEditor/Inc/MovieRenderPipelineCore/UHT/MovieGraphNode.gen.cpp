// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/MovieGraphNode.h"
#include "PropertyBag.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieGraphNode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphNode();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphNode_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphPin_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphSettingNode();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphSettingNode_NoRegister();
	MOVIERENDERPIPELINECORE_API UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphValueType();
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphPropertyInfo();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedPropertyBag();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieGraphPropertyInfo;
class UScriptStruct* FMovieGraphPropertyInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieGraphPropertyInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieGraphPropertyInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieGraphPropertyInfo, (UObject*)Z_Construct_UPackage__Script_MovieRenderPipelineCore(), TEXT("MovieGraphPropertyInfo"));
	}
	return Z_Registration_Info_UScriptStruct_MovieGraphPropertyInfo.OuterSingleton;
}
template<> MOVIERENDERPIPELINECORE_API UScriptStruct* StaticStruct<FMovieGraphPropertyInfo>()
{
	return FMovieGraphPropertyInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieGraphPropertyInfo_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDynamicProperty_MetaData[];
#endif
		static void NewProp_bIsDynamicProperty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDynamicProperty;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ValueType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ValueType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphPropertyInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Information about a property that currently is (or can be) exposed on a node.\n */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphNode.h" },
		{ "ToolTip", "Information about a property that currently is (or can be) exposed on a node." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieGraphPropertyInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieGraphPropertyInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphPropertyInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** The name of the property. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphNode.h" },
		{ "ToolTip", "The name of the property." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieGraphPropertyInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphPropertyInfo, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphPropertyInfo_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FMovieGraphPropertyInfo_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphPropertyInfo_Statics::NewProp_bIsDynamicProperty_MetaData[] = {
		{ "Comment", "/** Whether this property is dynamic (ie, it does not correspond to a native UPROPERTY on the node). */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphNode.h" },
		{ "ToolTip", "Whether this property is dynamic (ie, it does not correspond to a native UPROPERTY on the node)." },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieGraphPropertyInfo_Statics::NewProp_bIsDynamicProperty_SetBit(void* Obj)
	{
		((FMovieGraphPropertyInfo*)Obj)->bIsDynamicProperty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieGraphPropertyInfo_Statics::NewProp_bIsDynamicProperty = { "bIsDynamicProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieGraphPropertyInfo), &Z_Construct_UScriptStruct_FMovieGraphPropertyInfo_Statics::NewProp_bIsDynamicProperty_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphPropertyInfo_Statics::NewProp_bIsDynamicProperty_MetaData), Z_Construct_UScriptStruct_FMovieGraphPropertyInfo_Statics::NewProp_bIsDynamicProperty_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieGraphPropertyInfo_Statics::NewProp_ValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphPropertyInfo_Statics::NewProp_ValueType_MetaData[] = {
		{ "Comment", "/** The type of the value pointed to by the property. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphNode.h" },
		{ "ToolTip", "The type of the value pointed to by the property." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieGraphPropertyInfo_Statics::NewProp_ValueType = { "ValueType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphPropertyInfo, ValueType), Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphValueType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphPropertyInfo_Statics::NewProp_ValueType_MetaData), Z_Construct_UScriptStruct_FMovieGraphPropertyInfo_Statics::NewProp_ValueType_MetaData) }; // 101554368
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieGraphPropertyInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphPropertyInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphPropertyInfo_Statics::NewProp_bIsDynamicProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphPropertyInfo_Statics::NewProp_ValueType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphPropertyInfo_Statics::NewProp_ValueType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieGraphPropertyInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
		nullptr,
		&NewStructOps,
		"MovieGraphPropertyInfo",
		Z_Construct_UScriptStruct_FMovieGraphPropertyInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphPropertyInfo_Statics::PropPointers),
		sizeof(FMovieGraphPropertyInfo),
		alignof(FMovieGraphPropertyInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphPropertyInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieGraphPropertyInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphPropertyInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphPropertyInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieGraphPropertyInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieGraphPropertyInfo.InnerSingleton, Z_Construct_UScriptStruct_FMovieGraphPropertyInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieGraphPropertyInfo.InnerSingleton;
	}
	void UMovieGraphNode::StaticRegisterNativesUMovieGraphNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphNode);
	UClass* Z_Construct_UClass_UMovieGraphNode_NoRegister()
	{
		return UMovieGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GraphNode;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputPins_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputPins_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputPins;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OutputPins_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputPins_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputPins;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicProperties_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicProperties;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExposedPropertyInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExposedPropertyInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExposedPropertyInfo;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodePosX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodePosX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodePosY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodePosY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeComment_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeComment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCommentBubblePinned_MetaData[];
#endif
		static void NewProp_bIsCommentBubblePinned_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCommentBubblePinned;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCommentBubbleVisible_MetaData[];
#endif
		static void NewProp_bIsCommentBubbleVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCommentBubbleVisible;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphNode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* This is a base class for all nodes that can exist in the UMovieGraphConfig network.\n* In the editor, each node in the network will have an editor-only representation too \n* which contains data about it's visual position in the graph, comments, etc.\n*/" },
		{ "IncludePath", "Graph/MovieGraphNode.h" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphNode.h" },
		{ "ToolTip", "This is a base class for all nodes that can exist in the UMovieGraphConfig network.\nIn the editor, each node in the network will have an editor-only representation too\nwhich contains data about it's visual position in the graph, comments, etc." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_GraphNode_MetaData[] = {
		{ "Comment", "/** Editor Node Graph representation. Not strongly typed to avoid circular dependency between editor/runtime modules. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphNode.h" },
		{ "ToolTip", "Editor Node Graph representation. Not strongly typed to avoid circular dependency between editor/runtime modules." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_GraphNode = { "GraphNode", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphNode, GraphNode), Z_Construct_UClass_UEdGraphNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_GraphNode_MetaData), Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_GraphNode_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_InputPins_Inner = { "InputPins", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieGraphPin_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_InputPins_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/MovieGraphNode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_InputPins = { "InputPins", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphNode, InputPins), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_InputPins_MetaData), Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_InputPins_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_OutputPins_Inner = { "OutputPins", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieGraphPin_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_OutputPins_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/MovieGraphNode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_OutputPins = { "OutputPins", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphNode, OutputPins), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_OutputPins_MetaData), Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_OutputPins_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_DynamicProperties_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** Properties which can be dynamically declared on the node (vs. native properties which are always present). */" },
		{ "FixedLayout", "" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphNode.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Properties which can be dynamically declared on the node (vs. native properties which are always present)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_DynamicProperties = { "DynamicProperties", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphNode, DynamicProperties), Z_Construct_UScriptStruct_FInstancedPropertyBag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_DynamicProperties_MetaData), Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_DynamicProperties_MetaData) }; // 4097115139
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_ExposedPropertyInfo_Inner = { "ExposedPropertyInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieGraphPropertyInfo, METADATA_PARAMS(0, nullptr) }; // 3545856575
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_ExposedPropertyInfo_MetaData[] = {
		{ "Comment", "/** Tracks which properties have been exposed on the node as inputs. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphNode.h" },
		{ "ToolTip", "Tracks which properties have been exposed on the node as inputs." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_ExposedPropertyInfo = { "ExposedPropertyInfo", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphNode, ExposedPropertyInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_ExposedPropertyInfo_MetaData), Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_ExposedPropertyInfo_MetaData) }; // 3545856575
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_NodePosX_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/MovieGraphNode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_NodePosX = { "NodePosX", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphNode, NodePosX), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_NodePosX_MetaData), Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_NodePosX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_NodePosY_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/MovieGraphNode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_NodePosY = { "NodePosY", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphNode, NodePosY), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_NodePosY_MetaData), Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_NodePosY_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_NodeComment_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/MovieGraphNode.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_NodeComment = { "NodeComment", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphNode, NodeComment), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_NodeComment_MetaData), Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_NodeComment_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_bIsCommentBubblePinned_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/MovieGraphNode.h" },
	};
#endif
	void Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_bIsCommentBubblePinned_SetBit(void* Obj)
	{
		((UMovieGraphNode*)Obj)->bIsCommentBubblePinned = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_bIsCommentBubblePinned = { "bIsCommentBubblePinned", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMovieGraphNode), &Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_bIsCommentBubblePinned_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_bIsCommentBubblePinned_MetaData), Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_bIsCommentBubblePinned_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_bIsCommentBubbleVisible_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/MovieGraphNode.h" },
	};
#endif
	void Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_bIsCommentBubbleVisible_SetBit(void* Obj)
	{
		((UMovieGraphNode*)Obj)->bIsCommentBubbleVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_bIsCommentBubbleVisible = { "bIsCommentBubbleVisible", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMovieGraphNode), &Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_bIsCommentBubbleVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_bIsCommentBubbleVisible_MetaData), Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_bIsCommentBubbleVisible_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_Guid_MetaData[] = {
		{ "Comment", "/** A GUID which uniquely identifies this node. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphNode.h" },
		{ "ToolTip", "A GUID which uniquely identifies this node." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphNode, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_Guid_MetaData), Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_Guid_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieGraphNode_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_GraphNode,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_InputPins_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_InputPins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_OutputPins_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_OutputPins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_DynamicProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_ExposedPropertyInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_ExposedPropertyInfo,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_NodePosX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_NodePosY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_NodeComment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_bIsCommentBubblePinned,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_bIsCommentBubbleVisible,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_Guid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphNode_Statics::ClassParams = {
		&UMovieGraphNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieGraphNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphNode_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphNode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphNode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMovieGraphNode()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphNode.OuterSingleton, Z_Construct_UClass_UMovieGraphNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphNode.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieGraphNode>()
	{
		return UMovieGraphNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphNode);
	UMovieGraphNode::~UMovieGraphNode() {}
	void UMovieGraphSettingNode::StaticRegisterNativesUMovieGraphSettingNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphSettingNode);
	UClass* Z_Construct_UClass_UMovieGraphSettingNode_NoRegister()
	{
		return UMovieGraphSettingNode::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphSettingNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphSettingNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphSettingNode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphSettingNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Nodes representing user settings should derive from this. This is the only node type copied into flattened eval.\n*/" },
		{ "IncludePath", "Graph/MovieGraphNode.h" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphNode.h" },
		{ "ToolTip", "Nodes representing user settings should derive from this. This is the only node type copied into flattened eval." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphSettingNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphSettingNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphSettingNode_Statics::ClassParams = {
		&UMovieGraphSettingNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphSettingNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphSettingNode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMovieGraphSettingNode()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphSettingNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphSettingNode.OuterSingleton, Z_Construct_UClass_UMovieGraphSettingNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphSettingNode.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieGraphSettingNode>()
	{
		return UMovieGraphSettingNode::StaticClass();
	}
	UMovieGraphSettingNode::UMovieGraphSettingNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphSettingNode);
	UMovieGraphSettingNode::~UMovieGraphSettingNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_Statics::ScriptStructInfo[] = {
		{ FMovieGraphPropertyInfo::StaticStruct, Z_Construct_UScriptStruct_FMovieGraphPropertyInfo_Statics::NewStructOps, TEXT("MovieGraphPropertyInfo"), &Z_Registration_Info_UScriptStruct_MovieGraphPropertyInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieGraphPropertyInfo), 3545856575U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieGraphNode, UMovieGraphNode::StaticClass, TEXT("UMovieGraphNode"), &Z_Registration_Info_UClass_UMovieGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphNode), 1950861554U) },
		{ Z_Construct_UClass_UMovieGraphSettingNode, UMovieGraphSettingNode::StaticClass, TEXT("UMovieGraphSettingNode"), &Z_Registration_Info_UClass_UMovieGraphSettingNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphSettingNode), 2322295517U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_779854140(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
