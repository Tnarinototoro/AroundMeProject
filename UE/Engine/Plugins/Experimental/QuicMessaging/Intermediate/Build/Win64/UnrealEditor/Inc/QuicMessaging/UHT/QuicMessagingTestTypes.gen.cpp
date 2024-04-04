// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Tests/QuicMessagingTestTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuicMessagingTestTypes() {}
// Cross Module References
	QUICMESSAGING_API UScriptStruct* Z_Construct_UScriptStruct_FQuicMockMessage();
	UPackage* Z_Construct_UPackage__Script_QuicMessaging();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuicMockMessage;
class UScriptStruct* FQuicMockMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuicMockMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuicMockMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuicMockMessage, (UObject*)Z_Construct_UPackage__Script_QuicMessaging(), TEXT("QuicMockMessage"));
	}
	return Z_Registration_Info_UScriptStruct_QuicMockMessage.OuterSingleton;
}
template<> QUICMESSAGING_API UScriptStruct* StaticStruct<FQuicMockMessage>()
{
	return FQuicMockMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQuicMockMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuicMockMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/QuicMessagingTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuicMockMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuicMockMessage>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FQuicMockMessage_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuicMockMessage_Statics::NewProp_Data_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Private/Tests/QuicMessagingTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuicMockMessage_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuicMockMessage, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuicMockMessage_Statics::NewProp_Data_MetaData), Z_Construct_UScriptStruct_FQuicMockMessage_Statics::NewProp_Data_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuicMockMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuicMockMessage_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuicMockMessage_Statics::NewProp_Data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuicMockMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuicMessaging,
		nullptr,
		&NewStructOps,
		"QuicMockMessage",
		Z_Construct_UScriptStruct_FQuicMockMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuicMockMessage_Statics::PropPointers),
		sizeof(FQuicMockMessage),
		alignof(FQuicMockMessage),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuicMockMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQuicMockMessage_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuicMockMessage_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FQuicMockMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_QuicMockMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuicMockMessage.InnerSingleton, Z_Construct_UScriptStruct_FQuicMockMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_QuicMockMessage.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_QuicMessaging_Source_QuicMessaging_Private_Tests_QuicMessagingTestTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_QuicMessaging_Source_QuicMessaging_Private_Tests_QuicMessagingTestTypes_h_Statics::ScriptStructInfo[] = {
		{ FQuicMockMessage::StaticStruct, Z_Construct_UScriptStruct_FQuicMockMessage_Statics::NewStructOps, TEXT("QuicMockMessage"), &Z_Registration_Info_UScriptStruct_QuicMockMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuicMockMessage), 47806245U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_QuicMessaging_Source_QuicMessaging_Private_Tests_QuicMessagingTestTypes_h_1500788789(TEXT("/Script/QuicMessaging"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_QuicMessaging_Source_QuicMessaging_Private_Tests_QuicMessagingTestTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_QuicMessaging_Source_QuicMessaging_Private_Tests_QuicMessagingTestTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
