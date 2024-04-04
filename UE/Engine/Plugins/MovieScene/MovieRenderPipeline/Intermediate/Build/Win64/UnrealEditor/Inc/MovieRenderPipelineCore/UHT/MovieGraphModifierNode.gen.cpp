// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Nodes/MovieGraphModifierNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieGraphModifierNode() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphModifierNode();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphModifierNode_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphSettingNode();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineCollectionModifier_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	void UMovieGraphModifierNode::StaticRegisterNativesUMovieGraphModifierNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphModifierNode);
	UClass* Z_Construct_UClass_UMovieGraphModifierNode_NoRegister()
	{
		return UMovieGraphModifierNode::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphModifierNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ModifierName_MetaData[];
#endif
		static void NewProp_bOverride_ModifierName_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ModifierName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ModifiedCollectionName_MetaData[];
#endif
		static void NewProp_bOverride_ModifiedCollectionName_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ModifiedCollectionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ModifierClass_MetaData[];
#endif
		static void NewProp_bOverride_ModifierClass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ModifierClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifierName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ModifierName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifiedCollectionName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ModifiedCollectionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifierClass_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ModifierClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphModifierNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieGraphSettingNode,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphModifierNode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphModifierNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n* A collection node specifies an interface for doing dynamic scene queries for actors in the world. Collections work in tandem with\n* UMovieGraphModifiers to select which actors the modifiers should be run on.\n*/" },
		{ "IncludePath", "Graph/Nodes/MovieGraphModifierNode.h" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphModifierNode.h" },
		{ "ToolTip", "A collection node specifies an interface for doing dynamic scene queries for actors in the world. Collections work in tandem with\nUMovieGraphModifiers to select which actors the modifiers should be run on." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphModifierNode_Statics::NewProp_bOverride_ModifierName_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphModifierNode.h" },
	};
#endif
	void Z_Construct_UClass_UMovieGraphModifierNode_Statics::NewProp_bOverride_ModifierName_SetBit(void* Obj)
	{
		((UMovieGraphModifierNode*)Obj)->bOverride_ModifierName = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieGraphModifierNode_Statics::NewProp_bOverride_ModifierName = { "bOverride_ModifierName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMovieGraphModifierNode), &Z_Construct_UClass_UMovieGraphModifierNode_Statics::NewProp_bOverride_ModifierName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphModifierNode_Statics::NewProp_bOverride_ModifierName_MetaData), Z_Construct_UClass_UMovieGraphModifierNode_Statics::NewProp_bOverride_ModifierName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphModifierNode_Statics::NewProp_bOverride_ModifiedCollectionName_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphModifierNode.h" },
	};
#endif
	void Z_Construct_UClass_UMovieGraphModifierNode_Statics::NewProp_bOverride_ModifiedCollectionName_SetBit(void* Obj)
	{
		((UMovieGraphModifierNode*)Obj)->bOverride_ModifiedCollectionName = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieGraphModifierNode_Statics::NewProp_bOverride_ModifiedCollectionName = { "bOverride_ModifiedCollectionName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMovieGraphModifierNode), &Z_Construct_UClass_UMovieGraphModifierNode_Statics::NewProp_bOverride_ModifiedCollectionName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphModifierNode_Statics::NewProp_bOverride_ModifiedCollectionName_MetaData), Z_Construct_UClass_UMovieGraphModifierNode_Statics::NewProp_bOverride_ModifiedCollectionName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphModifierNode_Statics::NewProp_bOverride_ModifierClass_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphModifierNode.h" },
	};
#endif
	void Z_Construct_UClass_UMovieGraphModifierNode_Statics::NewProp_bOverride_ModifierClass_SetBit(void* Obj)
	{
		((UMovieGraphModifierNode*)Obj)->bOverride_ModifierClass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieGraphModifierNode_Statics::NewProp_bOverride_ModifierClass = { "bOverride_ModifierClass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMovieGraphModifierNode), &Z_Construct_UClass_UMovieGraphModifierNode_Statics::NewProp_bOverride_ModifierClass_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphModifierNode_Statics::NewProp_bOverride_ModifierClass_MetaData), Z_Construct_UClass_UMovieGraphModifierNode_Statics::NewProp_bOverride_ModifierClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphModifierNode_Statics::NewProp_ModifierName_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The name of this modifier. */" },
		{ "EditCondition", "bOverride_ModifierName" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphModifierNode.h" },
		{ "ToolTip", "The name of this modifier." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieGraphModifierNode_Statics::NewProp_ModifierName = { "ModifierName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphModifierNode, ModifierName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphModifierNode_Statics::NewProp_ModifierName_MetaData), Z_Construct_UClass_UMovieGraphModifierNode_Statics::NewProp_ModifierName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphModifierNode_Statics::NewProp_ModifiedCollectionName_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The name of the collection being modified. */" },
		{ "EditCondition", "bOverride_ModifiedCollectionName" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphModifierNode.h" },
		{ "ToolTip", "The name of the collection being modified." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieGraphModifierNode_Statics::NewProp_ModifiedCollectionName = { "ModifiedCollectionName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphModifierNode, ModifiedCollectionName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphModifierNode_Statics::NewProp_ModifiedCollectionName_MetaData), Z_Construct_UClass_UMovieGraphModifierNode_Statics::NewProp_ModifiedCollectionName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphModifierNode_Statics::NewProp_ModifierClass_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The modifier this node should run. */" },
		{ "EditCondition", "bOverride_ModifierClass" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphModifierNode.h" },
		{ "ToolTip", "The modifier this node should run." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieGraphModifierNode_Statics::NewProp_ModifierClass = { "ModifierClass", nullptr, (EPropertyFlags)0x001600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphModifierNode, ModifierClass), Z_Construct_UClass_UMoviePipelineCollectionModifier_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphModifierNode_Statics::NewProp_ModifierClass_MetaData), Z_Construct_UClass_UMovieGraphModifierNode_Statics::NewProp_ModifierClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieGraphModifierNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphModifierNode_Statics::NewProp_bOverride_ModifierName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphModifierNode_Statics::NewProp_bOverride_ModifiedCollectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphModifierNode_Statics::NewProp_bOverride_ModifierClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphModifierNode_Statics::NewProp_ModifierName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphModifierNode_Statics::NewProp_ModifiedCollectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphModifierNode_Statics::NewProp_ModifierClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphModifierNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphModifierNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphModifierNode_Statics::ClassParams = {
		&UMovieGraphModifierNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieGraphModifierNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphModifierNode_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphModifierNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphModifierNode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphModifierNode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMovieGraphModifierNode()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphModifierNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphModifierNode.OuterSingleton, Z_Construct_UClass_UMovieGraphModifierNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphModifierNode.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieGraphModifierNode>()
	{
		return UMovieGraphModifierNode::StaticClass();
	}
	UMovieGraphModifierNode::UMovieGraphModifierNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphModifierNode);
	UMovieGraphModifierNode::~UMovieGraphModifierNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphModifierNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphModifierNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieGraphModifierNode, UMovieGraphModifierNode::StaticClass, TEXT("UMovieGraphModifierNode"), &Z_Registration_Info_UClass_UMovieGraphModifierNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphModifierNode), 1713192439U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphModifierNode_h_2836636744(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphModifierNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphModifierNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
