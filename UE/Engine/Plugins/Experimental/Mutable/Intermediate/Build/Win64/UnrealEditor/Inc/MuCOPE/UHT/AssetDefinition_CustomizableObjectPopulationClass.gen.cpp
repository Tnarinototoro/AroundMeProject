// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MuCOPE/AssetDefinition_CustomizableObjectPopulationClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_CustomizableObjectPopulationClass() {}
// Cross Module References
	CUSTOMIZABLEOBJECTPOPULATIONEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_CustomizableObjectPopulationClass();
	CUSTOMIZABLEOBJECTPOPULATIONEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_CustomizableObjectPopulationClass_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectPopulationEditor();
// End Cross Module References
	void UAssetDefinition_CustomizableObjectPopulationClass::StaticRegisterNativesUAssetDefinition_CustomizableObjectPopulationClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_CustomizableObjectPopulationClass);
	UClass* Z_Construct_UClass_UAssetDefinition_CustomizableObjectPopulationClass_NoRegister()
	{
		return UAssetDefinition_CustomizableObjectPopulationClass::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_CustomizableObjectPopulationClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_CustomizableObjectPopulationClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectPopulationEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_CustomizableObjectPopulationClass_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_CustomizableObjectPopulationClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOPE/AssetDefinition_CustomizableObjectPopulationClass.h" },
		{ "ModuleRelativePath", "Private/MuCOPE/AssetDefinition_CustomizableObjectPopulationClass.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_CustomizableObjectPopulationClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_CustomizableObjectPopulationClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_CustomizableObjectPopulationClass_Statics::ClassParams = {
		&UAssetDefinition_CustomizableObjectPopulationClass::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_CustomizableObjectPopulationClass_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetDefinition_CustomizableObjectPopulationClass_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAssetDefinition_CustomizableObjectPopulationClass()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_CustomizableObjectPopulationClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_CustomizableObjectPopulationClass.OuterSingleton, Z_Construct_UClass_UAssetDefinition_CustomizableObjectPopulationClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_CustomizableObjectPopulationClass.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTPOPULATIONEDITOR_API UClass* StaticClass<UAssetDefinition_CustomizableObjectPopulationClass>()
	{
		return UAssetDefinition_CustomizableObjectPopulationClass::StaticClass();
	}
	UAssetDefinition_CustomizableObjectPopulationClass::UAssetDefinition_CustomizableObjectPopulationClass() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_CustomizableObjectPopulationClass);
	UAssetDefinition_CustomizableObjectPopulationClass::~UAssetDefinition_CustomizableObjectPopulationClass() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulationEditor_Private_MuCOPE_AssetDefinition_CustomizableObjectPopulationClass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulationEditor_Private_MuCOPE_AssetDefinition_CustomizableObjectPopulationClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_CustomizableObjectPopulationClass, UAssetDefinition_CustomizableObjectPopulationClass::StaticClass, TEXT("UAssetDefinition_CustomizableObjectPopulationClass"), &Z_Registration_Info_UClass_UAssetDefinition_CustomizableObjectPopulationClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_CustomizableObjectPopulationClass), 235042082U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulationEditor_Private_MuCOPE_AssetDefinition_CustomizableObjectPopulationClass_h_936145761(TEXT("/Script/CustomizableObjectPopulationEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulationEditor_Private_MuCOPE_AssetDefinition_CustomizableObjectPopulationClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulationEditor_Private_MuCOPE_AssetDefinition_CustomizableObjectPopulationClass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
