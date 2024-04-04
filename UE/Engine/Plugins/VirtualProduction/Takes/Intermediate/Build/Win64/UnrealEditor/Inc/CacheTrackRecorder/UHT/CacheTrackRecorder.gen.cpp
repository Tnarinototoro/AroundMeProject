// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Recorder/CacheTrackRecorder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCacheTrackRecorder() {}
// Cross Module References
	CACHETRACKRECORDER_API UClass* Z_Construct_UClass_UCacheTrackRecorder();
	CACHETRACKRECORDER_API UClass* Z_Construct_UClass_UCacheTrackRecorder_NoRegister();
	CACHETRACKRECORDER_API UEnum* Z_Construct_UEnum_CacheTrackRecorder_ECacheTrackRecorderState();
	CACHETRACKRECORDER_API UScriptStruct* Z_Construct_UScriptStruct_FCachedTrackSource();
	CACHETRACKRECORDER_API UScriptStruct* Z_Construct_UScriptStruct_FCacheRecorderParameters();
	CACHETRACKRECORDER_API UScriptStruct* Z_Construct_UScriptStruct_FCacheRecorderProjectParameters();
	CACHETRACKRECORDER_API UScriptStruct* Z_Construct_UScriptStruct_FCacheRecorderUserParameters();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EUpdateClockSource();
	TAKETRACKRECORDERS_API UClass* Z_Construct_UClass_UMovieSceneTrackRecorder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CacheTrackRecorder();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CacheRecorderUserParameters;
