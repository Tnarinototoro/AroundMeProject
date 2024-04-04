// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProxyTable.h"
#include "ChooserPropertyAccess.h"
#include "InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProxyTable() {}
// Cross Module References
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserStructPropertyBinding();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	PROXYTABLE_API UClass* Z_Construct_UClass_UProxyAsset_NoRegister();
	PROXYTABLE_API UClass* Z_Construct_UClass_UProxyTable();
	PROXYTABLE_API UClass* Z_Construct_UClass_UProxyTable_NoRegister();
	PROXYTABLE_API UScriptStruct* Z_Construct_UScriptStruct_FProxyEntry();
	PROXYTABLE_API UScriptStruct* Z_Construct_UScriptStruct_FProxyStructOutput();
	PROXYTABLE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeProxyValue();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
	UPackage* Z_Construct_UPackage__Script_ProxyTable();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProxyStructOutput;
class UScriptStruct* FProxyStructOutput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProxyStructOutput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProxyStructOutput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProxyStructOutput, (UObject*)Z_Construct_UPackage__Script_ProxyTable(), TEXT("ProxyStructOutput"));
	}
	return Z_Registration_Info_UScriptStruct_ProxyStructOutput.OuterSingleton;
}
template<> PROXYTABLE_API UScriptStruct* StaticStruct<FProxyStructOutput>()
{
	return FProxyStructOutput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProxyStructOutput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Binding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Binding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProxyStructOutput_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProxyTable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProxyStructOutput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProxyStructOutput>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProxyStructOutput_Statics::NewProp_Binding_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/ProxyTable.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProxyStructOutput_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProxyStructOutput, Binding), Z_Construct_UScriptStruct_FChooserStructPropertyBinding, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProxyStructOutput_Statics::NewProp_Binding_MetaData), Z_Construct_UScriptStruct_FProxyStructOutput_Statics::NewProp_Binding_MetaData) }; // 1018217836
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProxyStructOutput_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/ProxyTable.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProxyStructOutput_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000002000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProxyStructOutput, Value), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProxyStructOutput_Statics::NewProp_Value_MetaData), Z_Construct_UScriptStruct_FProxyStructOutput_Statics::NewProp_Value_MetaData) }; // 2114042832
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProxyStructOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProxyStructOutput_Statics::NewProp_Binding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProxyStructOutput_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProxyStructOutput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProxyTable,
		nullptr,
		&NewStructOps,
		"ProxyStructOutput",
		Z_Construct_UScriptStruct_FProxyStructOutput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProxyStructOutput_Statics::PropPointers),
		sizeof(FProxyStructOutput),
		alignof(FProxyStructOutput),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProxyStructOutput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProxyStructOutput_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProxyStructOutput_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FProxyStructOutput()
	{
		if (!Z_Registration_Info_UScriptStruct_ProxyStructOutput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProxyStructOutput.InnerSingleton, Z_Construct_UScriptStruct_FProxyStructOutput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProxyStructOutput.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProxyEntry;
class UScriptStruct* FProxyEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProxyEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProxyEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProxyEntry, (UObject*)Z_Construct_UPackage__Script_ProxyTable(), TEXT("ProxyEntry"));
	}
	return Z_Registration_Info_UScriptStruct_ProxyEntry.OuterSingleton;
}
template<> PROXYTABLE_API UScriptStruct* StaticStruct<FProxyEntry>()
{
	return FProxyEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProxyEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Proxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Proxy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ValueStruct;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputStructData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputStructData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputStructData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProxyEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProxyTable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProxyEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProxyEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProxyEntry_Statics::NewProp_Proxy_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/ProxyTable.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FProxyEntry_Statics::NewProp_Proxy = { "Proxy", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProxyEntry, Proxy), Z_Construct_UClass_UProxyAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProxyEntry_Statics::NewProp_Proxy_MetaData), Z_Construct_UScriptStruct_FProxyEntry_Statics::NewProp_Proxy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProxyEntry_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "// temporarily leaving this property for backwards compatibility with old content which used FNames rather than UProxyAsset\n" },
		{ "ModuleRelativePath", "Public/ProxyTable.h" },
		{ "ToolTip", "temporarily leaving this property for backwards compatibility with old content which used FNames rather than UProxyAsset" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FProxyEntry_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProxyEntry, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProxyEntry_Statics::NewProp_Key_MetaData), Z_Construct_UScriptStruct_FProxyEntry_Statics::NewProp_Key_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProxyEntry_Statics::NewProp_ValueStruct_MetaData[] = {
		{ "BaseStruct", "/Script/Chooser.ObjectChooserBase" },
		{ "Category", "Data" },
		{ "DisplayName", "Value" },
		{ "ExcludeBaseStruct", "" },
		{ "ModuleRelativePath", "Public/ProxyTable.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProxyEntry_Statics::NewProp_ValueStruct = { "ValueStruct", nullptr, (EPropertyFlags)0x0010000002000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProxyEntry, ValueStruct), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProxyEntry_Statics::NewProp_ValueStruct_MetaData), Z_Construct_UScriptStruct_FProxyEntry_Statics::NewProp_ValueStruct_MetaData) }; // 2114042832
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProxyEntry_Statics::NewProp_OutputStructData_Inner = { "OutputStructData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FProxyStructOutput, METADATA_PARAMS(0, nullptr) }; // 866714932
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProxyEntry_Statics::NewProp_OutputStructData_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/ProxyTable.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProxyEntry_Statics::NewProp_OutputStructData = { "OutputStructData", nullptr, (EPropertyFlags)0x0010000002000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProxyEntry, OutputStructData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProxyEntry_Statics::NewProp_OutputStructData_MetaData), Z_Construct_UScriptStruct_FProxyEntry_Statics::NewProp_OutputStructData_MetaData) }; // 866714932
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProxyEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProxyEntry_Statics::NewProp_Proxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProxyEntry_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProxyEntry_Statics::NewProp_ValueStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProxyEntry_Statics::NewProp_OutputStructData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProxyEntry_Statics::NewProp_OutputStructData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProxyEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProxyTable,
		nullptr,
		&NewStructOps,
		"ProxyEntry",
		Z_Construct_UScriptStruct_FProxyEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProxyEntry_Statics::PropPointers),
		sizeof(FProxyEntry),
		alignof(FProxyEntry),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProxyEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProxyEntry_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProxyEntry_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FProxyEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_ProxyEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProxyEntry.InnerSingleton, Z_Construct_UScriptStruct_FProxyEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProxyEntry.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimeProxyValue;
