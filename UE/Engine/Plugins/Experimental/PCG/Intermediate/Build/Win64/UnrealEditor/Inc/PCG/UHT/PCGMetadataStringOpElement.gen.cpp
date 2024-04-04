// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/Metadata/PCGMetadataStringOpElement.h"
#include "Metadata/PCGAttributePropertySelector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGMetadataStringOpElement() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGMetadataSettingsBase();
	PCG_API UClass* Z_Construct_UClass_UPCGMetadataStringOpSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGMetadataStringOpSettings_NoRegister();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGMetadataStringOperation();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGMetadataStringOperation;
	static UEnum* EPCGMetadataStringOperation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGMetadataStringOperation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGMetadataStringOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGMetadataStringOperation, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGMetadataStringOperation"));
		}
		return Z_Registration_Info_UEnum_EPCGMetadataStringOperation.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGMetadataStringOperation>()
	{
		return EPCGMetadataStringOperation_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGMetadataStringOperation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGMetadataStringOperation_Statics::Enumerators[] = {
		{ "EPCGMetadataStringOperation::Append", (int64)EPCGMetadataStringOperation::Append },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGMetadataStringOperation_Statics::Enum_MetaDataParams[] = {
		{ "Append.Name", "EPCGMetadataStringOperation::Append" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataStringOpElement.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGMetadataStringOperation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGMetadataStringOperation",
		"EPCGMetadataStringOperation",
		Z_Construct_UEnum_PCG_EPCGMetadataStringOperation_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGMetadataStringOperation_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGMetadataStringOperation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCG_EPCGMetadataStringOperation_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGMetadataStringOperation()
	{
		if (!Z_Registration_Info_UEnum_EPCGMetadataStringOperation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGMetadataStringOperation.InnerSingleton, Z_Construct_UEnum_PCG_EPCGMetadataStringOperation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGMetadataStringOperation.InnerSingleton;
	}
	void UPCGMetadataStringOpSettings::StaticRegisterNativesUPCGMetadataStringOpSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGMetadataStringOpSettings);
	UClass* Z_Construct_UClass_UPCGMetadataStringOpSettings_NoRegister()
	{
		return UPCGMetadataStringOpSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGMetadataStringOpSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUInt16PropertyParams NewProp_Operation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Operation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputSource1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputSource1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputSource2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputSource2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGMetadataStringOpSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGMetadataSettingsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataStringOpSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataStringOpSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Elements/Metadata/PCGMetadataStringOpElement.h" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataStringOpElement.h" },
	};
#endif
	const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UClass_UPCGMetadataStringOpSettings_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataStringOpSettings_Statics::NewProp_Operation_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataStringOpElement.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGMetadataStringOpSettings_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGMetadataStringOpSettings, Operation), Z_Construct_UEnum_PCG_EPCGMetadataStringOperation, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataStringOpSettings_Statics::NewProp_Operation_MetaData), Z_Construct_UClass_UPCGMetadataStringOpSettings_Statics::NewProp_Operation_MetaData) }; // 4084562518
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataStringOpSettings_Statics::NewProp_InputSource1_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataStringOpElement.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGMetadataStringOpSettings_Statics::NewProp_InputSource1 = { "InputSource1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGMetadataStringOpSettings, InputSource1), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataStringOpSettings_Statics::NewProp_InputSource1_MetaData), Z_Construct_UClass_UPCGMetadataStringOpSettings_Statics::NewProp_InputSource1_MetaData) }; // 1471452776
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataStringOpSettings_Statics::NewProp_InputSource2_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataStringOpElement.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGMetadataStringOpSettings_Statics::NewProp_InputSource2 = { "InputSource2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGMetadataStringOpSettings, InputSource2), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataStringOpSettings_Statics::NewProp_InputSource2_MetaData), Z_Construct_UClass_UPCGMetadataStringOpSettings_Statics::NewProp_InputSource2_MetaData) }; // 1471452776
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGMetadataStringOpSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataStringOpSettings_Statics::NewProp_Operation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataStringOpSettings_Statics::NewProp_Operation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataStringOpSettings_Statics::NewProp_InputSource1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataStringOpSettings_Statics::NewProp_InputSource2,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGMetadataStringOpSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGMetadataStringOpSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGMetadataStringOpSettings_Statics::ClassParams = {
		&UPCGMetadataStringOpSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGMetadataStringOpSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataStringOpSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataStringOpSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGMetadataStringOpSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataStringOpSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPCGMetadataStringOpSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGMetadataStringOpSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGMetadataStringOpSettings.OuterSingleton, Z_Construct_UClass_UPCGMetadataStringOpSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGMetadataStringOpSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGMetadataStringOpSettings>()
	{
		return UPCGMetadataStringOpSettings::StaticClass();
	}
	UPCGMetadataStringOpSettings::UPCGMetadataStringOpSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGMetadataStringOpSettings);
	UPCGMetadataStringOpSettings::~UPCGMetadataStringOpSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataStringOpElement_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataStringOpElement_h_Statics::EnumInfo[] = {
		{ EPCGMetadataStringOperation_StaticEnum, TEXT("EPCGMetadataStringOperation"), &Z_Registration_Info_UEnum_EPCGMetadataStringOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4084562518U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataStringOpElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGMetadataStringOpSettings, UPCGMetadataStringOpSettings::StaticClass, TEXT("UPCGMetadataStringOpSettings"), &Z_Registration_Info_UClass_UPCGMetadataStringOpSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGMetadataStringOpSettings), 1233761688U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataStringOpElement_h_63269637(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataStringOpElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataStringOpElement_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataStringOpElement_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataStringOpElement_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
