// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition_EditorUtilityBlueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_EditorUtilityBlueprint() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_Blueprint();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_EditorUtilityBlueprint();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_EditorUtilityBlueprint_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_EditorUtilityBlueprint::StaticRegisterNativesUAssetDefinition_EditorUtilityBlueprint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_EditorUtilityBlueprint);
	UClass* Z_Construct_UClass_UAssetDefinition_EditorUtilityBlueprint_NoRegister()
	{
		return UAssetDefinition_EditorUtilityBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_EditorUtilityBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_EditorUtilityBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinition_Blueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_EditorUtilityBlueprint_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_EditorUtilityBlueprint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_EditorUtilityBlueprint.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_EditorUtilityBlueprint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_EditorUtilityBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_EditorUtilityBlueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_EditorUtilityBlueprint_Statics::ClassParams = {
		&UAssetDefinition_EditorUtilityBlueprint::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_EditorUtilityBlueprint_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetDefinition_EditorUtilityBlueprint_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAssetDefinition_EditorUtilityBlueprint()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_EditorUtilityBlueprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_EditorUtilityBlueprint.OuterSingleton, Z_Construct_UClass_UAssetDefinition_EditorUtilityBlueprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_EditorUtilityBlueprint.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_EditorUtilityBlueprint>()
	{
		return UAssetDefinition_EditorUtilityBlueprint::StaticClass();
	}
	UAssetDefinition_EditorUtilityBlueprint::UAssetDefinition_EditorUtilityBlueprint() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_EditorUtilityBlueprint);
	UAssetDefinition_EditorUtilityBlueprint::~UAssetDefinition_EditorUtilityBlueprint() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_EditorUtilityBlueprint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_EditorUtilityBlueprint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_EditorUtilityBlueprint, UAssetDefinition_EditorUtilityBlueprint::StaticClass, TEXT("UAssetDefinition_EditorUtilityBlueprint"), &Z_Registration_Info_UClass_UAssetDefinition_EditorUtilityBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_EditorUtilityBlueprint), 3214493331U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_EditorUtilityBlueprint_h_3304601399(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_EditorUtilityBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_EditorUtilityBlueprint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
