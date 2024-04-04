// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Nodes/MovieGraphSubgraphNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieGraphSubgraphNode() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphConfig_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphNode();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphSubgraphNode();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphSubgraphNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	DEFINE_FUNCTION(UMovieGraphSubgraphNode::execGetSubgraphAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMovieGraphConfig**)Z_Param__Result=P_THIS->GetSubgraphAsset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieGraphSubgraphNode::execSetSubGraphAsset)
	{
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UMovieGraphConfig>,Z_Param_Out_InSubgraphAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSubGraphAsset(Z_Param_Out_InSubgraphAsset);
		P_NATIVE_END;
	}
	void UMovieGraphSubgraphNode::StaticRegisterNativesUMovieGraphSubgraphNode()
	{
		UClass* Class = UMovieGraphSubgraphNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSubgraphAsset", &UMovieGraphSubgraphNode::execGetSubgraphAsset },
			{ "SetSubGraphAsset", &UMovieGraphSubgraphNode::execSetSubGraphAsset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieGraphSubgraphNode_GetSubgraphAsset_Statics
	{
		struct MovieGraphSubgraphNode_eventGetSubgraphAsset_Parms
		{
			UMovieGraphConfig* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieGraphSubgraphNode_GetSubgraphAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphSubgraphNode_eventGetSubgraphAsset_Parms, ReturnValue), Z_Construct_UClass_UMovieGraphConfig_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphSubgraphNode_GetSubgraphAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphSubgraphNode_GetSubgraphAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphSubgraphNode_GetSubgraphAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Graph" },
		{ "Comment", "/** Gets the graph asset this subgraph points to. */" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphSubgraphNode.h" },
		{ "ToolTip", "Gets the graph asset this subgraph points to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphSubgraphNode_GetSubgraphAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphSubgraphNode, nullptr, "GetSubgraphAsset", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphSubgraphNode_GetSubgraphAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphSubgraphNode_GetSubgraphAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphSubgraphNode_GetSubgraphAsset_Statics::MovieGraphSubgraphNode_eventGetSubgraphAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphSubgraphNode_GetSubgraphAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphSubgraphNode_GetSubgraphAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphSubgraphNode_GetSubgraphAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphSubgraphNode_GetSubgraphAsset_Statics::MovieGraphSubgraphNode_eventGetSubgraphAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphSubgraphNode_GetSubgraphAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphSubgraphNode_GetSubgraphAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieGraphSubgraphNode_SetSubGraphAsset_Statics
	{
		struct MovieGraphSubgraphNode_eventSetSubGraphAsset_Parms
		{
			TSoftObjectPtr<UMovieGraphConfig> InSubgraphAsset;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSubgraphAsset_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InSubgraphAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphSubgraphNode_SetSubGraphAsset_Statics::NewProp_InSubgraphAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UMovieGraphSubgraphNode_SetSubGraphAsset_Statics::NewProp_InSubgraphAsset = { "InSubgraphAsset", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphSubgraphNode_eventSetSubGraphAsset_Parms, InSubgraphAsset), Z_Construct_UClass_UMovieGraphConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphSubgraphNode_SetSubGraphAsset_Statics::NewProp_InSubgraphAsset_MetaData), Z_Construct_UFunction_UMovieGraphSubgraphNode_SetSubGraphAsset_Statics::NewProp_InSubgraphAsset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphSubgraphNode_SetSubGraphAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphSubgraphNode_SetSubGraphAsset_Statics::NewProp_InSubgraphAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphSubgraphNode_SetSubGraphAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Graph" },
		{ "Comment", "/** Sets the graph asset this subgraph points to. */" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphSubgraphNode.h" },
		{ "ToolTip", "Sets the graph asset this subgraph points to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphSubgraphNode_SetSubGraphAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphSubgraphNode, nullptr, "SetSubGraphAsset", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphSubgraphNode_SetSubGraphAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphSubgraphNode_SetSubGraphAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphSubgraphNode_SetSubGraphAsset_Statics::MovieGraphSubgraphNode_eventSetSubGraphAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphSubgraphNode_SetSubGraphAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphSubgraphNode_SetSubGraphAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphSubgraphNode_SetSubGraphAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphSubgraphNode_SetSubGraphAsset_Statics::MovieGraphSubgraphNode_eventSetSubGraphAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphSubgraphNode_SetSubGraphAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphSubgraphNode_SetSubGraphAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphSubgraphNode);
	UClass* Z_Construct_UClass_UMovieGraphSubgraphNode_NoRegister()
	{
		return UMovieGraphSubgraphNode::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphSubgraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubgraphAsset_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SubgraphAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphSubgraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphSubgraphNode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieGraphSubgraphNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieGraphSubgraphNode_GetSubgraphAsset, "GetSubgraphAsset" }, // 1116140179
		{ &Z_Construct_UFunction_UMovieGraphSubgraphNode_SetSubGraphAsset, "SetSubGraphAsset" }, // 2640571782
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphSubgraphNode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphSubgraphNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A node which represents another graph asset. Inputs/outputs on this subgraph will update if the underlying graph\n * asset's inputs/outputs change.\n */" },
		{ "IncludePath", "Graph/Nodes/MovieGraphSubgraphNode.h" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphSubgraphNode.h" },
		{ "ToolTip", "A node which represents another graph asset. Inputs/outputs on this subgraph will update if the underlying graph\nasset's inputs/outputs change." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphSubgraphNode_Statics::NewProp_SubgraphAsset_MetaData[] = {
		{ "Category", "Graph" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphSubgraphNode.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMovieGraphSubgraphNode_Statics::NewProp_SubgraphAsset = { "SubgraphAsset", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphSubgraphNode, SubgraphAsset), Z_Construct_UClass_UMovieGraphConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphSubgraphNode_Statics::NewProp_SubgraphAsset_MetaData), Z_Construct_UClass_UMovieGraphSubgraphNode_Statics::NewProp_SubgraphAsset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieGraphSubgraphNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphSubgraphNode_Statics::NewProp_SubgraphAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphSubgraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphSubgraphNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphSubgraphNode_Statics::ClassParams = {
		&UMovieGraphSubgraphNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMovieGraphSubgraphNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphSubgraphNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphSubgraphNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphSubgraphNode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphSubgraphNode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMovieGraphSubgraphNode()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphSubgraphNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphSubgraphNode.OuterSingleton, Z_Construct_UClass_UMovieGraphSubgraphNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphSubgraphNode.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieGraphSubgraphNode>()
	{
		return UMovieGraphSubgraphNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphSubgraphNode);
	UMovieGraphSubgraphNode::~UMovieGraphSubgraphNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphSubgraphNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphSubgraphNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieGraphSubgraphNode, UMovieGraphSubgraphNode::StaticClass, TEXT("UMovieGraphSubgraphNode"), &Z_Registration_Info_UClass_UMovieGraphSubgraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphSubgraphNode), 2446291063U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphSubgraphNode_h_418693259(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphSubgraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphSubgraphNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
