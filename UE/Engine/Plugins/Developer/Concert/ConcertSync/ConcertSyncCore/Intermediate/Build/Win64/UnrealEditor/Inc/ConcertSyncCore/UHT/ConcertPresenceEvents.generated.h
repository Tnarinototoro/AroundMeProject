// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConcertPresenceEvents.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONCERTSYNCCORE_ConcertPresenceEvents_generated_h
#error "ConcertPresenceEvents.generated.h already included, missing '#pragma once' in ConcertPresenceEvents.h"
#endif
#define CONCERTSYNCCORE_ConcertPresenceEvents_generated_h

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertPresenceEvents_h_10_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertClientPresenceEventBase_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertClientPresenceEventBase>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertPresenceEvents_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertClientPresenceVisibilityUpdateEvent_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertClientPresenceVisibilityUpdateEvent>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertPresenceEvents_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertClientPresenceInVREvent_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertClientPresenceInVREvent>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertPresenceEvents_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertClientPresenceDataUpdateEvent_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FConcertClientPresenceEventBase Super;


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertClientPresenceDataUpdateEvent>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertPresenceEvents_h_75_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertClientDesktopPresenceUpdateEvent_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FConcertClientPresenceEventBase Super;


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertClientDesktopPresenceUpdateEvent>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertPresenceEvents_h_97_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertLaserData_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertLaserData>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertPresenceEvents_h_124_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FConcertClientPresenceEventBase Super;


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertClientVRPresenceUpdateEvent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertPresenceEvents_h


#define FOREACH_ENUM_EPRESENCEMODETYPE(op) \
	op(EPresenceModeType::Desktop) \
	op(EPresenceModeType::VRMode) 

enum class EPresenceModeType;
template<> struct TIsUEnumClass<EPresenceModeType> { enum { Value = true }; };
template<> CONCERTSYNCCORE_API UEnum* StaticEnum<EPresenceModeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
