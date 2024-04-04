// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenXRHandTrackingSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenXRHandTrackingSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	OPENXRHANDTRACKING_API UClass* Z_Construct_UClass_UOpenXRHandTrackingSettings();
	OPENXRHANDTRACKING_API UClass* Z_Construct_UClass_UOpenXRHandTrackingSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OpenXRHandTracking();
// End Cross Module References
	void UOpenXRHandTrackingSettings::StaticRegisterNativesUOpenXRHandTrackingSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOpenXRHandTrackingSettings);
	UClass* Z_Construct_UClass_UOpenXRHandTrackingSettings_NoRegister()
	{
		return UOpenXRHandTrackingSettings::StaticClass();
	}
	struct Z_Construct_UClass_UOpenXRHandTrackingSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMoreSpecificMotionSourceNames_MetaData[];
#endif
		static void NewProp_bUseMoreSpecificMotionSourceNames_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMoreSpecificMotionSourceNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportLegacyControllerMotionSources_MetaData[];
#endif
		static void NewProp_bSupportLegacyControllerMotionSources_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportLegacyControllerMotionSources;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenXRHandTrackingSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenXRHandTracking,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandTrackingSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandTrackingSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Implements the settings for the OpenXR Input plugin.\n*/" },
		{ "IncludePath", "OpenXRHandTrackingSettings.h" },
		{ "ModuleRelativePath", "Public/OpenXRHandTrackingSettings.h" },
		{ "ToolTip", "Implements the settings for the OpenXR Input plugin." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandTrackingSettings_Statics::NewProp_bUseMoreSpecificMotionSourceNames_MetaData[] = {
		{ "Category", "Motion Sources" },
		{ "Comment", "/** If false (the default) the motion sources for hand tracking will be of the form '[Left|Right][Keypoint]'.  If true they will be of the form 'HandTracking[Left|Right][Keypoint]'.  True is reccomended to avoid collisions between motion sources from different device types. **/" },
		{ "ModuleRelativePath", "Public/OpenXRHandTrackingSettings.h" },
		{ "ToolTip", "If false (the default) the motion sources for hand tracking will be of the form '[Left|Right][Keypoint]'.  If true they will be of the form 'HandTracking[Left|Right][Keypoint]'.  True is reccomended to avoid collisions between motion sources from different device types. *" },
	};
#endif
	void Z_Construct_UClass_UOpenXRHandTrackingSettings_Statics::NewProp_bUseMoreSpecificMotionSourceNames_SetBit(void* Obj)
	{
		((UOpenXRHandTrackingSettings*)Obj)->bUseMoreSpecificMotionSourceNames = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOpenXRHandTrackingSettings_Statics::NewProp_bUseMoreSpecificMotionSourceNames = { "bUseMoreSpecificMotionSourceNames", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOpenXRHandTrackingSettings), &Z_Construct_UClass_UOpenXRHandTrackingSettings_Statics::NewProp_bUseMoreSpecificMotionSourceNames_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandTrackingSettings_Statics::NewProp_bUseMoreSpecificMotionSourceNames_MetaData), Z_Construct_UClass_UOpenXRHandTrackingSettings_Statics::NewProp_bUseMoreSpecificMotionSourceNames_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandTrackingSettings_Statics::NewProp_bSupportLegacyControllerMotionSources_MetaData[] = {
		{ "Category", "Motion Sources" },
		{ "Comment", "/** If true hand tracking supports the 'Left' and 'Right' legacy motion sources.  If false it does not.  False is reccomended unless you need legacy compatibility in an older unreal projects.**/" },
		{ "ModuleRelativePath", "Public/OpenXRHandTrackingSettings.h" },
		{ "ToolTip", "If true hand tracking supports the 'Left' and 'Right' legacy motion sources.  If false it does not.  False is reccomended unless you need legacy compatibility in an older unreal projects.*" },
	};
#endif
	void Z_Construct_UClass_UOpenXRHandTrackingSettings_Statics::NewProp_bSupportLegacyControllerMotionSources_SetBit(void* Obj)
	{
		((UOpenXRHandTrackingSettings*)Obj)->bSupportLegacyControllerMotionSources = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOpenXRHandTrackingSettings_Statics::NewProp_bSupportLegacyControllerMotionSources = { "bSupportLegacyControllerMotionSources", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOpenXRHandTrackingSettings), &Z_Construct_UClass_UOpenXRHandTrackingSettings_Statics::NewProp_bSupportLegacyControllerMotionSources_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandTrackingSettings_Statics::NewProp_bSupportLegacyControllerMotionSources_MetaData), Z_Construct_UClass_UOpenXRHandTrackingSettings_Statics::NewProp_bSupportLegacyControllerMotionSources_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOpenXRHandTrackingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandTrackingSettings_Statics::NewProp_bUseMoreSpecificMotionSourceNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandTrackingSettings_Statics::NewProp_bSupportLegacyControllerMotionSources,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenXRHandTrackingSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenXRHandTrackingSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOpenXRHandTrackingSettings_Statics::ClassParams = {
		&UOpenXRHandTrackingSettings::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOpenXRHandTrackingSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandTrackingSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandTrackingSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UOpenXRHandTrackingSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandTrackingSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOpenXRHandTrackingSettings()
	{
		if (!Z_Registration_Info_UClass_UOpenXRHandTrackingSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOpenXRHandTrackingSettings.OuterSingleton, Z_Construct_UClass_UOpenXRHandTrackingSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOpenXRHandTrackingSettings.OuterSingleton;
	}
	template<> OPENXRHANDTRACKING_API UClass* StaticClass<UOpenXRHandTrackingSettings>()
	{
		return UOpenXRHandTrackingSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenXRHandTrackingSettings);
	UOpenXRHandTrackingSettings::~UOpenXRHandTrackingSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenXRHandTracking_Source_OpenXRHandTracking_Public_OpenXRHandTrackingSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenXRHandTracking_Source_OpenXRHandTracking_Public_OpenXRHandTrackingSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOpenXRHandTrackingSettings, UOpenXRHandTrackingSettings::StaticClass, TEXT("UOpenXRHandTrackingSettings"), &Z_Registration_Info_UClass_UOpenXRHandTrackingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOpenXRHandTrackingSettings), 698075643U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenXRHandTracking_Source_OpenXRHandTracking_Public_OpenXRHandTrackingSettings_h_58892206(TEXT("/Script/OpenXRHandTracking"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenXRHandTracking_Source_OpenXRHandTracking_Public_OpenXRHandTrackingSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenXRHandTracking_Source_OpenXRHandTracking_Public_OpenXRHandTrackingSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
