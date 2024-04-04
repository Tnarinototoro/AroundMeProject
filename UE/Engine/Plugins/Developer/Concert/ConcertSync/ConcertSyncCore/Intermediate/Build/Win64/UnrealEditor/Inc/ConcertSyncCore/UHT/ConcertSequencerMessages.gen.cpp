// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConcertSequencerMessages.h"
#include "ConcertMessageData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcertSequencerMessages() {}
// Cross Module References
	CONCERT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertByteArray();
	CONCERTSYNCCORE_API UEnum* Z_Construct_UEnum_ConcertSyncCore_EConcertMovieScenePlayerStatus();
	CONCERTSYNCCORE_API UEnum* Z_Construct_UEnum_ConcertSyncCore_EConcertSequencerPreloadStatus();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSequencerCloseEvent();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSequencerOpenEvent();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSequencerPreloadAssetStatusMap();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSequencerPreloadClientStatusMap();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSequencerPreloadRequest();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSequencerState();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSequencerStateEvent();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumberRange();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQualifiedFrameTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTopLevelAssetPath();
	UPackage* Z_Construct_UPackage__Script_ConcertSyncCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConcertMovieScenePlayerStatus;
	static UEnum* EConcertMovieScenePlayerStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConcertMovieScenePlayerStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConcertMovieScenePlayerStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ConcertSyncCore_EConcertMovieScenePlayerStatus, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("EConcertMovieScenePlayerStatus"));
		}
		return Z_Registration_Info_UEnum_EConcertMovieScenePlayerStatus.OuterSingleton;
	}
	template<> CONCERTSYNCCORE_API UEnum* StaticEnum<EConcertMovieScenePlayerStatus>()
	{
		return EConcertMovieScenePlayerStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_ConcertSyncCore_EConcertMovieScenePlayerStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ConcertSyncCore_EConcertMovieScenePlayerStatus_Statics::Enumerators[] = {
		{ "EConcertMovieScenePlayerStatus::Stopped", (int64)EConcertMovieScenePlayerStatus::Stopped },
		{ "EConcertMovieScenePlayerStatus::Playing", (int64)EConcertMovieScenePlayerStatus::Playing },
		{ "EConcertMovieScenePlayerStatus::Scrubbing", (int64)EConcertMovieScenePlayerStatus::Scrubbing },
		{ "EConcertMovieScenePlayerStatus::Jumping", (int64)EConcertMovieScenePlayerStatus::Jumping },
		{ "EConcertMovieScenePlayerStatus::Stepping", (int64)EConcertMovieScenePlayerStatus::Stepping },
		{ "EConcertMovieScenePlayerStatus::Paused", (int64)EConcertMovieScenePlayerStatus::Paused },
		{ "EConcertMovieScenePlayerStatus::MAX", (int64)EConcertMovieScenePlayerStatus::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ConcertSyncCore_EConcertMovieScenePlayerStatus_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Enum for the current Sequencer player status, should match EMovieScenePlayerStatus::Type\n * Defined here to not have a dependency on the MovieScene module.\n */" },
		{ "Jumping.Name", "EConcertMovieScenePlayerStatus::Jumping" },
		{ "MAX.Name", "EConcertMovieScenePlayerStatus::MAX" },
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
		{ "Paused.Name", "EConcertMovieScenePlayerStatus::Paused" },
		{ "Playing.Name", "EConcertMovieScenePlayerStatus::Playing" },
		{ "Scrubbing.Name", "EConcertMovieScenePlayerStatus::Scrubbing" },
		{ "Stepping.Name", "EConcertMovieScenePlayerStatus::Stepping" },
		{ "Stopped.Name", "EConcertMovieScenePlayerStatus::Stopped" },
		{ "ToolTip", "Enum for the current Sequencer player status, should match EMovieScenePlayerStatus::Type\nDefined here to not have a dependency on the MovieScene module." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ConcertSyncCore_EConcertMovieScenePlayerStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		"EConcertMovieScenePlayerStatus",
		"EConcertMovieScenePlayerStatus",
		Z_Construct_UEnum_ConcertSyncCore_EConcertMovieScenePlayerStatus_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ConcertSyncCore_EConcertMovieScenePlayerStatus_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ConcertSyncCore_EConcertMovieScenePlayerStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ConcertSyncCore_EConcertMovieScenePlayerStatus_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ConcertSyncCore_EConcertMovieScenePlayerStatus()
	{
		if (!Z_Registration_Info_UEnum_EConcertMovieScenePlayerStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConcertMovieScenePlayerStatus.InnerSingleton, Z_Construct_UEnum_ConcertSyncCore_EConcertMovieScenePlayerStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConcertMovieScenePlayerStatus.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSequencerState;
class UScriptStruct* FConcertSequencerState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSequencerState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSequencerState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSequencerState, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertSequencerState"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSequencerState.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertSequencerState>()
{
	return FConcertSequencerState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSequencerState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceObjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SequenceObjectPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Time;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlayerStatus_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerStatus_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlayerStatus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlaybackRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaybackSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoopMode_MetaData[];
#endif
		static void NewProp_bLoopMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoopMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TakeData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TakeData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerState_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSequencerState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_SequenceObjectPath_MetaData[] = {
		{ "Comment", "/** The full path name to the root sequence that is open on the sequencer */" },
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
		{ "ToolTip", "The full path name to the root sequence that is open on the sequencer" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_SequenceObjectPath = { "SequenceObjectPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertSequencerState, SequenceObjectPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_SequenceObjectPath_MetaData), Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_SequenceObjectPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_Time_MetaData[] = {
		{ "Comment", "/** The time that the sequence is at */" },
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
		{ "ToolTip", "The time that the sequence is at" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertSequencerState, Time), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_Time_MetaData), Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_Time_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_PlayerStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_PlayerStatus_MetaData[] = {
		{ "Comment", "/** The current status of the sequencer player */" },
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
		{ "ToolTip", "The current status of the sequencer player" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_PlayerStatus = { "PlayerStatus", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertSequencerState, PlayerStatus), Z_Construct_UEnum_ConcertSyncCore_EConcertMovieScenePlayerStatus, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_PlayerStatus_MetaData), Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_PlayerStatus_MetaData) }; // 3738607395
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_PlaybackRange_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_PlaybackRange = { "PlaybackRange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertSequencerState, PlaybackRange), Z_Construct_UScriptStruct_FFrameNumberRange, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_PlaybackRange_MetaData), Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_PlaybackRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_PlaybackSpeed_MetaData[] = {
		{ "Comment", "/** The current playback speed */" },
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
		{ "ToolTip", "The current playback speed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_PlaybackSpeed = { "PlaybackSpeed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertSequencerState, PlaybackSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_PlaybackSpeed_MetaData), Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_PlaybackSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_bLoopMode_MetaData[] = {
		{ "Comment", "/** Indicate if we are currently looping */" },
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
		{ "ToolTip", "Indicate if we are currently looping" },
	};
#endif
	void Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_bLoopMode_SetBit(void* Obj)
	{
		((FConcertSequencerState*)Obj)->bLoopMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_bLoopMode = { "bLoopMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FConcertSequencerState), &Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_bLoopMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_bLoopMode_MetaData), Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_bLoopMode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_TakeData_MetaData[] = {
		{ "Comment", "/**\n\x09 * In the case that the SequenceObjectPath points to a take preset, we capture the preset data\n\x09 * into a payload that can be applied to take that we are going to open. We store it in the state\n\x09 * so that we can play it back when new users join.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
		{ "ToolTip", "In the case that the SequenceObjectPath points to a take preset, we capture the preset data\ninto a payload that can be applied to take that we are going to open. We store it in the state\nso that we can play it back when new users join." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_TakeData = { "TakeData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertSequencerState, TakeData), Z_Construct_UScriptStruct_FConcertByteArray, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_TakeData_MetaData), Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_TakeData_MetaData) }; // 2678288780
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSequencerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_SequenceObjectPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_PlayerStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_PlayerStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_PlaybackRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_PlaybackSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_bLoopMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_TakeData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSequencerState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertSequencerState",
		Z_Construct_UScriptStruct_FConcertSequencerState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerState_Statics::PropPointers),
		sizeof(FConcertSequencerState),
		alignof(FConcertSequencerState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConcertSequencerState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSequencerState()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSequencerState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSequencerState.InnerSingleton, Z_Construct_UScriptStruct_FConcertSequencerState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSequencerState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSequencerOpenEvent;
class UScriptStruct* FConcertSequencerOpenEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSequencerOpenEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSequencerOpenEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSequencerOpenEvent, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertSequencerOpenEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSequencerOpenEvent.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertSequencerOpenEvent>()
{
	return FConcertSequencerOpenEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSequencerOpenEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceObjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SequenceObjectPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TakeData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TakeData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerOpenEvent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Event that signals a Sequencer just been opened.\n */" },
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
		{ "ToolTip", "Event that signals a Sequencer just been opened." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSequencerOpenEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSequencerOpenEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerOpenEvent_Statics::NewProp_SequenceObjectPath_MetaData[] = {
		{ "Comment", "/** The full path name to the root sequence of the sequencer that just opened. */" },
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
		{ "ToolTip", "The full path name to the root sequence of the sequencer that just opened." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertSequencerOpenEvent_Statics::NewProp_SequenceObjectPath = { "SequenceObjectPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertSequencerOpenEvent, SequenceObjectPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerOpenEvent_Statics::NewProp_SequenceObjectPath_MetaData), Z_Construct_UScriptStruct_FConcertSequencerOpenEvent_Statics::NewProp_SequenceObjectPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerOpenEvent_Statics::NewProp_TakeData_MetaData[] = {
		{ "Comment", "/**\n\x09 * In the case that the SequenceObjectPath points to a take preset, we capture the preset data\n\x09 * into a payload that can be applied to take that we are going to open. We store it in the state\n\x09 * so that we can play it back when new users join.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
		{ "ToolTip", "In the case that the SequenceObjectPath points to a take preset, we capture the preset data\ninto a payload that can be applied to take that we are going to open. We store it in the state\nso that we can play it back when new users join." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertSequencerOpenEvent_Statics::NewProp_TakeData = { "TakeData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertSequencerOpenEvent, TakeData), Z_Construct_UScriptStruct_FConcertByteArray, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerOpenEvent_Statics::NewProp_TakeData_MetaData), Z_Construct_UScriptStruct_FConcertSequencerOpenEvent_Statics::NewProp_TakeData_MetaData) }; // 2678288780
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSequencerOpenEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerOpenEvent_Statics::NewProp_SequenceObjectPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerOpenEvent_Statics::NewProp_TakeData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSequencerOpenEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertSequencerOpenEvent",
		Z_Construct_UScriptStruct_FConcertSequencerOpenEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerOpenEvent_Statics::PropPointers),
		sizeof(FConcertSequencerOpenEvent),
		alignof(FConcertSequencerOpenEvent),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerOpenEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConcertSequencerOpenEvent_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerOpenEvent_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSequencerOpenEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSequencerOpenEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSequencerOpenEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertSequencerOpenEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSequencerOpenEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSequencerCloseEvent;
class UScriptStruct* FConcertSequencerCloseEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSequencerCloseEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSequencerCloseEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSequencerCloseEvent, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertSequencerCloseEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSequencerCloseEvent.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertSequencerCloseEvent>()
{
	return FConcertSequencerCloseEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceObjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SequenceObjectPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bControllerClose_MetaData[];
#endif
		static void NewProp_bControllerClose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bControllerClose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorsWithSequencerOpened_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EditorsWithSequencerOpened;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Event that signals a Sequencer just been closed.\n */" },
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
		{ "ToolTip", "Event that signals a Sequencer just been closed." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSequencerCloseEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::NewProp_SequenceObjectPath_MetaData[] = {
		{ "Comment", "/** The full path name to the root sequence of the sequencer that just closed. */" },
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
		{ "ToolTip", "The full path name to the root sequence of the sequencer that just closed." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::NewProp_SequenceObjectPath = { "SequenceObjectPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertSequencerCloseEvent, SequenceObjectPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::NewProp_SequenceObjectPath_MetaData), Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::NewProp_SequenceObjectPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::NewProp_bControllerClose_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::NewProp_bControllerClose_SetBit(void* Obj)
	{
		((FConcertSequencerCloseEvent*)Obj)->bControllerClose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::NewProp_bControllerClose = { "bControllerClose", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FConcertSequencerCloseEvent), &Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::NewProp_bControllerClose_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::NewProp_bControllerClose_MetaData), Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::NewProp_bControllerClose_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::NewProp_EditorsWithSequencerOpened_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::NewProp_EditorsWithSequencerOpened = { "EditorsWithSequencerOpened", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertSequencerCloseEvent, EditorsWithSequencerOpened), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::NewProp_EditorsWithSequencerOpened_MetaData), Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::NewProp_EditorsWithSequencerOpened_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::NewProp_SequenceObjectPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::NewProp_bControllerClose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::NewProp_EditorsWithSequencerOpened,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertSequencerCloseEvent",
		Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::PropPointers),
		sizeof(FConcertSequencerCloseEvent),
		alignof(FConcertSequencerCloseEvent),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSequencerCloseEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSequencerCloseEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSequencerCloseEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSequencerCloseEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSequencerStateEvent;
class UScriptStruct* FConcertSequencerStateEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSequencerStateEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSequencerStateEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSequencerStateEvent, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertSequencerStateEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSequencerStateEvent.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertSequencerStateEvent>()
{
	return FConcertSequencerStateEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSequencerStateEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_State;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerStateEvent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Event that signals a sequencer UI has changed the current state\n */" },
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
		{ "ToolTip", "Event that signals a sequencer UI has changed the current state" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSequencerStateEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSequencerStateEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerStateEvent_Statics::NewProp_State_MetaData[] = {
		{ "Comment", "/** The new state that the sequence is at */" },
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
		{ "ToolTip", "The new state that the sequence is at" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertSequencerStateEvent_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertSequencerStateEvent, State), Z_Construct_UScriptStruct_FConcertSequencerState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerStateEvent_Statics::NewProp_State_MetaData), Z_Construct_UScriptStruct_FConcertSequencerStateEvent_Statics::NewProp_State_MetaData) }; // 1112702927
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSequencerStateEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerStateEvent_Statics::NewProp_State,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSequencerStateEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertSequencerStateEvent",
		Z_Construct_UScriptStruct_FConcertSequencerStateEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerStateEvent_Statics::PropPointers),
		sizeof(FConcertSequencerStateEvent),
		alignof(FConcertSequencerStateEvent),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerStateEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConcertSequencerStateEvent_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerStateEvent_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSequencerStateEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSequencerStateEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSequencerStateEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertSequencerStateEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSequencerStateEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSequencerStateSyncEvent;
class UScriptStruct* FConcertSequencerStateSyncEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSequencerStateSyncEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSequencerStateSyncEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertSequencerStateSyncEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSequencerStateSyncEvent.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertSequencerStateSyncEvent>()
{
	return FConcertSequencerStateSyncEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequencerStates_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequencerStates_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SequencerStates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Event that represent the current open sequencer states to a newly connected client\n */" },
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
		{ "ToolTip", "Event that represent the current open sequencer states to a newly connected client" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSequencerStateSyncEvent>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent_Statics::NewProp_SequencerStates_Inner = { "SequencerStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConcertSequencerState, METADATA_PARAMS(0, nullptr) }; // 1112702927
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent_Statics::NewProp_SequencerStates_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent_Statics::NewProp_SequencerStates = { "SequencerStates", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertSequencerStateSyncEvent, SequencerStates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent_Statics::NewProp_SequencerStates_MetaData), Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent_Statics::NewProp_SequencerStates_MetaData) }; // 1112702927
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent_Statics::NewProp_SequencerStates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent_Statics::NewProp_SequencerStates,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertSequencerStateSyncEvent",
		Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent_Statics::PropPointers),
		sizeof(FConcertSequencerStateSyncEvent),
		alignof(FConcertSequencerStateSyncEvent),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSequencerStateSyncEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSequencerStateSyncEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSequencerStateSyncEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSequencerTimeAdjustmentEvent;
class UScriptStruct* FConcertSequencerTimeAdjustmentEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSequencerTimeAdjustmentEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSequencerTimeAdjustmentEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertSequencerTimeAdjustmentEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSequencerTimeAdjustmentEvent.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertSequencerTimeAdjustmentEvent>()
{
	return FConcertSequencerTimeAdjustmentEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackStartFrame_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlaybackStartFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceObjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SequenceObjectPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * An event that represents a time changes on the sequencer. This can happen via take recorder\n * which will shift the active take _if_ Start At Timecode is enabled.\n */" },
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
		{ "ToolTip", "An event that represents a time changes on the sequencer. This can happen via take recorder\nwhich will shift the active take _if_ Start At Timecode is enabled." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSequencerTimeAdjustmentEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics::NewProp_PlaybackStartFrame_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics::NewProp_PlaybackStartFrame = { "PlaybackStartFrame", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertSequencerTimeAdjustmentEvent, PlaybackStartFrame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics::NewProp_PlaybackStartFrame_MetaData), Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics::NewProp_PlaybackStartFrame_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics::NewProp_SequenceObjectPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics::NewProp_SequenceObjectPath = { "SequenceObjectPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertSequencerTimeAdjustmentEvent, SequenceObjectPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics::NewProp_SequenceObjectPath_MetaData), Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics::NewProp_SequenceObjectPath_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics::NewProp_PlaybackStartFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics::NewProp_SequenceObjectPath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertSequencerTimeAdjustmentEvent",
		Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics::PropPointers),
		sizeof(FConcertSequencerTimeAdjustmentEvent),
		alignof(FConcertSequencerTimeAdjustmentEvent),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSequencerTimeAdjustmentEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSequencerTimeAdjustmentEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSequencerTimeAdjustmentEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSequencerPreloadRequest;
class UScriptStruct* FConcertSequencerPreloadRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSequencerPreloadRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSequencerPreloadRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSequencerPreloadRequest, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertSequencerPreloadRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSequencerPreloadRequest.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertSequencerPreloadRequest>()
{
	return FConcertSequencerPreloadRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSequencerPreloadRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceObjectPaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceObjectPaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SequenceObjectPaths;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldBePreloaded_MetaData[];
#endif
		static void NewProp_bShouldBePreloaded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBePreloaded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerPreloadRequest_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Event indicating one or more sequences have been added or removed from the\n * set of sequences to keep preloaded for quick dynamic instantiation.\n *\n * Can be sent by clients as a request to add or remove their references.\n *\n * Can also be received from the server in response to changes to the active set,\n * or as an initial snapshot of the complete set when joining a session.\n */" },
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
		{ "ToolTip", "Event indicating one or more sequences have been added or removed from the\nset of sequences to keep preloaded for quick dynamic instantiation.\n\nCan be sent by clients as a request to add or remove their references.\n\nCan also be received from the server in response to changes to the active set,\nor as an initial snapshot of the complete set when joining a session." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSequencerPreloadRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSequencerPreloadRequest>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertSequencerPreloadRequest_Statics::NewProp_SequenceObjectPaths_Inner = { "SequenceObjectPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTopLevelAssetPath, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerPreloadRequest_Statics::NewProp_SequenceObjectPaths_MetaData[] = {
		{ "Comment", "/** The list of full paths to affected sequences. */" },
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
		{ "ToolTip", "The list of full paths to affected sequences." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConcertSequencerPreloadRequest_Statics::NewProp_SequenceObjectPaths = { "SequenceObjectPaths", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertSequencerPreloadRequest, SequenceObjectPaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerPreloadRequest_Statics::NewProp_SequenceObjectPaths_MetaData), Z_Construct_UScriptStruct_FConcertSequencerPreloadRequest_Statics::NewProp_SequenceObjectPaths_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerPreloadRequest_Statics::NewProp_bShouldBePreloaded_MetaData[] = {
		{ "Comment", "/** True if being added to the preload set, false if being removed. */" },
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
		{ "ToolTip", "True if being added to the preload set, false if being removed." },
	};
#endif
	void Z_Construct_UScriptStruct_FConcertSequencerPreloadRequest_Statics::NewProp_bShouldBePreloaded_SetBit(void* Obj)
	{
		((FConcertSequencerPreloadRequest*)Obj)->bShouldBePreloaded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConcertSequencerPreloadRequest_Statics::NewProp_bShouldBePreloaded = { "bShouldBePreloaded", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FConcertSequencerPreloadRequest), &Z_Construct_UScriptStruct_FConcertSequencerPreloadRequest_Statics::NewProp_bShouldBePreloaded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerPreloadRequest_Statics::NewProp_bShouldBePreloaded_MetaData), Z_Construct_UScriptStruct_FConcertSequencerPreloadRequest_Statics::NewProp_bShouldBePreloaded_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSequencerPreloadRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerPreloadRequest_Statics::NewProp_SequenceObjectPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerPreloadRequest_Statics::NewProp_SequenceObjectPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerPreloadRequest_Statics::NewProp_bShouldBePreloaded,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSequencerPreloadRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertSequencerPreloadRequest",
		Z_Construct_UScriptStruct_FConcertSequencerPreloadRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerPreloadRequest_Statics::PropPointers),
		sizeof(FConcertSequencerPreloadRequest),
		alignof(FConcertSequencerPreloadRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerPreloadRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConcertSequencerPreloadRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerPreloadRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSequencerPreloadRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSequencerPreloadRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSequencerPreloadRequest.InnerSingleton, Z_Construct_UScriptStruct_FConcertSequencerPreloadRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSequencerPreloadRequest.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConcertSequencerPreloadStatus;
	static UEnum* EConcertSequencerPreloadStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConcertSequencerPreloadStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConcertSequencerPreloadStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ConcertSyncCore_EConcertSequencerPreloadStatus, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("EConcertSequencerPreloadStatus"));
		}
		return Z_Registration_Info_UEnum_EConcertSequencerPreloadStatus.OuterSingleton;
	}
	template<> CONCERTSYNCCORE_API UEnum* StaticEnum<EConcertSequencerPreloadStatus>()
	{
		return EConcertSequencerPreloadStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_ConcertSyncCore_EConcertSequencerPreloadStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ConcertSyncCore_EConcertSequencerPreloadStatus_Statics::Enumerators[] = {
		{ "EConcertSequencerPreloadStatus::Pending", (int64)EConcertSequencerPreloadStatus::Pending },
		{ "EConcertSequencerPreloadStatus::Succeeded", (int64)EConcertSequencerPreloadStatus::Succeeded },
		{ "EConcertSequencerPreloadStatus::Failed", (int64)EConcertSequencerPreloadStatus::Failed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ConcertSyncCore_EConcertSequencerPreloadStatus_Statics::Enum_MetaDataParams[] = {
		{ "Failed.Name", "EConcertSequencerPreloadStatus::Failed" },
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
		{ "Pending.Name", "EConcertSequencerPreloadStatus::Pending" },
		{ "Succeeded.Name", "EConcertSequencerPreloadStatus::Succeeded" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ConcertSyncCore_EConcertSequencerPreloadStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		"EConcertSequencerPreloadStatus",
		"EConcertSequencerPreloadStatus",
		Z_Construct_UEnum_ConcertSyncCore_EConcertSequencerPreloadStatus_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ConcertSyncCore_EConcertSequencerPreloadStatus_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ConcertSyncCore_EConcertSequencerPreloadStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ConcertSyncCore_EConcertSequencerPreloadStatus_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ConcertSyncCore_EConcertSequencerPreloadStatus()
	{
		if (!Z_Registration_Info_UEnum_EConcertSequencerPreloadStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConcertSequencerPreloadStatus.InnerSingleton, Z_Construct_UEnum_ConcertSyncCore_EConcertSequencerPreloadStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConcertSequencerPreloadStatus.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSequencerPreloadAssetStatusMap;
class UScriptStruct* FConcertSequencerPreloadAssetStatusMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSequencerPreloadAssetStatusMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSequencerPreloadAssetStatusMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSequencerPreloadAssetStatusMap, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertSequencerPreloadAssetStatusMap"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSequencerPreloadAssetStatusMap.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertSequencerPreloadAssetStatusMap>()
{
	return FConcertSequencerPreloadAssetStatusMap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSequencerPreloadAssetStatusMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Sequences_ValueProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Sequences_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sequences_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sequences_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Sequences;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerPreloadAssetStatusMap_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Can be sent as an event by clients to indicate loading success/failure\n * result of attempting to preload one or more sequence assets.\n */" },
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
		{ "ToolTip", "Can be sent as an event by clients to indicate loading success/failure\nresult of attempting to preload one or more sequence assets." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSequencerPreloadAssetStatusMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSequencerPreloadAssetStatusMap>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConcertSequencerPreloadAssetStatusMap_Statics::NewProp_Sequences_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConcertSequencerPreloadAssetStatusMap_Statics::NewProp_Sequences_ValueProp = { "Sequences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UEnum_ConcertSyncCore_EConcertSequencerPreloadStatus, METADATA_PARAMS(0, nullptr) }; // 4222796647
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertSequencerPreloadAssetStatusMap_Statics::NewProp_Sequences_Key_KeyProp = { "Sequences_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTopLevelAssetPath, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerPreloadAssetStatusMap_Statics::NewProp_Sequences_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FConcertSequencerPreloadAssetStatusMap_Statics::NewProp_Sequences = { "Sequences", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertSequencerPreloadAssetStatusMap, Sequences), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerPreloadAssetStatusMap_Statics::NewProp_Sequences_MetaData), Z_Construct_UScriptStruct_FConcertSequencerPreloadAssetStatusMap_Statics::NewProp_Sequences_MetaData) }; // 4222796647
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSequencerPreloadAssetStatusMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerPreloadAssetStatusMap_Statics::NewProp_Sequences_ValueProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerPreloadAssetStatusMap_Statics::NewProp_Sequences_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerPreloadAssetStatusMap_Statics::NewProp_Sequences_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerPreloadAssetStatusMap_Statics::NewProp_Sequences,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSequencerPreloadAssetStatusMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertSequencerPreloadAssetStatusMap",
		Z_Construct_UScriptStruct_FConcertSequencerPreloadAssetStatusMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerPreloadAssetStatusMap_Statics::PropPointers),
		sizeof(FConcertSequencerPreloadAssetStatusMap),
		alignof(FConcertSequencerPreloadAssetStatusMap),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerPreloadAssetStatusMap_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConcertSequencerPreloadAssetStatusMap_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerPreloadAssetStatusMap_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSequencerPreloadAssetStatusMap()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSequencerPreloadAssetStatusMap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSequencerPreloadAssetStatusMap.InnerSingleton, Z_Construct_UScriptStruct_FConcertSequencerPreloadAssetStatusMap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSequencerPreloadAssetStatusMap.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSequencerPreloadClientStatusMap;
class UScriptStruct* FConcertSequencerPreloadClientStatusMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSequencerPreloadClientStatusMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSequencerPreloadClientStatusMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSequencerPreloadClientStatusMap, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertSequencerPreloadClientStatusMap"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSequencerPreloadClientStatusMap.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertSequencerPreloadClientStatusMap>()
{
	return FConcertSequencerPreloadClientStatusMap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSequencerPreloadClientStatusMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClientEndpoints_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClientEndpoints_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientEndpoints_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ClientEndpoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerPreloadClientStatusMap_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Sent as an event by server with preload status of one or more clients.\n */" },
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
		{ "ToolTip", "Sent as an event by server with preload status of one or more clients." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSequencerPreloadClientStatusMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSequencerPreloadClientStatusMap>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertSequencerPreloadClientStatusMap_Statics::NewProp_ClientEndpoints_ValueProp = { "ClientEndpoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FConcertSequencerPreloadAssetStatusMap, METADATA_PARAMS(0, nullptr) }; // 347762847
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertSequencerPreloadClientStatusMap_Statics::NewProp_ClientEndpoints_Key_KeyProp = { "ClientEndpoints_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerPreloadClientStatusMap_Statics::NewProp_ClientEndpoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FConcertSequencerPreloadClientStatusMap_Statics::NewProp_ClientEndpoints = { "ClientEndpoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertSequencerPreloadClientStatusMap, ClientEndpoints), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerPreloadClientStatusMap_Statics::NewProp_ClientEndpoints_MetaData), Z_Construct_UScriptStruct_FConcertSequencerPreloadClientStatusMap_Statics::NewProp_ClientEndpoints_MetaData) }; // 347762847
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSequencerPreloadClientStatusMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerPreloadClientStatusMap_Statics::NewProp_ClientEndpoints_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerPreloadClientStatusMap_Statics::NewProp_ClientEndpoints_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerPreloadClientStatusMap_Statics::NewProp_ClientEndpoints,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSequencerPreloadClientStatusMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertSequencerPreloadClientStatusMap",
		Z_Construct_UScriptStruct_FConcertSequencerPreloadClientStatusMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerPreloadClientStatusMap_Statics::PropPointers),
		sizeof(FConcertSequencerPreloadClientStatusMap),
		alignof(FConcertSequencerPreloadClientStatusMap),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerPreloadClientStatusMap_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConcertSequencerPreloadClientStatusMap_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerPreloadClientStatusMap_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSequencerPreloadClientStatusMap()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSequencerPreloadClientStatusMap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSequencerPreloadClientStatusMap.InnerSingleton, Z_Construct_UScriptStruct_FConcertSequencerPreloadClientStatusMap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSequencerPreloadClientStatusMap.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSequencerMessages_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSequencerMessages_h_Statics::EnumInfo[] = {
		{ EConcertMovieScenePlayerStatus_StaticEnum, TEXT("EConcertMovieScenePlayerStatus"), &Z_Registration_Info_UEnum_EConcertMovieScenePlayerStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3738607395U) },
		{ EConcertSequencerPreloadStatus_StaticEnum, TEXT("EConcertSequencerPreloadStatus"), &Z_Registration_Info_UEnum_EConcertSequencerPreloadStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4222796647U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSequencerMessages_h_Statics::ScriptStructInfo[] = {
		{ FConcertSequencerState::StaticStruct, Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewStructOps, TEXT("ConcertSequencerState"), &Z_Registration_Info_UScriptStruct_ConcertSequencerState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSequencerState), 1112702927U) },
		{ FConcertSequencerOpenEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertSequencerOpenEvent_Statics::NewStructOps, TEXT("ConcertSequencerOpenEvent"), &Z_Registration_Info_UScriptStruct_ConcertSequencerOpenEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSequencerOpenEvent), 3731908457U) },
		{ FConcertSequencerCloseEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::NewStructOps, TEXT("ConcertSequencerCloseEvent"), &Z_Registration_Info_UScriptStruct_ConcertSequencerCloseEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSequencerCloseEvent), 432582404U) },
		{ FConcertSequencerStateEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertSequencerStateEvent_Statics::NewStructOps, TEXT("ConcertSequencerStateEvent"), &Z_Registration_Info_UScriptStruct_ConcertSequencerStateEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSequencerStateEvent), 2466669395U) },
		{ FConcertSequencerStateSyncEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent_Statics::NewStructOps, TEXT("ConcertSequencerStateSyncEvent"), &Z_Registration_Info_UScriptStruct_ConcertSequencerStateSyncEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSequencerStateSyncEvent), 2908127984U) },
		{ FConcertSequencerTimeAdjustmentEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics::NewStructOps, TEXT("ConcertSequencerTimeAdjustmentEvent"), &Z_Registration_Info_UScriptStruct_ConcertSequencerTimeAdjustmentEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSequencerTimeAdjustmentEvent), 1929671051U) },
		{ FConcertSequencerPreloadRequest::StaticStruct, Z_Construct_UScriptStruct_FConcertSequencerPreloadRequest_Statics::NewStructOps, TEXT("ConcertSequencerPreloadRequest"), &Z_Registration_Info_UScriptStruct_ConcertSequencerPreloadRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSequencerPreloadRequest), 4209920345U) },
		{ FConcertSequencerPreloadAssetStatusMap::StaticStruct, Z_Construct_UScriptStruct_FConcertSequencerPreloadAssetStatusMap_Statics::NewStructOps, TEXT("ConcertSequencerPreloadAssetStatusMap"), &Z_Registration_Info_UScriptStruct_ConcertSequencerPreloadAssetStatusMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSequencerPreloadAssetStatusMap), 347762847U) },
		{ FConcertSequencerPreloadClientStatusMap::StaticStruct, Z_Construct_UScriptStruct_FConcertSequencerPreloadClientStatusMap_Statics::NewStructOps, TEXT("ConcertSequencerPreloadClientStatusMap"), &Z_Registration_Info_UScriptStruct_ConcertSequencerPreloadClientStatusMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSequencerPreloadClientStatusMap), 404940973U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSequencerMessages_h_1005127372(TEXT("/Script/ConcertSyncCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSequencerMessages_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSequencerMessages_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSequencerMessages_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSequencerMessages_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
