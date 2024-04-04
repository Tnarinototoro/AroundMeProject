// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition_ToolPresetAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_ToolPresetAsset() {}
// Cross Module References
	TOOLPRESETASSET_API UClass* Z_Construct_UClass_UAssetDefinition_InteractiveToolsPresetCollectionAsset();
	TOOLPRESETASSET_API UClass* Z_Construct_UClass_UAssetDefinition_InteractiveToolsPresetCollectionAsset_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_ToolPresetAsset();
// End Cross Module References
	void UAssetDefinition_InteractiveToolsPresetCollectionAsset::StaticRegisterNativesUAssetDefinition_InteractiveToolsPresetCollectionAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_InteractiveToolsPresetCollectionAsset);
	UClass* Z_Construct_UClass_UAssetDefinition_InteractiveToolsPresetCollectionAsset_NoRegister()
	{
		return UAssetDefinition_InteractiveToolsPresetCollectionAsset::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_InteractiveToolsPresetCollectionAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_InteractiveToolsPresetCollectionAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_ToolPresetAsset,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_InteractiveToolsPresetCollectionAsset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_InteractiveToolsPresetCollectionAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_ToolPresetAsset.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_ToolPresetAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_InteractiveToolsPresetCollectionAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_InteractiveToolsPresetCollectionAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_InteractiveToolsPresetCollectionAsset_Statics::ClassParams = {
		&UAssetDefinition_InteractiveToolsPresetCollectionAsset::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_InteractiveToolsPresetCollectionAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetDefinition_InteractiveToolsPresetCollectionAsset_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAssetDefinition_InteractiveToolsPresetCollectionAsset()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_InteractiveToolsPresetCollectionAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_InteractiveToolsPresetCollectionAsset.OuterSingleton, Z_Construct_UClass_UAssetDefinition_InteractiveToolsPresetCollectionAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_InteractiveToolsPresetCollectionAsset.OuterSingleton;
	}
	template<> TOOLPRESETASSET_API UClass* StaticClass<UAssetDefinition_InteractiveToolsPresetCollectionAsset>()
	{
		return UAssetDefinition_InteractiveToolsPresetCollectionAsset::StaticClass();
	}
	UAssetDefinition_InteractiveToolsPresetCollectionAsset::UAssetDefinition_InteractiveToolsPresetCollectionAsset() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_InteractiveToolsPresetCollectionAsset);
	UAssetDefinition_InteractiveToolsPresetCollectionAsset::~UAssetDefinition_InteractiveToolsPresetCollectionAsset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ToolPresets_Source_ToolPresetAsset_Private_AssetDefinition_ToolPresetAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ToolPresets_Source_ToolPresetAsset_Private_AssetDefinition_ToolPresetAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_InteractiveToolsPresetCollectionAsset, UAssetDefinition_InteractiveToolsPresetCollectionAsset::StaticClass, TEXT("UAssetDefinition_InteractiveToolsPresetCollectionAsset"), &Z_Registration_Info_UClass_UAssetDefinition_InteractiveToolsPresetCollectionAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_InteractiveToolsPresetCollectionAsset), 2091604475U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ToolPresets_Source_ToolPresetAsset_Private_AssetDefinition_ToolPresetAsset_h_1823802366(TEXT("/Script/ToolPresetAsset"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ToolPresets_Source_ToolPresetAsset_Private_AssetDefinition_ToolPresetAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ToolPresets_Source_ToolPresetAsset_Private_AssetDefinition_ToolPresetAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
