// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "QuicTransportMessages.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUICMESSAGING_QuicTransportMessages_generated_h
#error "QuicTransportMessages.generated.h already included, missing '#pragma once' in QuicTransportMessages.h"
#endif
#define QUICMESSAGING_QuicTransportMessages_generated_h

#define FID_Engine_Plugins_Experimental_QuicMessaging_Source_QuicMessaging_Public_QuicTransportMessages_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQuicMetaMessage_Statics; \
	QUICMESSAGING_API static class UScriptStruct* StaticStruct();


template<> QUICMESSAGING_API UScriptStruct* StaticStruct<struct FQuicMetaMessage>();

#define FID_Engine_Plugins_Experimental_QuicMessaging_Source_QuicMessaging_Public_QuicTransportMessages_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQuicAuthMessage_Statics; \
	QUICMESSAGING_API static class UScriptStruct* StaticStruct(); \
	typedef FQuicMetaMessage Super;


template<> QUICMESSAGING_API UScriptStruct* StaticStruct<struct FQuicAuthMessage>();

#define FID_Engine_Plugins_Experimental_QuicMessaging_Source_QuicMessaging_Public_QuicTransportMessages_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQuicAuthResponseMessage_Statics; \
	QUICMESSAGING_API static class UScriptStruct* StaticStruct(); \
	typedef FQuicMetaMessage Super;


template<> QUICMESSAGING_API UScriptStruct* StaticStruct<struct FQuicAuthResponseMessage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_QuicMessaging_Source_QuicMessaging_Public_QuicTransportMessages_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
