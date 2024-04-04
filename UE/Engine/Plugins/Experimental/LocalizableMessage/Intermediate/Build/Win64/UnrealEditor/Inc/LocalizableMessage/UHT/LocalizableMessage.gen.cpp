// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LocalizableMessage.h"
#include "InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalizableMessage() {}
// Cross Module References
	LOCALIZABLEMESSAGE_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizableMessage();
	LOCALIZABLEMESSAGE_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
	UPackage* Z_Construct_UPackage__Script_LocalizableMessage();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LocalizableMessageParameterEntry;
class UScriptStruct* FLocalizableMessageParameterEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LocalizableMessageParameterEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LocalizableMessageParameterEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry, (UObject*)Z_Construct_UPackage__Script_LocalizableMessage(), TEXT("LocalizableMessageParameterEntry"));
	}
	return Z_Registration_Info_UScriptStruct_LocalizableMessageParameterEntry.OuterSingleton;
}
template<> LOCALIZABLEMESSAGE_API UScriptStruct* StaticStruct<FLocalizableMessageParameterEntry>()
{
	return FLocalizableMessageParameterEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LocalizableMessage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocalizableMessageParameterEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry_Statics::NewProp_Key_MetaData[] = {
		{ "ModuleRelativePath", "Public/LocalizableMessage.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocalizableMessageParameterEntry, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry_Statics::NewProp_Key_MetaData), Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry_Statics::NewProp_Key_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/LocalizableMessage.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocalizableMessageParameterEntry, Value), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry_Statics::NewProp_Value_MetaData), Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry_Statics::NewProp_Value_MetaData) }; // 2114042832
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LocalizableMessage,
		nullptr,
		&NewStructOps,
		"LocalizableMessageParameterEntry",
		Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry_Statics::PropPointers),
		sizeof(FLocalizableMessageParameterEntry),
		alignof(FLocalizableMessageParameterEntry),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_LocalizableMessageParameterEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LocalizableMessageParameterEntry.InnerSingleton, Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LocalizableMessageParameterEntry.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LocalizableMessage;
class UScriptStruct* FLocalizableMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LocalizableMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LocalizableMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalizableMessage, (UObject*)Z_Construct_UPackage__Script_LocalizableMessage(), TEXT("LocalizableMessage"));
	}
	return Z_Registration_Info_UScriptStruct_LocalizableMessage.OuterSingleton;
}
template<> LOCALIZABLEMESSAGE_API UScriptStruct* StaticStruct<FLocalizableMessage>()
{
	return FLocalizableMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLocalizableMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultText;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Substitutions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Substitutions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Substitutions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizableMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LocalizableMessage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLocalizableMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocalizableMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizableMessage_Statics::NewProp_Key_MetaData[] = {
		{ "ModuleRelativePath", "Public/LocalizableMessage.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLocalizableMessage_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocalizableMessage, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizableMessage_Statics::NewProp_Key_MetaData), Z_Construct_UScriptStruct_FLocalizableMessage_Statics::NewProp_Key_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizableMessage_Statics::NewProp_DefaultText_MetaData[] = {
		{ "ModuleRelativePath", "Public/LocalizableMessage.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLocalizableMessage_Statics::NewProp_DefaultText = { "DefaultText", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocalizableMessage, DefaultText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizableMessage_Statics::NewProp_DefaultText_MetaData), Z_Construct_UScriptStruct_FLocalizableMessage_Statics::NewProp_DefaultText_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocalizableMessage_Statics::NewProp_Substitutions_Inner = { "Substitutions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry, METADATA_PARAMS(0, nullptr) }; // 2016617757
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizableMessage_Statics::NewProp_Substitutions_MetaData[] = {
		{ "ModuleRelativePath", "Public/LocalizableMessage.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLocalizableMessage_Statics::NewProp_Substitutions = { "Substitutions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocalizableMessage, Substitutions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizableMessage_Statics::NewProp_Substitutions_MetaData), Z_Construct_UScriptStruct_FLocalizableMessage_Statics::NewProp_Substitutions_MetaData) }; // 2016617757
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocalizableMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizableMessage_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizableMessage_Statics::NewProp_DefaultText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizableMessage_Statics::NewProp_Substitutions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizableMessage_Statics::NewProp_Substitutions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocalizableMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LocalizableMessage,
		nullptr,
		&NewStructOps,
		"LocalizableMessage",
		Z_Construct_UScriptStruct_FLocalizableMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizableMessage_Statics::PropPointers),
		sizeof(FLocalizableMessage),
		alignof(FLocalizableMessage),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizableMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLocalizableMessage_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizableMessage_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLocalizableMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_LocalizableMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LocalizableMessage.InnerSingleton, Z_Construct_UScriptStruct_FLocalizableMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LocalizableMessage.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LocalizableMessage_Source_LocalizableMessage_Public_LocalizableMessage_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LocalizableMessage_Source_LocalizableMessage_Public_LocalizableMessage_h_Statics::ScriptStructInfo[] = {
		{ FLocalizableMessageParameterEntry::StaticStruct, Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry_Statics::NewStructOps, TEXT("LocalizableMessageParameterEntry"), &Z_Registration_Info_UScriptStruct_LocalizableMessageParameterEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLocalizableMessageParameterEntry), 2016617757U) },
		{ FLocalizableMessage::StaticStruct, Z_Construct_UScriptStruct_FLocalizableMessage_Statics::NewStructOps, TEXT("LocalizableMessage"), &Z_Registration_Info_UScriptStruct_LocalizableMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLocalizableMessage), 2288712457U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LocalizableMessage_Source_LocalizableMessage_Public_LocalizableMessage_h_3578664836(TEXT("/Script/LocalizableMessage"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LocalizableMessage_Source_LocalizableMessage_Public_LocalizableMessage_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LocalizableMessage_Source_LocalizableMessage_Public_LocalizableMessage_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
