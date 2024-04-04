// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition_SpecularProfile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_SpecularProfile() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_SpecularProfile();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_SpecularProfile_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_SpecularProfile::StaticRegisterNativesUAssetDefinition_SpecularProfile()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_SpecularProfile);
	UClass* Z_Construct_UClass_UAssetDefinition_SpecularProfile_NoRegister()
	{
		return UAssetDefinition_SpecularProfile::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_SpecularProfile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_SpecularProfile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_SpecularProfile_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_SpecularProfile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_SpecularProfile.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_SpecularProfile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_SpecularProfile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_SpecularProfile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_SpecularProfile_Statics::ClassParams = {
		&UAssetDefinition_SpecularProfile::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_SpecularProfile_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetDefinition_SpecularProfile_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAssetDefinition_SpecularProfile()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_SpecularProfile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_SpecularProfile.OuterSingleton, Z_Construct_UClass_UAssetDefinition_SpecularProfile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_SpecularProfile.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_SpecularProfile>()
	{
		return UAssetDefinition_SpecularProfile::StaticClass();
	}
	UAssetDefinition_SpecularProfile::UAssetDefinition_SpecularProfile() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_SpecularProfile);
	UAssetDefinition_SpecularProfile::~UAssetDefinition_SpecularProfile() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_SpecularProfile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_SpecularProfile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_SpecularProfile, UAssetDefinition_SpecularProfile::StaticClass, TEXT("UAssetDefinition_SpecularProfile"), &Z_Registration_Info_UClass_UAssetDefinition_SpecularProfile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_SpecularProfile), 4211532676U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_SpecularProfile_h_1154539450(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_SpecularProfile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_SpecularProfile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
