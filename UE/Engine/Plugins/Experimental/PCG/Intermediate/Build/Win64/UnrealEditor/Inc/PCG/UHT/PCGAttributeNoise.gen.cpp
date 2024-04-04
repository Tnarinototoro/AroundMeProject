// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/PCGAttributeNoise.h"
#include "Metadata/PCGAttributePropertySelector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGAttributeNoise() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGAttributeNoiseSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGAttributeNoiseSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGAttributeNoiseMode();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyOutputSelector();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGAttributeNoiseMode;
	static UEnum* EPCGAttributeNoiseMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGAttributeNoiseMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGAttributeNoiseMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGAttributeNoiseMode, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGAttributeNoiseMode"));
		}
		return Z_Registration_Info_UEnum_EPCGAttributeNoiseMode.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGAttributeNoiseMode>()
	{
		return EPCGAttributeNoiseMode_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGAttributeNoiseMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGAttributeNoiseMode_Statics::Enumerators[] = {
		{ "EPCGAttributeNoiseMode::Set", (int64)EPCGAttributeNoiseMode::Set },
		{ "EPCGAttributeNoiseMode::Minimum", (int64)EPCGAttributeNoiseMode::Minimum },
		{ "EPCGAttributeNoiseMode::Maximum", (int64)EPCGAttributeNoiseMode::Maximum },
		{ "EPCGAttributeNoiseMode::Add", (int64)EPCGAttributeNoiseMode::Add },
		{ "EPCGAttributeNoiseMode::Multiply", (int64)EPCGAttributeNoiseMode::Multiply },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGAttributeNoiseMode_Statics::Enum_MetaDataParams[] = {
		{ "Add.Name", "EPCGAttributeNoiseMode::Add" },
		{ "Maximum.Name", "EPCGAttributeNoiseMode::Maximum" },
		{ "Minimum.Name", "EPCGAttributeNoiseMode::Minimum" },
		{ "ModuleRelativePath", "Public/Elements/PCGAttributeNoise.h" },
		{ "Multiply.Name", "EPCGAttributeNoiseMode::Multiply" },
		{ "Set.Name", "EPCGAttributeNoiseMode::Set" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGAttributeNoiseMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGAttributeNoiseMode",
		"EPCGAttributeNoiseMode",
		Z_Construct_UEnum_PCG_EPCGAttributeNoiseMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGAttributeNoiseMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGAttributeNoiseMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCG_EPCGAttributeNoiseMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGAttributeNoiseMode()
	{
		if (!Z_Registration_Info_UEnum_EPCGAttributeNoiseMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGAttributeNoiseMode.InnerSingleton, Z_Construct_UEnum_PCG_EPCGAttributeNoiseMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGAttributeNoiseMode.InnerSingleton;
	}
	void UPCGAttributeNoiseSettings::StaticRegisterNativesUPCGAttributeNoiseSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGAttributeNoiseSettings);
	UClass* Z_Construct_UClass_UPCGAttributeNoiseSettings_NoRegister()
	{
		return UPCGAttributeNoiseSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputSource_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputTarget;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvertSource_MetaData[];
#endif
		static void NewProp_bInvertSource_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClampResult_MetaData[];
#endif
		static void NewProp_bClampResult_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampResult;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_DensityMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DensityMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DensityMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DensityNoiseMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DensityNoiseMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DensityNoiseMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DensityNoiseMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvertSourceDensity_MetaData[];
#endif
		static void NewProp_bInvertSourceDensity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertSourceDensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOutputTargetDifferentFromInputSource_MetaData[];
#endif
		static void NewProp_bOutputTargetDifferentFromInputSource_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputTargetDifferentFromInputSource;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n* Apply some noise to an attribute/property. You can select the mode you want and a noise range.\n* Support all numerical types and vectors/rotators.\n*/" },
		{ "IncludePath", "Elements/PCGAttributeNoise.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGAttributeNoise.h" },
		{ "ToolTip", "Apply some noise to an attribute/property. You can select the mode you want and a noise range.\nSupport all numerical types and vectors/rotators." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_InputSource_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGAttributeNoise.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_InputSource = { "InputSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGAttributeNoiseSettings, InputSource), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_InputSource_MetaData), Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_InputSource_MetaData) }; // 1471452776
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_OutputTarget_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGAttributeNoise.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_OutputTarget = { "OutputTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGAttributeNoiseSettings, OutputTarget), Z_Construct_UScriptStruct_FPCGAttributePropertyOutputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_OutputTarget_MetaData), Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_OutputTarget_MetaData) }; // 1603590971
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attribute = (Original op Noise), Noise in [NoiseMin, NoiseMax] */" },
		{ "ModuleRelativePath", "Public/Elements/PCGAttributeNoise.h" },
		{ "PCG_Overridable", "" },
		{ "PCG_OverrideAliases", "DensityMode" },
		{ "ToolTip", "Attribute = (Original op Noise), Noise in [NoiseMin, NoiseMax]" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGAttributeNoiseSettings, Mode), Z_Construct_UEnum_PCG_EPCGAttributeNoiseMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_Mode_MetaData), Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_Mode_MetaData) }; // 2850868902
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_NoiseMin_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGAttributeNoise.h" },
		{ "PCG_Overridable", "" },
		{ "PCG_OverrideAliases", "DensityNoiseMin" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_NoiseMin = { "NoiseMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGAttributeNoiseSettings, NoiseMin), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_NoiseMin_MetaData), Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_NoiseMin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_NoiseMax_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGAttributeNoise.h" },
		{ "PCG_Overridable", "" },
		{ "PCG_OverrideAliases", "DensityNoiseMax" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_NoiseMax = { "NoiseMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGAttributeNoiseSettings, NoiseMax), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_NoiseMax_MetaData), Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_NoiseMax_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_bInvertSource_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attribute = 1 - Attribute before applying the operation */" },
		{ "ModuleRelativePath", "Public/Elements/PCGAttributeNoise.h" },
		{ "PCG_Overridable", "" },
		{ "PCG_OverrideAliases", "bInvertSourceDensity" },
		{ "ToolTip", "Attribute = 1 - Attribute before applying the operation" },
	};
#endif
	void Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_bInvertSource_SetBit(void* Obj)
	{
		((UPCGAttributeNoiseSettings*)Obj)->bInvertSource = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_bInvertSource = { "bInvertSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGAttributeNoiseSettings), &Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_bInvertSource_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_bInvertSource_MetaData), Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_bInvertSource_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_bClampResult_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Clamp the result between 0 and 1. Always applied if we apply noise to the density.\n" },
		{ "ModuleRelativePath", "Public/Elements/PCGAttributeNoise.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Clamp the result between 0 and 1. Always applied if we apply noise to the density." },
	};
#endif
	void Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_bClampResult_SetBit(void* Obj)
	{
		((UPCGAttributeNoiseSettings*)Obj)->bClampResult = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_bClampResult = { "bClampResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGAttributeNoiseSettings), &Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_bClampResult_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_bClampResult_MetaData), Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_bClampResult_MetaData) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_DensityMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_DensityMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGAttributeNoise.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_DensityMode = { "DensityMode", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGAttributeNoiseSettings, DensityMode_DEPRECATED), Z_Construct_UEnum_PCG_EPCGAttributeNoiseMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_DensityMode_MetaData), Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_DensityMode_MetaData) }; // 2850868902
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_DensityNoiseMin_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGAttributeNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_DensityNoiseMin = { "DensityNoiseMin", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGAttributeNoiseSettings, DensityNoiseMin_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_DensityNoiseMin_MetaData), Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_DensityNoiseMin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_DensityNoiseMax_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGAttributeNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_DensityNoiseMax = { "DensityNoiseMax", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGAttributeNoiseSettings, DensityNoiseMax_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_DensityNoiseMax_MetaData), Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_DensityNoiseMax_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_bInvertSourceDensity_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGAttributeNoise.h" },
	};
#endif
	void Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_bInvertSourceDensity_SetBit(void* Obj)
	{
		((UPCGAttributeNoiseSettings*)Obj)->bInvertSourceDensity_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_bInvertSourceDensity = { "bInvertSourceDensity", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGAttributeNoiseSettings), &Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_bInvertSourceDensity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_bInvertSourceDensity_MetaData), Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_bInvertSourceDensity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_bOutputTargetDifferentFromInputSource_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGAttributeNoise.h" },
	};
#endif
	void Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_bOutputTargetDifferentFromInputSource_SetBit(void* Obj)
	{
		((UPCGAttributeNoiseSettings*)Obj)->bOutputTargetDifferentFromInputSource_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_bOutputTargetDifferentFromInputSource = { "bOutputTargetDifferentFromInputSource", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGAttributeNoiseSettings), &Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_bOutputTargetDifferentFromInputSource_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_bOutputTargetDifferentFromInputSource_MetaData), Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_bOutputTargetDifferentFromInputSource_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_InputSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_OutputTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_NoiseMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_NoiseMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_bInvertSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_bClampResult,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_DensityMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_DensityMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_DensityNoiseMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_DensityNoiseMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_bInvertSourceDensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::NewProp_bOutputTargetDifferentFromInputSource,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGAttributeNoiseSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::ClassParams = {
		&UPCGAttributeNoiseSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPCGAttributeNoiseSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGAttributeNoiseSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGAttributeNoiseSettings.OuterSingleton, Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGAttributeNoiseSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGAttributeNoiseSettings>()
	{
		return UPCGAttributeNoiseSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGAttributeNoiseSettings);
	UPCGAttributeNoiseSettings::~UPCGAttributeNoiseSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGAttributeNoise_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGAttributeNoise_h_Statics::EnumInfo[] = {
		{ EPCGAttributeNoiseMode_StaticEnum, TEXT("EPCGAttributeNoiseMode"), &Z_Registration_Info_UEnum_EPCGAttributeNoiseMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2850868902U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGAttributeNoise_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGAttributeNoiseSettings, UPCGAttributeNoiseSettings::StaticClass, TEXT("UPCGAttributeNoiseSettings"), &Z_Registration_Info_UClass_UPCGAttributeNoiseSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGAttributeNoiseSettings), 2342253473U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGAttributeNoise_h_2997212937(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGAttributeNoise_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGAttributeNoise_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGAttributeNoise_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGAttributeNoise_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
