// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Nodes/MovieGraphBranchNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieGraphBranchNode() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphBranchNode();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphBranchNode_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphNode();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	void UMovieGraphBranchNode::StaticRegisterNativesUMovieGraphBranchNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphBranchNode);
	UClass* Z_Construct_UClass_UMovieGraphBranchNode_NoRegister()
	{
		return UMovieGraphBranchNode::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphBranchNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphBranchNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphBranchNode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphBranchNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n* A node which creates a True/False branching condition. A user Graph Variable can be plugged\n* into the conditional pin and this will be evaluated when flattening the graph, choosing which\n* branch path to follow.\n*/" },
		{ "IncludePath", "Graph/Nodes/MovieGraphBranchNode.h" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphBranchNode.h" },
		{ "ToolTip", "A node which creates a True/False branching condition. A user Graph Variable can be plugged\ninto the conditional pin and this will be evaluated when flattening the graph, choosing which\nbranch path to follow." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphBranchNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphBranchNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphBranchNode_Statics::ClassParams = {
		&UMovieGraphBranchNode::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphBranchNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphBranchNode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMovieGraphBranchNode()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphBranchNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphBranchNode.OuterSingleton, Z_Construct_UClass_UMovieGraphBranchNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphBranchNode.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieGraphBranchNode>()
	{
		return UMovieGraphBranchNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphBranchNode);
	UMovieGraphBranchNode::~UMovieGraphBranchNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphBranchNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphBranchNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieGraphBranchNode, UMovieGraphBranchNode::StaticClass, TEXT("UMovieGraphBranchNode"), &Z_Registration_Info_UClass_UMovieGraphBranchNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphBranchNode), 540754742U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphBranchNode_h_2462458352(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphBranchNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphBranchNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
