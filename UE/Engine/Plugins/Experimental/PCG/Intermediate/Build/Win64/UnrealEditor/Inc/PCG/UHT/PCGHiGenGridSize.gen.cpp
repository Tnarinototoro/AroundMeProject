// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/PCGHiGenGridSize.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGHiGenGridSize() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGHiGenGridSizeSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGHiGenGridSizeSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGHiGenGrid();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGHiGenGridSizeSettings::StaticRegisterNativesUPCGHiGenGridSizeSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGHiGenGridSizeSettings);
	UClass* Z_Construct_UClass_UPCGHiGenGridSizeSettings_NoRegister()
	{
		return UPCGHiGenGridSizeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGHiGenGridSizeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_HiGenGridSize_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HiGenGridSize_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HiGenGridSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGHiGenGridSizeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGHiGenGridSizeSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGHiGenGridSizeSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * Set the execution grid size for downstream nodes. Enables executing a single graph across a hierarchy of grids.\n */" },
		{ "IncludePath", "Elements/PCGHiGenGridSize.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGHiGenGridSize.h" },
		{ "ToolTip", "Set the execution grid size for downstream nodes. Enables executing a single graph across a hierarchy of grids." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UPCGHiGenGridSizeSettings_Statics::NewProp_HiGenGridSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGHiGenGridSizeSettings_Statics::NewProp_HiGenGridSize_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "//~End UPCGSettings interface\n" },
		{ "ModuleRelativePath", "Public/Elements/PCGHiGenGridSize.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGHiGenGridSizeSettings_Statics::NewProp_HiGenGridSize = { "HiGenGridSize", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGHiGenGridSizeSettings, HiGenGridSize), Z_Construct_UEnum_PCG_EPCGHiGenGrid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGHiGenGridSizeSettings_Statics::NewProp_HiGenGridSize_MetaData), Z_Construct_UClass_UPCGHiGenGridSizeSettings_Statics::NewProp_HiGenGridSize_MetaData) }; // 1747751934
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGHiGenGridSizeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGHiGenGridSizeSettings_Statics::NewProp_HiGenGridSize_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGHiGenGridSizeSettings_Statics::NewProp_HiGenGridSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGHiGenGridSizeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGHiGenGridSizeSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGHiGenGridSizeSettings_Statics::ClassParams = {
		&UPCGHiGenGridSizeSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGHiGenGridSizeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGHiGenGridSizeSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGHiGenGridSizeSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGHiGenGridSizeSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGHiGenGridSizeSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPCGHiGenGridSizeSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGHiGenGridSizeSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGHiGenGridSizeSettings.OuterSingleton, Z_Construct_UClass_UPCGHiGenGridSizeSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGHiGenGridSizeSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGHiGenGridSizeSettings>()
	{
		return UPCGHiGenGridSizeSettings::StaticClass();
	}
	UPCGHiGenGridSizeSettings::UPCGHiGenGridSizeSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGHiGenGridSizeSettings);
	UPCGHiGenGridSizeSettings::~UPCGHiGenGridSizeSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGHiGenGridSize_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGHiGenGridSize_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGHiGenGridSizeSettings, UPCGHiGenGridSizeSettings::StaticClass, TEXT("UPCGHiGenGridSizeSettings"), &Z_Registration_Info_UClass_UPCGHiGenGridSizeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGHiGenGridSizeSettings), 1943050984U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGHiGenGridSize_h_1905245856(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGHiGenGridSize_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGHiGenGridSize_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
