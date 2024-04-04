// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/PCGNumberOfPoints.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGNumberOfPoints() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGNumberOfPointsSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGNumberOfPointsSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGNumberOfPointsSettings::StaticRegisterNativesUPCGNumberOfPointsSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGNumberOfPointsSettings);
	UClass* Z_Construct_UClass_UPCGNumberOfPointsSettings_NoRegister()
	{
		return UPCGNumberOfPointsSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGNumberOfPointsSettings_Statics
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
	UObject* (*const Z_Construct_UClass_UPCGNumberOfPointsSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGNumberOfPointsSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGNumberOfPointsSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * Used to wrangle multiple input wires into one output wire for organizational purposes.\n */" },
		{ "IncludePath", "Elements/PCGNumberOfPoints.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGNumberOfPoints.h" },
		{ "ToolTip", "Used to wrangle multiple input wires into one output wire for organizational purposes." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGNumberOfPointsSettings_Statics::NewProp_OutputAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGNumberOfPoints.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGNumberOfPointsSettings_Statics::NewProp_OutputAttributeName = { "OutputAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGNumberOfPointsSettings, OutputAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGNumberOfPointsSettings_Statics::NewProp_OutputAttributeName_MetaData), Z_Construct_UClass_UPCGNumberOfPointsSettings_Statics::NewProp_OutputAttributeName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGNumberOfPointsSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGNumberOfPointsSettings_Statics::NewProp_OutputAttributeName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGNumberOfPointsSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGNumberOfPointsSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGNumberOfPointsSettings_Statics::ClassParams = {
		&UPCGNumberOfPointsSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGNumberOfPointsSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGNumberOfPointsSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGNumberOfPointsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGNumberOfPointsSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGNumberOfPointsSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPCGNumberOfPointsSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGNumberOfPointsSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGNumberOfPointsSettings.OuterSingleton, Z_Construct_UClass_UPCGNumberOfPointsSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGNumberOfPointsSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGNumberOfPointsSettings>()
	{
		return UPCGNumberOfPointsSettings::StaticClass();
	}
	UPCGNumberOfPointsSettings::UPCGNumberOfPointsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGNumberOfPointsSettings);
	UPCGNumberOfPointsSettings::~UPCGNumberOfPointsSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGNumberOfPoints_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGNumberOfPoints_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGNumberOfPointsSettings, UPCGNumberOfPointsSettings::StaticClass, TEXT("UPCGNumberOfPointsSettings"), &Z_Registration_Info_UClass_UPCGNumberOfPointsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGNumberOfPointsSettings), 2705408584U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGNumberOfPoints_h_2165444609(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGNumberOfPoints_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGNumberOfPoints_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
