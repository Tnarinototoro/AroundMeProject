// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/MovieGraphTimeStepData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieGraphTimeStepData() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphEvaluatedConfig_NoRegister();
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphTimeStepData();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieGraphTimeStepData;
class UScriptStruct* FMovieGraphTimeStepData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieGraphTimeStepData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieGraphTimeStepData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieGraphTimeStepData, (UObject*)Z_Construct_UPackage__Script_MovieRenderPipelineCore(), TEXT("MovieGraphTimeStepData"));
	}
	return Z_Registration_Info_UScriptStruct_MovieGraphTimeStepData.OuterSingleton;
}
template<> MOVIERENDERPIPELINECORE_API UScriptStruct* StaticStruct<FMovieGraphTimeStepData>()
{
	return FMovieGraphTimeStepData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputFrameNumber_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutputFrameNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameDeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameDeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldTimeDilation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldTimeDilation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionBlurFraction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MotionBlurFraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFirstTemporalSampleForFrame_MetaData[];
#endif
		static void NewProp_bIsFirstTemporalSampleForFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFirstTemporalSampleForFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLastTemporalSampleForFrame_MetaData[];
#endif
		static void NewProp_bIsLastTemporalSampleForFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLastTemporalSampleForFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresAccumulator_MetaData[];
#endif
		static void NewProp_bRequiresAccumulator_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresAccumulator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EvaluatedConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EvaluatedConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n* This data structure needs to be filled out each frame by the UMovieGraphTimeStepBase,\n* which will eventually be passed to the renderer. It controls per-sample behavior such\n* as the delta time, if this is the first/last sample for an output frame, etc.\n*/" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphTimeStepData.h" },
		{ "ToolTip", "This data structure needs to be filled out each frame by the UMovieGraphTimeStepBase,\nwhich will eventually be passed to the renderer. It controls per-sample behavior such\nas the delta time, if this is the first/last sample for an output frame, etc." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieGraphTimeStepData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_OutputFrameNumber_MetaData[] = {
		{ "Category", "Movie Graph" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphTimeStepData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_OutputFrameNumber = { "OutputFrameNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphTimeStepData, OutputFrameNumber), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_OutputFrameNumber_MetaData), Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_OutputFrameNumber_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_FrameDeltaTime_MetaData[] = {
		{ "Category", "Movie Graph" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphTimeStepData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_FrameDeltaTime = { "FrameDeltaTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphTimeStepData, FrameDeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_FrameDeltaTime_MetaData), Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_FrameDeltaTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_WorldTimeDilation_MetaData[] = {
		{ "Category", "Movie Graph" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphTimeStepData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_WorldTimeDilation = { "WorldTimeDilation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphTimeStepData, WorldTimeDilation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_WorldTimeDilation_MetaData), Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_WorldTimeDilation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_WorldSeconds_MetaData[] = {
		{ "Category", "Movie Graph" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphTimeStepData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_WorldSeconds = { "WorldSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphTimeStepData, WorldSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_WorldSeconds_MetaData), Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_WorldSeconds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_MotionBlurFraction_MetaData[] = {
		{ "Category", "Movie Graph" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphTimeStepData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_MotionBlurFraction = { "MotionBlurFraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphTimeStepData, MotionBlurFraction), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_MotionBlurFraction_MetaData), Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_MotionBlurFraction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_bIsFirstTemporalSampleForFrame_MetaData[] = {
		{ "Category", "Movie Graph" },
		{ "Comment", "/** \n\x09* Should be set to true for the first sample of each output frame. Used to determine\n\x09* if various systems need to reset or gather data for a new frame. Can be true at\n\x09* the same time as bIsLastTemporalSampleForFrame (ie: 1TS)\n\x09*/" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphTimeStepData.h" },
		{ "ToolTip", "Should be set to true for the first sample of each output frame. Used to determine\nif various systems need to reset or gather data for a new frame. Can be true at\nthe same time as bIsLastTemporalSampleForFrame (ie: 1TS)" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_bIsFirstTemporalSampleForFrame_SetBit(void* Obj)
	{
		((FMovieGraphTimeStepData*)Obj)->bIsFirstTemporalSampleForFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_bIsFirstTemporalSampleForFrame = { "bIsFirstTemporalSampleForFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieGraphTimeStepData), &Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_bIsFirstTemporalSampleForFrame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_bIsFirstTemporalSampleForFrame_MetaData), Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_bIsFirstTemporalSampleForFrame_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_bIsLastTemporalSampleForFrame_MetaData[] = {
		{ "Category", "Movie Graph" },
		{ "Comment", "/**\n\x09* Should be set to true for the last sample of each output frame. Can be true at\n\x09* the same time as bIsFirstTemporalSampleForFrame (ie: 1TS)\n\x09*/" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphTimeStepData.h" },
		{ "ToolTip", "Should be set to true for the last sample of each output frame. Can be true at\nthe same time as bIsFirstTemporalSampleForFrame (ie: 1TS)" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_bIsLastTemporalSampleForFrame_SetBit(void* Obj)
	{
		((FMovieGraphTimeStepData*)Obj)->bIsLastTemporalSampleForFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_bIsLastTemporalSampleForFrame = { "bIsLastTemporalSampleForFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieGraphTimeStepData), &Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_bIsLastTemporalSampleForFrame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_bIsLastTemporalSampleForFrame_MetaData), Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_bIsLastTemporalSampleForFrame_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_bRequiresAccumulator_MetaData[] = {
		{ "Category", "Movie Graph" },
		{ "Comment", "/**\n\x09* Should be set to true for every sample if there is more than one temporal sample\n\x09* making up this render. This will cause the renderer to allocate accumulators\n\x09* to store the multi-frame data into.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphTimeStepData.h" },
		{ "ToolTip", "Should be set to true for every sample if there is more than one temporal sample\nmaking up this render. This will cause the renderer to allocate accumulators\nto store the multi-frame data into." },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_bRequiresAccumulator_SetBit(void* Obj)
	{
		((FMovieGraphTimeStepData*)Obj)->bRequiresAccumulator = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_bRequiresAccumulator = { "bRequiresAccumulator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieGraphTimeStepData), &Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_bRequiresAccumulator_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_bRequiresAccumulator_MetaData), Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_bRequiresAccumulator_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_EvaluatedConfig_MetaData[] = {
		{ "Category", "Movie Graph" },
		{ "Comment", "/**\n\x09* The evaluated config holds the configuration used for this given frame. This pointer\n\x09* can potentially change each frame (if the graph for that frame is different) but\n\x09* users can rely on the EvaluatedConfig being correct for a given frame, thus all\n\x09* resolves (such as filenames) should use the config for that frame, not the latest\n\x09* one available.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphTimeStepData.h" },
		{ "ToolTip", "The evaluated config holds the configuration used for this given frame. This pointer\ncan potentially change each frame (if the graph for that frame is different) but\nusers can rely on the EvaluatedConfig being correct for a given frame, thus all\nresolves (such as filenames) should use the config for that frame, not the latest\none available." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_EvaluatedConfig = { "EvaluatedConfig", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphTimeStepData, EvaluatedConfig), Z_Construct_UClass_UMovieGraphEvaluatedConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_EvaluatedConfig_MetaData), Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_EvaluatedConfig_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_OutputFrameNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_FrameDeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_WorldTimeDilation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_WorldSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_MotionBlurFraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_bIsFirstTemporalSampleForFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_bIsLastTemporalSampleForFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_bRequiresAccumulator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_EvaluatedConfig,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
		nullptr,
		&NewStructOps,
		"MovieGraphTimeStepData",
		Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::PropPointers),
		sizeof(FMovieGraphTimeStepData),
		alignof(FMovieGraphTimeStepData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphTimeStepData()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieGraphTimeStepData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieGraphTimeStepData.InnerSingleton, Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieGraphTimeStepData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphTimeStepData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphTimeStepData_h_Statics::ScriptStructInfo[] = {
		{ FMovieGraphTimeStepData::StaticStruct, Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewStructOps, TEXT("MovieGraphTimeStepData"), &Z_Registration_Info_UScriptStruct_MovieGraphTimeStepData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieGraphTimeStepData), 705348522U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphTimeStepData_h_559960991(TEXT("/Script/MovieRenderPipelineCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphTimeStepData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphTimeStepData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
