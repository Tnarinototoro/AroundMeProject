// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/MovieGraphRenderDataIdentifier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieGraphRenderDataIdentifier() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieGraphRenderDataIdentifier;
class UScriptStruct* FMovieGraphRenderDataIdentifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieGraphRenderDataIdentifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieGraphRenderDataIdentifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier, (UObject*)Z_Construct_UPackage__Script_MovieRenderPipelineCore(), TEXT("MovieGraphRenderDataIdentifier"));
	}
	return Z_Registration_Info_UScriptStruct_MovieGraphRenderDataIdentifier.OuterSingleton;
}
template<> MOVIERENDERPIPELINECORE_API UScriptStruct* StaticStruct<FMovieGraphRenderDataIdentifier>()
{
	return FMovieGraphRenderDataIdentifier::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootBranchName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RootBranchName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RendererName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RendererName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubResourceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SubResourceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CameraName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* This data structure can be used to identify what render data a set of pixels represents\n* by knowing what the render layer name is, what renderer produced it, if it's a sub-resource,\n* and what camera it is for. Can be used as the key in a TMap.\n*/" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphRenderDataIdentifier.h" },
		{ "ToolTip", "This data structure can be used to identify what render data a set of pixels represents\nby knowing what the render layer name is, what renderer produced it, if it's a sub-resource,\nand what camera it is for. Can be used as the key in a TMap." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieGraphRenderDataIdentifier>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier_Statics::NewProp_RootBranchName_MetaData[] = {
		{ "Category", "Movie Pipeline" },
		{ "Comment", "/** \n\x09* The root branch name that this render layer exists on. Actual display name comes from a UMovieGraphRenderLayerNode (if found in the branch)\n\x09* otherwise it falls back to just displaying RootBranchName. All of our internal lookups for branches are done based on the path we followed \n\x09* out from the root so that we can handle overriding a render layer display name via regular node overriding.\n\x09* \n\x09* Could have a value like \"Globals\" or a user-provided one \"character\", \"background\", etc.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphRenderDataIdentifier.h" },
		{ "ToolTip", "The root branch name that this render layer exists on. Actual display name comes from a UMovieGraphRenderLayerNode (if found in the branch)\notherwise it falls back to just displaying RootBranchName. All of our internal lookups for branches are done based on the path we followed\nout from the root so that we can handle overriding a render layer display name via regular node overriding.\n\nCould have a value like \"Globals\" or a user-provided one \"character\", \"background\", etc." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier_Statics::NewProp_RootBranchName = { "RootBranchName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphRenderDataIdentifier, RootBranchName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier_Statics::NewProp_RootBranchName_MetaData), Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier_Statics::NewProp_RootBranchName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier_Statics::NewProp_RendererName_MetaData[] = {
		{ "Category", "Movie Pipeline" },
		{ "Comment", "/** Which renderer was used to produce this image (\"panoramic\" \"deferred\" \"path tracer\", etc.) */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphRenderDataIdentifier.h" },
		{ "ToolTip", "Which renderer was used to produce this image (\"panoramic\" \"deferred\" \"path tracer\", etc.)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier_Statics::NewProp_RendererName = { "RendererName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphRenderDataIdentifier, RendererName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier_Statics::NewProp_RendererName_MetaData), Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier_Statics::NewProp_RendererName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier_Statics::NewProp_SubResourceName_MetaData[] = {
		{ "Category", "Movie Pipeline" },
		{ "Comment", "/** A sub-resource name for the renderer (ie: \"beauty\", \"object id\", \"depth\", etc.) */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphRenderDataIdentifier.h" },
		{ "ToolTip", "A sub-resource name for the renderer (ie: \"beauty\", \"object id\", \"depth\", etc.)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier_Statics::NewProp_SubResourceName = { "SubResourceName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphRenderDataIdentifier, SubResourceName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier_Statics::NewProp_SubResourceName_MetaData), Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier_Statics::NewProp_SubResourceName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier_Statics::NewProp_CameraName_MetaData[] = {
		{ "Category", "Movie Pipeline" },
		{ "Comment", "/** The name of the camera being used for this render. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphRenderDataIdentifier.h" },
		{ "ToolTip", "The name of the camera being used for this render." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier_Statics::NewProp_CameraName = { "CameraName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphRenderDataIdentifier, CameraName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier_Statics::NewProp_CameraName_MetaData), Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier_Statics::NewProp_CameraName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier_Statics::NewProp_RootBranchName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier_Statics::NewProp_RendererName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier_Statics::NewProp_SubResourceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier_Statics::NewProp_CameraName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
		nullptr,
		&NewStructOps,
		"MovieGraphRenderDataIdentifier",
		Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier_Statics::PropPointers),
		sizeof(FMovieGraphRenderDataIdentifier),
		alignof(FMovieGraphRenderDataIdentifier),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieGraphRenderDataIdentifier.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieGraphRenderDataIdentifier.InnerSingleton, Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieGraphRenderDataIdentifier.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderDataIdentifier_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderDataIdentifier_h_Statics::ScriptStructInfo[] = {
		{ FMovieGraphRenderDataIdentifier::StaticStruct, Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier_Statics::NewStructOps, TEXT("MovieGraphRenderDataIdentifier"), &Z_Registration_Info_UScriptStruct_MovieGraphRenderDataIdentifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieGraphRenderDataIdentifier), 1117685946U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderDataIdentifier_h_3506236704(TEXT("/Script/MovieRenderPipelineCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderDataIdentifier_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderDataIdentifier_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
