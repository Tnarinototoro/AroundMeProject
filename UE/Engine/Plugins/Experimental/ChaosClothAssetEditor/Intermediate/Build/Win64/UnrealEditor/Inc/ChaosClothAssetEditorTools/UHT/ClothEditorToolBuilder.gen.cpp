// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/ClothEditorToolBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothEditorToolBuilder() {}
// Cross Module References
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UChaosClothAssetEditorToolBuilder();
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UChaosClothAssetEditorToolBuilder_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetEditorTools();
// End Cross Module References
	void UChaosClothAssetEditorToolBuilder::StaticRegisterNativesUChaosClothAssetEditorToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosClothAssetEditorToolBuilder);
	UClass* Z_Construct_UClass_UChaosClothAssetEditorToolBuilder_NoRegister()
	{
		return UChaosClothAssetEditorToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UChaosClothAssetEditorToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosClothAssetEditorToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetEditorTools,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothAssetEditorToolBuilder_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothAssetEditorToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothEditorToolBuilder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosClothAssetEditorToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IChaosClothAssetEditorToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosClothAssetEditorToolBuilder_Statics::ClassParams = {
		&UChaosClothAssetEditorToolBuilder::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothAssetEditorToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UChaosClothAssetEditorToolBuilder_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UChaosClothAssetEditorToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UChaosClothAssetEditorToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosClothAssetEditorToolBuilder.OuterSingleton, Z_Construct_UClass_UChaosClothAssetEditorToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChaosClothAssetEditorToolBuilder.OuterSingleton;
	}
	template<> CHAOSCLOTHASSETEDITORTOOLS_API UClass* StaticClass<UChaosClothAssetEditorToolBuilder>()
	{
		return UChaosClothAssetEditorToolBuilder::StaticClass();
	}
	UChaosClothAssetEditorToolBuilder::UChaosClothAssetEditorToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosClothAssetEditorToolBuilder);
	UChaosClothAssetEditorToolBuilder::~UChaosClothAssetEditorToolBuilder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothEditorToolBuilder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothEditorToolBuilder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChaosClothAssetEditorToolBuilder, UChaosClothAssetEditorToolBuilder::StaticClass, TEXT("UChaosClothAssetEditorToolBuilder"), &Z_Registration_Info_UClass_UChaosClothAssetEditorToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosClothAssetEditorToolBuilder), 1411693023U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothEditorToolBuilder_h_4136320105(TEXT("/Script/ChaosClothAssetEditorTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothEditorToolBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothEditorToolBuilder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
