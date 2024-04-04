// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition_SmartObjectDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_SmartObjectDefinition() {}
// Cross Module References
	SMARTOBJECTSEDITORMODULE_API UClass* Z_Construct_UClass_UAssetDefinition_SmartObjectDefinition();
	SMARTOBJECTSEDITORMODULE_API UClass* Z_Construct_UClass_UAssetDefinition_SmartObjectDefinition_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_SmartObjectsEditorModule();
// End Cross Module References
	void UAssetDefinition_SmartObjectDefinition::StaticRegisterNativesUAssetDefinition_SmartObjectDefinition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_SmartObjectDefinition);
	UClass* Z_Construct_UClass_UAssetDefinition_SmartObjectDefinition_NoRegister()
	{
		return UAssetDefinition_SmartObjectDefinition::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_SmartObjectDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_SmartObjectDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsEditorModule,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_SmartObjectDefinition_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_SmartObjectDefinition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_SmartObjectDefinition.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_SmartObjectDefinition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_SmartObjectDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_SmartObjectDefinition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_SmartObjectDefinition_Statics::ClassParams = {
		&UAssetDefinition_SmartObjectDefinition::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_SmartObjectDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetDefinition_SmartObjectDefinition_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAssetDefinition_SmartObjectDefinition()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_SmartObjectDefinition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_SmartObjectDefinition.OuterSingleton, Z_Construct_UClass_UAssetDefinition_SmartObjectDefinition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_SmartObjectDefinition.OuterSingleton;
	}
	template<> SMARTOBJECTSEDITORMODULE_API UClass* StaticClass<UAssetDefinition_SmartObjectDefinition>()
	{
		return UAssetDefinition_SmartObjectDefinition::StaticClass();
	}
	UAssetDefinition_SmartObjectDefinition::UAssetDefinition_SmartObjectDefinition() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_SmartObjectDefinition);
	UAssetDefinition_SmartObjectDefinition::~UAssetDefinition_SmartObjectDefinition() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Private_AssetDefinition_SmartObjectDefinition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Private_AssetDefinition_SmartObjectDefinition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_SmartObjectDefinition, UAssetDefinition_SmartObjectDefinition::StaticClass, TEXT("UAssetDefinition_SmartObjectDefinition"), &Z_Registration_Info_UClass_UAssetDefinition_SmartObjectDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_SmartObjectDefinition), 3443344280U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Private_AssetDefinition_SmartObjectDefinition_h_2239458921(TEXT("/Script/SmartObjectsEditorModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Private_AssetDefinition_SmartObjectDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Private_AssetDefinition_SmartObjectDefinition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
