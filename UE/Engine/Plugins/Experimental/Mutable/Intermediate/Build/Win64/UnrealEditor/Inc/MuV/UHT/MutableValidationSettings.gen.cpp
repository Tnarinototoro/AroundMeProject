// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MuV/MutableValidationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMutableValidationSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MUTABLEVALIDATION_API UClass* Z_Construct_UClass_UMutableValidationSettings();
	MUTABLEVALIDATION_API UClass* Z_Construct_UClass_UMutableValidationSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MutableValidation();
// End Cross Module References
	void UMutableValidationSettings::StaticRegisterNativesUMutableValidationSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMutableValidationSettings);
	UClass* Z_Construct_UClass_UMutableValidationSettings_NoRegister()
	{
		return UMutableValidationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMutableValidationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableIndirectValidation_MetaData[];
#endif
		static void NewProp_bEnableIndirectValidation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableIndirectValidation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMutableValidationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MutableValidation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMutableValidationSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMutableValidationSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuV/MutableValidationSettings.h" },
		{ "ModuleRelativePath", "Private/MuV/MutableValidationSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMutableValidationSettings_Statics::NewProp_bEnableIndirectValidation_MetaData[] = {
		{ "Category", "Validation" },
		{ "Comment", "/** If true, validation of referenced COs from asset subject to data validation, will be run. */" },
		{ "ModuleRelativePath", "Private/MuV/MutableValidationSettings.h" },
		{ "ToolTip", "If true, validation of referenced COs from asset subject to data validation, will be run." },
	};
#endif
	void Z_Construct_UClass_UMutableValidationSettings_Statics::NewProp_bEnableIndirectValidation_SetBit(void* Obj)
	{
		((UMutableValidationSettings*)Obj)->bEnableIndirectValidation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMutableValidationSettings_Statics::NewProp_bEnableIndirectValidation = { "bEnableIndirectValidation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMutableValidationSettings), &Z_Construct_UClass_UMutableValidationSettings_Statics::NewProp_bEnableIndirectValidation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMutableValidationSettings_Statics::NewProp_bEnableIndirectValidation_MetaData), Z_Construct_UClass_UMutableValidationSettings_Statics::NewProp_bEnableIndirectValidation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMutableValidationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMutableValidationSettings_Statics::NewProp_bEnableIndirectValidation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMutableValidationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMutableValidationSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMutableValidationSettings_Statics::ClassParams = {
		&UMutableValidationSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMutableValidationSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMutableValidationSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMutableValidationSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMutableValidationSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMutableValidationSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMutableValidationSettings()
	{
		if (!Z_Registration_Info_UClass_UMutableValidationSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMutableValidationSettings.OuterSingleton, Z_Construct_UClass_UMutableValidationSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMutableValidationSettings.OuterSingleton;
	}
	template<> MUTABLEVALIDATION_API UClass* StaticClass<UMutableValidationSettings>()
	{
		return UMutableValidationSettings::StaticClass();
	}
	UMutableValidationSettings::UMutableValidationSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMutableValidationSettings);
	UMutableValidationSettings::~UMutableValidationSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_MutableValidation_Private_MuV_MutableValidationSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_MutableValidation_Private_MuV_MutableValidationSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMutableValidationSettings, UMutableValidationSettings::StaticClass, TEXT("UMutableValidationSettings"), &Z_Registration_Info_UClass_UMutableValidationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMutableValidationSettings), 745678933U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_MutableValidation_Private_MuV_MutableValidationSettings_h_420565465(TEXT("/Script/MutableValidation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_MutableValidation_Private_MuV_MutableValidationSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_MutableValidation_Private_MuV_MutableValidationSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
