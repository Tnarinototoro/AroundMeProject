// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/NiagaraMessageStore.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraMessageStore() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraMessageDataBase_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMessageStore();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraMessageStore;
class UScriptStruct* FNiagaraMessageStore::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraMessageStore.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraMessageStore.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraMessageStore, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraMessageStore"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraMessageStore.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraMessageStore>()
{
	return FNiagaraMessageStore::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MessageKeyToMessageMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MessageKeyToMessageMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageKeyToMessageMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MessageKeyToMessageMap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DismissedMessageKeys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DismissedMessageKeys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DismissedMessageKeys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraMessageStore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraMessageStore>();
	}
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::NewProp_MessageKeyToMessageMap_ValueProp = { "MessageKeyToMessageMap", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UNiagaraMessageDataBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::NewProp_MessageKeyToMessageMap_Key_KeyProp = { "MessageKeyToMessageMap_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::NewProp_MessageKeyToMessageMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMessageStore.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::NewProp_MessageKeyToMessageMap = { "MessageKeyToMessageMap", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraMessageStore, MessageKeyToMessageMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::NewProp_MessageKeyToMessageMap_MetaData), Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::NewProp_MessageKeyToMessageMap_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::NewProp_DismissedMessageKeys_Inner = { "DismissedMessageKeys", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::NewProp_DismissedMessageKeys_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMessageStore.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::NewProp_DismissedMessageKeys = { "DismissedMessageKeys", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraMessageStore, DismissedMessageKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::NewProp_DismissedMessageKeys_MetaData), Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::NewProp_DismissedMessageKeys_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::NewProp_MessageKeyToMessageMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::NewProp_MessageKeyToMessageMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::NewProp_MessageKeyToMessageMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::NewProp_DismissedMessageKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::NewProp_DismissedMessageKeys,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraMessageStore",
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::PropPointers), 0),
		sizeof(FNiagaraMessageStore),
		alignof(FNiagaraMessageStore),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::Struct_MetaDataParams)
	};
#if WITH_EDITORONLY_DATA
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::PropPointers) < 2048);
#endif
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMessageStore()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraMessageStore.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraMessageStore.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraMessageStore.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMessageStore_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMessageStore_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraMessageStore::StaticStruct, Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::NewStructOps, TEXT("NiagaraMessageStore"), &Z_Registration_Info_UScriptStruct_NiagaraMessageStore, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraMessageStore), 1366411075U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMessageStore_h_2710641627(TEXT("/Script/Niagara"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMessageStore_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMessageStore_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
