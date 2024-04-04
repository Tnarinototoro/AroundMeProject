// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Nodes/MovieGraphOutputNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieGraphOutputNode() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphNode();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphOutputNode();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphOutputNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	void UMovieGraphOutputNode::StaticRegisterNativesUMovieGraphOutputNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphOutputNode);
	UClass* Z_Construct_UClass_UMovieGraphOutputNode_NoRegister()
	{
		return UMovieGraphOutputNode::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphOutputNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphOutputNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphOutputNode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphOutputNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A graph node which displays all output members available in the graph. */" },
		{ "IncludePath", "Graph/Nodes/MovieGraphOutputNode.h" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphOutputNode.h" },
		{ "ToolTip", "A graph node which displays all output members available in the graph." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphOutputNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphOutputNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphOutputNode_Statics::ClassParams = {
		&UMovieGraphOutputNode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphOutputNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphOutputNode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMovieGraphOutputNode()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphOutputNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphOutputNode.OuterSingleton, Z_Construct_UClass_UMovieGraphOutputNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphOutputNode.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieGraphOutputNode>()
	{
		return UMovieGraphOutputNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphOutputNode);
	UMovieGraphOutputNode::~UMovieGraphOutputNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphOutputNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphOutputNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieGraphOutputNode, UMovieGraphOutputNode::StaticClass, TEXT("UMovieGraphOutputNode"), &Z_Registration_Info_UClass_UMovieGraphOutputNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphOutputNode), 3192917205U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphOutputNode_h_256578324(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphOutputNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphOutputNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
