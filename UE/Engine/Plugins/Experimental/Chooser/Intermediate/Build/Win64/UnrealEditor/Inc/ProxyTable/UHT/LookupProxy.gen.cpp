// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/LookupProxy.h"
#include "ChooserPropertyAccess.h"
#include "InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLookupProxy() {}
// Cross Module References
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserPropertyBinding();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FObjectChooserBase();
	PROXYTABLE_API UClass* Z_Construct_UClass_UProxyAsset_NoRegister();
	PROXYTABLE_API UClass* Z_Construct_UClass_UProxyTable_NoRegister();
	PROXYTABLE_API UScriptStruct* Z_Construct_UScriptStruct_FChooserParameterProxyTableBase();
	PROXYTABLE_API UScriptStruct* Z_Construct_UScriptStruct_FLookupProxy();
	PROXYTABLE_API UScriptStruct* Z_Construct_UScriptStruct_FLookupProxyWithOverrideTable();
	PROXYTABLE_API UScriptStruct* Z_Construct_UScriptStruct_FProxyTableContextProperty();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
	UPackage* Z_Construct_UPackage__Script_ProxyTable();
// End Cross Module References

static_assert(std::is_polymorphic<FProxyTableContextProperty>() == std::is_polymorphic<FChooserParameterProxyTableBase>(), "USTRUCT FProxyTableContextProperty cannot be polymorphic unless super FChooserParameterProxyTableBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProxyTableContextProperty;
class UScriptStruct* FProxyTableContextProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProxyTableContextProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProxyTableContextProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProxyTableContextProperty, (UObject*)Z_Construct_UPackage__Script_ProxyTable(), TEXT("ProxyTableContextProperty"));
	}
	return Z_Registration_Info_UScriptStruct_ProxyTableContextProperty.OuterSingleton;
}
template<> PROXYTABLE_API UScriptStruct* StaticStruct<FProxyTableContextProperty>()
{
	return FProxyTableContextProperty::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProxyTableContextProperty_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Binding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Binding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProxyTableContextProperty_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Internal/LookupProxy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProxyTableContextProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProxyTableContextProperty>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProxyTableContextProperty_Statics::NewProp_Binding_MetaData[] = {
		{ "BindingType", "UProxyTable*" },
		{ "Category", "Binding" },
		{ "ModuleRelativePath", "Internal/LookupProxy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProxyTableContextProperty_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProxyTableContextProperty, Binding), Z_Construct_UScriptStruct_FChooserPropertyBinding, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProxyTableContextProperty_Statics::NewProp_Binding_MetaData), Z_Construct_UScriptStruct_FProxyTableContextProperty_Statics::NewProp_Binding_MetaData) }; // 3662209599
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProxyTableContextProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProxyTableContextProperty_Statics::NewProp_Binding,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProxyTableContextProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProxyTable,
		Z_Construct_UScriptStruct_FChooserParameterProxyTableBase,
		&NewStructOps,
		"ProxyTableContextProperty",
		Z_Construct_UScriptStruct_FProxyTableContextProperty_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProxyTableContextProperty_Statics::PropPointers),
		sizeof(FProxyTableContextProperty),
		alignof(FProxyTableContextProperty),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProxyTableContextProperty_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProxyTableContextProperty_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProxyTableContextProperty_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FProxyTableContextProperty()
	{
		if (!Z_Registration_Info_UScriptStruct_ProxyTableContextProperty.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProxyTableContextProperty.InnerSingleton, Z_Construct_UScriptStruct_FProxyTableContextProperty_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProxyTableContextProperty.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLookupProxy>() == std::is_polymorphic<FObjectChooserBase>(), "USTRUCT FLookupProxy cannot be polymorphic unless super FObjectChooserBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LookupProxy;
class UScriptStruct* FLookupProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LookupProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LookupProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLookupProxy, (UObject*)Z_Construct_UPackage__Script_ProxyTable(), TEXT("LookupProxy"));
	}
	return Z_Registration_Info_UScriptStruct_LookupProxy.OuterSingleton;
}
template<> PROXYTABLE_API UScriptStruct* StaticStruct<FLookupProxy>()
{
	return FLookupProxy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLookupProxy_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProxyTable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProxyTable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLookupProxy_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Internal/LookupProxy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLookupProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLookupProxy>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLookupProxy_Statics::NewProp_Proxy_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/LookupProxy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLookupProxy_Statics::NewProp_Proxy = { "Proxy", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLookupProxy, Proxy), Z_Construct_UClass_UProxyAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLookupProxy_Statics::NewProp_Proxy_MetaData), Z_Construct_UScriptStruct_FLookupProxy_Statics::NewProp_Proxy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLookupProxy_Statics::NewProp_ProxyTable_MetaData[] = {
		{ "BaseStruct", "/Script/ProxyTable.ChooserParameterProxyTableBase" },
		{ "Category", "Parameters" },
		{ "ExcludeBaseStruct", "" },
		{ "ModuleRelativePath", "Internal/LookupProxy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLookupProxy_Statics::NewProp_ProxyTable = { "ProxyTable", nullptr, (EPropertyFlags)0x0010000002000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLookupProxy, ProxyTable), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLookupProxy_Statics::NewProp_ProxyTable_MetaData), Z_Construct_UScriptStruct_FLookupProxy_Statics::NewProp_ProxyTable_MetaData) }; // 2114042832
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLookupProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLookupProxy_Statics::NewProp_Proxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLookupProxy_Statics::NewProp_ProxyTable,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLookupProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProxyTable,
		Z_Construct_UScriptStruct_FObjectChooserBase,
		&NewStructOps,
		"LookupProxy",
		Z_Construct_UScriptStruct_FLookupProxy_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLookupProxy_Statics::PropPointers),
		sizeof(FLookupProxy),
		alignof(FLookupProxy),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLookupProxy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLookupProxy_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLookupProxy_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLookupProxy()
	{
		if (!Z_Registration_Info_UScriptStruct_LookupProxy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LookupProxy.InnerSingleton, Z_Construct_UScriptStruct_FLookupProxy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LookupProxy.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLookupProxyWithOverrideTable>() == std::is_polymorphic<FObjectChooserBase>(), "USTRUCT FLookupProxyWithOverrideTable cannot be polymorphic unless super FObjectChooserBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LookupProxyWithOverrideTable;
class UScriptStruct* FLookupProxyWithOverrideTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LookupProxyWithOverrideTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LookupProxyWithOverrideTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLookupProxyWithOverrideTable, (UObject*)Z_Construct_UPackage__Script_ProxyTable(), TEXT("LookupProxyWithOverrideTable"));
	}
	return Z_Registration_Info_UScriptStruct_LookupProxyWithOverrideTable.OuterSingleton;
}
template<> PROXYTABLE_API UScriptStruct* StaticStruct<FLookupProxyWithOverrideTable>()
{
	return FLookupProxyWithOverrideTable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLookupProxyWithOverrideTable_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideProxyTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OverrideProxyTable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLookupProxyWithOverrideTable_Statics::Struct_MetaDataParams[] = {
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Internal/LookupProxy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLookupProxyWithOverrideTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLookupProxyWithOverrideTable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLookupProxyWithOverrideTable_Statics::NewProp_Proxy_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/LookupProxy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLookupProxyWithOverrideTable_Statics::NewProp_Proxy = { "Proxy", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLookupProxyWithOverrideTable, Proxy), Z_Construct_UClass_UProxyAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLookupProxyWithOverrideTable_Statics::NewProp_Proxy_MetaData), Z_Construct_UScriptStruct_FLookupProxyWithOverrideTable_Statics::NewProp_Proxy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLookupProxyWithOverrideTable_Statics::NewProp_OverrideProxyTable_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/LookupProxy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLookupProxyWithOverrideTable_Statics::NewProp_OverrideProxyTable = { "OverrideProxyTable", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLookupProxyWithOverrideTable, OverrideProxyTable), Z_Construct_UClass_UProxyTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLookupProxyWithOverrideTable_Statics::NewProp_OverrideProxyTable_MetaData), Z_Construct_UScriptStruct_FLookupProxyWithOverrideTable_Statics::NewProp_OverrideProxyTable_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLookupProxyWithOverrideTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLookupProxyWithOverrideTable_Statics::NewProp_Proxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLookupProxyWithOverrideTable_Statics::NewProp_OverrideProxyTable,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLookupProxyWithOverrideTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProxyTable,
		Z_Construct_UScriptStruct_FObjectChooserBase,
		&NewStructOps,
		"LookupProxyWithOverrideTable",
		Z_Construct_UScriptStruct_FLookupProxyWithOverrideTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLookupProxyWithOverrideTable_Statics::PropPointers),
		sizeof(FLookupProxyWithOverrideTable),
		alignof(FLookupProxyWithOverrideTable),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLookupProxyWithOverrideTable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLookupProxyWithOverrideTable_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLookupProxyWithOverrideTable_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLookupProxyWithOverrideTable()
	{
		if (!Z_Registration_Info_UScriptStruct_LookupProxyWithOverrideTable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LookupProxyWithOverrideTable.InnerSingleton, Z_Construct_UScriptStruct_FLookupProxyWithOverrideTable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LookupProxyWithOverrideTable.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Internal_LookupProxy_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Internal_LookupProxy_h_Statics::ScriptStructInfo[] = {
		{ FProxyTableContextProperty::StaticStruct, Z_Construct_UScriptStruct_FProxyTableContextProperty_Statics::NewStructOps, TEXT("ProxyTableContextProperty"), &Z_Registration_Info_UScriptStruct_ProxyTableContextProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProxyTableContextProperty), 4105768360U) },
		{ FLookupProxy::StaticStruct, Z_Construct_UScriptStruct_FLookupProxy_Statics::NewStructOps, TEXT("LookupProxy"), &Z_Registration_Info_UScriptStruct_LookupProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLookupProxy), 617782754U) },
		{ FLookupProxyWithOverrideTable::StaticStruct, Z_Construct_UScriptStruct_FLookupProxyWithOverrideTable_Statics::NewStructOps, TEXT("LookupProxyWithOverrideTable"), &Z_Registration_Info_UScriptStruct_LookupProxyWithOverrideTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLookupProxyWithOverrideTable), 2154937091U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Internal_LookupProxy_h_2187857919(TEXT("/Script/ProxyTable"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Internal_LookupProxy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Internal_LookupProxy_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
