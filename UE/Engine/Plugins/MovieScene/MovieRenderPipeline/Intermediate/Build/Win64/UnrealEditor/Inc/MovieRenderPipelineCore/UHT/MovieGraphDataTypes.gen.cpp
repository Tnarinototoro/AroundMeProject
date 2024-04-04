// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/MovieGraphDataTypes.h"
#include "Graph/MovieGraphRenderDataIdentifier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieGraphDataTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphDataSourceBase();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphDataSourceBase_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphRendererBase();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphRendererBase_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphTimeStepBase();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphTimeStepBase_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineExecutorShot_NoRegister();
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphInitConfig();
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier();
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphRenderOutputData();
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphRenderPassOutputData();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieGraphInitConfig;
class UScriptStruct* FMovieGraphInitConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieGraphInitConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieGraphInitConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieGraphInitConfig, (UObject*)Z_Construct_UPackage__Script_MovieRenderPipelineCore(), TEXT("MovieGraphInitConfig"));
	}
	return Z_Registration_Info_UScriptStruct_MovieGraphInitConfig.OuterSingleton;
}
template<> MOVIERENDERPIPELINECORE_API UScriptStruct* StaticStruct<FMovieGraphInitConfig>()
{
	return FMovieGraphInitConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieGraphInitConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeStepClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TimeStepClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RendererClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RendererClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataSourceClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DataSourceClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRenderViewport_MetaData[];
#endif
		static void NewProp_bRenderViewport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderViewport;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphInitConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphDataTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieGraphInitConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieGraphInitConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphInitConfig_Statics::NewProp_TimeStepClass_MetaData[] = {
		{ "Category", "Movie Graph" },
		{ "Comment", "/** \n\x09* Which class should the UMovieGraphPipeline use to handle calculating per frame \n\x09* timesteps? Defaults to UMovieGraphLinearTimeStep.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphDataTypes.h" },
		{ "ToolTip", "Which class should the UMovieGraphPipeline use to handle calculating per frame\ntimesteps? Defaults to UMovieGraphLinearTimeStep." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMovieGraphInitConfig_Statics::NewProp_TimeStepClass = { "TimeStepClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphInitConfig, TimeStepClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMovieGraphTimeStepBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphInitConfig_Statics::NewProp_TimeStepClass_MetaData), Z_Construct_UScriptStruct_FMovieGraphInitConfig_Statics::NewProp_TimeStepClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphInitConfig_Statics::NewProp_RendererClass_MetaData[] = {
		{ "Category", "Movie Graph" },
		{ "Comment", "/**\n\x09* Which class should the UMovieGraphPipeline use to look for render layers and\n\x09* request renders from. Defaults to UMovieGraphDefaultRenderer.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphDataTypes.h" },
		{ "ToolTip", "Which class should the UMovieGraphPipeline use to look for render layers and\nrequest renders from. Defaults to UMovieGraphDefaultRenderer." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMovieGraphInitConfig_Statics::NewProp_RendererClass = { "RendererClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphInitConfig, RendererClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMovieGraphRendererBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphInitConfig_Statics::NewProp_RendererClass_MetaData), Z_Construct_UScriptStruct_FMovieGraphInitConfig_Statics::NewProp_RendererClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphInitConfig_Statics::NewProp_DataSourceClass_MetaData[] = {
		{ "Category", "Movie Graph" },
		{ "Comment", "/**\n\x09* Which class should the UMovieGraphPipeline use to build time ranges from, and\n\x09* during evaluation, send callbacks about the time actually evaluated so you\n\x09* can sync with an external source. Defaults to UMovieGraphSequenceDataSource.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphDataTypes.h" },
		{ "ToolTip", "Which class should the UMovieGraphPipeline use to build time ranges from, and\nduring evaluation, send callbacks about the time actually evaluated so you\ncan sync with an external source. Defaults to UMovieGraphSequenceDataSource." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMovieGraphInitConfig_Statics::NewProp_DataSourceClass = { "DataSourceClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphInitConfig, DataSourceClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMovieGraphDataSourceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphInitConfig_Statics::NewProp_DataSourceClass_MetaData), Z_Construct_UScriptStruct_FMovieGraphInitConfig_Statics::NewProp_DataSourceClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphInitConfig_Statics::NewProp_bRenderViewport_MetaData[] = {
		{ "Category", "Movie Graph" },
		{ "Comment", "/**\n\x09* Should the UMovieGraphPipeline render the full player viewport? Defaults\n\x09* to false (so no 3d content is rendered) so we can display the UMG widgets\n\x09* and MRQ rendering always happens in an off-screen render target.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphDataTypes.h" },
		{ "ToolTip", "Should the UMovieGraphPipeline render the full player viewport? Defaults\nto false (so no 3d content is rendered) so we can display the UMG widgets\nand MRQ rendering always happens in an off-screen render target." },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieGraphInitConfig_Statics::NewProp_bRenderViewport_SetBit(void* Obj)
	{
		((FMovieGraphInitConfig*)Obj)->bRenderViewport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieGraphInitConfig_Statics::NewProp_bRenderViewport = { "bRenderViewport", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieGraphInitConfig), &Z_Construct_UScriptStruct_FMovieGraphInitConfig_Statics::NewProp_bRenderViewport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphInitConfig_Statics::NewProp_bRenderViewport_MetaData), Z_Construct_UScriptStruct_FMovieGraphInitConfig_Statics::NewProp_bRenderViewport_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieGraphInitConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphInitConfig_Statics::NewProp_TimeStepClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphInitConfig_Statics::NewProp_RendererClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphInitConfig_Statics::NewProp_DataSourceClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphInitConfig_Statics::NewProp_bRenderViewport,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieGraphInitConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
		nullptr,
		&NewStructOps,
		"MovieGraphInitConfig",
		Z_Construct_UScriptStruct_FMovieGraphInitConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphInitConfig_Statics::PropPointers),
		sizeof(FMovieGraphInitConfig),
		alignof(FMovieGraphInitConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphInitConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieGraphInitConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphInitConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphInitConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieGraphInitConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieGraphInitConfig.InnerSingleton, Z_Construct_UScriptStruct_FMovieGraphInitConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieGraphInitConfig.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieGraphRenderPassOutputData;
class UScriptStruct* FMovieGraphRenderPassOutputData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieGraphRenderPassOutputData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieGraphRenderPassOutputData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieGraphRenderPassOutputData, (UObject*)Z_Construct_UPackage__Script_MovieRenderPipelineCore(), TEXT("MovieGraphRenderPassOutputData"));
	}
	return Z_Registration_Info_UScriptStruct_MovieGraphRenderPassOutputData.OuterSingleton;
}
template<> MOVIERENDERPIPELINECORE_API UScriptStruct* StaticStruct<FMovieGraphRenderPassOutputData>()
{
	return FMovieGraphRenderPassOutputData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieGraphRenderPassOutputData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FilePaths;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphRenderPassOutputData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphDataTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieGraphRenderPassOutputData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieGraphRenderPassOutputData>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieGraphRenderPassOutputData_Statics::NewProp_FilePaths_Inner = { "FilePaths", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphRenderPassOutputData_Statics::NewProp_FilePaths_MetaData[] = {
		{ "Category", "Movie Pipeline" },
		{ "Comment", "/** A list of file paths on disk (in order) that were generated for this particular render pass. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphDataTypes.h" },
		{ "ToolTip", "A list of file paths on disk (in order) that were generated for this particular render pass." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieGraphRenderPassOutputData_Statics::NewProp_FilePaths = { "FilePaths", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphRenderPassOutputData, FilePaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphRenderPassOutputData_Statics::NewProp_FilePaths_MetaData), Z_Construct_UScriptStruct_FMovieGraphRenderPassOutputData_Statics::NewProp_FilePaths_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieGraphRenderPassOutputData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphRenderPassOutputData_Statics::NewProp_FilePaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphRenderPassOutputData_Statics::NewProp_FilePaths,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieGraphRenderPassOutputData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
		nullptr,
		&NewStructOps,
		"MovieGraphRenderPassOutputData",
		Z_Construct_UScriptStruct_FMovieGraphRenderPassOutputData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphRenderPassOutputData_Statics::PropPointers),
		sizeof(FMovieGraphRenderPassOutputData),
		alignof(FMovieGraphRenderPassOutputData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphRenderPassOutputData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieGraphRenderPassOutputData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphRenderPassOutputData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphRenderPassOutputData()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieGraphRenderPassOutputData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieGraphRenderPassOutputData.InnerSingleton, Z_Construct_UScriptStruct_FMovieGraphRenderPassOutputData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieGraphRenderPassOutputData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieGraphRenderOutputData;
class UScriptStruct* FMovieGraphRenderOutputData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieGraphRenderOutputData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieGraphRenderOutputData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieGraphRenderOutputData, (UObject*)Z_Construct_UPackage__Script_MovieRenderPipelineCore(), TEXT("MovieGraphRenderOutputData"));
	}
	return Z_Registration_Info_UScriptStruct_MovieGraphRenderOutputData.OuterSingleton;
}
template<> MOVIERENDERPIPELINECORE_API UScriptStruct* StaticStruct<FMovieGraphRenderOutputData>()
{
	return FMovieGraphRenderOutputData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieGraphRenderOutputData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shot_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Shot;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RenderPassData_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RenderPassData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderPassData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RenderPassData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphRenderOutputData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphDataTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieGraphRenderOutputData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieGraphRenderOutputData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphRenderOutputData_Statics::NewProp_Shot_MetaData[] = {
		{ "Category", "Movie Graph" },
		{ "Comment", "/** Which shot is this output data for. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphDataTypes.h" },
		{ "ToolTip", "Which shot is this output data for." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FMovieGraphRenderOutputData_Statics::NewProp_Shot = { "Shot", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphRenderOutputData, Shot), Z_Construct_UClass_UMoviePipelineExecutorShot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphRenderOutputData_Statics::NewProp_Shot_MetaData), Z_Construct_UScriptStruct_FMovieGraphRenderOutputData_Statics::NewProp_Shot_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieGraphRenderOutputData_Statics::NewProp_RenderPassData_ValueProp = { "RenderPassData", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMovieGraphRenderPassOutputData, METADATA_PARAMS(0, nullptr) }; // 135834937
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieGraphRenderOutputData_Statics::NewProp_RenderPassData_Key_KeyProp = { "RenderPassData_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier, METADATA_PARAMS(0, nullptr) }; // 1117685946
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphRenderOutputData_Statics::NewProp_RenderPassData_MetaData[] = {
		{ "Category", "Movie Graph" },
		{ "Comment", "/**\n\x09* A mapping between render passes (such as \"beauty\") and an array containing the files written for that shot.\n\x09* Will be multiple files if using image sequences\n\x09*/" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphDataTypes.h" },
		{ "ToolTip", "A mapping between render passes (such as \"beauty\") and an array containing the files written for that shot.\nWill be multiple files if using image sequences" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMovieGraphRenderOutputData_Statics::NewProp_RenderPassData = { "RenderPassData", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphRenderOutputData, RenderPassData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphRenderOutputData_Statics::NewProp_RenderPassData_MetaData), Z_Construct_UScriptStruct_FMovieGraphRenderOutputData_Statics::NewProp_RenderPassData_MetaData) }; // 1117685946 135834937
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieGraphRenderOutputData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphRenderOutputData_Statics::NewProp_Shot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphRenderOutputData_Statics::NewProp_RenderPassData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphRenderOutputData_Statics::NewProp_RenderPassData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphRenderOutputData_Statics::NewProp_RenderPassData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieGraphRenderOutputData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
		nullptr,
		&NewStructOps,
		"MovieGraphRenderOutputData",
		Z_Construct_UScriptStruct_FMovieGraphRenderOutputData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphRenderOutputData_Statics::PropPointers),
		sizeof(FMovieGraphRenderOutputData),
		alignof(FMovieGraphRenderOutputData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphRenderOutputData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieGraphRenderOutputData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphRenderOutputData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphRenderOutputData()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieGraphRenderOutputData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieGraphRenderOutputData.InnerSingleton, Z_Construct_UScriptStruct_FMovieGraphRenderOutputData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieGraphRenderOutputData.InnerSingleton;
	}
	void UMovieGraphTimeStepBase::StaticRegisterNativesUMovieGraphTimeStepBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphTimeStepBase);
	UClass* Z_Construct_UClass_UMovieGraphTimeStepBase_NoRegister()
	{
		return UMovieGraphTimeStepBase::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphTimeStepBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphTimeStepBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphTimeStepBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphTimeStepBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Graph/MovieGraphDataTypes.h" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphDataTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphTimeStepBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphTimeStepBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphTimeStepBase_Statics::ClassParams = {
		&UMovieGraphTimeStepBase::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphTimeStepBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphTimeStepBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMovieGraphTimeStepBase()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphTimeStepBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphTimeStepBase.OuterSingleton, Z_Construct_UClass_UMovieGraphTimeStepBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphTimeStepBase.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieGraphTimeStepBase>()
	{
		return UMovieGraphTimeStepBase::StaticClass();
	}
	UMovieGraphTimeStepBase::UMovieGraphTimeStepBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphTimeStepBase);
	UMovieGraphTimeStepBase::~UMovieGraphTimeStepBase() {}
	void UMovieGraphRendererBase::StaticRegisterNativesUMovieGraphRendererBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphRendererBase);
	UClass* Z_Construct_UClass_UMovieGraphRendererBase_NoRegister()
	{
		return UMovieGraphRendererBase::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphRendererBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphRendererBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphRendererBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphRendererBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Graph/MovieGraphDataTypes.h" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphDataTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphRendererBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphRendererBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphRendererBase_Statics::ClassParams = {
		&UMovieGraphRendererBase::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphRendererBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphRendererBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMovieGraphRendererBase()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphRendererBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphRendererBase.OuterSingleton, Z_Construct_UClass_UMovieGraphRendererBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphRendererBase.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieGraphRendererBase>()
	{
		return UMovieGraphRendererBase::StaticClass();
	}
	UMovieGraphRendererBase::UMovieGraphRendererBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphRendererBase);
	UMovieGraphRendererBase::~UMovieGraphRendererBase() {}
	void UMovieGraphDataSourceBase::StaticRegisterNativesUMovieGraphDataSourceBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphDataSourceBase);
	UClass* Z_Construct_UClass_UMovieGraphDataSourceBase_NoRegister()
	{
		return UMovieGraphDataSourceBase::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphDataSourceBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphDataSourceBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphDataSourceBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphDataSourceBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Movie Graph Pipeline is mostly interested in knowing about ranges of time that\n* it should render, and less concerned with the specifics of where that data comes\n* from (ie: a Level Sequence). This lets you synchronize with a different data source\n* to provide the ranges of time to render, and then the UMovieGraphTimeStepBase class\n* figures out how to move around within that time step, before calling some functions\n* to synchronize your external data source to actually match the evaluated time.\n*/" },
		{ "IncludePath", "Graph/MovieGraphDataTypes.h" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphDataTypes.h" },
		{ "ToolTip", "Movie Graph Pipeline is mostly interested in knowing about ranges of time that\nit should render, and less concerned with the specifics of where that data comes\nfrom (ie: a Level Sequence). This lets you synchronize with a different data source\nto provide the ranges of time to render, and then the UMovieGraphTimeStepBase class\nfigures out how to move around within that time step, before calling some functions\nto synchronize your external data source to actually match the evaluated time." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphDataSourceBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphDataSourceBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphDataSourceBase_Statics::ClassParams = {
		&UMovieGraphDataSourceBase::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphDataSourceBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphDataSourceBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMovieGraphDataSourceBase()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphDataSourceBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphDataSourceBase.OuterSingleton, Z_Construct_UClass_UMovieGraphDataSourceBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphDataSourceBase.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieGraphDataSourceBase>()
	{
		return UMovieGraphDataSourceBase::StaticClass();
	}
	UMovieGraphDataSourceBase::UMovieGraphDataSourceBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphDataSourceBase);
	UMovieGraphDataSourceBase::~UMovieGraphDataSourceBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_Statics::ScriptStructInfo[] = {
		{ FMovieGraphInitConfig::StaticStruct, Z_Construct_UScriptStruct_FMovieGraphInitConfig_Statics::NewStructOps, TEXT("MovieGraphInitConfig"), &Z_Registration_Info_UScriptStruct_MovieGraphInitConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieGraphInitConfig), 1063095739U) },
		{ FMovieGraphRenderPassOutputData::StaticStruct, Z_Construct_UScriptStruct_FMovieGraphRenderPassOutputData_Statics::NewStructOps, TEXT("MovieGraphRenderPassOutputData"), &Z_Registration_Info_UScriptStruct_MovieGraphRenderPassOutputData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieGraphRenderPassOutputData), 135834937U) },
		{ FMovieGraphRenderOutputData::StaticStruct, Z_Construct_UScriptStruct_FMovieGraphRenderOutputData_Statics::NewStructOps, TEXT("MovieGraphRenderOutputData"), &Z_Registration_Info_UScriptStruct_MovieGraphRenderOutputData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieGraphRenderOutputData), 4169711449U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieGraphTimeStepBase, UMovieGraphTimeStepBase::StaticClass, TEXT("UMovieGraphTimeStepBase"), &Z_Registration_Info_UClass_UMovieGraphTimeStepBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphTimeStepBase), 239114279U) },
		{ Z_Construct_UClass_UMovieGraphRendererBase, UMovieGraphRendererBase::StaticClass, TEXT("UMovieGraphRendererBase"), &Z_Registration_Info_UClass_UMovieGraphRendererBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphRendererBase), 2254003062U) },
		{ Z_Construct_UClass_UMovieGraphDataSourceBase, UMovieGraphDataSourceBase::StaticClass, TEXT("UMovieGraphDataSourceBase"), &Z_Registration_Info_UClass_UMovieGraphDataSourceBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphDataSourceBase), 1207867464U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_360129694(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
