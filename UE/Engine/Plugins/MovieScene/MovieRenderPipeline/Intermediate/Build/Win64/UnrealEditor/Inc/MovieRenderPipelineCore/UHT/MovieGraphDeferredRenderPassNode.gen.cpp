// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Nodes/MovieGraphDeferredRenderPassNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieGraphDeferredRenderPassNode() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphDeferredRenderPassNode();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphDeferredRenderPassNode_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphRenderPassNode();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	void UMovieGraphDeferredRenderPassNode::StaticRegisterNativesUMovieGraphDeferredRenderPassNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphDeferredRenderPassNode);
	UClass* Z_Construct_UClass_UMovieGraphDeferredRenderPassNode_NoRegister()
	{
		return UMovieGraphDeferredRenderPassNode::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphDeferredRenderPassNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphDeferredRenderPassNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieGraphRenderPassNode,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphDeferredRenderPassNode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphDeferredRenderPassNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/Nodes/MovieGraphDeferredRenderPassNode.h" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphDeferredRenderPassNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphDeferredRenderPassNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphDeferredRenderPassNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphDeferredRenderPassNode_Statics::ClassParams = {
		&UMovieGraphDeferredRenderPassNode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphDeferredRenderPassNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphDeferredRenderPassNode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMovieGraphDeferredRenderPassNode()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphDeferredRenderPassNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphDeferredRenderPassNode.OuterSingleton, Z_Construct_UClass_UMovieGraphDeferredRenderPassNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphDeferredRenderPassNode.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieGraphDeferredRenderPassNode>()
	{
		return UMovieGraphDeferredRenderPassNode::StaticClass();
	}
	UMovieGraphDeferredRenderPassNode::UMovieGraphDeferredRenderPassNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphDeferredRenderPassNode);
	UMovieGraphDeferredRenderPassNode::~UMovieGraphDeferredRenderPassNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphDeferredRenderPassNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphDeferredRenderPassNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieGraphDeferredRenderPassNode, UMovieGraphDeferredRenderPassNode::StaticClass, TEXT("UMovieGraphDeferredRenderPassNode"), &Z_Registration_Info_UClass_UMovieGraphDeferredRenderPassNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphDeferredRenderPassNode), 3550214911U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphDeferredRenderPassNode_h_2494150927(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphDeferredRenderPassNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphDeferredRenderPassNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
