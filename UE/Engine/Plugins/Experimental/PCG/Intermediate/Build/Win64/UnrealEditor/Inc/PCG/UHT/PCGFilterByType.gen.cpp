// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/PCGFilterByType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGFilterByType() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGFilterByTypeSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGFilterByTypeSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGDataType();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGFilterByTypeSettings::StaticRegisterNativesUPCGFilterByTypeSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGFilterByTypeSettings);
	UClass* Z_Construct_UClass_UPCGFilterByTypeSettings_NoRegister()
	{
		return UPCGFilterByTypeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGFilterByTypeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_TargetType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGFilterByTypeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGFilterByTypeSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGFilterByTypeSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/** Filters an input collection based on data type. */" },
		{ "IncludePath", "Elements/PCGFilterByType.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGFilterByType.h" },
		{ "ToolTip", "Filters an input collection based on data type." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UPCGFilterByTypeSettings_Statics::NewProp_TargetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGFilterByTypeSettings_Statics::NewProp_TargetType_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGFilterByType.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGFilterByTypeSettings_Statics::NewProp_TargetType = { "TargetType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGFilterByTypeSettings, TargetType), Z_Construct_UEnum_PCG_EPCGDataType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGFilterByTypeSettings_Statics::NewProp_TargetType_MetaData), Z_Construct_UClass_UPCGFilterByTypeSettings_Statics::NewProp_TargetType_MetaData) }; // 3852861111
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGFilterByTypeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGFilterByTypeSettings_Statics::NewProp_TargetType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGFilterByTypeSettings_Statics::NewProp_TargetType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGFilterByTypeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGFilterByTypeSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGFilterByTypeSettings_Statics::ClassParams = {
		&UPCGFilterByTypeSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGFilterByTypeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGFilterByTypeSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGFilterByTypeSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGFilterByTypeSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGFilterByTypeSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPCGFilterByTypeSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGFilterByTypeSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGFilterByTypeSettings.OuterSingleton, Z_Construct_UClass_UPCGFilterByTypeSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGFilterByTypeSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGFilterByTypeSettings>()
	{
		return UPCGFilterByTypeSettings::StaticClass();
	}
	UPCGFilterByTypeSettings::UPCGFilterByTypeSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGFilterByTypeSettings);
	UPCGFilterByTypeSettings::~UPCGFilterByTypeSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGFilterByType_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGFilterByType_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGFilterByTypeSettings, UPCGFilterByTypeSettings::StaticClass, TEXT("UPCGFilterByTypeSettings"), &Z_Registration_Info_UClass_UPCGFilterByTypeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGFilterByTypeSettings), 2049518594U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGFilterByType_h_3213936807(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGFilterByType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGFilterByType_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
