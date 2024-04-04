// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TypedElementTransformHeadsUpWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementTransformHeadsUpWidget() {}
// Cross Module References
	TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementDataStorageFactory();
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementDataStorageTag();
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementWidgetConstructor();
	TYPEDELEMENTSDATASTORAGEUI_API UClass* Z_Construct_UClass_UTypedElementTransformHeadsUpWidgetFactory();
	TYPEDELEMENTSDATASTORAGEUI_API UClass* Z_Construct_UClass_UTypedElementTransformHeadsUpWidgetFactory_NoRegister();
	TYPEDELEMENTSDATASTORAGEUI_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementTransformHeadsUpWidgetConstructor();
	TYPEDELEMENTSDATASTORAGEUI_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementTransformHeadsUpWidgetTag();
	UPackage* Z_Construct_UPackage__Script_TypedElementsDataStorageUI();
// End Cross Module References
	void UTypedElementTransformHeadsUpWidgetFactory::StaticRegisterNativesUTypedElementTransformHeadsUpWidgetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementTransformHeadsUpWidgetFactory);
	UClass* Z_Construct_UClass_UTypedElementTransformHeadsUpWidgetFactory_NoRegister()
	{
		return UTypedElementTransformHeadsUpWidgetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementTransformHeadsUpWidgetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementTransformHeadsUpWidgetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTypedElementDataStorageFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorageUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementTransformHeadsUpWidgetFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementTransformHeadsUpWidgetFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The heads up transform display provides at a glance view in a scene outliner row of abnormal transform characteristics, including:\n *\x09\x09""1. Non-uniform scale\n *\x09\x09""2. Negative scaling on X, Y, or Z axis\n *\x09\x09""3. Unnormalized rotation\n */" },
		{ "IncludePath", "TypedElementTransformHeadsUpWidget.h" },
		{ "ModuleRelativePath", "Public/TypedElementTransformHeadsUpWidget.h" },
		{ "ToolTip", "The heads up transform display provides at a glance view in a scene outliner row of abnormal transform characteristics, including:\n            1. Non-uniform scale\n            2. Negative scaling on X, Y, or Z axis\n            3. Unnormalized rotation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementTransformHeadsUpWidgetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementTransformHeadsUpWidgetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementTransformHeadsUpWidgetFactory_Statics::ClassParams = {
		&UTypedElementTransformHeadsUpWidgetFactory::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementTransformHeadsUpWidgetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UTypedElementTransformHeadsUpWidgetFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTypedElementTransformHeadsUpWidgetFactory()
	{
		if (!Z_Registration_Info_UClass_UTypedElementTransformHeadsUpWidgetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementTransformHeadsUpWidgetFactory.OuterSingleton, Z_Construct_UClass_UTypedElementTransformHeadsUpWidgetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementTransformHeadsUpWidgetFactory.OuterSingleton;
	}
	template<> TYPEDELEMENTSDATASTORAGEUI_API UClass* StaticClass<UTypedElementTransformHeadsUpWidgetFactory>()
	{
		return UTypedElementTransformHeadsUpWidgetFactory::StaticClass();
	}
	UTypedElementTransformHeadsUpWidgetFactory::UTypedElementTransformHeadsUpWidgetFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementTransformHeadsUpWidgetFactory);

static_assert(std::is_polymorphic<FTypedElementTransformHeadsUpWidgetConstructor>() == std::is_polymorphic<FTypedElementWidgetConstructor>(), "USTRUCT FTypedElementTransformHeadsUpWidgetConstructor cannot be polymorphic unless super FTypedElementWidgetConstructor is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementTransformHeadsUpWidgetConstructor;
class UScriptStruct* FTypedElementTransformHeadsUpWidgetConstructor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementTransformHeadsUpWidgetConstructor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementTransformHeadsUpWidgetConstructor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementTransformHeadsUpWidgetConstructor, (UObject*)Z_Construct_UPackage__Script_TypedElementsDataStorageUI(), TEXT("TypedElementTransformHeadsUpWidgetConstructor"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementTransformHeadsUpWidgetConstructor.OuterSingleton;
}
template<> TYPEDELEMENTSDATASTORAGEUI_API UScriptStruct* StaticStruct<FTypedElementTransformHeadsUpWidgetConstructor>()
{
	return FTypedElementTransformHeadsUpWidgetConstructor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTypedElementTransformHeadsUpWidgetConstructor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypedElementTransformHeadsUpWidgetConstructor_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TypedElementTransformHeadsUpWidget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTypedElementTransformHeadsUpWidgetConstructor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementTransformHeadsUpWidgetConstructor>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementTransformHeadsUpWidgetConstructor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorageUI,
		Z_Construct_UScriptStruct_FTypedElementWidgetConstructor,
		&NewStructOps,
		"TypedElementTransformHeadsUpWidgetConstructor",
		nullptr,
		0,
		sizeof(FTypedElementTransformHeadsUpWidgetConstructor),
		alignof(FTypedElementTransformHeadsUpWidgetConstructor),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementTransformHeadsUpWidgetConstructor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementTransformHeadsUpWidgetConstructor_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTypedElementTransformHeadsUpWidgetConstructor()
	{
		if (!Z_Registration_Info_UScriptStruct_TypedElementTransformHeadsUpWidgetConstructor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementTransformHeadsUpWidgetConstructor.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementTransformHeadsUpWidgetConstructor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TypedElementTransformHeadsUpWidgetConstructor.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTypedElementTransformHeadsUpWidgetTag>() == std::is_polymorphic<FTypedElementDataStorageTag>(), "USTRUCT FTypedElementTransformHeadsUpWidgetTag cannot be polymorphic unless super FTypedElementDataStorageTag is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementTransformHeadsUpWidgetTag;
class UScriptStruct* FTypedElementTransformHeadsUpWidgetTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementTransformHeadsUpWidgetTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementTransformHeadsUpWidgetTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementTransformHeadsUpWidgetTag, (UObject*)Z_Construct_UPackage__Script_TypedElementsDataStorageUI(), TEXT("TypedElementTransformHeadsUpWidgetTag"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementTransformHeadsUpWidgetTag.OuterSingleton;
}
template<> TYPEDELEMENTSDATASTORAGEUI_API UScriptStruct* StaticStruct<FTypedElementTransformHeadsUpWidgetTag>()
{
	return FTypedElementTransformHeadsUpWidgetTag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTypedElementTransformHeadsUpWidgetTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypedElementTransformHeadsUpWidgetTag_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "Heads up display for transforms widget" },
		{ "ModuleRelativePath", "Public/TypedElementTransformHeadsUpWidget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTypedElementTransformHeadsUpWidgetTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementTransformHeadsUpWidgetTag>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementTransformHeadsUpWidgetTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorageUI,
		Z_Construct_UScriptStruct_FTypedElementDataStorageTag,
		&NewStructOps,
		"TypedElementTransformHeadsUpWidgetTag",
		nullptr,
		0,
		sizeof(FTypedElementTransformHeadsUpWidgetTag),
		alignof(FTypedElementTransformHeadsUpWidgetTag),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementTransformHeadsUpWidgetTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementTransformHeadsUpWidgetTag_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTypedElementTransformHeadsUpWidgetTag()
	{
		if (!Z_Registration_Info_UScriptStruct_TypedElementTransformHeadsUpWidgetTag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementTransformHeadsUpWidgetTag.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementTransformHeadsUpWidgetTag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TypedElementTransformHeadsUpWidgetTag.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Public_TypedElementTransformHeadsUpWidget_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Public_TypedElementTransformHeadsUpWidget_h_Statics::ScriptStructInfo[] = {
		{ FTypedElementTransformHeadsUpWidgetConstructor::StaticStruct, Z_Construct_UScriptStruct_FTypedElementTransformHeadsUpWidgetConstructor_Statics::NewStructOps, TEXT("TypedElementTransformHeadsUpWidgetConstructor"), &Z_Registration_Info_UScriptStruct_TypedElementTransformHeadsUpWidgetConstructor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementTransformHeadsUpWidgetConstructor), 431292342U) },
		{ FTypedElementTransformHeadsUpWidgetTag::StaticStruct, Z_Construct_UScriptStruct_FTypedElementTransformHeadsUpWidgetTag_Statics::NewStructOps, TEXT("TypedElementTransformHeadsUpWidgetTag"), &Z_Registration_Info_UScriptStruct_TypedElementTransformHeadsUpWidgetTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementTransformHeadsUpWidgetTag), 95538916U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Public_TypedElementTransformHeadsUpWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementTransformHeadsUpWidgetFactory, UTypedElementTransformHeadsUpWidgetFactory::StaticClass, TEXT("UTypedElementTransformHeadsUpWidgetFactory"), &Z_Registration_Info_UClass_UTypedElementTransformHeadsUpWidgetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementTransformHeadsUpWidgetFactory), 1564465093U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Public_TypedElementTransformHeadsUpWidget_h_3191673675(TEXT("/Script/TypedElementsDataStorageUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Public_TypedElementTransformHeadsUpWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Public_TypedElementTransformHeadsUpWidget_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Public_TypedElementTransformHeadsUpWidget_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Public_TypedElementTransformHeadsUpWidget_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
