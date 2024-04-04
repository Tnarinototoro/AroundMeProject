// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/MovieGraphDefaultRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieGraphDefaultRenderer() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphDefaultRenderer();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphDefaultRenderer_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphRendererBase();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphRenderPassNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	void UMovieGraphDefaultRenderer::StaticRegisterNativesUMovieGraphDefaultRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphDefaultRenderer);
	UClass* Z_Construct_UClass_UMovieGraphDefaultRenderer_NoRegister()
	{
		return UMovieGraphDefaultRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphDefaultRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderPassesInUse_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderPassesInUse_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RenderPassesInUse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphDefaultRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieGraphRendererBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphDefaultRenderer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphDefaultRenderer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* This class is the default implementation for the Movie Graph Pipeline renderer. This\n* is split off into a separate class to minimize the complexity of the core UMovieGraphPipeline,\n* and to provide a better way to store render-specific data during runtime. It is responsible\n* for taking all of the render passes and rendering them, and then moving their rendered\n* data back to the main UMoviePipeline OutputMerger once finished.\n* \n* It is unlikely you will want to implement your own renderer. If you need to create new render\n* passes, inherit from UMovieGraphRenderPassNode and add it to your configuration, at which point\n* MRQ will call function on the CDO of it that allow you to set up your own render data.\n*/" },
		{ "IncludePath", "Graph/MovieGraphDefaultRenderer.h" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphDefaultRenderer.h" },
		{ "ToolTip", "This class is the default implementation for the Movie Graph Pipeline renderer. This\nis split off into a separate class to minimize the complexity of the core UMovieGraphPipeline,\nand to provide a better way to store render-specific data during runtime. It is responsible\nfor taking all of the render passes and rendering them, and then moving their rendered\ndata back to the main UMoviePipeline OutputMerger once finished.\n\nIt is unlikely you will want to implement your own renderer. If you need to create new render\npasses, inherit from UMovieGraphRenderPassNode and add it to your configuration, at which point\nMRQ will call function on the CDO of it that allow you to set up your own render data." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieGraphDefaultRenderer_Statics::NewProp_RenderPassesInUse_Inner = { "RenderPassesInUse", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieGraphRenderPassNode_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphDefaultRenderer_Statics::NewProp_RenderPassesInUse_MetaData[] = {
		{ "Comment", "/** A pointer to the CDOs of the Render Pass nodes that are valid for the current shot render. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphDefaultRenderer.h" },
		{ "ToolTip", "A pointer to the CDOs of the Render Pass nodes that are valid for the current shot render." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieGraphDefaultRenderer_Statics::NewProp_RenderPassesInUse = { "RenderPassesInUse", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphDefaultRenderer, RenderPassesInUse), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphDefaultRenderer_Statics::NewProp_RenderPassesInUse_MetaData), Z_Construct_UClass_UMovieGraphDefaultRenderer_Statics::NewProp_RenderPassesInUse_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieGraphDefaultRenderer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphDefaultRenderer_Statics::NewProp_RenderPassesInUse_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphDefaultRenderer_Statics::NewProp_RenderPassesInUse,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphDefaultRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphDefaultRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphDefaultRenderer_Statics::ClassParams = {
		&UMovieGraphDefaultRenderer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieGraphDefaultRenderer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphDefaultRenderer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphDefaultRenderer_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphDefaultRenderer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphDefaultRenderer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMovieGraphDefaultRenderer()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphDefaultRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphDefaultRenderer.OuterSingleton, Z_Construct_UClass_UMovieGraphDefaultRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphDefaultRenderer.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieGraphDefaultRenderer>()
	{
		return UMovieGraphDefaultRenderer::StaticClass();
	}
	UMovieGraphDefaultRenderer::UMovieGraphDefaultRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphDefaultRenderer);
	UMovieGraphDefaultRenderer::~UMovieGraphDefaultRenderer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDefaultRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDefaultRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieGraphDefaultRenderer, UMovieGraphDefaultRenderer::StaticClass, TEXT("UMovieGraphDefaultRenderer"), &Z_Registration_Info_UClass_UMovieGraphDefaultRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphDefaultRenderer), 3306407280U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDefaultRenderer_h_4221610539(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDefaultRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDefaultRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
