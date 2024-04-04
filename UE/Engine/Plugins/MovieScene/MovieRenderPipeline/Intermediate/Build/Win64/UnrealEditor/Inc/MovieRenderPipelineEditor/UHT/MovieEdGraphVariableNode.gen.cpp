// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Graph/MovieEdGraphVariableNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieEdGraphVariableNode() {}
// Cross Module References
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMoviePipelineEdGraphNodeBase();
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMoviePipelineEdGraphVariableNode();
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMoviePipelineEdGraphVariableNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineEditor();
// End Cross Module References
	void UMoviePipelineEdGraphVariableNode::StaticRegisterNativesUMoviePipelineEdGraphVariableNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineEdGraphVariableNode);
	UClass* Z_Construct_UClass_UMoviePipelineEdGraphVariableNode_NoRegister()
	{
		return UMoviePipelineEdGraphVariableNode::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineEdGraphVariableNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineEdGraphVariableNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineEdGraphNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineEdGraphVariableNode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineEdGraphVariableNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** An editor node which represents an accessor for a variable defined on the graph. */" },
		{ "IncludePath", "Graph/MovieEdGraphVariableNode.h" },
		{ "ModuleRelativePath", "Private/Graph/MovieEdGraphVariableNode.h" },
		{ "ToolTip", "An editor node which represents an accessor for a variable defined on the graph." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineEdGraphVariableNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineEdGraphVariableNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineEdGraphVariableNode_Statics::ClassParams = {
		&UMoviePipelineEdGraphVariableNode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineEdGraphVariableNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoviePipelineEdGraphVariableNode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMoviePipelineEdGraphVariableNode()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineEdGraphVariableNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineEdGraphVariableNode.OuterSingleton, Z_Construct_UClass_UMoviePipelineEdGraphVariableNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineEdGraphVariableNode.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINEEDITOR_API UClass* StaticClass<UMoviePipelineEdGraphVariableNode>()
	{
		return UMoviePipelineEdGraphVariableNode::StaticClass();
	}
	UMoviePipelineEdGraphVariableNode::UMoviePipelineEdGraphVariableNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineEdGraphVariableNode);
	UMoviePipelineEdGraphVariableNode::~UMoviePipelineEdGraphVariableNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraphVariableNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraphVariableNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelineEdGraphVariableNode, UMoviePipelineEdGraphVariableNode::StaticClass, TEXT("UMoviePipelineEdGraphVariableNode"), &Z_Registration_Info_UClass_UMoviePipelineEdGraphVariableNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineEdGraphVariableNode), 1340546945U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraphVariableNode_h_1151666301(TEXT("/Script/MovieRenderPipelineEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraphVariableNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraphVariableNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
