// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TypedElementSceneOutliner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementSceneOutliner() {}
// Cross Module References
	TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementDataStorageFactory();
	TYPEDELEMENTSDATASTORAGEUI_API UClass* Z_Construct_UClass_UTypedElementSceneOutlinerFactory();
	TYPEDELEMENTSDATASTORAGEUI_API UClass* Z_Construct_UClass_UTypedElementSceneOutlinerFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TypedElementsDataStorageUI();
// End Cross Module References
	void UTypedElementSceneOutlinerFactory::StaticRegisterNativesUTypedElementSceneOutlinerFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementSceneOutlinerFactory);
	UClass* Z_Construct_UClass_UTypedElementSceneOutlinerFactory_NoRegister()
	{
		return UTypedElementSceneOutlinerFactory::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementSceneOutlinerFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementSceneOutlinerFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTypedElementDataStorageFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorageUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementSceneOutlinerFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementSceneOutlinerFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TypedElementSceneOutliner.h" },
		{ "ModuleRelativePath", "Public/TypedElementSceneOutliner.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementSceneOutlinerFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementSceneOutlinerFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementSceneOutlinerFactory_Statics::ClassParams = {
		&UTypedElementSceneOutlinerFactory::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementSceneOutlinerFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UTypedElementSceneOutlinerFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTypedElementSceneOutlinerFactory()
	{
		if (!Z_Registration_Info_UClass_UTypedElementSceneOutlinerFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementSceneOutlinerFactory.OuterSingleton, Z_Construct_UClass_UTypedElementSceneOutlinerFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementSceneOutlinerFactory.OuterSingleton;
	}
	template<> TYPEDELEMENTSDATASTORAGEUI_API UClass* StaticClass<UTypedElementSceneOutlinerFactory>()
	{
		return UTypedElementSceneOutlinerFactory::StaticClass();
	}
	UTypedElementSceneOutlinerFactory::UTypedElementSceneOutlinerFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementSceneOutlinerFactory);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Public_TypedElementSceneOutliner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Public_TypedElementSceneOutliner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementSceneOutlinerFactory, UTypedElementSceneOutlinerFactory::StaticClass, TEXT("UTypedElementSceneOutlinerFactory"), &Z_Registration_Info_UClass_UTypedElementSceneOutlinerFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementSceneOutlinerFactory), 1296025591U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Public_TypedElementSceneOutliner_h_1881321302(TEXT("/Script/TypedElementsDataStorageUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Public_TypedElementSceneOutliner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Public_TypedElementSceneOutliner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
