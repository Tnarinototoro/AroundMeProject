// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuicTransportMessages.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuicTransportMessages() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	QUICMESSAGING_API UScriptStruct* Z_Construct_UScriptStruct_FQuicAuthMessage();
	QUICMESSAGING_API UScriptStruct* Z_Construct_UScriptStruct_FQuicAuthResponseMessage();
	QUICMESSAGING_API UScriptStruct* Z_Construct_UScriptStruct_FQuicMetaMessage();
	UPackage* Z_Construct_UPackage__Script_QuicMessaging();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuicMetaMessage;
class UScriptStruct* FQuicMetaMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuicMetaMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuicMetaMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuicMetaMessage, (UObject*)Z_Construct_UPackage__Script_QuicMessaging(), TEXT("QuicMetaMessage"));
	}
	return Z_Registration_Info_UScriptStruct_QuicMetaMessage.OuterSingleton;
}
template<> QUICMESSAGING_API UScriptStruct* StaticStruct<FQuicMetaMessage>()
{
	return FQuicMetaMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQuicMetaMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SenderNodeId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SenderNodeId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuicMetaMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuicTransportMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuicMetaMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuicMetaMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuicMetaMessage_Statics::NewProp_SenderNodeId_MetaData[] = {
		{ "Category", "QuicTransportMessage" },
		{ "ModuleRelativePath", "Public/QuicTransportMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuicMetaMessage_Statics::NewProp_SenderNodeId = { "SenderNodeId", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuicMetaMessage, SenderNodeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuicMetaMessage_Statics::NewProp_SenderNodeId_MetaData), Z_Construct_UScriptStruct_FQuicMetaMessage_Statics::NewProp_SenderNodeId_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuicMetaMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuicMetaMessage_Statics::NewProp_SenderNodeId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuicMetaMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuicMessaging,
		nullptr,
		&NewStructOps,
		"QuicMetaMessage",
		Z_Construct_UScriptStruct_FQuicMetaMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuicMetaMessage_Statics::PropPointers),
		sizeof(FQuicMetaMessage),
		alignof(FQuicMetaMessage),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuicMetaMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQuicMetaMessage_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuicMetaMessage_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FQuicMetaMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_QuicMetaMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuicMetaMessage.InnerSingleton, Z_Construct_UScriptStruct_FQuicMetaMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_QuicMetaMessage.InnerSingleton;
	}

static_assert(std::is_polymorphic<FQuicAuthMessage>() == std::is_polymorphic<FQuicMetaMessage>(), "USTRUCT FQuicAuthMessage cannot be polymorphic unless super FQuicMetaMessage is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuicAuthMessage;
class UScriptStruct* FQuicAuthMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuicAuthMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuicAuthMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuicAuthMessage, (UObject*)Z_Construct_UPackage__Script_QuicMessaging(), TEXT("QuicAuthMessage"));
	}
	return Z_Registration_Info_UScriptStruct_QuicAuthMessage.OuterSingleton;
}
template<> QUICMESSAGING_API UScriptStruct* StaticStruct<FQuicAuthMessage>()
{
	return FQuicAuthMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQuicAuthMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuicAuthMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuicTransportMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuicAuthMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuicAuthMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuicAuthMessage_Statics::NewProp_Payload_MetaData[] = {
		{ "Category", "QuicTransportMessage" },
		{ "ModuleRelativePath", "Public/QuicTransportMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuicAuthMessage_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuicAuthMessage, Payload), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuicAuthMessage_Statics::NewProp_Payload_MetaData), Z_Construct_UScriptStruct_FQuicAuthMessage_Statics::NewProp_Payload_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuicAuthMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuicAuthMessage_Statics::NewProp_Payload,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuicAuthMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuicMessaging,
		Z_Construct_UScriptStruct_FQuicMetaMessage,
		&NewStructOps,
		"QuicAuthMessage",
		Z_Construct_UScriptStruct_FQuicAuthMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuicAuthMessage_Statics::PropPointers),
		sizeof(FQuicAuthMessage),
		alignof(FQuicAuthMessage),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuicAuthMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQuicAuthMessage_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuicAuthMessage_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FQuicAuthMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_QuicAuthMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuicAuthMessage.InnerSingleton, Z_Construct_UScriptStruct_FQuicAuthMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_QuicAuthMessage.InnerSingleton;
	}

static_assert(std::is_polymorphic<FQuicAuthResponseMessage>() == std::is_polymorphic<FQuicMetaMessage>(), "USTRUCT FQuicAuthResponseMessage cannot be polymorphic unless super FQuicMetaMessage is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuicAuthResponseMessage;
class UScriptStruct* FQuicAuthResponseMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuicAuthResponseMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuicAuthResponseMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuicAuthResponseMessage, (UObject*)Z_Construct_UPackage__Script_QuicMessaging(), TEXT("QuicAuthResponseMessage"));
	}
	return Z_Registration_Info_UScriptStruct_QuicAuthResponseMessage.OuterSingleton;
}
template<> QUICMESSAGING_API UScriptStruct* StaticStruct<FQuicAuthResponseMessage>()
{
	return FQuicAuthResponseMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQuicAuthResponseMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAuthSuccessful_MetaData[];
#endif
		static void NewProp_bAuthSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAuthSuccessful;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Reason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuicAuthResponseMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuicTransportMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuicAuthResponseMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuicAuthResponseMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuicAuthResponseMessage_Statics::NewProp_bAuthSuccessful_MetaData[] = {
		{ "Category", "QuicTransportMessage" },
		{ "ModuleRelativePath", "Public/QuicTransportMessages.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FQuicAuthResponseMessage_Statics::NewProp_bAuthSuccessful_SetBit(void* Obj)
	{
		((FQuicAuthResponseMessage*)Obj)->bAuthSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuicAuthResponseMessage_Statics::NewProp_bAuthSuccessful = { "bAuthSuccessful", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FQuicAuthResponseMessage), &Z_Construct_UScriptStruct_FQuicAuthResponseMessage_Statics::NewProp_bAuthSuccessful_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuicAuthResponseMessage_Statics::NewProp_bAuthSuccessful_MetaData), Z_Construct_UScriptStruct_FQuicAuthResponseMessage_Statics::NewProp_bAuthSuccessful_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuicAuthResponseMessage_Statics::NewProp_Reason_MetaData[] = {
		{ "Category", "QuicTransportMessage" },
		{ "ModuleRelativePath", "Public/QuicTransportMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuicAuthResponseMessage_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuicAuthResponseMessage, Reason), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuicAuthResponseMessage_Statics::NewProp_Reason_MetaData), Z_Construct_UScriptStruct_FQuicAuthResponseMessage_Statics::NewProp_Reason_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuicAuthResponseMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuicAuthResponseMessage_Statics::NewProp_bAuthSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuicAuthResponseMessage_Statics::NewProp_Reason,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuicAuthResponseMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuicMessaging,
		Z_Construct_UScriptStruct_FQuicMetaMessage,
		&NewStructOps,
		"QuicAuthResponseMessage",
		Z_Construct_UScriptStruct_FQuicAuthResponseMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuicAuthResponseMessage_Statics::PropPointers),
		sizeof(FQuicAuthResponseMessage),
		alignof(FQuicAuthResponseMessage),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuicAuthResponseMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQuicAuthResponseMessage_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuicAuthResponseMessage_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FQuicAuthResponseMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_QuicAuthResponseMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuicAuthResponseMessage.InnerSingleton, Z_Construct_UScriptStruct_FQuicAuthResponseMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_QuicAuthResponseMessage.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_QuicMessaging_Source_QuicMessaging_Public_QuicTransportMessages_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_QuicMessaging_Source_QuicMessaging_Public_QuicTransportMessages_h_Statics::ScriptStructInfo[] = {
		{ FQuicMetaMessage::StaticStruct, Z_Construct_UScriptStruct_FQuicMetaMessage_Statics::NewStructOps, TEXT("QuicMetaMessage"), &Z_Registration_Info_UScriptStruct_QuicMetaMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuicMetaMessage), 298048101U) },
		{ FQuicAuthMessage::StaticStruct, Z_Construct_UScriptStruct_FQuicAuthMessage_Statics::NewStructOps, TEXT("QuicAuthMessage"), &Z_Registration_Info_UScriptStruct_QuicAuthMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuicAuthMessage), 3431670432U) },
		{ FQuicAuthResponseMessage::StaticStruct, Z_Construct_UScriptStruct_FQuicAuthResponseMessage_Statics::NewStructOps, TEXT("QuicAuthResponseMessage"), &Z_Registration_Info_UScriptStruct_QuicAuthResponseMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuicAuthResponseMessage), 3251101002U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_QuicMessaging_Source_QuicMessaging_Public_QuicTransportMessages_h_1555498859(TEXT("/Script/QuicMessaging"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_QuicMessaging_Source_QuicMessaging_Public_QuicTransportMessages_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_QuicMessaging_Source_QuicMessaging_Public_QuicTransportMessages_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
