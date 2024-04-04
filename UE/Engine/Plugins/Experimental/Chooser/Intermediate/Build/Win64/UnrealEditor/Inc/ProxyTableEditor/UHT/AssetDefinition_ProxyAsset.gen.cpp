// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetDefinition_ProxyAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_ProxyAsset() {}
// Cross Module References
	PROXYTABLEEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_ProxyAsset();
	PROXYTABLEEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_ProxyAsset_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_ProxyTableEditor();
// End Cross Module References
	void UAssetDefinition_ProxyAsset::StaticRegisterNativesUAssetDefinition_ProxyAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_ProxyAsset);
	UClass* Z_Construct_UClass_UAssetDefinition_ProxyAsset_NoRegister()
	{
		return UAssetDefinition_ProxyAsset::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_ProxyAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_ProxyAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_ProxyTableEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_ProxyAsset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_ProxyAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_ProxyAsset.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_ProxyAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_ProxyAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_ProxyAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_ProxyAsset_Statics::ClassParams = {
		&UAssetDefinition_ProxyAsset::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_ProxyAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetDefinition_ProxyAsset_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAssetDefinition_ProxyAsset()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_ProxyAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_ProxyAsset.OuterSingleton, Z_Construct_UClass_UAssetDefinition_ProxyAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_ProxyAsset.OuterSingleton;
	}
	template<> PROXYTABLEEDITOR_API UClass* StaticClass<UAssetDefinition_ProxyAsset>()
	{
		return UAssetDefinition_ProxyAsset::StaticClass();
	}
	UAssetDefinition_ProxyAsset::UAssetDefinition_ProxyAsset() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_ProxyAsset);
	UAssetDefinition_ProxyAsset::~UAssetDefinition_ProxyAsset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTableEditor_Private_AssetDefinition_ProxyAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTableEditor_Private_AssetDefinition_ProxyAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_ProxyAsset, UAssetDefinition_ProxyAsset::StaticClass, TEXT("UAssetDefinition_ProxyAsset"), &Z_Registration_Info_UClass_UAssetDefinition_ProxyAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_ProxyAsset), 1008924396U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTableEditor_Private_AssetDefinition_ProxyAsset_h_1760892447(TEXT("/Script/ProxyTableEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTableEditor_Private_AssetDefinition_ProxyAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTableEditor_Private_AssetDefinition_ProxyAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
