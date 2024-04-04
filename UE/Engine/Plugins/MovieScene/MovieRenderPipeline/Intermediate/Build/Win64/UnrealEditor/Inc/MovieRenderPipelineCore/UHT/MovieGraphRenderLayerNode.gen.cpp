// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Nodes/MovieGraphRenderLayerNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieGraphRenderLayerNode() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphRenderLayerNode();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphRenderLayerNode_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphSettingNode();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	void UMovieGraphRenderLayerNode::StaticRegisterNativesUMovieGraphRenderLayerNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphRenderLayerNode);
	UClass* Z_Construct_UClass_UMovieGraphRenderLayerNode_NoRegister()
	{
		return UMovieGraphRenderLayerNode::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphRenderLayerNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LayerName_MetaData[];
#endif
		static void NewProp_bOverride_LayerName_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LayerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LayerName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphRenderLayerNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieGraphSettingNode,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphRenderLayerNode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphRenderLayerNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/Nodes/MovieGraphRenderLayerNode.h" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphRenderLayerNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphRenderLayerNode_Statics::NewProp_bOverride_LayerName_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphRenderLayerNode.h" },
	};
#endif
	void Z_Construct_UClass_UMovieGraphRenderLayerNode_Statics::NewProp_bOverride_LayerName_SetBit(void* Obj)
	{
		((UMovieGraphRenderLayerNode*)Obj)->bOverride_LayerName = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieGraphRenderLayerNode_Statics::NewProp_bOverride_LayerName = { "bOverride_LayerName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMovieGraphRenderLayerNode), &Z_Construct_UClass_UMovieGraphRenderLayerNode_Statics::NewProp_bOverride_LayerName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphRenderLayerNode_Statics::NewProp_bOverride_LayerName_MetaData), Z_Construct_UClass_UMovieGraphRenderLayerNode_Statics::NewProp_bOverride_LayerName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphRenderLayerNode_Statics::NewProp_LayerName_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bOverride_LayerName" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphRenderLayerNode.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieGraphRenderLayerNode_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphRenderLayerNode, LayerName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphRenderLayerNode_Statics::NewProp_LayerName_MetaData), Z_Construct_UClass_UMovieGraphRenderLayerNode_Statics::NewProp_LayerName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieGraphRenderLayerNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphRenderLayerNode_Statics::NewProp_bOverride_LayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphRenderLayerNode_Statics::NewProp_LayerName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphRenderLayerNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphRenderLayerNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphRenderLayerNode_Statics::ClassParams = {
		&UMovieGraphRenderLayerNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieGraphRenderLayerNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphRenderLayerNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphRenderLayerNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphRenderLayerNode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphRenderLayerNode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMovieGraphRenderLayerNode()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphRenderLayerNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphRenderLayerNode.OuterSingleton, Z_Construct_UClass_UMovieGraphRenderLayerNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphRenderLayerNode.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieGraphRenderLayerNode>()
	{
		return UMovieGraphRenderLayerNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphRenderLayerNode);
	UMovieGraphRenderLayerNode::~UMovieGraphRenderLayerNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphRenderLayerNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphRenderLayerNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieGraphRenderLayerNode, UMovieGraphRenderLayerNode::StaticClass, TEXT("UMovieGraphRenderLayerNode"), &Z_Registration_Info_UClass_UMovieGraphRenderLayerNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphRenderLayerNode), 2103556868U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphRenderLayerNode_h_1456592793(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphRenderLayerNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphRenderLayerNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
