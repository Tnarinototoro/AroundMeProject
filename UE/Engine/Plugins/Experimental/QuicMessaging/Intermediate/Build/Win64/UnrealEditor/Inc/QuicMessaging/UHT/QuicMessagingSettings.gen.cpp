// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shared/QuicMessagingSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuicMessagingSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	QUICMESSAGING_API UClass* Z_Construct_UClass_UQuicMessagingSettings();
	QUICMESSAGING_API UClass* Z_Construct_UClass_UQuicMessagingSettings_NoRegister();
	QUICMESSAGING_API UEnum* Z_Construct_UEnum_QuicMessaging_EQuicMessageFormat();
	UPackage* Z_Construct_UPackage__Script_QuicMessaging();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQuicMessageFormat;
	static UEnum* EQuicMessageFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EQuicMessageFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EQuicMessageFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_QuicMessaging_EQuicMessageFormat, (UObject*)Z_Construct_UPackage__Script_QuicMessaging(), TEXT("EQuicMessageFormat"));
		}
		return Z_Registration_Info_UEnum_EQuicMessageFormat.OuterSingleton;
	}
	template<> QUICMESSAGING_API UEnum* StaticEnum<EQuicMessageFormat>()
	{
		return EQuicMessageFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_QuicMessaging_EQuicMessageFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_QuicMessaging_EQuicMessageFormat_Statics::Enumerators[] = {
		{ "EQuicMessageFormat::None", (int64)EQuicMessageFormat::None },
		{ "EQuicMessageFormat::Json", (int64)EQuicMessageFormat::Json },
		{ "EQuicMessageFormat::TaggedProperty", (int64)EQuicMessageFormat::TaggedProperty },
		{ "EQuicMessageFormat::CborPlatformEndianness", (int64)EQuicMessageFormat::CborPlatformEndianness },
		{ "EQuicMessageFormat::CborStandardEndianness", (int64)EQuicMessageFormat::CborStandardEndianness },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_QuicMessaging_EQuicMessageFormat_Statics::Enum_MetaDataParams[] = {
		{ "CborPlatformEndianness.Comment", "/**\n\x09 * Quic messages are encoded in CBOR, using the platform endianness. This is the fastest and preferred option, but the CBOR data will not be readable by an external standard-compliant CBOR parser\n\x09 * if generated from a little endian platform. If the data needs to be consumed outside the Unreal Engine, consider using CborStandardEndianness format instead.\n\x09 */" },
		{ "CborPlatformEndianness.DisplayName", "CBOR (Platform Endianness)" },
		{ "CborPlatformEndianness.Name", "EQuicMessageFormat::CborPlatformEndianness" },
		{ "CborPlatformEndianness.ToolTip", "Quic messages are encoded in CBOR, using the platform endianness. This is the fastest and preferred option, but the CBOR data will not be readable by an external standard-compliant CBOR parser\nif generated from a little endian platform. If the data needs to be consumed outside the Unreal Engine, consider using CborStandardEndianness format instead." },
		{ "CborStandardEndianness.Comment", "/**\n\x09 * Quic messages are encoded in CBOR, using the CBOR standard-complinant endianness (big endian). It will perform slower on a little-endian platform, but the data will be readable by standard CBOR parsers.\n\x09 * Useful if the Quic messages needs to be analyzed/consumed outside the Unreal Engine.\n\x09 */" },
		{ "CborStandardEndianness.DisplayName", "CBOR (Standard Endianness)" },
		{ "CborStandardEndianness.Name", "EQuicMessageFormat::CborStandardEndianness" },
		{ "CborStandardEndianness.ToolTip", "Quic messages are encoded in CBOR, using the CBOR standard-complinant endianness (big endian). It will perform slower on a little-endian platform, but the data will be readable by standard CBOR parsers.\nUseful if the Quic messages needs to be analyzed/consumed outside the Unreal Engine." },
		{ "Comment", "/** Defines the Quic message format available (how the message data is encoded). */" },
		{ "Json.Comment", "/** JSON format specified. Legacy - Not exposed to user.*/" },
		{ "Json.Hidden", "" },
		{ "Json.Name", "EQuicMessageFormat::Json" },
		{ "Json.ToolTip", "JSON format specified. Legacy - Not exposed to user." },
		{ "ModuleRelativePath", "Public/Shared/QuicMessagingSettings.h" },
		{ "None.Comment", "/** No format specified. Legacy - Not exposed to user.*/" },
		{ "None.Hidden", "" },
		{ "None.Name", "EQuicMessageFormat::None" },
		{ "None.ToolTip", "No format specified. Legacy - Not exposed to user." },
		{ "TaggedProperty.Comment", "/** Tagged property format specified. Legacy - Not exposed to user.*/" },
		{ "TaggedProperty.Hidden", "" },
		{ "TaggedProperty.Name", "EQuicMessageFormat::TaggedProperty" },
		{ "TaggedProperty.ToolTip", "Tagged property format specified. Legacy - Not exposed to user." },
		{ "ToolTip", "Defines the Quic message format available (how the message data is encoded)." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_QuicMessaging_EQuicMessageFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_QuicMessaging,
		nullptr,
		"EQuicMessageFormat",
		"EQuicMessageFormat",
		Z_Construct_UEnum_QuicMessaging_EQuicMessageFormat_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_QuicMessaging_EQuicMessageFormat_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_QuicMessaging_EQuicMessageFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_QuicMessaging_EQuicMessageFormat_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_QuicMessaging_EQuicMessageFormat()
	{
		if (!Z_Registration_Info_UEnum_EQuicMessageFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQuicMessageFormat.InnerSingleton, Z_Construct_UEnum_QuicMessaging_EQuicMessageFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EQuicMessageFormat.InnerSingleton;
	}
	void UQuicMessagingSettings::StaticRegisterNativesUQuicMessagingSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuicMessagingSettings);
	UClass* Z_Construct_UClass_UQuicMessagingSettings_NoRegister()
	{
		return UQuicMessagingSettings::StaticClass();
	}
	struct Z_Construct_UClass_UQuicMessagingSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnabledByDefault_MetaData[];
#endif
		static void NewProp_EnabledByDefault_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnabledByDefault;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableTransport_MetaData[];
#endif
		static void NewProp_EnableTransport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableTransport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoRepair_MetaData[];
#endif
		static void NewProp_bAutoRepair_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRepair;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsClient_MetaData[];
#endif
		static void NewProp_bIsClient_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsClient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEncryption_MetaData[];
#endif
		static void NewProp_bEncryption_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEncryption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DiscoveryTimeoutSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_DiscoveryTimeoutSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAuthEnabled_MetaData[];
#endif
		static void NewProp_bAuthEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAuthEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAuthenticationMessageSize_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxAuthenticationMessageSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConnectionCooldownEnabled_MetaData[];
#endif
		static void NewProp_bConnectionCooldownEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConnectionCooldownEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionCooldownMaxAttempts_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ConnectionCooldownMaxAttempts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionCooldownPeriodSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ConnectionCooldownPeriodSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionCooldownSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ConnectionCooldownSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionCooldownMaxSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ConnectionCooldownMaxSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClientVerificationEnabled_MetaData[];
#endif
		static void NewProp_bClientVerificationEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClientVerificationEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuicServerCertificate_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_QuicServerCertificate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuicServerPrivateKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_QuicServerPrivateKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndpointGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndpointGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoRepairAttemptLimit_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_AutoRepairAttemptLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStopServiceWhenAppDeactivates_MetaData[];
#endif
		static void NewProp_bStopServiceWhenAppDeactivates_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopServiceWhenAppDeactivates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnicastEndpoint_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UnicastEndpoint;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MessageFormat_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageFormat_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MessageFormat;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StaticEndpoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticEndpoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StaticEndpoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuicMessagingSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_QuicMessaging,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuicMessagingSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuicMessagingSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Shared/QuicMessagingSettings.h" },
		{ "ModuleRelativePath", "Public/Shared/QuicMessagingSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_EnabledByDefault_MetaData[] = {
		{ "Category", "Availability" },
		{ "Comment", "/**\n\x09 * Whether Quic messaging is enabled by default. If false -messaging will need to be added\n\x09 * to the commandline when running non-editor builds.\n\x09 *\n\x09 * (Note - in Shipping builds ALLOW_QUIC_MESSAGING_SHIPPING=1 must also be defined in TargetRules\n\x09 * for messaging to be available with or without this setting)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Shared/QuicMessagingSettings.h" },
		{ "ToolTip", "Whether Quic messaging is enabled by default. If false -messaging will need to be added\nto the commandline when running non-editor builds.\n\n(Note - in Shipping builds ALLOW_QUIC_MESSAGING_SHIPPING=1 must also be defined in TargetRules\nfor messaging to be available with or without this setting)" },
	};
#endif
	void Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_EnabledByDefault_SetBit(void* Obj)
	{
		((UQuicMessagingSettings*)Obj)->EnabledByDefault = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_EnabledByDefault = { "EnabledByDefault", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQuicMessagingSettings), &Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_EnabledByDefault_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_EnabledByDefault_MetaData), Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_EnabledByDefault_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_EnableTransport_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/**\n\x09 * Whether the Quic transport channel is enabled.\n\x09 * Can be specified on the command line with `-QUICMESSAGING_TRANSPORT_ENABLE=`\n\x09 */" },
		{ "ModuleRelativePath", "Public/Shared/QuicMessagingSettings.h" },
		{ "ToolTip", "Whether the Quic transport channel is enabled.\nCan be specified on the command line with `-QUICMESSAGING_TRANSPORT_ENABLE=`" },
	};
#endif
	void Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_EnableTransport_SetBit(void* Obj)
	{
		((UQuicMessagingSettings*)Obj)->EnableTransport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_EnableTransport = { "EnableTransport", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQuicMessagingSettings), &Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_EnableTransport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_EnableTransport_MetaData), Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_EnableTransport_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bAutoRepair_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/** Whether the Quic transport channel should try to auto repair when in error. */" },
		{ "ModuleRelativePath", "Public/Shared/QuicMessagingSettings.h" },
		{ "ToolTip", "Whether the Quic transport channel should try to auto repair when in error." },
	};
#endif
	void Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bAutoRepair_SetBit(void* Obj)
	{
		((UQuicMessagingSettings*)Obj)->bAutoRepair = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bAutoRepair = { "bAutoRepair", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQuicMessagingSettings), &Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bAutoRepair_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bAutoRepair_MetaData), Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bAutoRepair_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bIsClient_MetaData[] = {
		{ "Comment", "/**\n\x09 * Whether the QUIC transport endpoint is a client (true) or a server (false)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Shared/QuicMessagingSettings.h" },
		{ "ToolTip", "Whether the QUIC transport endpoint is a client (true) or a server (false)" },
	};
#endif
	void Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bIsClient_SetBit(void* Obj)
	{
		((UQuicMessagingSettings*)Obj)->bIsClient = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bIsClient = { "bIsClient", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQuicMessagingSettings), &Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bIsClient_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bIsClient_MetaData), Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bIsClient_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bEncryption_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/**\n\x09 * Whether encryption should be used after the quic handshake\n\x09 */" },
		{ "ModuleRelativePath", "Public/Shared/QuicMessagingSettings.h" },
		{ "ToolTip", "Whether encryption should be used after the quic handshake" },
	};
#endif
	void Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bEncryption_SetBit(void* Obj)
	{
		((UQuicMessagingSettings*)Obj)->bEncryption = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bEncryption = { "bEncryption", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQuicMessagingSettings), &Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bEncryption_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bEncryption_MetaData), Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bEncryption_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_DiscoveryTimeoutSeconds_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/**\n\x09 * Timeout in seconds when the remote endpoint cannot be discovered.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Shared/QuicMessagingSettings.h" },
		{ "ToolTip", "Timeout in seconds when the remote endpoint cannot be discovered." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_DiscoveryTimeoutSeconds = { "DiscoveryTimeoutSeconds", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuicMessagingSettings, DiscoveryTimeoutSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_DiscoveryTimeoutSeconds_MetaData), Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_DiscoveryTimeoutSeconds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bAuthEnabled_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/**\n\x09 * Whether server side authentication is enabled\n\x09 */" },
		{ "ModuleRelativePath", "Public/Shared/QuicMessagingSettings.h" },
		{ "ToolTip", "Whether server side authentication is enabled" },
	};
