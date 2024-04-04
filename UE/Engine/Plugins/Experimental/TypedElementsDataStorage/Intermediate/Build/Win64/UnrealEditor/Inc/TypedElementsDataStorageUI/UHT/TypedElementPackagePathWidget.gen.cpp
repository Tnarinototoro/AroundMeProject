// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TypedElementPackagePathWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementPackagePathWidget() {}
// Cross Module References
	TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementDataStorageFactory();
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementWidgetConstructor();
	TYPEDELEMENTSDATASTORAGEUI_API UClass* Z_Construct_UClass_UTypedElementPackagePathWidgetFactory();
	TYPEDELEMENTSDATASTORAGEUI_API UClass* Z_Construct_UClass_UTypedElementPackagePathWidgetFactory_NoRegister();
	TYPEDELEMENTSDATASTORAGEUI_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementLoadedPackagePathWidgetConstructor();
	TYPEDELEMENTSDATASTORAGEUI_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementPackagePathWidgetConstructor();
	UPackage* Z_Construct_UPackage__Script_TypedElementsDataStorageUI();
// End Cross Module References
	void UTypedElementPackagePathWidgetFactory::StaticRegisterNativesUTypedElementPackagePathWidgetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementPackagePathWidgetFactory);
	UClass* Z_Construct_UClass_UTypedElementPackagePathWidgetFactory_NoRegister()
	{
		return UTypedElementPackagePathWidgetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementPackagePathWidgetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementPackagePathWidgetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTypedElementDataStorageFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorageUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementPackagePathWidgetFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementPackagePathWidgetFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TypedElementPackagePathWidget.h" },
		{ "ModuleRelativePath", "Public/TypedElementPackagePathWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementPackagePathWidgetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementPackagePathWidgetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementPackagePathWidgetFactory_Statics::ClassParams = {
		&UTypedElementPackagePathWidgetFactory::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementPackagePathWidgetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UTypedElementPackagePathWidgetFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTypedElementPackagePathWidgetFactory()
	{
		if (!Z_Registration_Info_UClass_UTypedElementPackagePathWidgetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementPackagePathWidgetFactory.OuterSingleton, Z_Construct_UClass_UTypedElementPackagePathWidgetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementPackagePathWidgetFactory.OuterSingleton;
	}
	template<> TYPEDELEMENTSDATASTORAGEUI_API UClass* StaticClass<UTypedElementPackagePathWidgetFactory>()
	{
		return UTypedElementPackagePathWidgetFactory::StaticClass();
	}
	UTypedElementPackagePathWidgetFactory::UTypedElementPackagePathWidgetFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementPackagePathWidgetFactory);

static_assert(std::is_polymorphic<FTypedElementPackagePathWidgetConstructor>() == std::is_polymorphic<FTypedElementWidgetConstructor>(), "USTRUCT FTypedElementPackagePathWidgetConstructor cannot be polymorphic unless super FTypedElementWidgetConstructor is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementPackagePathWidgetConstructor;
class UScriptStruct* FTypedElementPackagePathWidgetConstructor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementPackagePathWidgetConstructor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementPackagePathWidgetConstructor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementPackagePathWidgetConstructor, (UObject*)Z_Construct_UPackage__Script_TypedElementsDataStorageUI(), TEXT("TypedElementPackagePathWidgetConstructor"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementPackagePathWidgetConstructor.OuterSingleton;
}
template<> TYPEDELEMENTSDATASTORAGEUI_API UScriptStruct* StaticStruct<FTypedElementPackagePathWidgetConstructor>()
{
	return FTypedElementPackagePathWidgetConstructor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTypedElementPackagePathWidgetConstructor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypedElementPackagePathWidgetConstructor_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TypedElementPackagePathWidget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTypedElementPackagePathWidgetConstructor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementPackagePathWidgetConstructor>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementPackagePathWidgetConstructor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorageUI,
		Z_Construct_UScriptStruct_FTypedElementWidgetConstructor,
		&NewStructOps,
		"TypedElementPackagePathWidgetConstructor",
		nullptr,
		0,
		sizeof(FTypedElementPackagePathWidgetConstructor),
		alignof(FTypedElementPackagePathWidgetConstructor),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementPackagePathWidgetConstructor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementPackagePathWidgetConstructor_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTypedElementPackagePathWidgetConstructor()
	{
		if (!Z_Registration_Info_UScriptStruct_TypedElementPackagePathWidgetConstructor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementPackagePathWidgetConstructor.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementPackagePathWidgetConstructor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TypedElementPackagePathWidgetConstructor.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTypedElementLoadedPackagePathWidgetConstructor>() == std::is_polymorphic<FTypedElementPackagePathWidgetConstructor>(), "USTRUCT FTypedElementLoadedPackagePathWidgetConstructor cannot be polymorphic unless super FTypedElementPackagePathWidgetConstructor is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementLoadedPackagePathWidgetConstructor;
class UScriptStruct* FTypedElementLoadedPackagePathWidgetConstructor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementLoadedPackagePathWidgetConstructor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementLoadedPackagePathWidgetConstructor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementLoadedPackagePathWidgetConstructor, (UObject*)Z_Construct_UPackage__Script_TypedElementsDataStorageUI(), TEXT("TypedElementLoadedPackagePathWidgetConstructor"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementLoadedPackagePathWidgetConstructor.OuterSingleton;
}
template<> TYPEDELEMENTSDATASTORAGEUI_API UScriptStruct* StaticStruct<FTypedElementLoadedPackagePathWidgetConstructor>()
{
	return FTypedElementLoadedPackagePathWidgetConstructor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTypedElementLoadedPackagePathWidgetConstructor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypedElementLoadedPackagePathWidgetConstructor_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TypedElementPackagePathWidget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTypedElementLoadedPackagePathWidgetConstructor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementLoadedPackagePathWidgetConstructor>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementLoadedPackagePathWidgetConstructor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorageUI,
		Z_Construct_UScriptStruct_FTypedElementPackagePathWidgetConstructor,
		&NewStructOps,
		"TypedElementLoadedPackagePathWidgetConstructor",
		nullptr,
		0,
		sizeof(FTypedElementLoadedPackagePathWidgetConstructor),
		alignof(FTypedElementLoadedPackagePathWidgetConstructor),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementLoadedPackagePathWidgetConstructor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementLoadedPackagePathWidgetConstructor_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTypedElementLoadedPackagePathWidgetConstructor()
	{
		if (!Z_Registration_Info_UScriptStruct_TypedElementLoadedPackagePathWidgetConstructor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementLoadedPackagePathWidgetConstructor.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementLoadedPackagePathWidgetConstructor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TypedElementLoadedPackagePathWidgetConstructor.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Public_TypedElementPackagePathWidget_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Public_TypedElementPackagePathWidget_h_Statics::ScriptStructInfo[] = {
		{ FTypedElementPackagePathWidgetConstructor::StaticStruct, Z_Construct_UScriptStruct_FTypedElementPackagePathWidgetConstructor_Statics::NewStructOps, TEXT("TypedElementPackagePathWidgetConstructor"), &Z_Registration_Info_UScriptStruct_TypedElementPackagePathWidgetConstructor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementPackagePathWidgetConstructor), 4033098673U) },
		{ FTypedElementLoadedPackagePathWidgetConstructor::StaticStruct, Z_Construct_UScriptStruct_FTypedElementLoadedPackagePathWidgetConstructor_Statics::NewStructOps, TEXT("TypedElementLoadedPackagePathWidgetConstructor"), &Z_Registration_Info_UScriptStruct_TypedElementLoadedPackagePathWidgetConstructor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementLoadedPackagePathWidgetConstructor), 1021193422U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Public_TypedElementPackagePathWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementPackagePathWidgetFactory, UTypedElementPackagePathWidgetFactory::StaticClass, TEXT("UTypedElementPackagePathWidgetFactory"), &Z_Registration_Info_UClass_UTypedElementPackagePathWidgetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementPackagePathWidgetFactory), 2385536139U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Public_TypedElementPackagePathWidget_h_2296139263(TEXT("/Script/TypedElementsDataStorageUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Public_TypedElementPackagePathWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Public_TypedElementPackagePathWidget_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Public_TypedElementPackagePathWidget_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Public_TypedElementPackagePathWidget_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
