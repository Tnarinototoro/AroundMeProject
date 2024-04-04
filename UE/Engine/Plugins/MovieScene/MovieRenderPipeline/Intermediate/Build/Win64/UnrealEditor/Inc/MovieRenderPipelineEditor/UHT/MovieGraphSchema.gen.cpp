// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Graph/MovieGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieGraphSchema() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphNode_NoRegister();
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMovieGraphSchema();
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMovieGraphSchema_NoRegister();
	MOVIERENDERPIPELINEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphSchemaAction();
	MOVIERENDERPIPELINEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewComment();
	MOVIERENDERPIPELINEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewNode();
	MOVIERENDERPIPELINEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewVariableNode();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineEditor();
// End Cross Module References
	void UMovieGraphSchema::StaticRegisterNativesUMovieGraphSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphSchema);
	UClass* Z_Construct_UClass_UMovieGraphSchema_NoRegister()
	{
		return UMovieGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphSchema_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/MovieGraphSchema.h" },
		{ "ModuleRelativePath", "Private/Graph/MovieGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphSchema_Statics::ClassParams = {
		&UMovieGraphSchema::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphSchema_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphSchema_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMovieGraphSchema()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphSchema.OuterSingleton, Z_Construct_UClass_UMovieGraphSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphSchema.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINEEDITOR_API UClass* StaticClass<UMovieGraphSchema>()
	{
		return UMovieGraphSchema::StaticClass();
	}
	UMovieGraphSchema::UMovieGraphSchema(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphSchema);
	UMovieGraphSchema::~UMovieGraphSchema() {}

static_assert(std::is_polymorphic<FMovieGraphSchemaAction>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FMovieGraphSchemaAction cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieGraphSchemaAction;
class UScriptStruct* FMovieGraphSchemaAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieGraphSchemaAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieGraphSchemaAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieGraphSchemaAction, (UObject*)Z_Construct_UPackage__Script_MovieRenderPipelineEditor(), TEXT("MovieGraphSchemaAction"));
	}
	return Z_Registration_Info_UScriptStruct_MovieGraphSchemaAction.OuterSingleton;
}
template<> MOVIERENDERPIPELINEEDITOR_API UScriptStruct* StaticStruct<FMovieGraphSchemaAction>()
{
	return FMovieGraphSchemaAction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieGraphSchemaAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActionTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_NodeClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphSchemaAction_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Base class for schema actions in the graph. */" },
		{ "ModuleRelativePath", "Private/Graph/MovieGraphSchema.h" },
		{ "ToolTip", "Base class for schema actions in the graph." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieGraphSchemaAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieGraphSchemaAction>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphSchemaAction_Statics::NewProp_ActionTarget_MetaData[] = {
		{ "Comment", "/** The object the action relates to. */" },
		{ "ModuleRelativePath", "Private/Graph/MovieGraphSchema.h" },
		{ "ToolTip", "The object the action relates to." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieGraphSchemaAction_Statics::NewProp_ActionTarget = { "ActionTarget", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphSchemaAction, ActionTarget), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphSchemaAction_Statics::NewProp_ActionTarget_MetaData), Z_Construct_UScriptStruct_FMovieGraphSchemaAction_Statics::NewProp_ActionTarget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphSchemaAction_Statics::NewProp_NodeClass_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graph/MovieGraphSchema.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMovieGraphSchemaAction_Statics::NewProp_NodeClass = { "NodeClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphSchemaAction, NodeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMovieGraphNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphSchemaAction_Statics::NewProp_NodeClass_MetaData), Z_Construct_UScriptStruct_FMovieGraphSchemaAction_Statics::NewProp_NodeClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieGraphSchemaAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphSchemaAction_Statics::NewProp_ActionTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphSchemaAction_Statics::NewProp_NodeClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieGraphSchemaAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"MovieGraphSchemaAction",
		Z_Construct_UScriptStruct_FMovieGraphSchemaAction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphSchemaAction_Statics::PropPointers),
		sizeof(FMovieGraphSchemaAction),
		alignof(FMovieGraphSchemaAction),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphSchemaAction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieGraphSchemaAction_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphSchemaAction_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphSchemaAction()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieGraphSchemaAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieGraphSchemaAction.InnerSingleton, Z_Construct_UScriptStruct_FMovieGraphSchemaAction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieGraphSchemaAction.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMovieGraphSchemaAction_NewNode>() == std::is_polymorphic<FMovieGraphSchemaAction>(), "USTRUCT FMovieGraphSchemaAction_NewNode cannot be polymorphic unless super FMovieGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieGraphSchemaAction_NewNode;
class UScriptStruct* FMovieGraphSchemaAction_NewNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieGraphSchemaAction_NewNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieGraphSchemaAction_NewNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewNode, (UObject*)Z_Construct_UPackage__Script_MovieRenderPipelineEditor(), TEXT("MovieGraphSchemaAction_NewNode"));
	}
	return Z_Registration_Info_UScriptStruct_MovieGraphSchemaAction_NewNode.OuterSingleton;
}
template<> MOVIERENDERPIPELINEEDITOR_API UScriptStruct* StaticStruct<FMovieGraphSchemaAction_NewNode>()
{
	return FMovieGraphSchemaAction_NewNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Schema action for creating a new node in the graph. */" },
		{ "ModuleRelativePath", "Private/Graph/MovieGraphSchema.h" },
		{ "ToolTip", "Schema action for creating a new node in the graph." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieGraphSchemaAction_NewNode>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineEditor,
		Z_Construct_UScriptStruct_FMovieGraphSchemaAction,
		&NewStructOps,
		"MovieGraphSchemaAction_NewNode",
		nullptr,
		0,
		sizeof(FMovieGraphSchemaAction_NewNode),
		alignof(FMovieGraphSchemaAction_NewNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewNode()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieGraphSchemaAction_NewNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieGraphSchemaAction_NewNode.InnerSingleton, Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieGraphSchemaAction_NewNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMovieGraphSchemaAction_NewVariableNode>() == std::is_polymorphic<FMovieGraphSchemaAction>(), "USTRUCT FMovieGraphSchemaAction_NewVariableNode cannot be polymorphic unless super FMovieGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieGraphSchemaAction_NewVariableNode;
class UScriptStruct* FMovieGraphSchemaAction_NewVariableNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieGraphSchemaAction_NewVariableNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieGraphSchemaAction_NewVariableNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewVariableNode, (UObject*)Z_Construct_UPackage__Script_MovieRenderPipelineEditor(), TEXT("MovieGraphSchemaAction_NewVariableNode"));
	}
	return Z_Registration_Info_UScriptStruct_MovieGraphSchemaAction_NewVariableNode.OuterSingleton;
}
template<> MOVIERENDERPIPELINEEDITOR_API UScriptStruct* StaticStruct<FMovieGraphSchemaAction_NewVariableNode>()
{
	return FMovieGraphSchemaAction_NewVariableNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewVariableNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariableGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VariableGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewVariableNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Schema action for creating a new variable node in the graph. */" },
		{ "ModuleRelativePath", "Private/Graph/MovieGraphSchema.h" },
		{ "ToolTip", "Schema action for creating a new variable node in the graph." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewVariableNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieGraphSchemaAction_NewVariableNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewVariableNode_Statics::NewProp_VariableGuid_MetaData[] = {
		{ "Comment", "/** GUID of the runtime variable this action relates to. */" },
		{ "ModuleRelativePath", "Private/Graph/MovieGraphSchema.h" },
		{ "ToolTip", "GUID of the runtime variable this action relates to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewVariableNode_Statics::NewProp_VariableGuid = { "VariableGuid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphSchemaAction_NewVariableNode, VariableGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewVariableNode_Statics::NewProp_VariableGuid_MetaData), Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewVariableNode_Statics::NewProp_VariableGuid_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewVariableNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewVariableNode_Statics::NewProp_VariableGuid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewVariableNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineEditor,
		Z_Construct_UScriptStruct_FMovieGraphSchemaAction,
		&NewStructOps,
		"MovieGraphSchemaAction_NewVariableNode",
		Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewVariableNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewVariableNode_Statics::PropPointers),
		sizeof(FMovieGraphSchemaAction_NewVariableNode),
		alignof(FMovieGraphSchemaAction_NewVariableNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewVariableNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewVariableNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewVariableNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewVariableNode()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieGraphSchemaAction_NewVariableNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieGraphSchemaAction_NewVariableNode.InnerSingleton, Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewVariableNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieGraphSchemaAction_NewVariableNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMovieGraphSchemaAction_NewComment>() == std::is_polymorphic<FMovieGraphSchemaAction>(), "USTRUCT FMovieGraphSchemaAction_NewComment cannot be polymorphic unless super FMovieGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieGraphSchemaAction_NewComment;
class UScriptStruct* FMovieGraphSchemaAction_NewComment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieGraphSchemaAction_NewComment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieGraphSchemaAction_NewComment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewComment, (UObject*)Z_Construct_UPackage__Script_MovieRenderPipelineEditor(), TEXT("MovieGraphSchemaAction_NewComment"));
	}
	return Z_Registration_Info_UScriptStruct_MovieGraphSchemaAction_NewComment.OuterSingleton;
}
template<> MOVIERENDERPIPELINEEDITOR_API UScriptStruct* StaticStruct<FMovieGraphSchemaAction_NewComment>()
{
	return FMovieGraphSchemaAction_NewComment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewComment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Schema action for creating a new comment node in the graph. */" },
		{ "ModuleRelativePath", "Private/Graph/MovieGraphSchema.h" },
		{ "ToolTip", "Schema action for creating a new comment node in the graph." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewComment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieGraphSchemaAction_NewComment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewComment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineEditor,
		Z_Construct_UScriptStruct_FMovieGraphSchemaAction,
		&NewStructOps,
		"MovieGraphSchemaAction_NewComment",
		nullptr,
		0,
		sizeof(FMovieGraphSchemaAction_NewComment),
		alignof(FMovieGraphSchemaAction_NewComment),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewComment()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieGraphSchemaAction_NewComment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieGraphSchemaAction_NewComment.InnerSingleton, Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewComment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieGraphSchemaAction_NewComment.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieGraphSchema_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieGraphSchema_h_Statics::ScriptStructInfo[] = {
		{ FMovieGraphSchemaAction::StaticStruct, Z_Construct_UScriptStruct_FMovieGraphSchemaAction_Statics::NewStructOps, TEXT("MovieGraphSchemaAction"), &Z_Registration_Info_UScriptStruct_MovieGraphSchemaAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieGraphSchemaAction), 2702992473U) },
		{ FMovieGraphSchemaAction_NewNode::StaticStruct, Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewNode_Statics::NewStructOps, TEXT("MovieGraphSchemaAction_NewNode"), &Z_Registration_Info_UScriptStruct_MovieGraphSchemaAction_NewNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieGraphSchemaAction_NewNode), 1102338691U) },
		{ FMovieGraphSchemaAction_NewVariableNode::StaticStruct, Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewVariableNode_Statics::NewStructOps, TEXT("MovieGraphSchemaAction_NewVariableNode"), &Z_Registration_Info_UScriptStruct_MovieGraphSchemaAction_NewVariableNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieGraphSchemaAction_NewVariableNode), 3609350005U) },
		{ FMovieGraphSchemaAction_NewComment::StaticStruct, Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewComment_Statics::NewStructOps, TEXT("MovieGraphSchemaAction_NewComment"), &Z_Registration_Info_UScriptStruct_MovieGraphSchemaAction_NewComment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieGraphSchemaAction_NewComment), 930946305U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieGraphSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieGraphSchema, UMovieGraphSchema::StaticClass, TEXT("UMovieGraphSchema"), &Z_Registration_Info_UClass_UMovieGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphSchema), 2263695847U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieGraphSchema_h_1257512830(TEXT("/Script/MovieRenderPipelineEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieGraphSchema_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieGraphSchema_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieGraphSchema_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
