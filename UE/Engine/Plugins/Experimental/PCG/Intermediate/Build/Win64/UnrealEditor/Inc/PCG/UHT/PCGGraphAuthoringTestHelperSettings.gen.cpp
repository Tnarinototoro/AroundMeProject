// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Tests/GraphAuthoring/PCGGraphAuthoringTestHelperSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGGraphAuthoringTestHelperSettings() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGGraphAuthoringTestHelperSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGGraphAuthoringTestHelperSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGGraphAuthoringTestHelperSettings::StaticRegisterNativesUPCGGraphAuthoringTestHelperSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGGraphAuthoringTestHelperSettings);
	UClass* Z_Construct_UClass_UPCGGraphAuthoringTestHelperSettings_NoRegister()
	{
		return UPCGGraphAuthoringTestHelperSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGGraphAuthoringTestHelperSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGGraphAuthoringTestHelperSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGGraphAuthoringTestHelperSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGGraphAuthoringTestHelperSettings_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/** Testing helper - generates a node with a single input and output pin of the stipulated type. */" },
		{ "IncludePath", "Tests/GraphAuthoring/PCGGraphAuthoringTestHelperSettings.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/Tests/GraphAuthoring/PCGGraphAuthoringTestHelperSettings.h" },
		{ "NotBlueprintType", "true" },
		{ "ToolTip", "Testing helper - generates a node with a single input and output pin of the stipulated type." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGGraphAuthoringTestHelperSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGGraphAuthoringTestHelperSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGGraphAuthoringTestHelperSettings_Statics::ClassParams = {
		&UPCGGraphAuthoringTestHelperSettings::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGGraphAuthoringTestHelperSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGGraphAuthoringTestHelperSettings_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPCGGraphAuthoringTestHelperSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGGraphAuthoringTestHelperSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGGraphAuthoringTestHelperSettings.OuterSingleton, Z_Construct_UClass_UPCGGraphAuthoringTestHelperSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGGraphAuthoringTestHelperSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGGraphAuthoringTestHelperSettings>()
	{
		return UPCGGraphAuthoringTestHelperSettings::StaticClass();
	}
	UPCGGraphAuthoringTestHelperSettings::UPCGGraphAuthoringTestHelperSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGGraphAuthoringTestHelperSettings);
	UPCGGraphAuthoringTestHelperSettings::~UPCGGraphAuthoringTestHelperSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Private_Tests_GraphAuthoring_PCGGraphAuthoringTestHelperSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Private_Tests_GraphAuthoring_PCGGraphAuthoringTestHelperSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGGraphAuthoringTestHelperSettings, UPCGGraphAuthoringTestHelperSettings::StaticClass, TEXT("UPCGGraphAuthoringTestHelperSettings"), &Z_Registration_Info_UClass_UPCGGraphAuthoringTestHelperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGGraphAuthoringTestHelperSettings), 3933286507U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Private_Tests_GraphAuthoring_PCGGraphAuthoringTestHelperSettings_h_2115749331(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Private_Tests_GraphAuthoring_PCGGraphAuthoringTestHelperSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Private_Tests_GraphAuthoring_PCGGraphAuthoringTestHelperSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
