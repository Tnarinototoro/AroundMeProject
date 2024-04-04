// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TypedElementExportedTextWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementExportedTextWidget() {}
// Cross Module References
	TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementDataStorageFactory();
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementDataStorageTag();
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementWidgetConstructor();
	TYPEDELEMENTSDATASTORAGEUI_API UClass* Z_Construct_UClass_UTypedElementExportedTextWidgetFactory();
	TYPEDELEMENTSDATASTORAGEUI_API UClass* Z_Construct_UClass_UTypedElementExportedTextWidgetFactory_NoRegister();
	TYPEDELEMENTSDATASTORAGEUI_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementExportedTextWidgetConstructor();
	TYPEDELEMENTSDATASTORAGEUI_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementExportedTextWidgetTag();
	UPackage* Z_Construct_UPackage__Script_TypedElementsDataStorageUI();
// End Cross Module References
	void UTypedElementExportedTextWidgetFactory::StaticRegisterNativesUTypedElementExportedTextWidgetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementExportedTextWidgetFactory);
	UClass* Z_Construct_UClass_UTypedElementExportedTextWidgetFactory_NoRegister()
	{
		return UTypedElementExportedTextWidgetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementExportedTextWidgetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementExportedTextWidgetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTypedElementDataStorageFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorageUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementExportedTextWidgetFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementExportedTextWidgetFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TypedElementExportedTextWidget.h" },
		{ "ModuleRelativePath", "Public/TypedElementExportedTextWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementExportedTextWidgetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementExportedTextWidgetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementExportedTextWidgetFactory_Statics::ClassParams = {
		&UTypedElementExportedTextWidgetFactory::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementExportedTextWidgetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UTypedElementExportedTextWidgetFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTypedElementExportedTextWidgetFactory()
	{
		if (!Z_Registration_Info_UClass_UTypedElementExportedTextWidgetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementExportedTextWidgetFactory.OuterSingleton, Z_Construct_UClass_UTypedElementExportedTextWidgetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementExportedTextWidgetFactory.OuterSingleton;
	}
	template<> TYPEDELEMENTSDATASTORAGEUI_API UClass* StaticClass<UTypedElementExportedTextWidgetFactory>()
	{
		return UTypedElementExportedTextWidgetFactory::StaticClass();
	}
	UTypedElementExportedTextWidgetFactory::UTypedElementExportedTextWidgetFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementExportedTextWidgetFactory);

static_assert(std::is_polymorphic<FTypedElementExportedTextWidgetConstructor>() == std::is_polymorphic<FTypedElementWidgetConstructor>(), "USTRUCT FTypedElementExportedTextWidgetConstructor cannot be polymorphic unless super FTypedElementWidgetConstructor is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementExportedTextWidgetConstructor;
class UScriptStruct* FTypedElementExportedTextWidgetConstructor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementExportedTextWidgetConstructor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementExportedTextWidgetConstructor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementExportedTextWidgetConstructor, (UObject*)Z_Construct_UPackage__Script_TypedElementsDataStorageUI(), TEXT("TypedElementExportedTextWidgetConstructor"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementExportedTextWidgetConstructor.OuterSingleton;
}
template<> TYPEDELEMENTSDATASTORAGEUI_API UScriptStruct* StaticStruct<FTypedElementExportedTextWidgetConstructor>()
{
	return FTypedElementExportedTextWidgetConstructor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTypedElementExportedTextWidgetConstructor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypedElementExportedTextWidgetConstructor_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TypedElementExportedTextWidget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTypedElementExportedTextWidgetConstructor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementExportedTextWidgetConstructor>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementExportedTextWidgetConstructor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorageUI,
		Z_Construct_UScriptStruct_FTypedElementWidgetConstructor,
		&NewStructOps,
		"TypedElementExportedTextWidgetConstructor",
		nullptr,
		0,
		sizeof(FTypedElementExportedTextWidgetConstructor),
		alignof(FTypedElementExportedTextWidgetConstructor),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementExportedTextWidgetConstructor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementExportedTextWidgetConstructor_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTypedElementExportedTextWidgetConstructor()
	{
		if (!Z_Registration_Info_UScriptStruct_TypedElementExportedTextWidgetConstructor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementExportedTextWidgetConstructor.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementExportedTextWidgetConstructor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TypedElementExportedTextWidgetConstructor.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTypedElementExportedTextWidgetTag>() == std::is_polymorphic<FTypedElementDataStorageTag>(), "USTRUCT FTypedElementExportedTextWidgetTag cannot be polymorphic unless super FTypedElementDataStorageTag is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementExportedTextWidgetTag;
class UScriptStruct* FTypedElementExportedTextWidgetTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementExportedTextWidgetTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementExportedTextWidgetTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementExportedTextWidgetTag, (UObject*)Z_Construct_UPackage__Script_TypedElementsDataStorageUI(), TEXT("TypedElementExportedTextWidgetTag"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementExportedTextWidgetTag.OuterSingleton;
}
template<> TYPEDELEMENTSDATASTORAGEUI_API UScriptStruct* StaticStruct<FTypedElementExportedTextWidgetTag>()
{
	return FTypedElementExportedTextWidgetTag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTypedElementExportedTextWidgetTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypedElementExportedTextWidgetTag_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "Exported text widget" },
		{ "ModuleRelativePath", "Public/TypedElementExportedTextWidget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTypedElementExportedTextWidgetTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementExportedTextWidgetTag>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementExportedTextWidgetTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorageUI,
		Z_Construct_UScriptStruct_FTypedElementDataStorageTag,
		&NewStructOps,
		"TypedElementExportedTextWidgetTag",
		nullptr,
		0,
		sizeof(FTypedElementExportedTextWidgetTag),
		alignof(FTypedElementExportedTextWidgetTag),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementExportedTextWidgetTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementExportedTextWidgetTag_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTypedElementExportedTextWidgetTag()
	{
		if (!Z_Registration_Info_UScriptStruct_TypedElementExportedTextWidgetTag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementExportedTextWidgetTag.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementExportedTextWidgetTag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TypedElementExportedTextWidgetTag.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Public_TypedElementExportedTextWidget_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Public_TypedElementExportedTextWidget_h_Statics::ScriptStructInfo[] = {
		{ FTypedElementExportedTextWidgetConstructor::StaticStruct, Z_Construct_UScriptStruct_FTypedElementExportedTextWidgetConstructor_Statics::NewStructOps, TEXT("TypedElementExportedTextWidgetConstructor"), &Z_Registration_Info_UScriptStruct_TypedElementExportedTextWidgetConstructor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementExportedTextWidgetConstructor), 186183459U) },
		{ FTypedElementExportedTextWidgetTag::StaticStruct, Z_Construct_UScriptStruct_FTypedElementExportedTextWidgetTag_Statics::NewStructOps, TEXT("TypedElementExportedTextWidgetTag"), &Z_Registration_Info_UScriptStruct_TypedElementExportedTextWidgetTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementExportedTextWidgetTag), 1898886335U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Public_TypedElementExportedTextWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementExportedTextWidgetFactory, UTypedElementExportedTextWidgetFactory::StaticClass, TEXT("UTypedElementExportedTextWidgetFactory"), &Z_Registration_Info_UClass_UTypedElementExportedTextWidgetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementExportedTextWidgetFactory), 3963623229U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Public_TypedElementExportedTextWidget_h_3917394399(TEXT("/Script/TypedElementsDataStorageUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Public_TypedElementExportedTextWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Public_TypedElementExportedTextWidget_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Public_TypedElementExportedTextWidget_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Public_TypedElementExportedTextWidget_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
