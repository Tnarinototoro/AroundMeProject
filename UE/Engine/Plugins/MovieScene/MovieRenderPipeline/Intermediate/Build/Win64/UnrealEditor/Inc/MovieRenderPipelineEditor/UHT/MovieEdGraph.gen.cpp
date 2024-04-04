// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Graph/MovieEdGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieEdGraph() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMoviePipelineEdGraph();
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMoviePipelineEdGraph_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineEditor();
// End Cross Module References
	void UMoviePipelineEdGraph::StaticRegisterNativesUMoviePipelineEdGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineEdGraph);
	UClass* Z_Construct_UClass_UMoviePipelineEdGraph_NoRegister()
	{
		return UMoviePipelineEdGraph::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineEdGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineEdGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineEdGraph_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineEdGraph_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* This is the editor-only graph representation of the UMovieGraphConfig. This contains\n* editor only nodes (which have information about their X/Y position graphs, their widgets, etc.)\n* where each node in this ed graph is tied to a node in the runtime UMovieGraphConfig.\n*/" },
		{ "IncludePath", "Graph/MovieEdGraph.h" },
		{ "ModuleRelativePath", "Private/Graph/MovieEdGraph.h" },
		{ "ToolTip", "This is the editor-only graph representation of the UMovieGraphConfig. This contains\neditor only nodes (which have information about their X/Y position graphs, their widgets, etc.)\nwhere each node in this ed graph is tied to a node in the runtime UMovieGraphConfig." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineEdGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineEdGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineEdGraph_Statics::ClassParams = {
		&UMoviePipelineEdGraph::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineEdGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoviePipelineEdGraph_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMoviePipelineEdGraph()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineEdGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineEdGraph.OuterSingleton, Z_Construct_UClass_UMoviePipelineEdGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineEdGraph.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINEEDITOR_API UClass* StaticClass<UMoviePipelineEdGraph>()
	{
		return UMoviePipelineEdGraph::StaticClass();
	}
	UMoviePipelineEdGraph::UMoviePipelineEdGraph(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineEdGraph);
	UMoviePipelineEdGraph::~UMoviePipelineEdGraph() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelineEdGraph, UMoviePipelineEdGraph::StaticClass, TEXT("UMoviePipelineEdGraph"), &Z_Registration_Info_UClass_UMoviePipelineEdGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineEdGraph), 912577686U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraph_h_2683729884(TEXT("/Script/MovieRenderPipelineEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
