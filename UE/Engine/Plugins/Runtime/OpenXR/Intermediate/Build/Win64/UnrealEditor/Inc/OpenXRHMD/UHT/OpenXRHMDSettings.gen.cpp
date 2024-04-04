// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenXRHMDSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenXRHMDSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	OPENXRHMD_API UClass* Z_Construct_UClass_UOpenXRHMDSettings();
	OPENXRHMD_API UClass* Z_Construct_UClass_UOpenXRHMDSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OpenXRHMD();
// End Cross Module References
	void UOpenXRHMDSettings::StaticRegisterNativesUOpenXRHMDSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOpenXRHMDSettings);
	UClass* Z_Construct_UClass_UOpenXRHMDSettings_NoRegister()
	{
		return UOpenXRHMDSettings::StaticClass();
	}
	struct Z_Construct_UClass_UOpenXRHMDSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFBFoveationEnabled_MetaData[];
#endif
		static void NewProp_bIsFBFoveationEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFBFoveationEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenXRHMDSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenXRHMD,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHMDSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHMDSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Implements the settings for the OpenXR HMD plugin.\n*/" },
		{ "IncludePath", "OpenXRHMDSettings.h" },
		{ "ModuleRelativePath", "Public/OpenXRHMDSettings.h" },
		{ "ToolTip", "Implements the settings for the OpenXR HMD plugin." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHMDSettings_Statics::NewProp_bIsFBFoveationEnabled_MetaData[] = {
		{ "Category", "Foveation" },
		{ "Comment", "/** Enables foveation provided by the XR_FB_foveation OpenXR extension. */" },
		{ "DisplayName", "Enable XR_FB_foveation extension" },
		{ "ModuleRelativePath", "Public/OpenXRHMDSettings.h" },
		{ "ToolTip", "Enables foveation provided by the XR_FB_foveation OpenXR extension." },
	};
#endif
	void Z_Construct_UClass_UOpenXRHMDSettings_Statics::NewProp_bIsFBFoveationEnabled_SetBit(void* Obj)
	{
		((UOpenXRHMDSettings*)Obj)->bIsFBFoveationEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOpenXRHMDSettings_Statics::NewProp_bIsFBFoveationEnabled = { "bIsFBFoveationEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOpenXRHMDSettings), &Z_Construct_UClass_UOpenXRHMDSettings_Statics::NewProp_bIsFBFoveationEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHMDSettings_Statics::NewProp_bIsFBFoveationEnabled_MetaData), Z_Construct_UClass_UOpenXRHMDSettings_Statics::NewProp_bIsFBFoveationEnabled_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOpenXRHMDSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHMDSettings_Statics::NewProp_bIsFBFoveationEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenXRHMDSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenXRHMDSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOpenXRHMDSettings_Statics::ClassParams = {
		&UOpenXRHMDSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOpenXRHMDSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHMDSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHMDSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UOpenXRHMDSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHMDSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOpenXRHMDSettings()
	{
		if (!Z_Registration_Info_UClass_UOpenXRHMDSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOpenXRHMDSettings.OuterSingleton, Z_Construct_UClass_UOpenXRHMDSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOpenXRHMDSettings.OuterSingleton;
	}
	template<> OPENXRHMD_API UClass* StaticClass<UOpenXRHMDSettings>()
	{
		return UOpenXRHMDSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenXRHMDSettings);
	UOpenXRHMDSettings::~UOpenXRHMDSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenXR_Source_OpenXRHMD_Public_OpenXRHMDSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenXR_Source_OpenXRHMD_Public_OpenXRHMDSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOpenXRHMDSettings, UOpenXRHMDSettings::StaticClass, TEXT("UOpenXRHMDSettings"), &Z_Registration_Info_UClass_UOpenXRHMDSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOpenXRHMDSettings), 4123965410U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenXR_Source_OpenXRHMD_Public_OpenXRHMDSettings_h_1172313559(TEXT("/Script/OpenXRHMD"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenXR_Source_OpenXRHMD_Public_OpenXRHMDSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenXR_Source_OpenXRHMD_Public_OpenXRHMDSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
