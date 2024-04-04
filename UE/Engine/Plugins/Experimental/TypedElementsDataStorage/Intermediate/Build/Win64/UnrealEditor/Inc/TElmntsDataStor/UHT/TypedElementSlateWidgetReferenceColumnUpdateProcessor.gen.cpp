// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/UI/TypedElementSlateWidgetReferenceColumnUpdateProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementSlateWidgetReferenceColumnUpdateProcessor() {}
// Cross Module References
	TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementDataStorageFactory();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementSlateWidgetReferenceColumnUpdateFactory();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementSlateWidgetReferenceColumnUpdateFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TypedElementsDataStorage();
// End Cross Module References
	void UTypedElementSlateWidgetReferenceColumnUpdateFactory::StaticRegisterNativesUTypedElementSlateWidgetReferenceColumnUpdateFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementSlateWidgetReferenceColumnUpdateFactory);
	UClass* Z_Construct_UClass_UTypedElementSlateWidgetReferenceColumnUpdateFactory_NoRegister()
	{
		return UTypedElementSlateWidgetReferenceColumnUpdateFactory::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementSlateWidgetReferenceColumnUpdateFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementSlateWidgetReferenceColumnUpdateFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTypedElementDataStorageFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorage,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementSlateWidgetReferenceColumnUpdateFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementSlateWidgetReferenceColumnUpdateFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Queries that check whether or not a widget still exists. If it has been deleted\n * then it will remove the column from the Data Storage or deletes the entire row if\n * the FTypedElementSlateWidgetReferenceDeletesRowTag was found.\n */" },
		{ "IncludePath", "UI/TypedElementSlateWidgetReferenceColumnUpdateProcessor.h" },
		{ "ModuleRelativePath", "Private/UI/TypedElementSlateWidgetReferenceColumnUpdateProcessor.h" },
		{ "ToolTip", "Queries that check whether or not a widget still exists. If it has been deleted\nthen it will remove the column from the Data Storage or deletes the entire row if\nthe FTypedElementSlateWidgetReferenceDeletesRowTag was found." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementSlateWidgetReferenceColumnUpdateFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementSlateWidgetReferenceColumnUpdateFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementSlateWidgetReferenceColumnUpdateFactory_Statics::ClassParams = {
		&UTypedElementSlateWidgetReferenceColumnUpdateFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementSlateWidgetReferenceColumnUpdateFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UTypedElementSlateWidgetReferenceColumnUpdateFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTypedElementSlateWidgetReferenceColumnUpdateFactory()
	{
		if (!Z_Registration_Info_UClass_UTypedElementSlateWidgetReferenceColumnUpdateFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementSlateWidgetReferenceColumnUpdateFactory.OuterSingleton, Z_Construct_UClass_UTypedElementSlateWidgetReferenceColumnUpdateFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementSlateWidgetReferenceColumnUpdateFactory.OuterSingleton;
	}
	template<> TYPEDELEMENTSDATASTORAGE_API UClass* StaticClass<UTypedElementSlateWidgetReferenceColumnUpdateFactory>()
	{
		return UTypedElementSlateWidgetReferenceColumnUpdateFactory::StaticClass();
	}
	UTypedElementSlateWidgetReferenceColumnUpdateFactory::UTypedElementSlateWidgetReferenceColumnUpdateFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementSlateWidgetReferenceColumnUpdateFactory);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_UI_TypedElementSlateWidgetReferenceColumnUpdateProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_UI_TypedElementSlateWidgetReferenceColumnUpdateProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementSlateWidgetReferenceColumnUpdateFactory, UTypedElementSlateWidgetReferenceColumnUpdateFactory::StaticClass, TEXT("UTypedElementSlateWidgetReferenceColumnUpdateFactory"), &Z_Registration_Info_UClass_UTypedElementSlateWidgetReferenceColumnUpdateFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementSlateWidgetReferenceColumnUpdateFactory), 1252429109U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_UI_TypedElementSlateWidgetReferenceColumnUpdateProcessor_h_235237841(TEXT("/Script/TypedElementsDataStorage"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_UI_TypedElementSlateWidgetReferenceColumnUpdateProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_UI_TypedElementSlateWidgetReferenceColumnUpdateProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
