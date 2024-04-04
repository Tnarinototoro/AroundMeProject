// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/IO/PCGDataTableElement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGDataTableElement() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGExternalDataSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGLoadDataTableSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGLoadDataTableSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGLoadDataTableSettings::StaticRegisterNativesUPCGLoadDataTableSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGLoadDataTableSettings);
	UClass* Z_Construct_UClass_UPCGLoadDataTableSettings_NoRegister()
	{
		return UPCGLoadDataTableSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGLoadDataTableSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DataTable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGLoadDataTableSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGExternalDataSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGLoadDataTableSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGLoadDataTableSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Elements/IO/PCGDataTableElement.h" },
		{ "ModuleRelativePath", "Public/Elements/IO/PCGDataTableElement.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGLoadDataTableSettings_Statics::NewProp_DataTable_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/IO/PCGDataTableElement.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPCGLoadDataTableSettings_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGLoadDataTableSettings, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGLoadDataTableSettings_Statics::NewProp_DataTable_MetaData), Z_Construct_UClass_UPCGLoadDataTableSettings_Statics::NewProp_DataTable_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGLoadDataTableSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGLoadDataTableSettings_Statics::NewProp_DataTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGLoadDataTableSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGLoadDataTableSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGLoadDataTableSettings_Statics::ClassParams = {
		&UPCGLoadDataTableSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGLoadDataTableSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGLoadDataTableSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGLoadDataTableSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGLoadDataTableSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGLoadDataTableSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPCGLoadDataTableSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGLoadDataTableSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGLoadDataTableSettings.OuterSingleton, Z_Construct_UClass_UPCGLoadDataTableSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGLoadDataTableSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGLoadDataTableSettings>()
	{
		return UPCGLoadDataTableSettings::StaticClass();
	}
	UPCGLoadDataTableSettings::UPCGLoadDataTableSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGLoadDataTableSettings);
	UPCGLoadDataTableSettings::~UPCGLoadDataTableSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_IO_PCGDataTableElement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_IO_PCGDataTableElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGLoadDataTableSettings, UPCGLoadDataTableSettings::StaticClass, TEXT("UPCGLoadDataTableSettings"), &Z_Registration_Info_UClass_UPCGLoadDataTableSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGLoadDataTableSettings), 1436026651U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_IO_PCGDataTableElement_h_3648890571(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_IO_PCGDataTableElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_IO_PCGDataTableElement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
