// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Nodes/MovieGraphCollectionNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieGraphCollectionNode() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphCollectionNode();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphCollectionNode_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphSettingNode();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineCollectionQuery_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	void UMovieGraphCollectionNode::StaticRegisterNativesUMovieGraphCollectionNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphCollectionNode);
	UClass* Z_Construct_UClass_UMovieGraphCollectionNode_NoRegister()
	{
		return UMovieGraphCollectionNode::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphCollectionNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_CollectionName_MetaData[];
#endif
		static void NewProp_bOverride_CollectionName_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_CollectionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_QueryClass_MetaData[];
#endif
		static void NewProp_bOverride_QueryClass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_QueryClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollectionName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CollectionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryClass_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_QueryClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphCollectionNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieGraphSettingNode,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphCollectionNode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphCollectionNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n* A collection node specifies an interface for doing dynamic scene queries for actors in the world. Collections work in tandem with\n* UMovieGraphModifiers to select which actors the modifiers should be run on.\n*/" },
		{ "IncludePath", "Graph/Nodes/MovieGraphCollectionNode.h" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphCollectionNode.h" },
		{ "ToolTip", "A collection node specifies an interface for doing dynamic scene queries for actors in the world. Collections work in tandem with\nUMovieGraphModifiers to select which actors the modifiers should be run on." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphCollectionNode_Statics::NewProp_bOverride_CollectionName_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphCollectionNode.h" },
	};
#endif
	void Z_Construct_UClass_UMovieGraphCollectionNode_Statics::NewProp_bOverride_CollectionName_SetBit(void* Obj)
	{
		((UMovieGraphCollectionNode*)Obj)->bOverride_CollectionName = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieGraphCollectionNode_Statics::NewProp_bOverride_CollectionName = { "bOverride_CollectionName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMovieGraphCollectionNode), &Z_Construct_UClass_UMovieGraphCollectionNode_Statics::NewProp_bOverride_CollectionName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphCollectionNode_Statics::NewProp_bOverride_CollectionName_MetaData), Z_Construct_UClass_UMovieGraphCollectionNode_Statics::NewProp_bOverride_CollectionName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphCollectionNode_Statics::NewProp_bOverride_QueryClass_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphCollectionNode.h" },
	};
#endif
	void Z_Construct_UClass_UMovieGraphCollectionNode_Statics::NewProp_bOverride_QueryClass_SetBit(void* Obj)
	{
		((UMovieGraphCollectionNode*)Obj)->bOverride_QueryClass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieGraphCollectionNode_Statics::NewProp_bOverride_QueryClass = { "bOverride_QueryClass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMovieGraphCollectionNode), &Z_Construct_UClass_UMovieGraphCollectionNode_Statics::NewProp_bOverride_QueryClass_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphCollectionNode_Statics::NewProp_bOverride_QueryClass_MetaData), Z_Construct_UClass_UMovieGraphCollectionNode_Statics::NewProp_bOverride_QueryClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphCollectionNode_Statics::NewProp_CollectionName_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The name of this collection, which is used to reference this collection in the graph. */" },
		{ "EditCondition", "bOverride_CollectionName" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphCollectionNode.h" },
		{ "ToolTip", "The name of this collection, which is used to reference this collection in the graph." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieGraphCollectionNode_Statics::NewProp_CollectionName = { "CollectionName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphCollectionNode, CollectionName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphCollectionNode_Statics::NewProp_CollectionName_MetaData), Z_Construct_UClass_UMovieGraphCollectionNode_Statics::NewProp_CollectionName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphCollectionNode_Statics::NewProp_QueryClass_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The type of query this node should run. */" },
		{ "EditCondition", "bOverride_QueryClass" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphCollectionNode.h" },
		{ "ToolTip", "The type of query this node should run." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieGraphCollectionNode_Statics::NewProp_QueryClass = { "QueryClass", nullptr, (EPropertyFlags)0x001600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphCollectionNode, QueryClass), Z_Construct_UClass_UMoviePipelineCollectionQuery_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphCollectionNode_Statics::NewProp_QueryClass_MetaData), Z_Construct_UClass_UMovieGraphCollectionNode_Statics::NewProp_QueryClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieGraphCollectionNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphCollectionNode_Statics::NewProp_bOverride_CollectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphCollectionNode_Statics::NewProp_bOverride_QueryClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphCollectionNode_Statics::NewProp_CollectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphCollectionNode_Statics::NewProp_QueryClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphCollectionNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphCollectionNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphCollectionNode_Statics::ClassParams = {
		&UMovieGraphCollectionNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieGraphCollectionNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphCollectionNode_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphCollectionNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphCollectionNode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphCollectionNode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMovieGraphCollectionNode()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphCollectionNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphCollectionNode.OuterSingleton, Z_Construct_UClass_UMovieGraphCollectionNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphCollectionNode.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieGraphCollectionNode>()
	{
		return UMovieGraphCollectionNode::StaticClass();
	}
	UMovieGraphCollectionNode::UMovieGraphCollectionNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphCollectionNode);
	UMovieGraphCollectionNode::~UMovieGraphCollectionNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphCollectionNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphCollectionNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieGraphCollectionNode, UMovieGraphCollectionNode::StaticClass, TEXT("UMovieGraphCollectionNode"), &Z_Registration_Info_UClass_UMovieGraphCollectionNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphCollectionNode), 2246853422U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphCollectionNode_h_754931344(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphCollectionNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphCollectionNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
