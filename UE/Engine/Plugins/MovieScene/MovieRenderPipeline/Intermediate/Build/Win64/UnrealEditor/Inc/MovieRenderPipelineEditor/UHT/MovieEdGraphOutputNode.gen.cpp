// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Graph/MovieEdGraphOutputNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieEdGraphOutputNode() {}
// Cross Module References
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMoviePipelineEdGraphNodeBase();
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMoviePipelineEdGraphNodeOutput();
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMoviePipelineEdGraphNodeOutput_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineEditor();
// End Cross Module References
	void UMoviePipelineEdGraphNodeOutput::StaticRegisterNativesUMoviePipelineEdGraphNodeOutput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineEdGraphNodeOutput);
	UClass* Z_Construct_UClass_UMoviePipelineEdGraphNodeOutput_NoRegister()
	{
		return UMoviePipelineEdGraphNodeOutput::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineEdGraphNodeOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineEdGraphNodeOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineEdGraphNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineEdGraphNodeOutput_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineEdGraphNodeOutput_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/MovieEdGraphOutputNode.h" },
		{ "ModuleRelativePath", "Private/Graph/MovieEdGraphOutputNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineEdGraphNodeOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineEdGraphNodeOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineEdGraphNodeOutput_Statics::ClassParams = {
		&UMoviePipelineEdGraphNodeOutput::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineEdGraphNodeOutput_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoviePipelineEdGraphNodeOutput_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMoviePipelineEdGraphNodeOutput()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineEdGraphNodeOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineEdGraphNodeOutput.OuterSingleton, Z_Construct_UClass_UMoviePipelineEdGraphNodeOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineEdGraphNodeOutput.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINEEDITOR_API UClass* StaticClass<UMoviePipelineEdGraphNodeOutput>()
	{
		return UMoviePipelineEdGraphNodeOutput::StaticClass();
	}
	UMoviePipelineEdGraphNodeOutput::UMoviePipelineEdGraphNodeOutput(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineEdGraphNodeOutput);
	UMoviePipelineEdGraphNodeOutput::~UMoviePipelineEdGraphNodeOutput() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraphOutputNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraphOutputNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelineEdGraphNodeOutput, UMoviePipelineEdGraphNodeOutput::StaticClass, TEXT("UMoviePipelineEdGraphNodeOutput"), &Z_Registration_Info_UClass_UMoviePipelineEdGraphNodeOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineEdGraphNodeOutput), 1954393139U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraphOutputNode_h_1004540505(TEXT("/Script/MovieRenderPipelineEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraphOutputNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraphOutputNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
