// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/MovieGraphTraversalContext.h"
#include "Graph/MovieGraphRenderDataIdentifier.h"
#include "Graph/MovieGraphTimeStepData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieGraphTraversalContext() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphConfig_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister();
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphBranch();
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier();
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphTimeStepData();
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphTraversalContext();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieGraphBranch;
class UScriptStruct* FMovieGraphBranch::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieGraphBranch.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieGraphBranch.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieGraphBranch, (UObject*)Z_Construct_UPackage__Script_MovieRenderPipelineCore(), TEXT("MovieGraphBranch"));
	}
	return Z_Registration_Info_UScriptStruct_MovieGraphBranch.OuterSingleton;
}
template<> MOVIERENDERPIPELINECORE_API UScriptStruct* StaticStruct<FMovieGraphBranch>()
{
	return FMovieGraphBranch::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieGraphBranch_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BranchName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BranchName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphBranch_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphTraversalContext.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieGraphBranch_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieGraphBranch>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphBranch_Statics::NewProp_BranchName_MetaData[] = {
		{ "Category", "MovieGraph" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphTraversalContext.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieGraphBranch_Statics::NewProp_BranchName = { "BranchName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphBranch, BranchName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphBranch_Statics::NewProp_BranchName_MetaData), Z_Construct_UScriptStruct_FMovieGraphBranch_Statics::NewProp_BranchName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieGraphBranch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphBranch_Statics::NewProp_BranchName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieGraphBranch_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
		nullptr,
		&NewStructOps,
		"MovieGraphBranch",
		Z_Construct_UScriptStruct_FMovieGraphBranch_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphBranch_Statics::PropPointers),
		sizeof(FMovieGraphBranch),
		alignof(FMovieGraphBranch),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphBranch_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieGraphBranch_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphBranch_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphBranch()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieGraphBranch.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieGraphBranch.InnerSingleton, Z_Construct_UScriptStruct_FMovieGraphBranch_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieGraphBranch.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieGraphTraversalContext;
class UScriptStruct* FMovieGraphTraversalContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieGraphTraversalContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieGraphTraversalContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieGraphTraversalContext, (UObject*)Z_Construct_UPackage__Script_MovieRenderPipelineCore(), TEXT("MovieGraphTraversalContext"));
	}
	return Z_Registration_Info_UScriptStruct_MovieGraphTraversalContext.OuterSingleton;
}
template<> MOVIERENDERPIPELINECORE_API UScriptStruct* StaticStruct<FMovieGraphTraversalContext>()
{
	return FMovieGraphTraversalContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootBranch_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RootBranch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ShotIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ShotCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Job_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Job;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RootGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderDataIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RenderDataIdentifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphTraversalContext.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieGraphTraversalContext>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::NewProp_RootBranch_MetaData[] = {
		{ "Category", "MovieGraph" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphTraversalContext.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::NewProp_RootBranch = { "RootBranch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphTraversalContext, RootBranch), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::NewProp_RootBranch_MetaData), Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::NewProp_RootBranch_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::NewProp_ShotIndex_MetaData[] = {
		{ "Category", "Movie Graph" },
		{ "Comment", "/** Which shot (out of ShotCount) is this time step for? */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphTraversalContext.h" },
		{ "ToolTip", "Which shot (out of ShotCount) is this time step for?" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::NewProp_ShotIndex = { "ShotIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphTraversalContext, ShotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::NewProp_ShotIndex_MetaData), Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::NewProp_ShotIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::NewProp_ShotCount_MetaData[] = {
		{ "Category", "Movie Graph" },
		{ "Comment", "/** The total number of shots being rendered for this job. This is from the active shot list, not total in the Level Sequence. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphTraversalContext.h" },
		{ "ToolTip", "The total number of shots being rendered for this job. This is from the active shot list, not total in the Level Sequence." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::NewProp_ShotCount = { "ShotCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphTraversalContext, ShotCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::NewProp_ShotCount_MetaData), Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::NewProp_ShotCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::NewProp_Job_MetaData[] = {
		{ "Category", "Movie Graph" },
		{ "Comment", "/** The job in the queue this traversal context is for. Needed to fetch variable values from the job. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphTraversalContext.h" },
		{ "ToolTip", "The job in the queue this traversal context is for. Needed to fetch variable values from the job." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::NewProp_Job = { "Job", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphTraversalContext, Job), Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::NewProp_Job_MetaData), Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::NewProp_Job_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::NewProp_RootGraph_MetaData[] = {
		{ "Category", "Movie Graph" },
		{ "Comment", "/** The root graph to start our traversal from. This could be a shared config for the whole job, or a shot-specific override. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphTraversalContext.h" },
		{ "ToolTip", "The root graph to start our traversal from. This could be a shared config for the whole job, or a shot-specific override." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::NewProp_RootGraph = { "RootGraph", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphTraversalContext, RootGraph), Z_Construct_UClass_UMovieGraphConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::NewProp_RootGraph_MetaData), Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::NewProp_RootGraph_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::NewProp_RenderDataIdentifier_MetaData[] = {
		{ "Category", "MovieGraph" },
		{ "Comment", "/** The name of the render resource this state was captured for. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphTraversalContext.h" },
		{ "ToolTip", "The name of the render resource this state was captured for." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::NewProp_RenderDataIdentifier = { "RenderDataIdentifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphTraversalContext, RenderDataIdentifier), Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::NewProp_RenderDataIdentifier_MetaData), Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::NewProp_RenderDataIdentifier_MetaData) }; // 1117685946
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "MovieGraph" },
		{ "Comment", "/** The time data(output frame, delta times, etc.) */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphTraversalContext.h" },
		{ "ToolTip", "The time data(output frame, delta times, etc.)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphTraversalContext, Time), Z_Construct_UScriptStruct_FMovieGraphTimeStepData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::NewProp_Time_MetaData), Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::NewProp_Time_MetaData) }; // 705348522
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::NewProp_RootBranch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::NewProp_ShotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::NewProp_ShotCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::NewProp_Job,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::NewProp_RootGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::NewProp_RenderDataIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::NewProp_Time,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
		nullptr,
		&NewStructOps,
		"MovieGraphTraversalContext",
		Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::PropPointers),
		sizeof(FMovieGraphTraversalContext),
		alignof(FMovieGraphTraversalContext),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphTraversalContext()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieGraphTraversalContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieGraphTraversalContext.InnerSingleton, Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieGraphTraversalContext.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphTraversalContext_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphTraversalContext_h_Statics::ScriptStructInfo[] = {
		{ FMovieGraphBranch::StaticStruct, Z_Construct_UScriptStruct_FMovieGraphBranch_Statics::NewStructOps, TEXT("MovieGraphBranch"), &Z_Registration_Info_UScriptStruct_MovieGraphBranch, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieGraphBranch), 1270577982U) },
		{ FMovieGraphTraversalContext::StaticStruct, Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::NewStructOps, TEXT("MovieGraphTraversalContext"), &Z_Registration_Info_UScriptStruct_MovieGraphTraversalContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieGraphTraversalContext), 3782139928U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphTraversalContext_h_3459277048(TEXT("/Script/MovieRenderPipelineCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphTraversalContext_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphTraversalContext_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
