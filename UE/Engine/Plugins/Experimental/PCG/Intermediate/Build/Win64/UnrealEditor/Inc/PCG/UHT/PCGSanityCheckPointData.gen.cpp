// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/PCGSanityCheckPointData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGSanityCheckPointData() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGSanityCheckPointDataSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGSanityCheckPointDataSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGSanityCheckPointDataSettings::StaticRegisterNativesUPCGSanityCheckPointDataSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGSanityCheckPointDataSettings);
	UClass* Z_Construct_UClass_UPCGSanityCheckPointDataSettings_NoRegister()
	{
		return UPCGSanityCheckPointDataSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGSanityCheckPointDataSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinPointCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinPointCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPointCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPointCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGSanityCheckPointDataSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSanityCheckPointDataSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSanityCheckPointDataSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Elements/PCGSanityCheckPointData.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGSanityCheckPointData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSanityCheckPointDataSettings_Statics::NewProp_MinPointCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGSanityCheckPointData.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGSanityCheckPointDataSettings_Statics::NewProp_MinPointCount = { "MinPointCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGSanityCheckPointDataSettings, MinPointCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSanityCheckPointDataSettings_Statics::NewProp_MinPointCount_MetaData), Z_Construct_UClass_UPCGSanityCheckPointDataSettings_Statics::NewProp_MinPointCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSanityCheckPointDataSettings_Statics::NewProp_MaxPointCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGSanityCheckPointData.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGSanityCheckPointDataSettings_Statics::NewProp_MaxPointCount = { "MaxPointCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGSanityCheckPointDataSettings, MaxPointCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSanityCheckPointDataSettings_Statics::NewProp_MaxPointCount_MetaData), Z_Construct_UClass_UPCGSanityCheckPointDataSettings_Statics::NewProp_MaxPointCount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGSanityCheckPointDataSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSanityCheckPointDataSettings_Statics::NewProp_MinPointCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSanityCheckPointDataSettings_Statics::NewProp_MaxPointCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGSanityCheckPointDataSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGSanityCheckPointDataSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGSanityCheckPointDataSettings_Statics::ClassParams = {
		&UPCGSanityCheckPointDataSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGSanityCheckPointDataSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSanityCheckPointDataSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSanityCheckPointDataSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGSanityCheckPointDataSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSanityCheckPointDataSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPCGSanityCheckPointDataSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGSanityCheckPointDataSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGSanityCheckPointDataSettings.OuterSingleton, Z_Construct_UClass_UPCGSanityCheckPointDataSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGSanityCheckPointDataSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGSanityCheckPointDataSettings>()
	{
		return UPCGSanityCheckPointDataSettings::StaticClass();
	}
	UPCGSanityCheckPointDataSettings::UPCGSanityCheckPointDataSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGSanityCheckPointDataSettings);
	UPCGSanityCheckPointDataSettings::~UPCGSanityCheckPointDataSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGSanityCheckPointData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGSanityCheckPointData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGSanityCheckPointDataSettings, UPCGSanityCheckPointDataSettings::StaticClass, TEXT("UPCGSanityCheckPointDataSettings"), &Z_Registration_Info_UClass_UPCGSanityCheckPointDataSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGSanityCheckPointDataSettings), 1726234236U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGSanityCheckPointData_h_1067167350(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGSanityCheckPointData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGSanityCheckPointData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
