// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/MovieGraphFilenameResolveParams.h"
#include "Graph/MovieGraphRenderDataIdentifier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieGraphFilenameResolveParams() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphEvaluatedConfig_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineExecutorShot_NoRegister();
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams();
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier();
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphResolveArgs();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieGraphResolveArgs;
class UScriptStruct* FMovieGraphResolveArgs::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieGraphResolveArgs.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieGraphResolveArgs.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieGraphResolveArgs, (UObject*)Z_Construct_UPackage__Script_MovieRenderPipelineCore(), TEXT("MovieGraphResolveArgs"));
	}
	return Z_Registration_Info_UScriptStruct_MovieGraphResolveArgs.OuterSingleton;
}
template<> MOVIERENDERPIPELINECORE_API UScriptStruct* StaticStruct<FMovieGraphResolveArgs>()
{
	return FMovieGraphResolveArgs::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieGraphResolveArgs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilenameArguments_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilenameArguments_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilenameArguments_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_FilenameArguments;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileMetadata_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileMetadata_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_FileMetadata;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphResolveArgs_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* This data structure contains a list of key-value pairs (as strings) for both filename resolving, and file metadata.\n* They are stored as two separate arrays (as metadata is often a bit more verbose/human friendly) and it is not required\n* that the two arrays be in sync. When resolving final filenames, any {tokens} will be replaced with a matching key-value\n* if found in the FilenameArguments variable. Because of this, FilenameArguments should be short and avoid illegal filename chars.\n*/" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphFilenameResolveParams.h" },
		{ "ToolTip", "This data structure contains a list of key-value pairs (as strings) for both filename resolving, and file metadata.\nThey are stored as two separate arrays (as metadata is often a bit more verbose/human friendly) and it is not required\nthat the two arrays be in sync. When resolving final filenames, any {tokens} will be replaced with a matching key-value\nif found in the FilenameArguments variable. Because of this, FilenameArguments should be short and avoid illegal filename chars." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieGraphResolveArgs_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieGraphResolveArgs>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieGraphResolveArgs_Statics::NewProp_FilenameArguments_ValueProp = { "FilenameArguments", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieGraphResolveArgs_Statics::NewProp_FilenameArguments_Key_KeyProp = { "FilenameArguments_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphResolveArgs_Statics::NewProp_FilenameArguments_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** A set of Key/Value pairs for output filename format strings (without {}) and their values. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphFilenameResolveParams.h" },
		{ "ToolTip", "A set of Key/Value pairs for output filename format strings (without {}) and their values." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMovieGraphResolveArgs_Statics::NewProp_FilenameArguments = { "FilenameArguments", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphResolveArgs, FilenameArguments), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphResolveArgs_Statics::NewProp_FilenameArguments_MetaData), Z_Construct_UScriptStruct_FMovieGraphResolveArgs_Statics::NewProp_FilenameArguments_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieGraphResolveArgs_Statics::NewProp_FileMetadata_ValueProp = { "FileMetadata", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieGraphResolveArgs_Statics::NewProp_FileMetadata_Key_KeyProp = { "FileMetadata_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphResolveArgs_Statics::NewProp_FileMetadata_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** A set of Key/Value pairs for file metadata for file formats that support metadata. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphFilenameResolveParams.h" },
		{ "ToolTip", "A set of Key/Value pairs for file metadata for file formats that support metadata." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMovieGraphResolveArgs_Statics::NewProp_FileMetadata = { "FileMetadata", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphResolveArgs, FileMetadata), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphResolveArgs_Statics::NewProp_FileMetadata_MetaData), Z_Construct_UScriptStruct_FMovieGraphResolveArgs_Statics::NewProp_FileMetadata_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieGraphResolveArgs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphResolveArgs_Statics::NewProp_FilenameArguments_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphResolveArgs_Statics::NewProp_FilenameArguments_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphResolveArgs_Statics::NewProp_FilenameArguments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphResolveArgs_Statics::NewProp_FileMetadata_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphResolveArgs_Statics::NewProp_FileMetadata_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphResolveArgs_Statics::NewProp_FileMetadata,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieGraphResolveArgs_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
		nullptr,
		&NewStructOps,
		"MovieGraphResolveArgs",
		Z_Construct_UScriptStruct_FMovieGraphResolveArgs_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphResolveArgs_Statics::PropPointers),
		sizeof(FMovieGraphResolveArgs),
		alignof(FMovieGraphResolveArgs),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphResolveArgs_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieGraphResolveArgs_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphResolveArgs_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphResolveArgs()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieGraphResolveArgs.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieGraphResolveArgs.InnerSingleton, Z_Construct_UScriptStruct_FMovieGraphResolveArgs_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieGraphResolveArgs.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieGraphFilenameResolveParams;
class UScriptStruct* FMovieGraphFilenameResolveParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieGraphFilenameResolveParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieGraphFilenameResolveParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams, (UObject*)Z_Construct_UPackage__Script_MovieRenderPipelineCore(), TEXT("MovieGraphFilenameResolveParams"));
	}
	return Z_Registration_Info_UScriptStruct_MovieGraphFilenameResolveParams.OuterSingleton;
}
template<> MOVIERENDERPIPELINECORE_API UScriptStruct* StaticStruct<FMovieGraphFilenameResolveParams>()
{
	return FMovieGraphFilenameResolveParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderDataIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RenderDataIdentifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootFrameNumber_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RootFrameNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotFrameNumber_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ShotFrameNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootFrameNumberRel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RootFrameNumberRel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotFrameNumberRel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ShotFrameNumberRel;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileMetadata_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileMetadata_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_FileMetadata;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceRelativeFrameNumbers_MetaData[];
#endif
		static void NewProp_bForceRelativeFrameNumbers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRelativeFrameNumbers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnsureAbsolutePath_MetaData[];
#endif
		static void NewProp_bEnsureAbsolutePath_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnsureAbsolutePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitializationTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitializationTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZeroPadFrameNumberCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ZeroPadFrameNumberCount;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileNameFormatOverrides_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileNameFormatOverrides_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileNameFormatOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_FileNameFormatOverrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Job_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Job;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Shot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EvaluatedConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EvaluatedConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameNumberOffset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FrameNumberOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultFrameRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* This data structure contains all of the information needed to resolve a filename format string from the Movie Graph.\n* During runtime the values are generated by the actual rendering and then placed into this data structure before resolving\n* an actual {format_string} using the UMovieGraphBlueprintLibrary. You can use this to resolve filenames when editing. If\n* you wish to resolve a partial format string (such as {sequence_name}/{frame_number} but have it only resolve {sequence_name}\n* you can add (\"frame_number\", \"{frame_number}\") to the FileNameFormatOverrides and that portion of the format string will\n* be preserved so the resulting string back would say \"my_seq_name/{frame_number}\".\n*/" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphFilenameResolveParams.h" },
		{ "ToolTip", "* This data structure contains all of the information needed to resolve a filename format string from the Movie Graph.\n* During runtime the values are generated by the actual rendering and then placed into this data structure before resolving\n* an actual {format_string} using the UMovieGraphBlueprintLibrary. You can use this to resolve filenames when editing. If\n* you wish to resolve a partial format string (such as {sequence_name}/{frame_number} but have it only resolve {sequence_name}\n* you can add (\"frame_number\", \"{frame_number}\") to the FileNameFormatOverrides and that portion of the format string will\n* be preserved so the resulting string back would say \"my_seq_name/{frame_number}\"." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieGraphFilenameResolveParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_RenderDataIdentifier_MetaData[] = {
		{ "Category", "Movie Graph" },
		{ "Comment", "/**\n\x09* This is used to fill out tokens related to the render data that the file represents.\n\x09* Used to fill out the {camera_name}, {render_layer}, {renderer_name}, {renderer_sub_name} tokens.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphFilenameResolveParams.h" },
		{ "ToolTip", "This is used to fill out tokens related to the render data that the file represents.\nUsed to fill out the {camera_name}, {render_layer}, {renderer_name}, {renderer_sub_name} tokens." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_RenderDataIdentifier = { "RenderDataIdentifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphFilenameResolveParams, RenderDataIdentifier), Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_RenderDataIdentifier_MetaData), Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_RenderDataIdentifier_MetaData) }; // 1117685946
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_RootFrameNumber_MetaData[] = {
		{ "Category", "Movie Graph" },
		{ "Comment", "/**\n\x09* Frame Number for the Root (matching what you see in the Sequencer timeline. ie: If the Sequence PlaybackRange starts on 50, this value would be 50 on the first frame.\n\x09* Used to fill out the {frame_number} token.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphFilenameResolveParams.h" },
		{ "ToolTip", "Frame Number for the Root (matching what you see in the Sequencer timeline. ie: If the Sequence PlaybackRange starts on 50, this value would be 50 on the first frame.\nUsed to fill out the {frame_number} token." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_RootFrameNumber = { "RootFrameNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphFilenameResolveParams, RootFrameNumber), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_RootFrameNumber_MetaData), Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_RootFrameNumber_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_ShotFrameNumber_MetaData[] = {
		{ "Category", "Movie Graph" },
		{ "Comment", "/** \n\x09* Frame Number for the Shot (matching what you would see in Sequencer at the sub-sequence level. \n\x09* Used to fill out the {frame_number_shot} token.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphFilenameResolveParams.h" },
		{ "ToolTip", "Frame Number for the Shot (matching what you would see in Sequencer at the sub-sequence level.\nUsed to fill out the {frame_number_shot} token." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_ShotFrameNumber = { "ShotFrameNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphFilenameResolveParams, ShotFrameNumber), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_ShotFrameNumber_MetaData), Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_ShotFrameNumber_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_RootFrameNumberRel_MetaData[] = {
		{ "Category", "Movie Graph" },
		{ "Comment", "/** \n\x09* Frame Number for the Root (relative to 0, not what you would see in the Sequencer timeline. ie: If sequence PlaybackRange starts on 50, this value would be 0 on the first frame.)\n\x09* Used to fill out the {frame_number_rel} token.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphFilenameResolveParams.h" },
		{ "ToolTip", "Frame Number for the Root (relative to 0, not what you would see in the Sequencer timeline. ie: If sequence PlaybackRange starts on 50, this value would be 0 on the first frame.)\nUsed to fill out the {frame_number_rel} token." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_RootFrameNumberRel = { "RootFrameNumberRel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphFilenameResolveParams, RootFrameNumberRel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_RootFrameNumberRel_MetaData), Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_RootFrameNumberRel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_ShotFrameNumberRel_MetaData[] = {
		{ "Category", "Movie Graph" },
		{ "Comment", "/** \n\x09* Frame Number for the Shot (relative to 0, not what you would see in the Sequencer timeline.) \n\x09* Used to fill out the {frame_number_shot_rel} token.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphFilenameResolveParams.h" },
		{ "ToolTip", "Frame Number for the Shot (relative to 0, not what you would see in the Sequencer timeline.)\nUsed to fill out the {frame_number_shot_rel} token." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_ShotFrameNumberRel = { "ShotFrameNumberRel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphFilenameResolveParams, ShotFrameNumberRel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_ShotFrameNumberRel_MetaData), Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_ShotFrameNumberRel_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_FileMetadata_ValueProp = { "FileMetadata", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_FileMetadata_Key_KeyProp = { "FileMetadata_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_FileMetadata_MetaData[] = {
		{ "Category", "Movie Graph" },
		{ "Comment", "/** A key/value pair that maps metadata names to their values. Output is only supported in exr formats at the moment. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphFilenameResolveParams.h" },
		{ "ToolTip", "A key/value pair that maps metadata names to their values. Output is only supported in exr formats at the moment." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_FileMetadata = { "FileMetadata", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphFilenameResolveParams, FileMetadata), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_FileMetadata_MetaData), Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_FileMetadata_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_Version_MetaData[] = {
		{ "Category", "Movie Graph" },
		{ "Comment", "/** Used to resolve {version} format arguments. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphFilenameResolveParams.h" },
		{ "ToolTip", "Used to resolve {version} format arguments." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphFilenameResolveParams, Version), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_Version_MetaData), Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_Version_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_bForceRelativeFrameNumbers_MetaData[] = {
		{ "Category", "Movie Graph" },
		{ "Comment", "/** If true, force format strings (like {frame_number}) to resolve using the relative version. Used when slow-mo is detected as frame numbers would overlap. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphFilenameResolveParams.h" },
		{ "ToolTip", "If true, force format strings (like {frame_number}) to resolve using the relative version. Used when slow-mo is detected as frame numbers would overlap." },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_bForceRelativeFrameNumbers_SetBit(void* Obj)
	{
		((FMovieGraphFilenameResolveParams*)Obj)->bForceRelativeFrameNumbers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_bForceRelativeFrameNumbers = { "bForceRelativeFrameNumbers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieGraphFilenameResolveParams), &Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_bForceRelativeFrameNumbers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_bForceRelativeFrameNumbers_MetaData), Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_bForceRelativeFrameNumbers_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_bEnsureAbsolutePath_MetaData[] = {
		{ "Category", "Movie Graph" },
		{ "Comment", "/** \n\x09* If true, If the format string is a relative path, then the resulting resolved path will be converted to an absolute path.\n\x09* Assumes that the relative path should be resolved relative to the engine/editor executable.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphFilenameResolveParams.h" },
		{ "ToolTip", "If true, If the format string is a relative path, then the resulting resolved path will be converted to an absolute path.\nAssumes that the relative path should be resolved relative to the engine/editor executable." },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_bEnsureAbsolutePath_SetBit(void* Obj)
	{
		((FMovieGraphFilenameResolveParams*)Obj)->bEnsureAbsolutePath = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_bEnsureAbsolutePath = { "bEnsureAbsolutePath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieGraphFilenameResolveParams), &Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_bEnsureAbsolutePath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_bEnsureAbsolutePath_MetaData), Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_bEnsureAbsolutePath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_InitializationTime_MetaData[] = {
		{ "Category", "Movie Graph" },
		{ "Comment", "/** The initialization time for this job. Used to resolve time-based format arguments. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphFilenameResolveParams.h" },
		{ "ToolTip", "The initialization time for this job. Used to resolve time-based format arguments." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_InitializationTime = { "InitializationTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphFilenameResolveParams, InitializationTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_InitializationTime_MetaData), Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_InitializationTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_ZeroPadFrameNumberCount_MetaData[] = {
		{ "Category", "Movie Graph" },
		{ "Comment", "/** When converitng frame numbers to strings, how many digits should we pad them up to? ie: 5 => 0005 with a count of 4. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphFilenameResolveParams.h" },
		{ "ToolTip", "When converitng frame numbers to strings, how many digits should we pad them up to? ie: 5 => 0005 with a count of 4." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_ZeroPadFrameNumberCount = { "ZeroPadFrameNumberCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphFilenameResolveParams, ZeroPadFrameNumberCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_ZeroPadFrameNumberCount_MetaData), Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_ZeroPadFrameNumberCount_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_FileNameFormatOverrides_ValueProp = { "FileNameFormatOverrides", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_FileNameFormatOverrides_Key_KeyProp = { "FileNameFormatOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_FileNameFormatOverrides_MetaData[] = {
		{ "Category", "Movie Graph" },
		{ "Comment", "/** \n\x09* A map between \"{format}\" tokens and their values. These are applied after the auto-generated ones from the system,\n\x09* which allows the caller to override things like {.ext}\n\x09*/" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphFilenameResolveParams.h" },
		{ "ToolTip", "A map between \"{format}\" tokens and their values. These are applied after the auto-generated ones from the system,\nwhich allows the caller to override things like {.ext}" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_FileNameFormatOverrides = { "FileNameFormatOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphFilenameResolveParams, FileNameFormatOverrides), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_FileNameFormatOverrides_MetaData), Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_FileNameFormatOverrides_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_Job_MetaData[] = {
		{ "Category", "Movie Graph" },
		{ "Comment", "/** Optional. If specified, used to resolve some tokens related to the job.*/" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphFilenameResolveParams.h" },
		{ "ToolTip", "Optional. If specified, used to resolve some tokens related to the job." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_Job = { "Job", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphFilenameResolveParams, Job), Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_Job_MetaData), Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_Job_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_Shot_MetaData[] = {
		{ "Category", "Movie Graph" },
		{ "Comment", "/** Optional. If specified, used to resolve the shot name. No settings from this shot are ever used (they must come form the EvaluatedConfig instead). */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphFilenameResolveParams.h" },
		{ "ToolTip", "Optional. If specified, used to resolve the shot name. No settings from this shot are ever used (they must come form the EvaluatedConfig instead)." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_Shot = { "Shot", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphFilenameResolveParams, Shot), Z_Construct_UClass_UMoviePipelineExecutorShot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_Shot_MetaData), Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_Shot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_EvaluatedConfig_MetaData[] = {
		{ "Category", "Movie Graph" },
		{ "Comment", "/** Optional. If specified, used to resolve some tokens related to settings in the shot (such as {ts_count}). */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphFilenameResolveParams.h" },
		{ "ToolTip", "Optional. If specified, used to resolve some tokens related to settings in the shot (such as {ts_count})." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_EvaluatedConfig = { "EvaluatedConfig", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphFilenameResolveParams, EvaluatedConfig), Z_Construct_UClass_UMovieGraphEvaluatedConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_EvaluatedConfig_MetaData), Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_EvaluatedConfig_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_FrameNumberOffset_MetaData[] = {
		{ "Category", "Movie Graph" },
		{ "Comment", "/** Added onto the various FrameNumber settings automatically. Can be used to offset values (such as starting your Level Sequence on frame 0, but outputting it to disk at 1001). */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphFilenameResolveParams.h" },
		{ "ToolTip", "Added onto the various FrameNumber settings automatically. Can be used to offset values (such as starting your Level Sequence on frame 0, but outputting it to disk at 1001)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_FrameNumberOffset = { "FrameNumberOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphFilenameResolveParams, FrameNumberOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_FrameNumberOffset_MetaData), Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_FrameNumberOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_DefaultFrameRate_MetaData[] = {
		{ "Category", "Movie Graph" },
		{ "Comment", "/** What is the default Frame Rate? This will be overwritten by the Output Setting from the evaluated config (if specified). */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphFilenameResolveParams.h" },
		{ "ToolTip", "What is the default Frame Rate? This will be overwritten by the Output Setting from the evaluated config (if specified)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_DefaultFrameRate = { "DefaultFrameRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphFilenameResolveParams, DefaultFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_DefaultFrameRate_MetaData), Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_DefaultFrameRate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_RenderDataIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_RootFrameNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_ShotFrameNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_RootFrameNumberRel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_ShotFrameNumberRel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_FileMetadata_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_FileMetadata_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_FileMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_Version,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_bForceRelativeFrameNumbers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_bEnsureAbsolutePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_InitializationTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_ZeroPadFrameNumberCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_FileNameFormatOverrides_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_FileNameFormatOverrides_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_FileNameFormatOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_Job,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_Shot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_EvaluatedConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_FrameNumberOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewProp_DefaultFrameRate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
		nullptr,
		&NewStructOps,
		"MovieGraphFilenameResolveParams",
		Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::PropPointers),
		sizeof(FMovieGraphFilenameResolveParams),
		alignof(FMovieGraphFilenameResolveParams),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieGraphFilenameResolveParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieGraphFilenameResolveParams.InnerSingleton, Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieGraphFilenameResolveParams.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphFilenameResolveParams_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphFilenameResolveParams_h_Statics::ScriptStructInfo[] = {
		{ FMovieGraphResolveArgs::StaticStruct, Z_Construct_UScriptStruct_FMovieGraphResolveArgs_Statics::NewStructOps, TEXT("MovieGraphResolveArgs"), &Z_Registration_Info_UScriptStruct_MovieGraphResolveArgs, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieGraphResolveArgs), 943648860U) },
		{ FMovieGraphFilenameResolveParams::StaticStruct, Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewStructOps, TEXT("MovieGraphFilenameResolveParams"), &Z_Registration_Info_UScriptStruct_MovieGraphFilenameResolveParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieGraphFilenameResolveParams), 2511621848U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphFilenameResolveParams_h_768761560(TEXT("/Script/MovieRenderPipelineCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphFilenameResolveParams_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphFilenameResolveParams_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
