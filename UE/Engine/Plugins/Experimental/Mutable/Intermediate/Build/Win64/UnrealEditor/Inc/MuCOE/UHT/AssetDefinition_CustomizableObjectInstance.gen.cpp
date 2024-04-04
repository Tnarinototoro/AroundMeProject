// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MuCOE/AssetDefinition_CustomizableObjectInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_CustomizableObjectInstance() {}
// Cross Module References
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_CustomizableObjectInstance();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_CustomizableObjectInstance_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	void UAssetDefinition_CustomizableObjectInstance::StaticRegisterNativesUAssetDefinition_CustomizableObjectInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_CustomizableObjectInstance);
	UClass* Z_Construct_UClass_UAssetDefinition_CustomizableObjectInstance_NoRegister()
	{
		return UAssetDefinition_CustomizableObjectInstance::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_CustomizableObjectInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_CustomizableObjectInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_CustomizableObjectInstance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_CustomizableObjectInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/AssetDefinition_CustomizableObjectInstance.h" },
		{ "ModuleRelativePath", "Private/MuCOE/AssetDefinition_CustomizableObjectInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_CustomizableObjectInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_CustomizableObjectInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_CustomizableObjectInstance_Statics::ClassParams = {
		&UAssetDefinition_CustomizableObjectInstance::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_CustomizableObjectInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetDefinition_CustomizableObjectInstance_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAssetDefinition_CustomizableObjectInstance()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_CustomizableObjectInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_CustomizableObjectInstance.OuterSingleton, Z_Construct_UClass_UAssetDefinition_CustomizableObjectInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_CustomizableObjectInstance.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UAssetDefinition_CustomizableObjectInstance>()
	{
		return UAssetDefinition_CustomizableObjectInstance::StaticClass();
	}
	UAssetDefinition_CustomizableObjectInstance::UAssetDefinition_CustomizableObjectInstance() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_CustomizableObjectInstance);
	UAssetDefinition_CustomizableObjectInstance::~UAssetDefinition_CustomizableObjectInstance() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_AssetDefinition_CustomizableObjectInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_AssetDefinition_CustomizableObjectInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_CustomizableObjectInstance, UAssetDefinition_CustomizableObjectInstance::StaticClass, TEXT("UAssetDefinition_CustomizableObjectInstance"), &Z_Registration_Info_UClass_UAssetDefinition_CustomizableObjectInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_CustomizableObjectInstance), 1671304182U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_AssetDefinition_CustomizableObjectInstance_h_3153695744(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_AssetDefinition_CustomizableObjectInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_AssetDefinition_CustomizableObjectInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
