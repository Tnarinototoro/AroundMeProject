// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/PCGCollapseElement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGCollapseElement() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGCollapseSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGCollapseSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGCollapseSettings::StaticRegisterNativesUPCGCollapseSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGCollapseSettings);
	UClass* Z_Construct_UClass_UPCGCollapseSettings_NoRegister()
	{
		return UPCGCollapseSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGCollapseSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGCollapseSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCollapseSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCollapseSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/** Convert input to point data, performing sampling with default settings if necessary */" },
		{ "IncludePath", "Elements/PCGCollapseElement.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGCollapseElement.h" },
		{ "ToolTip", "Convert input to point data, performing sampling with default settings if necessary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGCollapseSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGCollapseSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGCollapseSettings_Statics::ClassParams = {
		&UPCGCollapseSettings::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCollapseSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGCollapseSettings_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPCGCollapseSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGCollapseSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGCollapseSettings.OuterSingleton, Z_Construct_UClass_UPCGCollapseSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGCollapseSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGCollapseSettings>()
	{
		return UPCGCollapseSettings::StaticClass();
	}
	UPCGCollapseSettings::UPCGCollapseSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGCollapseSettings);
	UPCGCollapseSettings::~UPCGCollapseSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGCollapseElement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGCollapseElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGCollapseSettings, UPCGCollapseSettings::StaticClass, TEXT("UPCGCollapseSettings"), &Z_Registration_Info_UClass_UPCGCollapseSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGCollapseSettings), 372405309U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGCollapseElement_h_4001732193(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGCollapseElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGCollapseElement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
