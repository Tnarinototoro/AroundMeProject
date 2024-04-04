// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Nodes/MovieGraphRenderPassNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieGraphRenderPassNode() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphRenderPassNode();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphRenderPassNode_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphSettingNode();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	void UMovieGraphRenderPassNode::StaticRegisterNativesUMovieGraphRenderPassNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphRenderPassNode);
	UClass* Z_Construct_UClass_UMovieGraphRenderPassNode_NoRegister()
	{
		return UMovieGraphRenderPassNode::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphRenderPassNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphRenderPassNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieGraphSettingNode,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphRenderPassNode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphRenderPassNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* The UMovieGraphRenderPassNode node defines a render pass that MRQ may produce. This node can be implemented\n* in the graph multiple times, and the exact settings it should use can be created out of a mixture of nodes. Because\n* of this, when rendering, MRQ will figure out how many layers there are that actually use this CDO and will call\n* the function on the CDO once, providing the information about all instances. This will allow the node to create any\n* number of instances (decoupled from the number of times the node is used in the graph).\n*/" },
		{ "IncludePath", "Graph/Nodes/MovieGraphRenderPassNode.h" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphRenderPassNode.h" },
		{ "ToolTip", "The UMovieGraphRenderPassNode node defines a render pass that MRQ may produce. This node can be implemented\nin the graph multiple times, and the exact settings it should use can be created out of a mixture of nodes. Because\nof this, when rendering, MRQ will figure out how many layers there are that actually use this CDO and will call\nthe function on the CDO once, providing the information about all instances. This will allow the node to create any\nnumber of instances (decoupled from the number of times the node is used in the graph)." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphRenderPassNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphRenderPassNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphRenderPassNode_Statics::ClassParams = {
		&UMovieGraphRenderPassNode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphRenderPassNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphRenderPassNode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMovieGraphRenderPassNode()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphRenderPassNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphRenderPassNode.OuterSingleton, Z_Construct_UClass_UMovieGraphRenderPassNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphRenderPassNode.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieGraphRenderPassNode>()
	{
		return UMovieGraphRenderPassNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphRenderPassNode);
	UMovieGraphRenderPassNode::~UMovieGraphRenderPassNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphRenderPassNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphRenderPassNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieGraphRenderPassNode, UMovieGraphRenderPassNode::StaticClass, TEXT("UMovieGraphRenderPassNode"), &Z_Registration_Info_UClass_UMovieGraphRenderPassNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphRenderPassNode), 949912100U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphRenderPassNode_h_3788117450(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphRenderPassNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphRenderPassNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
