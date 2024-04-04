// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetTools/AssetDefinition_MediaPlate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_MediaPlate() {}
// Cross Module References
	MEDIAPLATEEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_MediaPlate();
	MEDIAPLATEEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_MediaPlate_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_MediaPlateEditor();
// End Cross Module References
	void UAssetDefinition_MediaPlate::StaticRegisterNativesUAssetDefinition_MediaPlate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_MediaPlate);
	UClass* Z_Construct_UClass_UAssetDefinition_MediaPlate_NoRegister()
	{
		return UAssetDefinition_MediaPlate::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_MediaPlate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_MediaPlate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaPlateEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_MediaPlate_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_MediaPlate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetTools/AssetDefinition_MediaPlate.h" },
		{ "ModuleRelativePath", "Private/AssetTools/AssetDefinition_MediaPlate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_MediaPlate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_MediaPlate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_MediaPlate_Statics::ClassParams = {
		&UAssetDefinition_MediaPlate::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_MediaPlate_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetDefinition_MediaPlate_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAssetDefinition_MediaPlate()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_MediaPlate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_MediaPlate.OuterSingleton, Z_Construct_UClass_UAssetDefinition_MediaPlate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_MediaPlate.OuterSingleton;
	}
	template<> MEDIAPLATEEDITOR_API UClass* StaticClass<UAssetDefinition_MediaPlate>()
	{
		return UAssetDefinition_MediaPlate::StaticClass();
	}
	UAssetDefinition_MediaPlate::UAssetDefinition_MediaPlate() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_MediaPlate);
	UAssetDefinition_MediaPlate::~UAssetDefinition_MediaPlate() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlateEditor_Private_AssetTools_AssetDefinition_MediaPlate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlateEditor_Private_AssetTools_AssetDefinition_MediaPlate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_MediaPlate, UAssetDefinition_MediaPlate::StaticClass, TEXT("UAssetDefinition_MediaPlate"), &Z_Registration_Info_UClass_UAssetDefinition_MediaPlate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_MediaPlate), 281552632U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlateEditor_Private_AssetTools_AssetDefinition_MediaPlate_h_2538718842(TEXT("/Script/MediaPlateEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlateEditor_Private_AssetTools_AssetDefinition_MediaPlate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlateEditor_Private_AssetTools_AssetDefinition_MediaPlate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
