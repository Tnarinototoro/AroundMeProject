// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Nodes/MovieGraphSelectNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieGraphSelectNode() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphNode();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphSelectNode();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphSelectNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	void UMovieGraphSelectNode::StaticRegisterNativesUMovieGraphSelectNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphSelectNode);
	UClass* Z_Construct_UClass_UMovieGraphSelectNode_NoRegister()
	{
		return UMovieGraphSelectNode::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphSelectNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SelectOptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectOptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedOption_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedOption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphSelectNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphSelectNode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphSelectNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A node which creates a condition that selects from a set of input branches. */" },
		{ "IncludePath", "Graph/Nodes/MovieGraphSelectNode.h" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphSelectNode.h" },
		{ "ToolTip", "A node which creates a condition that selects from a set of input branches." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieGraphSelectNode_Statics::NewProp_SelectOptions_Inner = { "SelectOptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphSelectNode_Statics::NewProp_SelectOptions_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The values of options which can be selected. */" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphSelectNode.h" },
		{ "ToolTip", "The values of options which can be selected." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieGraphSelectNode_Statics::NewProp_SelectOptions = { "SelectOptions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphSelectNode, SelectOptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphSelectNode_Statics::NewProp_SelectOptions_MetaData), Z_Construct_UClass_UMovieGraphSelectNode_Statics::NewProp_SelectOptions_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphSelectNode_Statics::NewProp_SelectedOption_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The value of the option which has been selected. */" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphSelectNode.h" },
		{ "ToolTip", "The value of the option which has been selected." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieGraphSelectNode_Statics::NewProp_SelectedOption = { "SelectedOption", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphSelectNode, SelectedOption), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphSelectNode_Statics::NewProp_SelectedOption_MetaData), Z_Construct_UClass_UMovieGraphSelectNode_Statics::NewProp_SelectedOption_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphSelectNode_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** A description of what this select is doing. */" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphSelectNode.h" },
		{ "ToolTip", "A description of what this select is doing." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieGraphSelectNode_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphSelectNode, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphSelectNode_Statics::NewProp_Description_MetaData), Z_Construct_UClass_UMovieGraphSelectNode_Statics::NewProp_Description_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieGraphSelectNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphSelectNode_Statics::NewProp_SelectOptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphSelectNode_Statics::NewProp_SelectOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphSelectNode_Statics::NewProp_SelectedOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphSelectNode_Statics::NewProp_Description,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphSelectNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphSelectNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphSelectNode_Statics::ClassParams = {
		&UMovieGraphSelectNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieGraphSelectNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphSelectNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphSelectNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphSelectNode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphSelectNode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMovieGraphSelectNode()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphSelectNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphSelectNode.OuterSingleton, Z_Construct_UClass_UMovieGraphSelectNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphSelectNode.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieGraphSelectNode>()
	{
		return UMovieGraphSelectNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphSelectNode);
	UMovieGraphSelectNode::~UMovieGraphSelectNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphSelectNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphSelectNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieGraphSelectNode, UMovieGraphSelectNode::StaticClass, TEXT("UMovieGraphSelectNode"), &Z_Registration_Info_UClass_UMovieGraphSelectNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphSelectNode), 820949541U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphSelectNode_h_3509512911(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphSelectNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphSelectNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
