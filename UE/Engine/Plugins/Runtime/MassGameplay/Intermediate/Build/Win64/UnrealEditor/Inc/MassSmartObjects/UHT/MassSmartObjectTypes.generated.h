// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassSmartObjectTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MASSSMARTOBJECTS_MassSmartObjectTypes_generated_h
#error "MassSmartObjectTypes.generated.h already included, missing '#pragma once' in MassSmartObjectTypes.h"
#endif
#define MASSSMARTOBJECTS_MassSmartObjectTypes_generated_h

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectTypes_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSmartObjectMassEntityUserData_Statics; \
	MASSSMARTOBJECTS_API static class UScriptStruct* StaticStruct();


template<> MASSSMARTOBJECTS_API UScriptStruct* StaticStruct<struct FSmartObjectMassEntityUserData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectTypes_h


#define FOREACH_ENUM_EMASSSMARTOBJECTINTERACTIONSTATUS(op) \
	op(EMassSmartObjectInteractionStatus::Unset) \
	op(EMassSmartObjectInteractionStatus::InProgress) \
	op(EMassSmartObjectInteractionStatus::BehaviorCompleted) \
	op(EMassSmartObjectInteractionStatus::TaskCompleted) \
	op(EMassSmartObjectInteractionStatus::Aborted) 

enum class EMassSmartObjectInteractionStatus : uint8;
template<> struct TIsUEnumClass<EMassSmartObjectInteractionStatus> { enum { Value = true }; };
template<> MASSSMARTOBJECTS_API UEnum* StaticEnum<EMassSmartObjectInteractionStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
