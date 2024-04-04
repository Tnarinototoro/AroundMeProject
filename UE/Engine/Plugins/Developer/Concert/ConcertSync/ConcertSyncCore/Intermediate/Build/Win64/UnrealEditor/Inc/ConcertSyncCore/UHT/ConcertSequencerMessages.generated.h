// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConcertSequencerMessages.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONCERTSYNCCORE_ConcertSequencerMessages_generated_h
#error "ConcertSequencerMessages.generated.h already included, missing '#pragma once' in ConcertSequencerMessages.h"
#endif
#define CONCERTSYNCCORE_ConcertSequencerMessages_generated_h

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSequencerMessages_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertSequencerState_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertSequencerState>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSequencerMessages_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertSequencerOpenEvent_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertSequencerOpenEvent>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSequencerMessages_h_95_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertSequencerCloseEvent>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSequencerMessages_h_114_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertSequencerStateEvent_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertSequencerStateEvent>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSequencerMessages_h_127_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertSequencerStateSyncEvent>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSequencerMessages_h_140_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertSequencerTimeAdjustmentEvent>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSequencerMessages_h_162_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertSequencerPreloadRequest_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertSequencerPreloadRequest>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSequencerMessages_h_188_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertSequencerPreloadAssetStatusMap_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertSequencerPreloadAssetStatusMap>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSequencerMessages_h_200_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertSequencerPreloadClientStatusMap_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertSequencerPreloadClientStatusMap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSequencerMessages_h


#define FOREACH_ENUM_ECONCERTMOVIESCENEPLAYERSTATUS(op) \
	op(EConcertMovieScenePlayerStatus::Stopped) \
	op(EConcertMovieScenePlayerStatus::Playing) \
	op(EConcertMovieScenePlayerStatus::Scrubbing) \
	op(EConcertMovieScenePlayerStatus::Jumping) \
	op(EConcertMovieScenePlayerStatus::Stepping) \
	op(EConcertMovieScenePlayerStatus::Paused) 

enum class EConcertMovieScenePlayerStatus : uint8;
template<> struct TIsUEnumClass<EConcertMovieScenePlayerStatus> { enum { Value = true }; };
template<> CONCERTSYNCCORE_API UEnum* StaticEnum<EConcertMovieScenePlayerStatus>();

#define FOREACH_ENUM_ECONCERTSEQUENCERPRELOADSTATUS(op) \
	op(EConcertSequencerPreloadStatus::Pending) \
	op(EConcertSequencerPreloadStatus::Succeeded) \
	op(EConcertSequencerPreloadStatus::Failed) 

enum class EConcertSequencerPreloadStatus : uint8;
template<> struct TIsUEnumClass<EConcertSequencerPreloadStatus> { enum { Value = true }; };
template<> CONCERTSYNCCORE_API UEnum* StaticEnum<EConcertSequencerPreloadStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