class UScriptStruct* FCacheRecorderUserParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CacheRecorderUserParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CacheRecorderUserParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCacheRecorderUserParameters, (UObject*)Z_Construct_UPackage__Script_CacheTrackRecorder(), TEXT("CacheRecorderUserParameters"));
	}
	return Z_Registration_Info_UScriptStruct_CacheRecorderUserParameters.OuterSingleton;
}
template<> CACHETRACKRECORDER_API UScriptStruct* StaticStruct<FCacheRecorderUserParameters>()
{
	return FCacheRecorderUserParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCacheRecorderUserParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMaximizeViewport_MetaData[];
#endif
		static void NewProp_bMaximizeViewport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaximizeViewport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineTimeDilation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EngineTimeDilation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetPlayhead_MetaData[];
#endif
		static void NewProp_bResetPlayhead_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetPlayhead;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStopAtPlaybackEnd_MetaData[];
#endif
		static void NewProp_bStopAtPlaybackEnd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopAtPlaybackEnd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCacheRecorderUserParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Recorder/CacheTrackRecorder.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCacheRecorderUserParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCacheRecorderUserParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCacheRecorderUserParameters_Statics::NewProp_bMaximizeViewport_MetaData[] = {
		{ "Category", "User Settings" },
		{ "Comment", "/** Whether to maximize the viewport (enter Immersive Mode) when recording */" },
		{ "ModuleRelativePath", "Public/Recorder/CacheTrackRecorder.h" },
		{ "ToolTip", "Whether to maximize the viewport (enter Immersive Mode) when recording" },
	};
#endif
	void Z_Construct_UScriptStruct_FCacheRecorderUserParameters_Statics::NewProp_bMaximizeViewport_SetBit(void* Obj)
	{
		((FCacheRecorderUserParameters*)Obj)->bMaximizeViewport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCacheRecorderUserParameters_Statics::NewProp_bMaximizeViewport = { "bMaximizeViewport", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCacheRecorderUserParameters), &Z_Construct_UScriptStruct_FCacheRecorderUserParameters_Statics::NewProp_bMaximizeViewport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheRecorderUserParameters_Statics::NewProp_bMaximizeViewport_MetaData), Z_Construct_UScriptStruct_FCacheRecorderUserParameters_Statics::NewProp_bMaximizeViewport_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCacheRecorderUserParameters_Statics::NewProp_EngineTimeDilation_MetaData[] = {
		{ "Category", "User Settings" },
		{ "ClampMin", "0.00001" },
		{ "Comment", "/** The engine time dilation to apply during the recording */" },
		{ "ModuleRelativePath", "Public/Recorder/CacheTrackRecorder.h" },
		{ "ToolTip", "The engine time dilation to apply during the recording" },
		{ "UIMin", "0.00001" },
		{ "Units", "Multiplier" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCacheRecorderUserParameters_Statics::NewProp_EngineTimeDilation = { "EngineTimeDilation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCacheRecorderUserParameters, EngineTimeDilation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheRecorderUserParameters_Statics::NewProp_EngineTimeDilation_MetaData), Z_Construct_UScriptStruct_FCacheRecorderUserParameters_Statics::NewProp_EngineTimeDilation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCacheRecorderUserParameters_Statics::NewProp_bResetPlayhead_MetaData[] = {
		{ "Category", "User Settings" },
		{ "Comment", "/** Reset playhead to beginning of the playback range when starting recording */" },
		{ "ModuleRelativePath", "Public/Recorder/CacheTrackRecorder.h" },
		{ "ToolTip", "Reset playhead to beginning of the playback range when starting recording" },
	};
#endif
	void Z_Construct_UScriptStruct_FCacheRecorderUserParameters_Statics::NewProp_bResetPlayhead_SetBit(void* Obj)
	{
		((FCacheRecorderUserParameters*)Obj)->bResetPlayhead = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCacheRecorderUserParameters_Statics::NewProp_bResetPlayhead = { "bResetPlayhead", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCacheRecorderUserParameters), &Z_Construct_UScriptStruct_FCacheRecorderUserParameters_Statics::NewProp_bResetPlayhead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheRecorderUserParameters_Statics::NewProp_bResetPlayhead_MetaData), Z_Construct_UScriptStruct_FCacheRecorderUserParameters_Statics::NewProp_bResetPlayhead_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCacheRecorderUserParameters_Statics::NewProp_bStopAtPlaybackEnd_MetaData[] = {
		{ "Category", "User Settings" },
		{ "Comment", "/** Automatically stop recording when reaching the end of the playback range */" },
		{ "ModuleRelativePath", "Public/Recorder/CacheTrackRecorder.h" },
		{ "ToolTip", "Automatically stop recording when reaching the end of the playback range" },
	};
#endif
	void Z_Construct_UScriptStruct_FCacheRecorderUserParameters_Statics::NewProp_bStopAtPlaybackEnd_SetBit(void* Obj)
	{
		((FCacheRecorderUserParameters*)Obj)->bStopAtPlaybackEnd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCacheRecorderUserParameters_Statics::NewProp_bStopAtPlaybackEnd = { "bStopAtPlaybackEnd", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCacheRecorderUserParameters), &Z_Construct_UScriptStruct_FCacheRecorderUserParameters_Statics::NewProp_bStopAtPlaybackEnd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheRecorderUserParameters_Statics::NewProp_bStopAtPlaybackEnd_MetaData), Z_Construct_UScriptStruct_FCacheRecorderUserParameters_Statics::NewProp_bStopAtPlaybackEnd_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCacheRecorderUserParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCacheRecorderUserParameters_Statics::NewProp_bMaximizeViewport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCacheRecorderUserParameters_Statics::NewProp_EngineTimeDilation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCacheRecorderUserParameters_Statics::NewProp_bResetPlayhead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCacheRecorderUserParameters_Statics::NewProp_bStopAtPlaybackEnd,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCacheRecorderUserParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CacheTrackRecorder,
		nullptr,
		&NewStructOps,
		"CacheRecorderUserParameters",
		Z_Construct_UScriptStruct_FCacheRecorderUserParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheRecorderUserParameters_Statics::PropPointers),
		sizeof(FCacheRecorderUserParameters),
		alignof(FCacheRecorderUserParameters),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheRecorderUserParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCacheRecorderUserParameters_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheRecorderUserParameters_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCacheRecorderUserParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_CacheRecorderUserParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CacheRecorderUserParameters.InnerSingleton, Z_Construct_UScriptStruct_FCacheRecorderUserParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CacheRecorderUserParameters.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CacheRecorderProjectParameters;
class UScriptStruct* FCacheRecorderProjectParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CacheRecorderProjectParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CacheRecorderProjectParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCacheRecorderProjectParameters, (UObject*)Z_Construct_UPackage__Script_CacheTrackRecorder(), TEXT("CacheRecorderProjectParameters"));
	}
	return Z_Registration_Info_UScriptStruct_CacheRecorderProjectParameters.OuterSingleton;
}
template<> CACHETRACKRECORDER_API UScriptStruct* StaticStruct<FCacheRecorderProjectParameters>()
{
	return FCacheRecorderProjectParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSlate_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultSlate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCacheTrackRecorderControlsClockTime_MetaData[];
#endif
		static void NewProp_bCacheTrackRecorderControlsClockTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCacheTrackRecorderControlsClockTime;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RecordingClockSource_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecordingClockSource_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RecordingClockSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStartAtCurrentTimecode_MetaData[];
#endif
		static void NewProp_bStartAtCurrentTimecode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartAtCurrentTimecode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecordTimecode_MetaData[];
#endif
		static void NewProp_bRecordTimecode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordTimecode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowNotifications_MetaData[];
#endif
		static void NewProp_bShowNotifications_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowNotifications;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Recorder/CacheTrackRecorder.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCacheRecorderProjectParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::NewProp_DefaultSlate_MetaData[] = {
		{ "Category", "Cache Recorder" },
		{ "Comment", "/**\n\x09 * The default name to use for the Slate information\n\x09 */" },
		{ "ModuleRelativePath", "Public/Recorder/CacheTrackRecorder.h" },
		{ "ToolTip", "The default name to use for the Slate information" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::NewProp_DefaultSlate = { "DefaultSlate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCacheRecorderProjectParameters, DefaultSlate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::NewProp_DefaultSlate_MetaData), Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::NewProp_DefaultSlate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::NewProp_bCacheTrackRecorderControlsClockTime_MetaData[] = {
		{ "Category", "Cache Recorder" },
		{ "Comment", "/**\n\x09 * If true then take recorder will control the sequencer timing when recording with a fixed editor time step. The delta time is derived by the sequence's target frame rate. \n\x09 * This is useful when recording cache data where frame accuracy is important (e.g. Niagara systems), but should be set to false when dealing with data from external sources (e.g. LiveLink).\n\x09 */" },
		{ "ModuleRelativePath", "Public/Recorder/CacheTrackRecorder.h" },
		{ "ToolTip", "If true then take recorder will control the sequencer timing when recording with a fixed editor time step. The delta time is derived by the sequence's target frame rate.\nThis is useful when recording cache data where frame accuracy is important (e.g. Niagara systems), but should be set to false when dealing with data from external sources (e.g. LiveLink)." },
	};
#endif
	void Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::NewProp_bCacheTrackRecorderControlsClockTime_SetBit(void* Obj)
	{
		((FCacheRecorderProjectParameters*)Obj)->bCacheTrackRecorderControlsClockTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::NewProp_bCacheTrackRecorderControlsClockTime = { "bCacheTrackRecorderControlsClockTime", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCacheRecorderProjectParameters), &Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::NewProp_bCacheTrackRecorderControlsClockTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::NewProp_bCacheTrackRecorderControlsClockTime_MetaData), Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::NewProp_bCacheTrackRecorderControlsClockTime_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::NewProp_RecordingClockSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::NewProp_RecordingClockSource_MetaData[] = {
		{ "Category", "Cache Recorder" },
		{ "Comment", "/**\n\x09 * The clock source to use when recording\n\x09 */" },
		{ "EditCondition", "!bCacheTrackRecorderControlsClockTime" },
		{ "ModuleRelativePath", "Public/Recorder/CacheTrackRecorder.h" },
		{ "ToolTip", "The clock source to use when recording" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::NewProp_RecordingClockSource = { "RecordingClockSource", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCacheRecorderProjectParameters, RecordingClockSource), Z_Construct_UEnum_MovieScene_EUpdateClockSource, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::NewProp_RecordingClockSource_MetaData), Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::NewProp_RecordingClockSource_MetaData) }; // 1616949837
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::NewProp_bStartAtCurrentTimecode_MetaData[] = {
		{ "Category", "Cache Recorder" },
		{ "Comment", "/**\n\x09 * If enabled, track sections will start at the current timecode. Otherwise, 0.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Recorder/CacheTrackRecorder.h" },
		{ "ToolTip", "If enabled, track sections will start at the current timecode. Otherwise, 0." },
	};
#endif
	void Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::NewProp_bStartAtCurrentTimecode_SetBit(void* Obj)
	{
		((FCacheRecorderProjectParameters*)Obj)->bStartAtCurrentTimecode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::NewProp_bStartAtCurrentTimecode = { "bStartAtCurrentTimecode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCacheRecorderProjectParameters), &Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::NewProp_bStartAtCurrentTimecode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::NewProp_bStartAtCurrentTimecode_MetaData), Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::NewProp_bStartAtCurrentTimecode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::NewProp_bRecordTimecode_MetaData[] = {
		{ "Category", "Cache Recorder" },
		{ "Comment", "/**\n\x09 * If enabled, timecode will be recorded into each actor track\n\x09 */" },
		{ "ModuleRelativePath", "Public/Recorder/CacheTrackRecorder.h" },
		{ "ToolTip", "If enabled, timecode will be recorded into each actor track" },
	};
#endif
	void Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::NewProp_bRecordTimecode_SetBit(void* Obj)
	{
		((FCacheRecorderProjectParameters*)Obj)->bRecordTimecode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::NewProp_bRecordTimecode = { "bRecordTimecode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCacheRecorderProjectParameters), &Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::NewProp_bRecordTimecode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::NewProp_bRecordTimecode_MetaData), Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::NewProp_bRecordTimecode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::NewProp_bShowNotifications_MetaData[] = {
		{ "Category", "Cache Recorder" },
		{ "Comment", "/** Whether to show notification windows or not when recording */" },
		{ "ModuleRelativePath", "Public/Recorder/CacheTrackRecorder.h" },
		{ "ToolTip", "Whether to show notification windows or not when recording" },
	};
#endif
	void Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::NewProp_bShowNotifications_SetBit(void* Obj)
	{
		((FCacheRecorderProjectParameters*)Obj)->bShowNotifications = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::NewProp_bShowNotifications = { "bShowNotifications", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCacheRecorderProjectParameters), &Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::NewProp_bShowNotifications_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::NewProp_bShowNotifications_MetaData), Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::NewProp_bShowNotifications_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::NewProp_DefaultSlate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::NewProp_bCacheTrackRecorderControlsClockTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::NewProp_RecordingClockSource_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::NewProp_RecordingClockSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::NewProp_bStartAtCurrentTimecode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::NewProp_bRecordTimecode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::NewProp_bShowNotifications,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CacheTrackRecorder,
		nullptr,
		&NewStructOps,
		"CacheRecorderProjectParameters",
		Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::PropPointers),
		sizeof(FCacheRecorderProjectParameters),
		alignof(FCacheRecorderProjectParameters),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCacheRecorderProjectParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_CacheRecorderProjectParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CacheRecorderProjectParameters.InnerSingleton, Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CacheRecorderProjectParameters.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CacheRecorderParameters;
class UScriptStruct* FCacheRecorderParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CacheRecorderParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CacheRecorderParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCacheRecorderParameters, (UObject*)Z_Construct_UPackage__Script_CacheTrackRecorder(), TEXT("CacheRecorderParameters"));
	}
	return Z_Registration_Info_UScriptStruct_CacheRecorderParameters.OuterSingleton;
}
template<> CACHETRACKRECORDER_API UScriptStruct* StaticStruct<FCacheRecorderParameters>()
{
	return FCacheRecorderParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCacheRecorderParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_User_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_User;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Project_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Project;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartFrame_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCacheRecorderParameters_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure housing all configurable parameters for a take recorder instance\n */" },
		{ "ModuleRelativePath", "Public/Recorder/CacheTrackRecorder.h" },
		{ "ToolTip", "Structure housing all configurable parameters for a take recorder instance" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCacheRecorderParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCacheRecorderParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCacheRecorderParameters_Statics::NewProp_User_MetaData[] = {
		{ "Category", "Cache Recorder" },
		{ "ModuleRelativePath", "Public/Recorder/CacheTrackRecorder.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCacheRecorderParameters_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCacheRecorderParameters, User), Z_Construct_UScriptStruct_FCacheRecorderUserParameters, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheRecorderParameters_Statics::NewProp_User_MetaData), Z_Construct_UScriptStruct_FCacheRecorderParameters_Statics::NewProp_User_MetaData) }; // 275954580
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCacheRecorderParameters_Statics::NewProp_Project_MetaData[] = {
		{ "Category", "Cache Recorder" },
		{ "ModuleRelativePath", "Public/Recorder/CacheTrackRecorder.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCacheRecorderParameters_Statics::NewProp_Project = { "Project", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCacheRecorderParameters, Project), Z_Construct_UScriptStruct_FCacheRecorderProjectParameters, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheRecorderParameters_Statics::NewProp_Project_MetaData), Z_Construct_UScriptStruct_FCacheRecorderParameters_Statics::NewProp_Project_MetaData) }; // 1464624935
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCacheRecorderParameters_Statics::NewProp_StartFrame_MetaData[] = {
		{ "Category", "Cache Recorder" },
		{ "ModuleRelativePath", "Public/Recorder/CacheTrackRecorder.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCacheRecorderParameters_Statics::NewProp_StartFrame = { "StartFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCacheRecorderParameters, StartFrame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheRecorderParameters_Statics::NewProp_StartFrame_MetaData), Z_Construct_UScriptStruct_FCacheRecorderParameters_Statics::NewProp_StartFrame_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCacheRecorderParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCacheRecorderParameters_Statics::NewProp_User,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCacheRecorderParameters_Statics::NewProp_Project,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCacheRecorderParameters_Statics::NewProp_StartFrame,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCacheRecorderParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CacheTrackRecorder,
		nullptr,
		&NewStructOps,
		"CacheRecorderParameters",
		Z_Construct_UScriptStruct_FCacheRecorderParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheRecorderParameters_Statics::PropPointers),
		sizeof(FCacheRecorderParameters),
		alignof(FCacheRecorderParameters),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheRecorderParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCacheRecorderParameters_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheRecorderParameters_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCacheRecorderParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_CacheRecorderParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CacheRecorderParameters.InnerSingleton, Z_Construct_UScriptStruct_FCacheRecorderParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CacheRecorderParameters.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECacheTrackRecorderState;
	static UEnum* ECacheTrackRecorderState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECacheTrackRecorderState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECacheTrackRecorderState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CacheTrackRecorder_ECacheTrackRecorderState, (UObject*)Z_Construct_UPackage__Script_CacheTrackRecorder(), TEXT("ECacheTrackRecorderState"));
		}
		return Z_Registration_Info_UEnum_ECacheTrackRecorderState.OuterSingleton;
	}
	template<> CACHETRACKRECORDER_API UEnum* StaticEnum<ECacheTrackRecorderState>()
	{
		return ECacheTrackRecorderState_StaticEnum();
	}
	struct Z_Construct_UEnum_CacheTrackRecorder_ECacheTrackRecorderState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CacheTrackRecorder_ECacheTrackRecorderState_Statics::Enumerators[] = {
		{ "ECacheTrackRecorderState::Starting", (int64)ECacheTrackRecorderState::Starting },
		{ "ECacheTrackRecorderState::PreRecord", (int64)ECacheTrackRecorderState::PreRecord },
		{ "ECacheTrackRecorderState::TickingAfterPre", (int64)ECacheTrackRecorderState::TickingAfterPre },
		{ "ECacheTrackRecorderState::Started", (int64)ECacheTrackRecorderState::Started },
		{ "ECacheTrackRecorderState::Stopped", (int64)ECacheTrackRecorderState::Stopped },
		{ "ECacheTrackRecorderState::Cancelled", (int64)ECacheTrackRecorderState::Cancelled },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CacheTrackRecorder_ECacheTrackRecorderState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cancelled.Name", "ECacheTrackRecorderState::Cancelled" },
		{ "ModuleRelativePath", "Public/Recorder/CacheTrackRecorder.h" },
		{ "PreRecord.Name", "ECacheTrackRecorderState::PreRecord" },
		{ "Started.Name", "ECacheTrackRecorderState::Started" },
		{ "Starting.Name", "ECacheTrackRecorderState::Starting" },
		{ "Stopped.Name", "ECacheTrackRecorderState::Stopped" },
		{ "TickingAfterPre.Name", "ECacheTrackRecorderState::TickingAfterPre" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CacheTrackRecorder_ECacheTrackRecorderState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CacheTrackRecorder,
		nullptr,
		"ECacheTrackRecorderState",
		"ECacheTrackRecorderState",
		Z_Construct_UEnum_CacheTrackRecorder_ECacheTrackRecorderState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CacheTrackRecorder_ECacheTrackRecorderState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CacheTrackRecorder_ECacheTrackRecorderState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CacheTrackRecorder_ECacheTrackRecorderState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CacheTrackRecorder_ECacheTrackRecorderState()
	{
		if (!Z_Registration_Info_UEnum_ECacheTrackRecorderState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECacheTrackRecorderState.InnerSingleton, Z_Construct_UEnum_CacheTrackRecorder_ECacheTrackRecorderState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECacheTrackRecorderState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CachedTrackSource;
class UScriptStruct* FCachedTrackSource::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CachedTrackSource.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CachedTrackSource.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedTrackSource, (UObject*)Z_Construct_UPackage__Script_CacheTrackRecorder(), TEXT("CachedTrackSource"));
	}
	return Z_Registration_Info_UScriptStruct_CachedTrackSource.OuterSingleton;
}
template<> CACHETRACKRECORDER_API UScriptStruct* StaticStruct<FCachedTrackSource>()
{
	return FCachedTrackSource::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCachedTrackSource_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Recorder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Recorder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedTrackSource_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Recorder/CacheTrackRecorder.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCachedTrackSource_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedTrackSource>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedTrackSource_Statics::NewProp_Recorder_MetaData[] = {
		{ "ModuleRelativePath", "Public/Recorder/CacheTrackRecorder.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCachedTrackSource_Statics::NewProp_Recorder = { "Recorder", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCachedTrackSource, Recorder), Z_Construct_UClass_UMovieSceneTrackRecorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedTrackSource_Statics::NewProp_Recorder_MetaData), Z_Construct_UScriptStruct_FCachedTrackSource_Statics::NewProp_Recorder_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCachedTrackSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedTrackSource_Statics::NewProp_Recorder,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCachedTrackSource_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CacheTrackRecorder,
		nullptr,
		&NewStructOps,
		"CachedTrackSource",
		Z_Construct_UScriptStruct_FCachedTrackSource_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedTrackSource_Statics::PropPointers),
		sizeof(FCachedTrackSource),
		alignof(FCachedTrackSource),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedTrackSource_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCachedTrackSource_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedTrackSource_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCachedTrackSource()
	{
		if (!Z_Registration_Info_UScriptStruct_CachedTrackSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CachedTrackSource.InnerSingleton, Z_Construct_UScriptStruct_FCachedTrackSource_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CachedTrackSource.InnerSingleton;
	}
	DEFINE_FUNCTION(UCacheTrackRecorder::execGetState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECacheTrackRecorderState*)Z_Param__Result=P_THIS->GetState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCacheTrackRecorder::execGetSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevelSequence**)Z_Param__Result=P_THIS->GetSequence();
		P_NATIVE_END;
	}
	void UCacheTrackRecorder::StaticRegisterNativesUCacheTrackRecorder()
	{
		UClass* Class = UCacheTrackRecorder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSequence", &UCacheTrackRecorder::execGetSequence },
			{ "GetState", &UCacheTrackRecorder::execGetState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCacheTrackRecorder_GetSequence_Statics
	{
		struct CacheTrackRecorder_eventGetSequence_Parms
		{
			ULevelSequence* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCacheTrackRecorder_GetSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CacheTrackRecorder_eventGetSequence_Parms, ReturnValue), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCacheTrackRecorder_GetSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCacheTrackRecorder_GetSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCacheTrackRecorder_GetSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cache Recorder" },
		{ "Comment", "/**\n\x09 * Access the sequence asset that this recorder is recording into\n\x09 */" },
		{ "ModuleRelativePath", "Public/Recorder/CacheTrackRecorder.h" },
		{ "ToolTip", "Access the sequence asset that this recorder is recording into" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCacheTrackRecorder_GetSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCacheTrackRecorder, nullptr, "GetSequence", nullptr, nullptr, Z_Construct_UFunction_UCacheTrackRecorder_GetSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCacheTrackRecorder_GetSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCacheTrackRecorder_GetSequence_Statics::CacheTrackRecorder_eventGetSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCacheTrackRecorder_GetSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCacheTrackRecorder_GetSequence_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCacheTrackRecorder_GetSequence_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCacheTrackRecorder_GetSequence_Statics::CacheTrackRecorder_eventGetSequence_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCacheTrackRecorder_GetSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCacheTrackRecorder_GetSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCacheTrackRecorder_GetState_Statics
	{
		struct CacheTrackRecorder_eventGetState_Parms
		{
			ECacheTrackRecorderState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCacheTrackRecorder_GetState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCacheTrackRecorder_GetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CacheTrackRecorder_eventGetState_Parms, ReturnValue), Z_Construct_UEnum_CacheTrackRecorder_ECacheTrackRecorderState, METADATA_PARAMS(0, nullptr) }; // 1779407028
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCacheTrackRecorder_GetState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCacheTrackRecorder_GetState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCacheTrackRecorder_GetState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCacheTrackRecorder_GetState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cache Recorder" },
		{ "Comment", "/**\n\x09 * Get the current state of this recorder\n\x09 */" },
		{ "ModuleRelativePath", "Public/Recorder/CacheTrackRecorder.h" },
		{ "ToolTip", "Get the current state of this recorder" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCacheTrackRecorder_GetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCacheTrackRecorder, nullptr, "GetState", nullptr, nullptr, Z_Construct_UFunction_UCacheTrackRecorder_GetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCacheTrackRecorder_GetState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCacheTrackRecorder_GetState_Statics::CacheTrackRecorder_eventGetState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCacheTrackRecorder_GetState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCacheTrackRecorder_GetState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCacheTrackRecorder_GetState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCacheTrackRecorder_GetState_Statics::CacheTrackRecorder_eventGetState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCacheTrackRecorder_GetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCacheTrackRecorder_GetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCacheTrackRecorder);
	UClass* Z_Construct_UClass_UCacheTrackRecorder_NoRegister()
	{
		return UCacheTrackRecorder::StaticClass();
	}
	struct Z_Construct_UClass_UCacheTrackRecorder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SequenceAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeakWorld_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_WeakWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CacheTracks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CacheTracks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CacheTracks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCacheTrackRecorder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CacheTrackRecorder,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCacheTrackRecorder_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCacheTrackRecorder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCacheTrackRecorder_GetSequence, "GetSequence" }, // 254021543
		{ &Z_Construct_UFunction_UCacheTrackRecorder_GetState, "GetState" }, // 3789268441
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCacheTrackRecorder_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCacheTrackRecorder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Recorder/CacheTrackRecorder.h" },
		{ "ModuleRelativePath", "Public/Recorder/CacheTrackRecorder.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCacheTrackRecorder_Statics::NewProp_SequenceAsset_MetaData[] = {
		{ "Comment", "/** The asset that we should output recorded data into */" },
		{ "ModuleRelativePath", "Public/Recorder/CacheTrackRecorder.h" },
		{ "ToolTip", "The asset that we should output recorded data into" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCacheTrackRecorder_Statics::NewProp_SequenceAsset = { "SequenceAsset", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCacheTrackRecorder, SequenceAsset), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCacheTrackRecorder_Statics::NewProp_SequenceAsset_MetaData), Z_Construct_UClass_UCacheTrackRecorder_Statics::NewProp_SequenceAsset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCacheTrackRecorder_Statics::NewProp_WeakWorld_MetaData[] = {
		{ "Comment", "/** The world that we are recording within */" },
		{ "ModuleRelativePath", "Public/Recorder/CacheTrackRecorder.h" },
		{ "ToolTip", "The world that we are recording within" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UCacheTrackRecorder_Statics::NewProp_WeakWorld = { "WeakWorld", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCacheTrackRecorder, WeakWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCacheTrackRecorder_Statics::NewProp_WeakWorld_MetaData), Z_Construct_UClass_UCacheTrackRecorder_Statics::NewProp_WeakWorld_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCacheTrackRecorder_Statics::NewProp_Parameters_MetaData[] = {
		{ "Comment", "/** Parameters for the recorder - marked up as a uproperty to support reference collection */" },
		{ "ModuleRelativePath", "Public/Recorder/CacheTrackRecorder.h" },
		{ "ToolTip", "Parameters for the recorder - marked up as a uproperty to support reference collection" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCacheTrackRecorder_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCacheTrackRecorder, Parameters), Z_Construct_UScriptStruct_FCacheRecorderParameters, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCacheTrackRecorder_Statics::NewProp_Parameters_MetaData), Z_Construct_UClass_UCacheTrackRecorder_Statics::NewProp_Parameters_MetaData) }; // 2793267922
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCacheTrackRecorder_Statics::NewProp_CacheTracks_Inner = { "CacheTracks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCachedTrackSource, METADATA_PARAMS(0, nullptr) }; // 2654211557
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCacheTrackRecorder_Statics::NewProp_CacheTracks_MetaData[] = {
		{ "ModuleRelativePath", "Public/Recorder/CacheTrackRecorder.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCacheTrackRecorder_Statics::NewProp_CacheTracks = { "CacheTracks", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCacheTrackRecorder, CacheTracks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCacheTrackRecorder_Statics::NewProp_CacheTracks_MetaData), Z_Construct_UClass_UCacheTrackRecorder_Statics::NewProp_CacheTracks_MetaData) }; // 2654211557
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCacheTrackRecorder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCacheTrackRecorder_Statics::NewProp_SequenceAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCacheTrackRecorder_Statics::NewProp_WeakWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCacheTrackRecorder_Statics::NewProp_Parameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCacheTrackRecorder_Statics::NewProp_CacheTracks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCacheTrackRecorder_Statics::NewProp_CacheTracks,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCacheTrackRecorder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCacheTrackRecorder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCacheTrackRecorder_Statics::ClassParams = {
		&UCacheTrackRecorder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCacheTrackRecorder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCacheTrackRecorder_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCacheTrackRecorder_Statics::Class_MetaDataParams), Z_Construct_UClass_UCacheTrackRecorder_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCacheTrackRecorder_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCacheTrackRecorder()
	{
		if (!Z_Registration_Info_UClass_UCacheTrackRecorder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCacheTrackRecorder.OuterSingleton, Z_Construct_UClass_UCacheTrackRecorder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCacheTrackRecorder.OuterSingleton;
	}
	template<> CACHETRACKRECORDER_API UClass* StaticClass<UCacheTrackRecorder>()
	{
		return UCacheTrackRecorder::StaticClass();
	}
	UCacheTrackRecorder::UCacheTrackRecorder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCacheTrackRecorder);
	UCacheTrackRecorder::~UCacheTrackRecorder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_Statics::EnumInfo[] = {
		{ ECacheTrackRecorderState_StaticEnum, TEXT("ECacheTrackRecorderState"), &Z_Registration_Info_UEnum_ECacheTrackRecorderState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1779407028U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_Statics::ScriptStructInfo[] = {
		{ FCacheRecorderUserParameters::StaticStruct, Z_Construct_UScriptStruct_FCacheRecorderUserParameters_Statics::NewStructOps, TEXT("CacheRecorderUserParameters"), &Z_Registration_Info_UScriptStruct_CacheRecorderUserParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCacheRecorderUserParameters), 275954580U) },
		{ FCacheRecorderProjectParameters::StaticStruct, Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics::NewStructOps, TEXT("CacheRecorderProjectParameters"), &Z_Registration_Info_UScriptStruct_CacheRecorderProjectParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCacheRecorderProjectParameters), 1464624935U) },
		{ FCacheRecorderParameters::StaticStruct, Z_Construct_UScriptStruct_FCacheRecorderParameters_Statics::NewStructOps, TEXT("CacheRecorderParameters"), &Z_Registration_Info_UScriptStruct_CacheRecorderParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCacheRecorderParameters), 2793267922U) },
		{ FCachedTrackSource::StaticStruct, Z_Construct_UScriptStruct_FCachedTrackSource_Statics::NewStructOps, TEXT("CachedTrackSource"), &Z_Registration_Info_UScriptStruct_CachedTrackSource, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCachedTrackSource), 2654211557U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCacheTrackRecorder, UCacheTrackRecorder::StaticClass, TEXT("UCacheTrackRecorder"), &Z_Registration_Info_UClass_UCacheTrackRecorder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCacheTrackRecorder), 1544107356U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_3858851901(TEXT("/Script/CacheTrackRecorder"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
