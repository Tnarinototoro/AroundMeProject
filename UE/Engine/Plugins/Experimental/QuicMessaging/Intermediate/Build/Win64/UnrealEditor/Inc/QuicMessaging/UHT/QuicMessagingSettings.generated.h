// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Shared/QuicMessagingSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUICMESSAGING_QuicMessagingSettings_generated_h
#error "QuicMessagingSettings.generated.h already included, missing '#pragma once' in QuicMessagingSettings.h"
#endif
#define QUICMESSAGING_QuicMessagingSettings_generated_h

#define FID_Engine_Plugins_Experimental_QuicMessaging_Source_QuicMessaging_Public_Shared_QuicMessagingSettings_h_43_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_QuicMessaging_Source_QuicMessaging_Public_Shared_QuicMessagingSettings_h_43_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_QuicMessaging_Source_QuicMessaging_Public_Shared_QuicMessagingSettings_h_43_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_QuicMessaging_Source_QuicMessaging_Public_Shared_QuicMessagingSettings_h_43_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_QuicMessaging_Source_QuicMessaging_Public_Shared_QuicMessagingSettings_h_43_ACCESSORS
#define FID_Engine_Plugins_Experimental_QuicMessaging_Source_QuicMessaging_Public_Shared_QuicMessagingSettings_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUQuicMessagingSettings(); \
	friend struct Z_Construct_UClass_UQuicMessagingSettings_Statics; \
public: \
	DECLARE_CLASS(UQuicMessagingSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuicMessaging"), NO_API) \
	DECLARE_SERIALIZER(UQuicMessagingSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Experimental_QuicMessaging_Source_QuicMessaging_Public_Shared_QuicMessagingSettings_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuicMessagingSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuicMessagingSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuicMessagingSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuicMessagingSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuicMessagingSettings(UQuicMessagingSettings&&); \
	NO_API UQuicMessagingSettings(const UQuicMessagingSettings&); \
public: \
	NO_API virtual ~UQuicMessagingSettings();


#define FID_Engine_Plugins_Experimental_QuicMessaging_Source_QuicMessaging_Public_Shared_QuicMessagingSettings_h_39_PROLOG
#define FID_Engine_Plugins_Experimental_QuicMessaging_Source_QuicMessaging_Public_Shared_QuicMessagingSettings_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_QuicMessaging_Source_QuicMessaging_Public_Shared_QuicMessagingSettings_h_43_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_QuicMessaging_Source_QuicMessaging_Public_Shared_QuicMessagingSettings_h_43_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_QuicMessaging_Source_QuicMessaging_Public_Shared_QuicMessagingSettings_h_43_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_QuicMessaging_Source_QuicMessaging_Public_Shared_QuicMessagingSettings_h_43_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_QuicMessaging_Source_QuicMessaging_Public_Shared_QuicMessagingSettings_h_43_ACCESSORS \
	FID_Engine_Plugins_Experimental_QuicMessaging_Source_QuicMessaging_Public_Shared_QuicMessagingSettings_h_43_INCLASS \
	FID_Engine_Plugins_Experimental_QuicMessaging_Source_QuicMessaging_Public_Shared_QuicMessagingSettings_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUICMESSAGING_API UClass* StaticClass<class UQuicMessagingSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_QuicMessaging_Source_QuicMessaging_Public_Shared_QuicMessagingSettings_h


#define FOREACH_ENUM_EQUICMESSAGEFORMAT(op) \
	op(EQuicMessageFormat::None) \
	op(EQuicMessageFormat::Json) \
	op(EQuicMessageFormat::TaggedProperty) \
	op(EQuicMessageFormat::CborPlatformEndianness) \
	op(EQuicMessageFormat::CborStandardEndianness) 

enum class EQuicMessageFormat : uint8;
template<> struct TIsUEnumClass<EQuicMessageFormat> { enum { Value = true }; };
template<> QUICMESSAGING_API UEnum* StaticEnum<EQuicMessageFormat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