class UScriptStruct* FRuntimeProxyValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeProxyValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimeProxyValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeProxyValue, (UObject*)Z_Construct_UPackage__Script_ProxyTable(), TEXT("RuntimeProxyValue"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimeProxyValue.OuterSingleton;
}
template<> PROXYTABLE_API UScriptStruct* StaticStruct<FRuntimeProxyValue>()
{
	return FRuntimeProxyValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRuntimeProxyValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputStructData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputStructData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputStructData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeProxyValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProxyTable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeProxyValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeProxyValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeProxyValue_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProxyTable.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeProxyValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeProxyValue, Value), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeProxyValue_Statics::NewProp_Value_MetaData), Z_Construct_UScriptStruct_FRuntimeProxyValue_Statics::NewProp_Value_MetaData) }; // 2114042832
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeProxyValue_Statics::NewProp_OutputStructData_Inner = { "OutputStructData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FProxyStructOutput, METADATA_PARAMS(0, nullptr) }; // 866714932
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeProxyValue_Statics::NewProp_OutputStructData_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProxyTable.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRuntimeProxyValue_Statics::NewProp_OutputStructData = { "OutputStructData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeProxyValue, OutputStructData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeProxyValue_Statics::NewProp_OutputStructData_MetaData), Z_Construct_UScriptStruct_FRuntimeProxyValue_Statics::NewProp_OutputStructData_MetaData) }; // 866714932
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeProxyValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeProxyValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeProxyValue_Statics::NewProp_OutputStructData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeProxyValue_Statics::NewProp_OutputStructData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeProxyValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProxyTable,
		nullptr,
		&NewStructOps,
		"RuntimeProxyValue",
		Z_Construct_UScriptStruct_FRuntimeProxyValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeProxyValue_Statics::PropPointers),
		sizeof(FRuntimeProxyValue),
		alignof(FRuntimeProxyValue),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeProxyValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRuntimeProxyValue_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeProxyValue_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeProxyValue()
	{
		if (!Z_Registration_Info_UScriptStruct_RuntimeProxyValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimeProxyValue.InnerSingleton, Z_Construct_UScriptStruct_FRuntimeProxyValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RuntimeProxyValue.InnerSingleton;
	}
	void UProxyTable::StaticRegisterNativesUProxyTable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProxyTable);
	UClass* Z_Construct_UClass_UProxyTable_NoRegister()
	{
		return UProxyTable::StaticClass();
	}
	struct Z_Construct_UClass_UProxyTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Keys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Keys;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RuntimeValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RuntimeValues;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InheritEntriesFrom_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InheritEntriesFrom_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InheritEntriesFrom;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProxyTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ProxyTable,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProxyTable_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProxyTable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ProxyTable.h" },
		{ "ModuleRelativePath", "Public/ProxyTable.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProxyTable_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProxyTable_Statics::NewProp_Keys_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProxyTable.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProxyTable_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProxyTable, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProxyTable_Statics::NewProp_Keys_MetaData), Z_Construct_UClass_UProxyTable_Statics::NewProp_Keys_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProxyTable_Statics::NewProp_RuntimeValues_Inner = { "RuntimeValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRuntimeProxyValue, METADATA_PARAMS(0, nullptr) }; // 408928777
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProxyTable_Statics::NewProp_RuntimeValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProxyTable.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProxyTable_Statics::NewProp_RuntimeValues = { "RuntimeValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProxyTable, RuntimeValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProxyTable_Statics::NewProp_RuntimeValues_MetaData), Z_Construct_UClass_UProxyTable_Statics::NewProp_RuntimeValues_MetaData) }; // 408928777
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProxyTable_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FProxyEntry, METADATA_PARAMS(0, nullptr) }; // 4124828218
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProxyTable_Statics::NewProp_Entries_MetaData[] = {
		{ "Category", "Hidden" },
		{ "ModuleRelativePath", "Public/ProxyTable.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProxyTable_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProxyTable, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProxyTable_Statics::NewProp_Entries_MetaData), Z_Construct_UClass_UProxyTable_Statics::NewProp_Entries_MetaData) }; // 4124828218
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UProxyTable_Statics::NewProp_InheritEntriesFrom_Inner = { "InheritEntriesFrom", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UProxyTable_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProxyTable_Statics::NewProp_InheritEntriesFrom_MetaData[] = {
		{ "Category", "Inheritance" },
		{ "ModuleRelativePath", "Public/ProxyTable.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProxyTable_Statics::NewProp_InheritEntriesFrom = { "InheritEntriesFrom", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProxyTable, InheritEntriesFrom), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProxyTable_Statics::NewProp_InheritEntriesFrom_MetaData), Z_Construct_UClass_UProxyTable_Statics::NewProp_InheritEntriesFrom_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProxyTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProxyTable_Statics::NewProp_Keys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProxyTable_Statics::NewProp_Keys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProxyTable_Statics::NewProp_RuntimeValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProxyTable_Statics::NewProp_RuntimeValues,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProxyTable_Statics::NewProp_Entries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProxyTable_Statics::NewProp_Entries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProxyTable_Statics::NewProp_InheritEntriesFrom_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProxyTable_Statics::NewProp_InheritEntriesFrom,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProxyTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProxyTable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProxyTable_Statics::ClassParams = {
		&UProxyTable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UProxyTable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UProxyTable_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProxyTable_Statics::Class_MetaDataParams), Z_Construct_UClass_UProxyTable_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProxyTable_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UProxyTable()
	{
		if (!Z_Registration_Info_UClass_UProxyTable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProxyTable.OuterSingleton, Z_Construct_UClass_UProxyTable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProxyTable.OuterSingleton;
	}
	template<> PROXYTABLE_API UClass* StaticClass<UProxyTable>()
	{
		return UProxyTable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProxyTable);
	UProxyTable::~UProxyTable() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_ProxyTable_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_ProxyTable_h_Statics::ScriptStructInfo[] = {
		{ FProxyStructOutput::StaticStruct, Z_Construct_UScriptStruct_FProxyStructOutput_Statics::NewStructOps, TEXT("ProxyStructOutput"), &Z_Registration_Info_UScriptStruct_ProxyStructOutput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProxyStructOutput), 866714932U) },
		{ FProxyEntry::StaticStruct, Z_Construct_UScriptStruct_FProxyEntry_Statics::NewStructOps, TEXT("ProxyEntry"), &Z_Registration_Info_UScriptStruct_ProxyEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProxyEntry), 4124828218U) },
		{ FRuntimeProxyValue::StaticStruct, Z_Construct_UScriptStruct_FRuntimeProxyValue_Statics::NewStructOps, TEXT("RuntimeProxyValue"), &Z_Registration_Info_UScriptStruct_RuntimeProxyValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeProxyValue), 408928777U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_ProxyTable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProxyTable, UProxyTable::StaticClass, TEXT("UProxyTable"), &Z_Registration_Info_UClass_UProxyTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProxyTable), 2201522700U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_ProxyTable_h_1777250530(TEXT("/Script/ProxyTable"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_ProxyTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_ProxyTable_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_ProxyTable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_ProxyTable_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