#endif
	void Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bAuthEnabled_SetBit(void* Obj)
	{
		((UQuicMessagingSettings*)Obj)->bAuthEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bAuthEnabled = { "bAuthEnabled", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQuicMessagingSettings), &Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bAuthEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bAuthEnabled_MetaData), Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bAuthEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_MaxAuthenticationMessageSize_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/**\n\x09 * Maximum authentication message size for server side authentication\n\x09 */" },
		{ "ModuleRelativePath", "Public/Shared/QuicMessagingSettings.h" },
		{ "ToolTip", "Maximum authentication message size for server side authentication" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_MaxAuthenticationMessageSize = { "MaxAuthenticationMessageSize", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuicMessagingSettings, MaxAuthenticationMessageSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_MaxAuthenticationMessageSize_MetaData), Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_MaxAuthenticationMessageSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bConnectionCooldownEnabled_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/**\n\x09 * Whether server has a cooldown for connection attempts.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Shared/QuicMessagingSettings.h" },
		{ "ToolTip", "Whether server has a cooldown for connection attempts." },
	};
#endif
	void Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bConnectionCooldownEnabled_SetBit(void* Obj)
	{
		((UQuicMessagingSettings*)Obj)->bConnectionCooldownEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bConnectionCooldownEnabled = { "bConnectionCooldownEnabled", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQuicMessagingSettings), &Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bConnectionCooldownEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bConnectionCooldownEnabled_MetaData), Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bConnectionCooldownEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_ConnectionCooldownMaxAttempts_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/**\n\x09 * Maximum number of connection attempts until the cooldown is triggered.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Shared/QuicMessagingSettings.h" },
		{ "ToolTip", "Maximum number of connection attempts until the cooldown is triggered." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_ConnectionCooldownMaxAttempts = { "ConnectionCooldownMaxAttempts", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuicMessagingSettings, ConnectionCooldownMaxAttempts), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_ConnectionCooldownMaxAttempts_MetaData), Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_ConnectionCooldownMaxAttempts_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_ConnectionCooldownPeriodSeconds_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/**\n\x09 * Time period in seconds within which the maximum attempts must happen.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Shared/QuicMessagingSettings.h" },
		{ "ToolTip", "Time period in seconds within which the maximum attempts must happen." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_ConnectionCooldownPeriodSeconds = { "ConnectionCooldownPeriodSeconds", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuicMessagingSettings, ConnectionCooldownPeriodSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_ConnectionCooldownPeriodSeconds_MetaData), Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_ConnectionCooldownPeriodSeconds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_ConnectionCooldownSeconds_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/**\n\x09 * Connection cooldown in seconds used with exponential backoff.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Shared/QuicMessagingSettings.h" },
		{ "ToolTip", "Connection cooldown in seconds used with exponential backoff." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_ConnectionCooldownSeconds = { "ConnectionCooldownSeconds", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuicMessagingSettings, ConnectionCooldownSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_ConnectionCooldownSeconds_MetaData), Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_ConnectionCooldownSeconds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_ConnectionCooldownMaxSeconds_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/**\n\x09 * Maximum connection cooldown in seconds for exponential backoff.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Shared/QuicMessagingSettings.h" },
		{ "ToolTip", "Maximum connection cooldown in seconds for exponential backoff." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_ConnectionCooldownMaxSeconds = { "ConnectionCooldownMaxSeconds", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuicMessagingSettings, ConnectionCooldownMaxSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_ConnectionCooldownMaxSeconds_MetaData), Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_ConnectionCooldownMaxSeconds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bClientVerificationEnabled_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/**\n\x09 * Whether the QUIC client should verify the server certificate\n\x09 */" },
		{ "ModuleRelativePath", "Public/Shared/QuicMessagingSettings.h" },
		{ "ToolTip", "Whether the QUIC client should verify the server certificate" },
	};
