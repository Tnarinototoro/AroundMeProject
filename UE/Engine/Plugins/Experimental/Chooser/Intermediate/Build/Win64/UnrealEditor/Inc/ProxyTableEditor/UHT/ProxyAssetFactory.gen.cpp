// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProxyAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProxyAssetFactory() {}
// Cross Module References
	PROXYTABLEEDITOR_API UClass* Z_Construct_UClass_UProxyAssetFactory();
	PROXYTABLEEDITOR_API UClass* Z_Construct_UClass_UProxyAssetFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_ProxyTableEditor();
// End Cross Module References
	void UProxyAssetFactory::StaticRegisterNativesUProxyAssetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProxyAssetFactory);
	UClass* Z_Construct_UClass_UProxyAssetFactory_NoRegister()
	{
		return UProxyAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UProxyAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProxyAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_ProxyTableEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProxyAssetFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProxyAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProxyAssetFactory.h" },
		{ "ModuleRelativePath", "Private/ProxyAssetFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProxyAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProxyAssetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProxyAssetFactory_Statics::ClassParams = {
		&UProxyAssetFactory::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProxyAssetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UProxyAssetFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UProxyAssetFactory()
	{
		if (!Z_Registration_Info_UClass_UProxyAssetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProxyAssetFactory.OuterSingleton, Z_Construct_UClass_UProxyAssetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProxyAssetFactory.OuterSingleton;
	}
	template<> PROXYTABLEEDITOR_API UClass* StaticClass<UProxyAssetFactory>()
	{
		return UProxyAssetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProxyAssetFactory);
	UProxyAssetFactory::~UProxyAssetFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTableEditor_Private_ProxyAssetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTableEditor_Private_ProxyAssetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProxyAssetFactory, UProxyAssetFactory::StaticClass, TEXT("UProxyAssetFactory"), &Z_Registration_Info_UClass_UProxyAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProxyAssetFactory), 3656333234U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTableEditor_Private_ProxyAssetFactory_h_625847840(TEXT("/Script/ProxyTableEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTableEditor_Private_ProxyAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTableEditor_Private_ProxyAssetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
