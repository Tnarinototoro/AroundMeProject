// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/ClothEditorContextObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothEditorContextObject() {}
// Cross Module References
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothEditorContextObject();
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothEditorContextObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetEditorTools();
// End Cross Module References
	void UClothEditorContextObject::StaticRegisterNativesUClothEditorContextObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothEditorContextObject);
	UClass* Z_Construct_UClass_UClothEditorContextObject_NoRegister()
	{
		return UClothEditorContextObject::StaticClass();
	}
	struct Z_Construct_UClass_UClothEditorContextObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothEditorContextObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetEditorTools,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClothEditorContextObject_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothEditorContextObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChaosClothAsset/ClothEditorContextObject.h" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothEditorContextObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothEditorContextObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothEditorContextObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothEditorContextObject_Statics::ClassParams = {
		&UClothEditorContextObject::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothEditorContextObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UClothEditorContextObject_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UClothEditorContextObject()
	{
		if (!Z_Registration_Info_UClass_UClothEditorContextObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothEditorContextObject.OuterSingleton, Z_Construct_UClass_UClothEditorContextObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothEditorContextObject.OuterSingleton;
	}
	template<> CHAOSCLOTHASSETEDITORTOOLS_API UClass* StaticClass<UClothEditorContextObject>()
	{
		return UClothEditorContextObject::StaticClass();
	}
	UClothEditorContextObject::UClothEditorContextObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothEditorContextObject);
	UClothEditorContextObject::~UClothEditorContextObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothEditorContextObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothEditorContextObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UClothEditorContextObject, UClothEditorContextObject::StaticClass, TEXT("UClothEditorContextObject"), &Z_Registration_Info_UClass_UClothEditorContextObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothEditorContextObject), 1603688328U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothEditorContextObject_h_3175753656(TEXT("/Script/ChaosClothAssetEditorTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothEditorContextObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothEditorContextObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
