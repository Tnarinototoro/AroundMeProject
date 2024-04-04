// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/PCGBranch.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGBranch() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGBranchSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGBranchSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGBranchSettings::StaticRegisterNativesUPCGBranchSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGBranchSettings);
	UClass* Z_Construct_UClass_UPCGBranchSettings_NoRegister()
	{
		return UPCGBranchSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGBranchSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOutputToB_MetaData[];
#endif
		static void NewProp_bOutputToB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputToB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGBranchSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBranchSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBranchSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * Routes input data to one of two outputs,based on a boolean condition.\n */" },
		{ "IncludePath", "Elements/PCGBranch.h" },
		{ "Keywords", "if bool branch" },
		{ "ModuleRelativePath", "Public/Elements/PCGBranch.h" },
		{ "ToolTip", "Routes input data to one of two outputs,based on a boolean condition." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBranchSettings_Statics::NewProp_bOutputToB_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGBranch.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	void Z_Construct_UClass_UPCGBranchSettings_Statics::NewProp_bOutputToB_SetBit(void* Obj)
	{
		((UPCGBranchSettings*)Obj)->bOutputToB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGBranchSettings_Statics::NewProp_bOutputToB = { "bOutputToB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGBranchSettings), &Z_Construct_UClass_UPCGBranchSettings_Statics::NewProp_bOutputToB_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBranchSettings_Statics::NewProp_bOutputToB_MetaData), Z_Construct_UClass_UPCGBranchSettings_Statics::NewProp_bOutputToB_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGBranchSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBranchSettings_Statics::NewProp_bOutputToB,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGBranchSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGBranchSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGBranchSettings_Statics::ClassParams = {
		&UPCGBranchSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGBranchSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBranchSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBranchSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGBranchSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBranchSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPCGBranchSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGBranchSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGBranchSettings.OuterSingleton, Z_Construct_UClass_UPCGBranchSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGBranchSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGBranchSettings>()
	{
		return UPCGBranchSettings::StaticClass();
	}
	UPCGBranchSettings::UPCGBranchSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGBranchSettings);
	UPCGBranchSettings::~UPCGBranchSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGBranch_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGBranch_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGBranchSettings, UPCGBranchSettings::StaticClass, TEXT("UPCGBranchSettings"), &Z_Registration_Info_UClass_UPCGBranchSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGBranchSettings), 2636341587U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGBranch_h_2956749147(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGBranch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGBranch_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
