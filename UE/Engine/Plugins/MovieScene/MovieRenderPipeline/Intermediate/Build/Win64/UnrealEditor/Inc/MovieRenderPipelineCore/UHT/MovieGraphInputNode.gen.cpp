// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Nodes/MovieGraphInputNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieGraphInputNode() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphInputNode();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphInputNode_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphNode();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	void UMovieGraphInputNode::StaticRegisterNativesUMovieGraphInputNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphInputNode);
	UClass* Z_Construct_UClass_UMovieGraphInputNode_NoRegister()
	{
		return UMovieGraphInputNode::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphInputNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphInputNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphInputNode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphInputNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A graph node which displays all input members available in the graph. */" },
		{ "IncludePath", "Graph/Nodes/MovieGraphInputNode.h" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphInputNode.h" },
		{ "ToolTip", "A graph node which displays all input members available in the graph." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphInputNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphInputNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphInputNode_Statics::ClassParams = {
		&UMovieGraphInputNode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphInputNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphInputNode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMovieGraphInputNode()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphInputNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphInputNode.OuterSingleton, Z_Construct_UClass_UMovieGraphInputNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphInputNode.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieGraphInputNode>()
	{
		return UMovieGraphInputNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphInputNode);
	UMovieGraphInputNode::~UMovieGraphInputNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphInputNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphInputNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieGraphInputNode, UMovieGraphInputNode::StaticClass, TEXT("UMovieGraphInputNode"), &Z_Registration_Info_UClass_UMovieGraphInputNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphInputNode), 3334544127U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphInputNode_h_4060007007(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphInputNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphInputNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
