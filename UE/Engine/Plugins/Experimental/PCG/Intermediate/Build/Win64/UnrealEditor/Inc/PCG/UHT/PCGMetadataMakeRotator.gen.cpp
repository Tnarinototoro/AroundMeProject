// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/Metadata/PCGMetadataMakeRotator.h"
#include "Metadata/PCGAttributePropertySelector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGMetadataMakeRotator() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGMetadataMakeRotatorSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGMetadataSettingsBase();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGMetadataMakeRotatorOp();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGMetadataMakeRotatorOp;
	static UEnum* EPCGMetadataMakeRotatorOp_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGMetadataMakeRotatorOp.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGMetadataMakeRotatorOp.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGMetadataMakeRotatorOp, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGMetadataMakeRotatorOp"));
		}
		return Z_Registration_Info_UEnum_EPCGMetadataMakeRotatorOp.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGMetadataMakeRotatorOp>()
	{
		return EPCGMetadataMakeRotatorOp_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGMetadataMakeRotatorOp_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGMetadataMakeRotatorOp_Statics::Enumerators[] = {
		{ "EPCGMetadataMakeRotatorOp::MakeRotFromX", (int64)EPCGMetadataMakeRotatorOp::MakeRotFromX },
		{ "EPCGMetadataMakeRotatorOp::MakeRotFromY", (int64)EPCGMetadataMakeRotatorOp::MakeRotFromY },
		{ "EPCGMetadataMakeRotatorOp::MakeRotFromZ", (int64)EPCGMetadataMakeRotatorOp::MakeRotFromZ },
		{ "EPCGMetadataMakeRotatorOp::MakeRotFromXY", (int64)EPCGMetadataMakeRotatorOp::MakeRotFromXY },
		{ "EPCGMetadataMakeRotatorOp::MakeRotFromYX", (int64)EPCGMetadataMakeRotatorOp::MakeRotFromYX },
		{ "EPCGMetadataMakeRotatorOp::MakeRotFromXZ", (int64)EPCGMetadataMakeRotatorOp::MakeRotFromXZ },
		{ "EPCGMetadataMakeRotatorOp::MakeRotFromZX", (int64)EPCGMetadataMakeRotatorOp::MakeRotFromZX },
		{ "EPCGMetadataMakeRotatorOp::MakeRotFromYZ", (int64)EPCGMetadataMakeRotatorOp::MakeRotFromYZ },
		{ "EPCGMetadataMakeRotatorOp::MakeRotFromZY", (int64)EPCGMetadataMakeRotatorOp::MakeRotFromZY },
		{ "EPCGMetadataMakeRotatorOp::MakeRotFromAxes", (int64)EPCGMetadataMakeRotatorOp::MakeRotFromAxes },
		{ "EPCGMetadataMakeRotatorOp::MakeRotFromAngles", (int64)EPCGMetadataMakeRotatorOp::MakeRotFromAngles },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGMetadataMakeRotatorOp_Statics::Enum_MetaDataParams[] = {
		{ "MakeRotFromAngles.Name", "EPCGMetadataMakeRotatorOp::MakeRotFromAngles" },
		{ "MakeRotFromAxes.Name", "EPCGMetadataMakeRotatorOp::MakeRotFromAxes" },
		{ "MakeRotFromX.Name", "EPCGMetadataMakeRotatorOp::MakeRotFromX" },
		{ "MakeRotFromXY.Name", "EPCGMetadataMakeRotatorOp::MakeRotFromXY" },
		{ "MakeRotFromXZ.Name", "EPCGMetadataMakeRotatorOp::MakeRotFromXZ" },
		{ "MakeRotFromY.Name", "EPCGMetadataMakeRotatorOp::MakeRotFromY" },
		{ "MakeRotFromYX.Name", "EPCGMetadataMakeRotatorOp::MakeRotFromYX" },
		{ "MakeRotFromYZ.Name", "EPCGMetadataMakeRotatorOp::MakeRotFromYZ" },
		{ "MakeRotFromZ.Name", "EPCGMetadataMakeRotatorOp::MakeRotFromZ" },
		{ "MakeRotFromZX.Name", "EPCGMetadataMakeRotatorOp::MakeRotFromZX" },
		{ "MakeRotFromZY.Name", "EPCGMetadataMakeRotatorOp::MakeRotFromZY" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataMakeRotator.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGMetadataMakeRotatorOp_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGMetadataMakeRotatorOp",
		"EPCGMetadataMakeRotatorOp",
		Z_Construct_UEnum_PCG_EPCGMetadataMakeRotatorOp_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGMetadataMakeRotatorOp_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGMetadataMakeRotatorOp_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCG_EPCGMetadataMakeRotatorOp_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGMetadataMakeRotatorOp()
	{
		if (!Z_Registration_Info_UEnum_EPCGMetadataMakeRotatorOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGMetadataMakeRotatorOp.InnerSingleton, Z_Construct_UEnum_PCG_EPCGMetadataMakeRotatorOp_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGMetadataMakeRotatorOp.InnerSingleton;
	}
	void UPCGMetadataMakeRotatorSettings::StaticRegisterNativesUPCGMetadataMakeRotatorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGMetadataMakeRotatorSettings);
	UClass* Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_NoRegister()
	{
		return UPCGMetadataMakeRotatorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputSource1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputSource1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputSource2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputSource2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputSource3_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputSource3;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Operation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Operation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGMetadataSettingsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/* Create a Rotator from 1, 2 or 3 axis. */" },
		{ "IncludePath", "Elements/Metadata/PCGMetadataMakeRotator.h" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataMakeRotator.h" },
		{ "ToolTip", "Create a Rotator from 1, 2 or 3 axis." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_Statics::NewProp_InputSource1_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataMakeRotator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_Statics::NewProp_InputSource1 = { "InputSource1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGMetadataMakeRotatorSettings, InputSource1), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_Statics::NewProp_InputSource1_MetaData), Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_Statics::NewProp_InputSource1_MetaData) }; // 1471452776
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_Statics::NewProp_InputSource2_MetaData[] = {
		{ "Category", "Input" },
		{ "EditCondition", "Operation != EPCGMetadataMakeRotatorOp::MakeRotFromX && Operation != EPCGMetadataMakeRotatorOp::MakeRotFromY && Operation != EPCGMetadataMakeRotatorOp::MakeRotFromZ" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataMakeRotator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_Statics::NewProp_InputSource2 = { "InputSource2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGMetadataMakeRotatorSettings, InputSource2), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_Statics::NewProp_InputSource2_MetaData), Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_Statics::NewProp_InputSource2_MetaData) }; // 1471452776
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_Statics::NewProp_InputSource3_MetaData[] = {
		{ "Category", "Input" },
		{ "EditCondition", "Operation == EPCGMetadataMakeRotatorOp::MakeRotFromAxes || Operation == EPCGMetadataMakeRotatorOp::MakeRotFromAngles" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataMakeRotator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_Statics::NewProp_InputSource3 = { "InputSource3", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGMetadataMakeRotatorSettings, InputSource3), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_Statics::NewProp_InputSource3_MetaData), Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_Statics::NewProp_InputSource3_MetaData) }; // 1471452776
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_Statics::NewProp_Operation_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataMakeRotator.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGMetadataMakeRotatorSettings, Operation), Z_Construct_UEnum_PCG_EPCGMetadataMakeRotatorOp, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_Statics::NewProp_Operation_MetaData), Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_Statics::NewProp_Operation_MetaData) }; // 2524839178
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_Statics::NewProp_InputSource1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_Statics::NewProp_InputSource2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_Statics::NewProp_InputSource3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_Statics::NewProp_Operation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_Statics::NewProp_Operation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGMetadataMakeRotatorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_Statics::ClassParams = {
		&UPCGMetadataMakeRotatorSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPCGMetadataMakeRotatorSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGMetadataMakeRotatorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGMetadataMakeRotatorSettings.OuterSingleton, Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGMetadataMakeRotatorSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGMetadataMakeRotatorSettings>()
	{
		return UPCGMetadataMakeRotatorSettings::StaticClass();
	}
	UPCGMetadataMakeRotatorSettings::UPCGMetadataMakeRotatorSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGMetadataMakeRotatorSettings);
	UPCGMetadataMakeRotatorSettings::~UPCGMetadataMakeRotatorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeRotator_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeRotator_h_Statics::EnumInfo[] = {
		{ EPCGMetadataMakeRotatorOp_StaticEnum, TEXT("EPCGMetadataMakeRotatorOp"), &Z_Registration_Info_UEnum_EPCGMetadataMakeRotatorOp, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2524839178U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeRotator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGMetadataMakeRotatorSettings, UPCGMetadataMakeRotatorSettings::StaticClass, TEXT("UPCGMetadataMakeRotatorSettings"), &Z_Registration_Info_UClass_UPCGMetadataMakeRotatorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGMetadataMakeRotatorSettings), 2687024849U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeRotator_h_3893668813(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeRotator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeRotator_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeRotator_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeRotator_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
