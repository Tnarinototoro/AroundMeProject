// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/PCGLoopElement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGLoopElement() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGLoopSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGLoopSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSubgraphSettings();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGLoopSettings::StaticRegisterNativesUPCGLoopSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGLoopSettings);
	UClass* Z_Construct_UClass_UPCGLoopSettings_NoRegister()
	{
		return UPCGLoopSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGLoopSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoopPins_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LoopPins;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGLoopSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSubgraphSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGLoopSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGLoopSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Elements/PCGLoopElement.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGLoopElement.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGLoopSettings_Statics::NewProp_LoopPins_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "/** \n\x09* Comma-separated list of pin names on which we will loop by-element in a step-wise fashion; if more than one is provided, it is expected that they all have the same number of data. \n\x09* If none are provided, the first connected pin will taken as the pin to loop on. \n\x09*/" },
		{ "ModuleRelativePath", "Public/Elements/PCGLoopElement.h" },
		{ "ToolTip", "Comma-separated list of pin names on which we will loop by-element in a step-wise fashion; if more than one is provided, it is expected that they all have the same number of data.\nIf none are provided, the first connected pin will taken as the pin to loop on." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGLoopSettings_Statics::NewProp_LoopPins = { "LoopPins", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGLoopSettings, LoopPins), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGLoopSettings_Statics::NewProp_LoopPins_MetaData), Z_Construct_UClass_UPCGLoopSettings_Statics::NewProp_LoopPins_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGLoopSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGLoopSettings_Statics::NewProp_LoopPins,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGLoopSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGLoopSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGLoopSettings_Statics::ClassParams = {
		&UPCGLoopSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGLoopSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGLoopSettings_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGLoopSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGLoopSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGLoopSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPCGLoopSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGLoopSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGLoopSettings.OuterSingleton, Z_Construct_UClass_UPCGLoopSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGLoopSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGLoopSettings>()
	{
		return UPCGLoopSettings::StaticClass();
	}
	UPCGLoopSettings::UPCGLoopSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGLoopSettings);
	UPCGLoopSettings::~UPCGLoopSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGLoopElement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGLoopElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGLoopSettings, UPCGLoopSettings::StaticClass, TEXT("UPCGLoopSettings"), &Z_Registration_Info_UClass_UPCGLoopSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGLoopSettings), 1525309248U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGLoopElement_h_2299185522(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGLoopElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGLoopElement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
