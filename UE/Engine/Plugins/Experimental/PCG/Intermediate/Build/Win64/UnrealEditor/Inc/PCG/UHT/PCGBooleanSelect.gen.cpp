// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/PCGBooleanSelect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGBooleanSelect() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGBooleanSelectSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGBooleanSelectSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGBooleanSelectSettings::StaticRegisterNativesUPCGBooleanSelectSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGBooleanSelectSettings);
	UClass* Z_Construct_UClass_UPCGBooleanSelectSettings_NoRegister()
	{
		return UPCGBooleanSelectSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGBooleanSelectSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseInputB_MetaData[];
#endif
		static void NewProp_bUseInputB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseInputB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGBooleanSelectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBooleanSelectSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBooleanSelectSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * Selects data from either input pin, based on a boolean condition.\n */" },
		{ "IncludePath", "Elements/PCGBooleanSelect.h" },
		{ "Keywords", "if bool select" },
		{ "ModuleRelativePath", "Public/Elements/PCGBooleanSelect.h" },
		{ "ToolTip", "Selects data from either input pin, based on a boolean condition." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBooleanSelectSettings_Statics::NewProp_bUseInputB_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGBooleanSelect.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	void Z_Construct_UClass_UPCGBooleanSelectSettings_Statics::NewProp_bUseInputB_SetBit(void* Obj)
	{
		((UPCGBooleanSelectSettings*)Obj)->bUseInputB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGBooleanSelectSettings_Statics::NewProp_bUseInputB = { "bUseInputB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGBooleanSelectSettings), &Z_Construct_UClass_UPCGBooleanSelectSettings_Statics::NewProp_bUseInputB_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBooleanSelectSettings_Statics::NewProp_bUseInputB_MetaData), Z_Construct_UClass_UPCGBooleanSelectSettings_Statics::NewProp_bUseInputB_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGBooleanSelectSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBooleanSelectSettings_Statics::NewProp_bUseInputB,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGBooleanSelectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGBooleanSelectSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGBooleanSelectSettings_Statics::ClassParams = {
		&UPCGBooleanSelectSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGBooleanSelectSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBooleanSelectSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBooleanSelectSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGBooleanSelectSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBooleanSelectSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPCGBooleanSelectSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGBooleanSelectSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGBooleanSelectSettings.OuterSingleton, Z_Construct_UClass_UPCGBooleanSelectSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGBooleanSelectSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGBooleanSelectSettings>()
	{
		return UPCGBooleanSelectSettings::StaticClass();
	}
	UPCGBooleanSelectSettings::UPCGBooleanSelectSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGBooleanSelectSettings);
	UPCGBooleanSelectSettings::~UPCGBooleanSelectSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGBooleanSelect_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGBooleanSelect_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGBooleanSelectSettings, UPCGBooleanSelectSettings::StaticClass, TEXT("UPCGBooleanSelectSettings"), &Z_Registration_Info_UClass_UPCGBooleanSelectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGBooleanSelectSettings), 374533852U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGBooleanSelect_h_4196488244(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGBooleanSelect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGBooleanSelect_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
