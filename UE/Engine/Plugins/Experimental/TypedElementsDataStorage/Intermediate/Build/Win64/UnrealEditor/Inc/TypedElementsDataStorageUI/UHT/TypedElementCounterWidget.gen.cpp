// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TypedElementCounterWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementCounterWidget() {}
// Cross Module References
	TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementDataStorageFactory();
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementDataStorageColumn();
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementWidgetConstructor();
	TYPEDELEMENTSDATASTORAGEUI_API UClass* Z_Construct_UClass_UTypedElementCounterWidgetFactory();
	TYPEDELEMENTSDATASTORAGEUI_API UClass* Z_Construct_UClass_UTypedElementCounterWidgetFactory_NoRegister();
	TYPEDELEMENTSDATASTORAGEUI_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementCounterWidgetColumn();
	TYPEDELEMENTSDATASTORAGEUI_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementCounterWidgetConstructor();
	UPackage* Z_Construct_UPackage__Script_TypedElementsDataStorageUI();
// End Cross Module References
	void UTypedElementCounterWidgetFactory::StaticRegisterNativesUTypedElementCounterWidgetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementCounterWidgetFactory);
	UClass* Z_Construct_UClass_UTypedElementCounterWidgetFactory_NoRegister()
	{
		return UTypedElementCounterWidgetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementCounterWidgetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementCounterWidgetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTypedElementDataStorageFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorageUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementCounterWidgetFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementCounterWidgetFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TypedElementCounterWidget.h" },
		{ "ModuleRelativePath", "Public/TypedElementCounterWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementCounterWidgetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementCounterWidgetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementCounterWidgetFactory_Statics::ClassParams = {
		&UTypedElementCounterWidgetFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementCounterWidgetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UTypedElementCounterWidgetFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTypedElementCounterWidgetFactory()
	{
		if (!Z_Registration_Info_UClass_UTypedElementCounterWidgetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementCounterWidgetFactory.OuterSingleton, Z_Construct_UClass_UTypedElementCounterWidgetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementCounterWidgetFactory.OuterSingleton;
	}
	template<> TYPEDELEMENTSDATASTORAGEUI_API UClass* StaticClass<UTypedElementCounterWidgetFactory>()
	{
		return UTypedElementCounterWidgetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementCounterWidgetFactory);

static_assert(std::is_polymorphic<FTypedElementCounterWidgetConstructor>() == std::is_polymorphic<FTypedElementWidgetConstructor>(), "USTRUCT FTypedElementCounterWidgetConstructor cannot be polymorphic unless super FTypedElementWidgetConstructor is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementCounterWidgetConstructor;
class UScriptStruct* FTypedElementCounterWidgetConstructor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementCounterWidgetConstructor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementCounterWidgetConstructor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementCounterWidgetConstructor, (UObject*)Z_Construct_UPackage__Script_TypedElementsDataStorageUI(), TEXT("TypedElementCounterWidgetConstructor"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementCounterWidgetConstructor.OuterSingleton;
}
template<> TYPEDELEMENTSDATASTORAGEUI_API UScriptStruct* StaticStruct<FTypedElementCounterWidgetConstructor>()
{
	return FTypedElementCounterWidgetConstructor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTypedElementCounterWidgetConstructor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypedElementCounterWidgetConstructor_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Constructor for the counter widget. The counter widget accepts a \"count\"-query. The query will be periodically\n * run and the result is written to a textbox widget after it's been formatted using LabelText. An example for \n * LabelText is \"{0} {0}|plural(one=MyCounter, other=MyCounters)\" which will use \"MyCounter\" if there's exactly one\n * entry found and otherwise \"MyCounters\".\n */" },
		{ "ModuleRelativePath", "Public/TypedElementCounterWidget.h" },
		{ "ToolTip", "Constructor for the counter widget. The counter widget accepts a \"count\"-query. The query will be periodically\nrun and the result is written to a textbox widget after it's been formatted using LabelText. An example for\nLabelText is \"{0} {0}|plural(one=MyCounter, other=MyCounters)\" which will use \"MyCounter\" if there's exactly one\nentry found and otherwise \"MyCounters\"." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTypedElementCounterWidgetConstructor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementCounterWidgetConstructor>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementCounterWidgetConstructor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorageUI,
		Z_Construct_UScriptStruct_FTypedElementWidgetConstructor,
		&NewStructOps,
		"TypedElementCounterWidgetConstructor",
		nullptr,
		0,
		sizeof(FTypedElementCounterWidgetConstructor),
		alignof(FTypedElementCounterWidgetConstructor),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementCounterWidgetConstructor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementCounterWidgetConstructor_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTypedElementCounterWidgetConstructor()
	{
		if (!Z_Registration_Info_UScriptStruct_TypedElementCounterWidgetConstructor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementCounterWidgetConstructor.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementCounterWidgetConstructor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TypedElementCounterWidgetConstructor.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTypedElementCounterWidgetColumn>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FTypedElementCounterWidgetColumn cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementCounterWidgetColumn;
class UScriptStruct* FTypedElementCounterWidgetColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementCounterWidgetColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementCounterWidgetColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementCounterWidgetColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementsDataStorageUI(), TEXT("TypedElementCounterWidgetColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementCounterWidgetColumn.OuterSingleton;
}
template<> TYPEDELEMENTSDATASTORAGEUI_API UScriptStruct* StaticStruct<FTypedElementCounterWidgetColumn>()
{
	return FTypedElementCounterWidgetColumn::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTypedElementCounterWidgetColumn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypedElementCounterWidgetColumn_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "Counter widget" },
		{ "ModuleRelativePath", "Public/TypedElementCounterWidget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTypedElementCounterWidgetColumn_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementCounterWidgetColumn>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementCounterWidgetColumn_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorageUI,
		Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
		&NewStructOps,
		"TypedElementCounterWidgetColumn",
		nullptr,
		0,
		sizeof(FTypedElementCounterWidgetColumn),
		alignof(FTypedElementCounterWidgetColumn),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementCounterWidgetColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementCounterWidgetColumn_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTypedElementCounterWidgetColumn()
	{
		if (!Z_Registration_Info_UScriptStruct_TypedElementCounterWidgetColumn.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementCounterWidgetColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementCounterWidgetColumn_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TypedElementCounterWidgetColumn.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Public_TypedElementCounterWidget_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Public_TypedElementCounterWidget_h_Statics::ScriptStructInfo[] = {
		{ FTypedElementCounterWidgetConstructor::StaticStruct, Z_Construct_UScriptStruct_FTypedElementCounterWidgetConstructor_Statics::NewStructOps, TEXT("TypedElementCounterWidgetConstructor"), &Z_Registration_Info_UScriptStruct_TypedElementCounterWidgetConstructor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementCounterWidgetConstructor), 198993818U) },
		{ FTypedElementCounterWidgetColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementCounterWidgetColumn_Statics::NewStructOps, TEXT("TypedElementCounterWidgetColumn"), &Z_Registration_Info_UScriptStruct_TypedElementCounterWidgetColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementCounterWidgetColumn), 885081009U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Public_TypedElementCounterWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementCounterWidgetFactory, UTypedElementCounterWidgetFactory::StaticClass, TEXT("UTypedElementCounterWidgetFactory"), &Z_Registration_Info_UClass_UTypedElementCounterWidgetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementCounterWidgetFactory), 1355328843U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Public_TypedElementCounterWidget_h_2345859431(TEXT("/Script/TypedElementsDataStorageUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Public_TypedElementCounterWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Public_TypedElementCounterWidget_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Public_TypedElementCounterWidget_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Public_TypedElementCounterWidget_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
