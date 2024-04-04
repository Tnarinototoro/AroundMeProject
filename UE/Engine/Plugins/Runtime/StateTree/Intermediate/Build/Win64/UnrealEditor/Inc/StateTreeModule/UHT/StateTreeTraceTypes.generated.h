// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Debugger/StateTreeTraceTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STATETREEMODULE_StateTreeTraceTypes_generated_h
#error "StateTreeTraceTypes.generated.h already included, missing '#pragma once' in StateTreeTraceTypes.h"
#endif
#define STATETREEMODULE_StateTreeTraceTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Debugger_StateTreeTraceTypes_h


#define FOREACH_ENUM_ESTATETREETRACEEVENTTYPE(op) \
	op(EStateTreeTraceEventType::Unset) \
	op(EStateTreeTraceEventType::OnEntering) \
	op(EStateTreeTraceEventType::OnEntered) \
	op(EStateTreeTraceEventType::OnExiting) \
	op(EStateTreeTraceEventType::OnExited) \
	op(EStateTreeTraceEventType::Push) \
	op(EStateTreeTraceEventType::Pop) \
	op(EStateTreeTraceEventType::OnStateSelected) \
	op(EStateTreeTraceEventType::OnStateCompleted) \
	op(EStateTreeTraceEventType::OnTicking) \
	op(EStateTreeTraceEventType::OnTaskCompleted) \
	op(EStateTreeTraceEventType::OnTicked) \
	op(EStateTreeTraceEventType::Passed) \
	op(EStateTreeTraceEventType::Failed) \
	op(EStateTreeTraceEventType::OnEvaluating) \
	op(EStateTreeTraceEventType::OnTransition) \
	op(EStateTreeTraceEventType::OnTreeStarted) \
	op(EStateTreeTraceEventType::OnTreeStopped) 

enum class EStateTreeTraceEventType : uint8;
template<> struct TIsUEnumClass<EStateTreeTraceEventType> { enum { Value = true }; };
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeTraceEventType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
