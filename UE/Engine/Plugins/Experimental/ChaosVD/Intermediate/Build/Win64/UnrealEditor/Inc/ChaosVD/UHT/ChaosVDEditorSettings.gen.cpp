// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosVDEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosVDEditorSettings() {}
// Cross Module References
	CHAOSVD_API UClass* Z_Construct_UClass_UChaosVDEditorSettings();
	CHAOSVD_API UClass* Z_Construct_UClass_UChaosVDEditorSettings_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ChaosVD();
// End Cross Module References
	void UChaosVDEditorSettings::StaticRegisterNativesUChaosVDEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosVDEditorSettings);
	UClass* Z_Construct_UClass_UChaosVDEditorSettings_NoRegister()
	{
		return UChaosVDEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UChaosVDEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalParticleDataVisualizationFlags_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_GlobalParticleDataVisualizationFlags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalCollisionDataVisualizationFlags_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_GlobalCollisionDataVisualizationFlags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowDebugText_MetaData[];
#endif
		static void NewProp_bShowDebugText_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebugText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasePhysicsVDWorld_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BasePhysicsVDWorld;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosVDEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVD,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVDEditorSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVDEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChaosVDEditorSettings.h" },
		{ "ModuleRelativePath", "Public/ChaosVDEditorSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVDEditorSettings_Statics::NewProp_GlobalParticleDataVisualizationFlags_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EChaosVDParticleDataVisualizationFlags" },
		{ "Category", "Viewport Visualization Flags" },
		{ "ModuleRelativePath", "Public/ChaosVDEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UChaosVDEditorSettings_Statics::NewProp_GlobalParticleDataVisualizationFlags = { "GlobalParticleDataVisualizationFlags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVDEditorSettings, GlobalParticleDataVisualizationFlags), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVDEditorSettings_Statics::NewProp_GlobalParticleDataVisualizationFlags_MetaData), Z_Construct_UClass_UChaosVDEditorSettings_Statics::NewProp_GlobalParticleDataVisualizationFlags_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVDEditorSettings_Statics::NewProp_GlobalCollisionDataVisualizationFlags_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EChaosVDCollisionVisualizationFlags" },
		{ "Category", "Viewport Visualization Flags" },
		{ "ModuleRelativePath", "Public/ChaosVDEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UChaosVDEditorSettings_Statics::NewProp_GlobalCollisionDataVisualizationFlags = { "GlobalCollisionDataVisualizationFlags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVDEditorSettings, GlobalCollisionDataVisualizationFlags), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVDEditorSettings_Statics::NewProp_GlobalCollisionDataVisualizationFlags_MetaData), Z_Construct_UClass_UChaosVDEditorSettings_Statics::NewProp_GlobalCollisionDataVisualizationFlags_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVDEditorSettings_Statics::NewProp_bShowDebugText_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EChaosVDCollisionVisualizationFlags" },
		{ "Category", "Viewport Visualization Flags" },
		{ "ModuleRelativePath", "Public/ChaosVDEditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_UChaosVDEditorSettings_Statics::NewProp_bShowDebugText_SetBit(void* Obj)
	{
		((UChaosVDEditorSettings*)Obj)->bShowDebugText = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosVDEditorSettings_Statics::NewProp_bShowDebugText = { "bShowDebugText", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UChaosVDEditorSettings), &Z_Construct_UClass_UChaosVDEditorSettings_Statics::NewProp_bShowDebugText_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVDEditorSettings_Statics::NewProp_bShowDebugText_MetaData), Z_Construct_UClass_UChaosVDEditorSettings_Statics::NewProp_bShowDebugText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVDEditorSettings_Statics::NewProp_BasePhysicsVDWorld_MetaData[] = {
		{ "Category", "Editor Options" },
		{ "ModuleRelativePath", "Public/ChaosVDEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UChaosVDEditorSettings_Statics::NewProp_BasePhysicsVDWorld = { "BasePhysicsVDWorld", nullptr, (EPropertyFlags)0x0014000000004801, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVDEditorSettings, BasePhysicsVDWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVDEditorSettings_Statics::NewProp_BasePhysicsVDWorld_MetaData), Z_Construct_UClass_UChaosVDEditorSettings_Statics::NewProp_BasePhysicsVDWorld_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChaosVDEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVDEditorSettings_Statics::NewProp_GlobalParticleDataVisualizationFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVDEditorSettings_Statics::NewProp_GlobalCollisionDataVisualizationFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVDEditorSettings_Statics::NewProp_bShowDebugText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVDEditorSettings_Statics::NewProp_BasePhysicsVDWorld,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosVDEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosVDEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosVDEditorSettings_Statics::ClassParams = {
		&UChaosVDEditorSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UChaosVDEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVDEditorSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVDEditorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UChaosVDEditorSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVDEditorSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UChaosVDEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UChaosVDEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosVDEditorSettings.OuterSingleton, Z_Construct_UClass_UChaosVDEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChaosVDEditorSettings.OuterSingleton;
	}
	template<> CHAOSVD_API UClass* StaticClass<UChaosVDEditorSettings>()
	{
		return UChaosVDEditorSettings::StaticClass();
	}
	UChaosVDEditorSettings::UChaosVDEditorSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosVDEditorSettings);
	UChaosVDEditorSettings::~UChaosVDEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_ChaosVDEditorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_ChaosVDEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChaosVDEditorSettings, UChaosVDEditorSettings::StaticClass, TEXT("UChaosVDEditorSettings"), &Z_Registration_Info_UClass_UChaosVDEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosVDEditorSettings), 322409532U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_ChaosVDEditorSettings_h_3098134846(TEXT("/Script/ChaosVD"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_ChaosVDEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_ChaosVDEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
