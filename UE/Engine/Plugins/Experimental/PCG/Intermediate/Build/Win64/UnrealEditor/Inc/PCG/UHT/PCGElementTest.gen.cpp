// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Tests/Elements/PCGElementTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGElementTest() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGBadOutputsNodeSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGBadOutputsNodeSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGBadOutputsNodeSettings::StaticRegisterNativesUPCGBadOutputsNodeSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGBadOutputsNodeSettings);
	UClass* Z_Construct_UClass_UPCGBadOutputsNodeSettings_NoRegister()
	{
		return UPCGBadOutputsNodeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGBadOutputsNodeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGBadOutputsNodeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBadOutputsNodeSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBadOutputsNodeSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Test node to write bad outputs\n */" },
		{ "IncludePath", "Tests/Elements/PCGElementTest.h" },
		{ "ModuleRelativePath", "Private/Tests/Elements/PCGElementTest.h" },
		{ "ToolTip", "Test node to write bad outputs" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGBadOutputsNodeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGBadOutputsNodeSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGBadOutputsNodeSettings_Statics::ClassParams = {
		&UPCGBadOutputsNodeSettings::StaticClass,
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
		0x040802A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBadOutputsNodeSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGBadOutputsNodeSettings_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPCGBadOutputsNodeSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGBadOutputsNodeSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGBadOutputsNodeSettings.OuterSingleton, Z_Construct_UClass_UPCGBadOutputsNodeSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGBadOutputsNodeSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGBadOutputsNodeSettings>()
	{
		return UPCGBadOutputsNodeSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGBadOutputsNodeSettings);
	UPCGBadOutputsNodeSettings::~UPCGBadOutputsNodeSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Private_Tests_Elements_PCGElementTest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Private_Tests_Elements_PCGElementTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGBadOutputsNodeSettings, UPCGBadOutputsNodeSettings::StaticClass, TEXT("UPCGBadOutputsNodeSettings"), &Z_Registration_Info_UClass_UPCGBadOutputsNodeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGBadOutputsNodeSettings), 1921483442U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Private_Tests_Elements_PCGElementTest_h_3541515716(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Private_Tests_Elements_PCGElementTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Private_Tests_Elements_PCGElementTest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
