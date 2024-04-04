// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuV/AssetValidator_CustomizableObjects.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetValidator_CustomizableObjects() {}
// Cross Module References
	DATAVALIDATION_API UClass* Z_Construct_UClass_UEditorValidatorBase();
	MUTABLEVALIDATION_API UClass* Z_Construct_UClass_UAssetValidator_CustomizableObjects();
	MUTABLEVALIDATION_API UClass* Z_Construct_UClass_UAssetValidator_CustomizableObjects_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MutableValidation();
// End Cross Module References
	void UAssetValidator_CustomizableObjects::StaticRegisterNativesUAssetValidator_CustomizableObjects()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetValidator_CustomizableObjects);
	UClass* Z_Construct_UClass_UAssetValidator_CustomizableObjects_NoRegister()
	{
		return UAssetValidator_CustomizableObjects::StaticClass();
	}
	struct Z_Construct_UClass_UAssetValidator_CustomizableObjects_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetValidator_CustomizableObjects_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorValidatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MutableValidation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidator_CustomizableObjects_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetValidator_CustomizableObjects_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuV/AssetValidator_CustomizableObjects.h" },
		{ "ModuleRelativePath", "Public/MuV/AssetValidator_CustomizableObjects.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetValidator_CustomizableObjects_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetValidator_CustomizableObjects>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetValidator_CustomizableObjects_Statics::ClassParams = {
		&UAssetValidator_CustomizableObjects::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidator_CustomizableObjects_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetValidator_CustomizableObjects_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAssetValidator_CustomizableObjects()
	{
		if (!Z_Registration_Info_UClass_UAssetValidator_CustomizableObjects.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetValidator_CustomizableObjects.OuterSingleton, Z_Construct_UClass_UAssetValidator_CustomizableObjects_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetValidator_CustomizableObjects.OuterSingleton;
	}
	template<> MUTABLEVALIDATION_API UClass* StaticClass<UAssetValidator_CustomizableObjects>()
	{
		return UAssetValidator_CustomizableObjects::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetValidator_CustomizableObjects);
	UAssetValidator_CustomizableObjects::~UAssetValidator_CustomizableObjects() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_MutableValidation_Public_MuV_AssetValidator_CustomizableObjects_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_MutableValidation_Public_MuV_AssetValidator_CustomizableObjects_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetValidator_CustomizableObjects, UAssetValidator_CustomizableObjects::StaticClass, TEXT("UAssetValidator_CustomizableObjects"), &Z_Registration_Info_UClass_UAssetValidator_CustomizableObjects, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetValidator_CustomizableObjects), 382558699U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_MutableValidation_Public_MuV_AssetValidator_CustomizableObjects_h_2921415983(TEXT("/Script/MutableValidation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_MutableValidation_Public_MuV_AssetValidator_CustomizableObjects_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_MutableValidation_Public_MuV_AssetValidator_CustomizableObjects_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
