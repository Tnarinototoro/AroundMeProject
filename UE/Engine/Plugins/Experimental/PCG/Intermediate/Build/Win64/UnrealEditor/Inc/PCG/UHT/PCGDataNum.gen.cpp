// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/PCGDataNum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGDataNum() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGDataNumSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGDataNumSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGDataNumSettings::StaticRegisterNativesUPCGDataNumSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGDataNumSettings);
	UClass* Z_Construct_UClass_UPCGDataNumSettings_NoRegister()
	{
		return UPCGDataNumSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGDataNumSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputAttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutputAttributeName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGDataNumSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDataNumSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDataNumSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/** Counts number of data in a data collection */" },
		{ "IncludePath", "Elements/PCGDataNum.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGDataNum.h" },
		{ "ToolTip", "Counts number of data in a data collection" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDataNumSettings_Statics::NewProp_OutputAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGDataNum.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGDataNumSettings_Statics::NewProp_OutputAttributeName = { "OutputAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGDataNumSettings, OutputAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDataNumSettings_Statics::NewProp_OutputAttributeName_MetaData), Z_Construct_UClass_UPCGDataNumSettings_Statics::NewProp_OutputAttributeName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGDataNumSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGDataNumSettings_Statics::NewProp_OutputAttributeName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGDataNumSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGDataNumSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGDataNumSettings_Statics::ClassParams = {
		&UPCGDataNumSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGDataNumSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDataNumSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDataNumSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGDataNumSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDataNumSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPCGDataNumSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGDataNumSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGDataNumSettings.OuterSingleton, Z_Construct_UClass_UPCGDataNumSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGDataNumSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGDataNumSettings>()
	{
		return UPCGDataNumSettings::StaticClass();
	}
	UPCGDataNumSettings::UPCGDataNumSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGDataNumSettings);
	UPCGDataNumSettings::~UPCGDataNumSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGDataNum_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGDataNum_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGDataNumSettings, UPCGDataNumSettings::StaticClass, TEXT("UPCGDataNumSettings"), &Z_Registration_Info_UClass_UPCGDataNumSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGDataNumSettings), 3372478345U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGDataNum_h_1140585240(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGDataNum_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGDataNum_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
