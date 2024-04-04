// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/MovieGraphPlaceholderNodes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieGraphPlaceholderNodes() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphAntiAliasingNode();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphAntiAliasingNode_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphEXRSequenceNode();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphEXRSequenceNode_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphPathTracedRendererNode();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphPathTracedRendererNode_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphSettingNode();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	void UMovieGraphPathTracedRendererNode::StaticRegisterNativesUMovieGraphPathTracedRendererNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphPathTracedRendererNode);
	UClass* Z_Construct_UClass_UMovieGraphPathTracedRendererNode_NoRegister()
	{
		return UMovieGraphPathTracedRendererNode::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphPathTracedRendererNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphPathTracedRendererNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieGraphSettingNode,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphPathTracedRendererNode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphPathTracedRendererNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A node which represents a path traced renderer. */" },
		{ "IncludePath", "Graph/MovieGraphPlaceholderNodes.h" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphPlaceholderNodes.h" },
		{ "ToolTip", "A node which represents a path traced renderer." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphPathTracedRendererNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphPathTracedRendererNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphPathTracedRendererNode_Statics::ClassParams = {
		&UMovieGraphPathTracedRendererNode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphPathTracedRendererNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphPathTracedRendererNode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMovieGraphPathTracedRendererNode()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphPathTracedRendererNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphPathTracedRendererNode.OuterSingleton, Z_Construct_UClass_UMovieGraphPathTracedRendererNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphPathTracedRendererNode.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieGraphPathTracedRendererNode>()
	{
		return UMovieGraphPathTracedRendererNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphPathTracedRendererNode);
	UMovieGraphPathTracedRendererNode::~UMovieGraphPathTracedRendererNode() {}
	void UMovieGraphEXRSequenceNode::StaticRegisterNativesUMovieGraphEXRSequenceNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphEXRSequenceNode);
	UClass* Z_Construct_UClass_UMovieGraphEXRSequenceNode_NoRegister()
	{
		return UMovieGraphEXRSequenceNode::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphEXRSequenceNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphEXRSequenceNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieGraphSettingNode,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphEXRSequenceNode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphEXRSequenceNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A node which generates an EXR image sequence. */" },
		{ "IncludePath", "Graph/MovieGraphPlaceholderNodes.h" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphPlaceholderNodes.h" },
		{ "ToolTip", "A node which generates an EXR image sequence." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphEXRSequenceNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphEXRSequenceNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphEXRSequenceNode_Statics::ClassParams = {
		&UMovieGraphEXRSequenceNode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphEXRSequenceNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphEXRSequenceNode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMovieGraphEXRSequenceNode()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphEXRSequenceNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphEXRSequenceNode.OuterSingleton, Z_Construct_UClass_UMovieGraphEXRSequenceNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphEXRSequenceNode.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieGraphEXRSequenceNode>()
	{
		return UMovieGraphEXRSequenceNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphEXRSequenceNode);
	UMovieGraphEXRSequenceNode::~UMovieGraphEXRSequenceNode() {}
	void UMovieGraphAntiAliasingNode::StaticRegisterNativesUMovieGraphAntiAliasingNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphAntiAliasingNode);
	UClass* Z_Construct_UClass_UMovieGraphAntiAliasingNode_NoRegister()
	{
		return UMovieGraphAntiAliasingNode::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphAntiAliasingNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphAntiAliasingNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieGraphSettingNode,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphAntiAliasingNode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphAntiAliasingNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A node which configures anti-aliasing settings. */" },
		{ "IncludePath", "Graph/MovieGraphPlaceholderNodes.h" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphPlaceholderNodes.h" },
		{ "ToolTip", "A node which configures anti-aliasing settings." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphAntiAliasingNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphAntiAliasingNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphAntiAliasingNode_Statics::ClassParams = {
		&UMovieGraphAntiAliasingNode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphAntiAliasingNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphAntiAliasingNode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMovieGraphAntiAliasingNode()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphAntiAliasingNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphAntiAliasingNode.OuterSingleton, Z_Construct_UClass_UMovieGraphAntiAliasingNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphAntiAliasingNode.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieGraphAntiAliasingNode>()
	{
		return UMovieGraphAntiAliasingNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphAntiAliasingNode);
	UMovieGraphAntiAliasingNode::~UMovieGraphAntiAliasingNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPlaceholderNodes_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPlaceholderNodes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieGraphPathTracedRendererNode, UMovieGraphPathTracedRendererNode::StaticClass, TEXT("UMovieGraphPathTracedRendererNode"), &Z_Registration_Info_UClass_UMovieGraphPathTracedRendererNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphPathTracedRendererNode), 2322263896U) },
		{ Z_Construct_UClass_UMovieGraphEXRSequenceNode, UMovieGraphEXRSequenceNode::StaticClass, TEXT("UMovieGraphEXRSequenceNode"), &Z_Registration_Info_UClass_UMovieGraphEXRSequenceNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphEXRSequenceNode), 3822702240U) },
		{ Z_Construct_UClass_UMovieGraphAntiAliasingNode, UMovieGraphAntiAliasingNode::StaticClass, TEXT("UMovieGraphAntiAliasingNode"), &Z_Registration_Info_UClass_UMovieGraphAntiAliasingNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphAntiAliasingNode), 3464024079U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPlaceholderNodes_h_2280237901(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPlaceholderNodes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPlaceholderNodes_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
