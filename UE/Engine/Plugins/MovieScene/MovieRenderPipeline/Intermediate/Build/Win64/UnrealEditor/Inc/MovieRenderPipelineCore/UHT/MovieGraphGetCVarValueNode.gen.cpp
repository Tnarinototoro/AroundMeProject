// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Nodes/MovieGraphGetCVarValueNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieGraphGetCVarValueNode() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphGetCVarValueNode();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphGetCVarValueNode_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphSettingNode();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	void UMovieGraphGetCVarValueNode::StaticRegisterNativesUMovieGraphGetCVarValueNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphGetCVarValueNode);
	UClass* Z_Construct_UClass_UMovieGraphGetCVarValueNode_NoRegister()
	{
		return UMovieGraphGetCVarValueNode::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphGetCVarValueNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_Name_MetaData[];
#endif
		static void NewProp_bOverride_Name_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphGetCVarValueNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieGraphSettingNode,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphGetCVarValueNode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphGetCVarValueNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A node which can get a specific console variable's value. */" },
		{ "IncludePath", "Graph/Nodes/MovieGraphGetCVarValueNode.h" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphGetCVarValueNode.h" },
		{ "ToolTip", "A node which can get a specific console variable's value." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphGetCVarValueNode_Statics::NewProp_bOverride_Name_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphGetCVarValueNode.h" },
	};
#endif
	void Z_Construct_UClass_UMovieGraphGetCVarValueNode_Statics::NewProp_bOverride_Name_SetBit(void* Obj)
	{
		((UMovieGraphGetCVarValueNode*)Obj)->bOverride_Name = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieGraphGetCVarValueNode_Statics::NewProp_bOverride_Name = { "bOverride_Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMovieGraphGetCVarValueNode), &Z_Construct_UClass_UMovieGraphGetCVarValueNode_Statics::NewProp_bOverride_Name_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphGetCVarValueNode_Statics::NewProp_bOverride_Name_MetaData), Z_Construct_UClass_UMovieGraphGetCVarValueNode_Statics::NewProp_bOverride_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphGetCVarValueNode_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The name of the CVar that will have its value fetched. */" },
		{ "EditCondition", "bOverride_Name" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphGetCVarValueNode.h" },
		{ "ToolTip", "The name of the CVar that will have its value fetched." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieGraphGetCVarValueNode_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphGetCVarValueNode, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphGetCVarValueNode_Statics::NewProp_Name_MetaData), Z_Construct_UClass_UMovieGraphGetCVarValueNode_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieGraphGetCVarValueNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphGetCVarValueNode_Statics::NewProp_bOverride_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphGetCVarValueNode_Statics::NewProp_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphGetCVarValueNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphGetCVarValueNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphGetCVarValueNode_Statics::ClassParams = {
		&UMovieGraphGetCVarValueNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieGraphGetCVarValueNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphGetCVarValueNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphGetCVarValueNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphGetCVarValueNode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphGetCVarValueNode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMovieGraphGetCVarValueNode()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphGetCVarValueNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphGetCVarValueNode.OuterSingleton, Z_Construct_UClass_UMovieGraphGetCVarValueNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphGetCVarValueNode.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieGraphGetCVarValueNode>()
	{
		return UMovieGraphGetCVarValueNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphGetCVarValueNode);
	UMovieGraphGetCVarValueNode::~UMovieGraphGetCVarValueNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphGetCVarValueNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphGetCVarValueNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieGraphGetCVarValueNode, UMovieGraphGetCVarValueNode::StaticClass, TEXT("UMovieGraphGetCVarValueNode"), &Z_Registration_Info_UClass_UMovieGraphGetCVarValueNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphGetCVarValueNode), 3005084395U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphGetCVarValueNode_h_1602600003(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphGetCVarValueNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphGetCVarValueNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