#endif
	void Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bClientVerificationEnabled_SetBit(void* Obj)
	{
		((UQuicMessagingSettings*)Obj)->bClientVerificationEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bClientVerificationEnabled = { "bClientVerificationEnabled", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQuicMessagingSettings), &Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bClientVerificationEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bClientVerificationEnabled_MetaData), Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bClientVerificationEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_QuicServerCertificate_MetaData[] = {
		{ "Comment", "/**\n\x09 * Server certificate to encrypt QUIC transport\n\x09 */" },
		{ "ModuleRelativePath", "Public/Shared/QuicMessagingSettings.h" },
		{ "ToolTip", "Server certificate to encrypt QUIC transport" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_QuicServerCertificate = { "QuicServerCertificate", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuicMessagingSettings, QuicServerCertificate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_QuicServerCertificate_MetaData), Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_QuicServerCertificate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_QuicServerPrivateKey_MetaData[] = {
		{ "Comment", "/**\n\x09 * Server private key to encrypt QUIC transport\n\x09 */" },
		{ "ModuleRelativePath", "Public/Shared/QuicMessagingSettings.h" },
		{ "ToolTip", "Server private key to encrypt QUIC transport" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_QuicServerPrivateKey = { "QuicServerPrivateKey", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuicMessagingSettings, QuicServerPrivateKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_QuicServerPrivateKey_MetaData), Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_QuicServerPrivateKey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_EndpointGuid_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/**\n\x09 * Guid of this endpoint\n\x09 */" },
		{ "ModuleRelativePath", "Public/Shared/QuicMessagingSettings.h" },
		{ "ToolTip", "Guid of this endpoint" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_EndpointGuid = { "EndpointGuid", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuicMessagingSettings, EndpointGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_EndpointGuid_MetaData), Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_EndpointGuid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_AutoRepairAttemptLimit_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/** The number of consecutive attempt the auto repair routine will try to repair. */" },
		{ "ModuleRelativePath", "Public/Shared/QuicMessagingSettings.h" },
		{ "ToolTip", "The number of consecutive attempt the auto repair routine will try to repair." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_AutoRepairAttemptLimit = { "AutoRepairAttemptLimit", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuicMessagingSettings, AutoRepairAttemptLimit), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_AutoRepairAttemptLimit_MetaData), Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_AutoRepairAttemptLimit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bStopServiceWhenAppDeactivates_MetaData[] = {
		{ "Comment", "/** Whether to stop the transport service when the application deactivates, and restart it when the application is reactivated */" },
		{ "ModuleRelativePath", "Public/Shared/QuicMessagingSettings.h" },
		{ "ToolTip", "Whether to stop the transport service when the application deactivates, and restart it when the application is reactivated" },
	};
#endif
	void Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bStopServiceWhenAppDeactivates_SetBit(void* Obj)
	{
		((UQuicMessagingSettings*)Obj)->bStopServiceWhenAppDeactivates = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bStopServiceWhenAppDeactivates = { "bStopServiceWhenAppDeactivates", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQuicMessagingSettings), &Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bStopServiceWhenAppDeactivates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bStopServiceWhenAppDeactivates_MetaData), Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bStopServiceWhenAppDeactivates_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_UnicastEndpoint_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/**\n\x09 * The IP endpoint to listen to and send packets from.\n\x09 *\n\x09 * The format is IP_ADDRESS:PORT_NUMBER.\n\x09 * 0.0.0.0:0 will bind to the default network adapter on Windows,\n\x09 * and all available network adapters on other operating systems.\n\x09 * Specifying an interface IP here, will use that interface for multicasting and static endpoint *might* also reach this client through <unicast ip:multicast port>\n\x09 * Specifying both the IP and Port will allow usage of static endpoint to reach this client\n\x09 * Can be specified on the command line with `-QUICMESSAGING_TRANSPORT_UNICAST=`\n\x09 */" },
		{ "ModuleRelativePath", "Public/Shared/QuicMessagingSettings.h" },
		{ "ToolTip", "The IP endpoint to listen to and send packets from.\n\nThe format is IP_ADDRESS:PORT_NUMBER.\n0.0.0.0:0 will bind to the default network adapter on Windows,\nand all available network adapters on other operating systems.\nSpecifying an interface IP here, will use that interface for multicasting and static endpoint *might* also reach this client through <unicast ip:multicast port>\nSpecifying both the IP and Port will allow usage of static endpoint to reach this client\nCan be specified on the command line with `-QUICMESSAGING_TRANSPORT_UNICAST=`" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_UnicastEndpoint = { "UnicastEndpoint", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuicMessagingSettings, UnicastEndpoint), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_UnicastEndpoint_MetaData), Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_UnicastEndpoint_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_MessageFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_MessageFormat_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/** The format used to serialize the Quic message payload. */" },
		{ "ModuleRelativePath", "Public/Shared/QuicMessagingSettings.h" },
		{ "ToolTip", "The format used to serialize the Quic message payload." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_MessageFormat = { "MessageFormat", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuicMessagingSettings, MessageFormat), Z_Construct_UEnum_QuicMessaging_EQuicMessageFormat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_MessageFormat_MetaData), Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_MessageFormat_MetaData) }; // 770003511
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_StaticEndpoints_Inner = { "StaticEndpoints", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_StaticEndpoints_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/**\n\x09 * The IP endpoints of static devices.\n\x09 *\n\x09 * Use this setting to reach devices on other subnets, such as mobile phones on a WiFi network.\n\x09 * The format is IP_ADDRESS:PORT_NUMBER.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Shared/QuicMessagingSettings.h" },
		{ "ToolTip", "The IP endpoints of static devices.\n\nUse this setting to reach devices on other subnets, such as mobile phones on a WiFi network.\nThe format is IP_ADDRESS:PORT_NUMBER." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_StaticEndpoints = { "StaticEndpoints", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuicMessagingSettings, StaticEndpoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_StaticEndpoints_MetaData), Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_StaticEndpoints_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuicMessagingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_EnabledByDefault,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_EnableTransport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bAutoRepair,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bIsClient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bEncryption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_DiscoveryTimeoutSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bAuthEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_MaxAuthenticationMessageSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bConnectionCooldownEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_ConnectionCooldownMaxAttempts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_ConnectionCooldownPeriodSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_ConnectionCooldownSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_ConnectionCooldownMaxSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bClientVerificationEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_QuicServerCertificate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_QuicServerPrivateKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_EndpointGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_AutoRepairAttemptLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_bStopServiceWhenAppDeactivates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_UnicastEndpoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_MessageFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_MessageFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_StaticEndpoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuicMessagingSettings_Statics::NewProp_StaticEndpoints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuicMessagingSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuicMessagingSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuicMessagingSettings_Statics::ClassParams = {
		&UQuicMessagingSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQuicMessagingSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuicMessagingSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuicMessagingSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuicMessagingSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuicMessagingSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UQuicMessagingSettings()
	{
		if (!Z_Registration_Info_UClass_UQuicMessagingSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuicMessagingSettings.OuterSingleton, Z_Construct_UClass_UQuicMessagingSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuicMessagingSettings.OuterSingleton;
	}
	template<> QUICMESSAGING_API UClass* StaticClass<UQuicMessagingSettings>()
	{
		return UQuicMessagingSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuicMessagingSettings);
	UQuicMessagingSettings::~UQuicMessagingSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_QuicMessaging_Source_QuicMessaging_Public_Shared_QuicMessagingSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_QuicMessaging_Source_QuicMessaging_Public_Shared_QuicMessagingSettings_h_Statics::EnumInfo[] = {
		{ EQuicMessageFormat_StaticEnum, TEXT("EQuicMessageFormat"), &Z_Registration_Info_UEnum_EQuicMessageFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 770003511U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_QuicMessaging_Source_QuicMessaging_Public_Shared_QuicMessagingSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuicMessagingSettings, UQuicMessagingSettings::StaticClass, TEXT("UQuicMessagingSettings"), &Z_Registration_Info_UClass_UQuicMessagingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuicMessagingSettings), 2345086650U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_QuicMessaging_Source_QuicMessaging_Public_Shared_QuicMessagingSettings_h_2397681461(TEXT("/Script/QuicMessaging"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_QuicMessaging_Source_QuicMessaging_Public_Shared_QuicMessagingSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_QuicMessaging_Source_QuicMessaging_Public_Shared_QuicMessagingSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_QuicMessaging_Source_QuicMessaging_Public_Shared_QuicMessagingSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_QuicMessaging_Source_QuicMessaging_Public_Shared_QuicMessagingSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
