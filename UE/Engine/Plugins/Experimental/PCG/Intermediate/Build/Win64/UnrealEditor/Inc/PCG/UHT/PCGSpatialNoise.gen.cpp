// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/PCGSpatialNoise.h"
#include "Metadata/PCGAttributePropertySelector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGSpatialNoise() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGSpatialNoiseSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGSpatialNoiseSettings_NoRegister();
	PCG_API UEnum* Z_Construct_UEnum_PCG_PCGSpatialNoiseMask2DMode();
	PCG_API UEnum* Z_Construct_UEnum_PCG_PCGSpatialNoiseMode();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyOutputNoSourceSelector();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_PCGSpatialNoiseMode;
	static UEnum* PCGSpatialNoiseMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_PCGSpatialNoiseMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_PCGSpatialNoiseMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_PCGSpatialNoiseMode, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGSpatialNoiseMode"));
		}
		return Z_Registration_Info_UEnum_PCGSpatialNoiseMode.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<PCGSpatialNoiseMode>()
	{
		return PCGSpatialNoiseMode_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_PCGSpatialNoiseMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_PCGSpatialNoiseMode_Statics::Enumerators[] = {
		{ "PCGSpatialNoiseMode::Perlin2D", (int64)PCGSpatialNoiseMode::Perlin2D },
		{ "PCGSpatialNoiseMode::Caustic2D", (int64)PCGSpatialNoiseMode::Caustic2D },
		{ "PCGSpatialNoiseMode::Voronoi2D", (int64)PCGSpatialNoiseMode::Voronoi2D },
		{ "PCGSpatialNoiseMode::FractionalBrownian2D", (int64)PCGSpatialNoiseMode::FractionalBrownian2D },
		{ "PCGSpatialNoiseMode::EdgeMask2D", (int64)PCGSpatialNoiseMode::EdgeMask2D },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_PCGSpatialNoiseMode_Statics::Enum_MetaDataParams[] = {
		{ "Caustic2D.Comment", "// your classic perlin noise\n" },
		{ "Caustic2D.Name", "PCGSpatialNoiseMode::Caustic2D" },
		{ "Caustic2D.ToolTip", "your classic perlin noise" },
		{ "EdgeMask2D.Comment", "// based on fractional brownian motion\n" },
		{ "EdgeMask2D.Name", "PCGSpatialNoiseMode::EdgeMask2D" },
		{ "EdgeMask2D.ToolTip", "based on fractional brownian motion" },
		{ "FractionalBrownian2D.Comment", "// voronoi noise, result a the distance to edge and cell ID\n" },
		{ "FractionalBrownian2D.Name", "PCGSpatialNoiseMode::FractionalBrownian2D" },
		{ "FractionalBrownian2D.ToolTip", "voronoi noise, result a the distance to edge and cell ID" },
		{ "ModuleRelativePath", "Public/Elements/PCGSpatialNoise.h" },
		{ "Perlin2D.Name", "PCGSpatialNoiseMode::Perlin2D" },
		{ "Voronoi2D.Comment", "// based on underwater fake custic rendering, gives swirly look\n" },
		{ "Voronoi2D.Name", "PCGSpatialNoiseMode::Voronoi2D" },
		{ "Voronoi2D.ToolTip", "based on underwater fake custic rendering, gives swirly look" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_PCGSpatialNoiseMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"PCGSpatialNoiseMode",
		"PCGSpatialNoiseMode",
		Z_Construct_UEnum_PCG_PCGSpatialNoiseMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_PCGSpatialNoiseMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_PCGSpatialNoiseMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCG_PCGSpatialNoiseMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_PCG_PCGSpatialNoiseMode()
	{
		if (!Z_Registration_Info_UEnum_PCGSpatialNoiseMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_PCGSpatialNoiseMode.InnerSingleton, Z_Construct_UEnum_PCG_PCGSpatialNoiseMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_PCGSpatialNoiseMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_PCGSpatialNoiseMask2DMode;
	static UEnum* PCGSpatialNoiseMask2DMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_PCGSpatialNoiseMask2DMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_PCGSpatialNoiseMask2DMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_PCGSpatialNoiseMask2DMode, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGSpatialNoiseMask2DMode"));
		}
		return Z_Registration_Info_UEnum_PCGSpatialNoiseMask2DMode.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<PCGSpatialNoiseMask2DMode>()
	{
		return PCGSpatialNoiseMask2DMode_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_PCGSpatialNoiseMask2DMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_PCGSpatialNoiseMask2DMode_Statics::Enumerators[] = {
		{ "PCGSpatialNoiseMask2DMode::Perlin", (int64)PCGSpatialNoiseMask2DMode::Perlin },
		{ "PCGSpatialNoiseMask2DMode::Caustic", (int64)PCGSpatialNoiseMask2DMode::Caustic },
		{ "PCGSpatialNoiseMask2DMode::FractionalBrownian", (int64)PCGSpatialNoiseMask2DMode::FractionalBrownian },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_PCGSpatialNoiseMask2DMode_Statics::Enum_MetaDataParams[] = {
		{ "Caustic.Comment", "// your classic perlin noise\n" },
		{ "Caustic.Name", "PCGSpatialNoiseMask2DMode::Caustic" },
		{ "Caustic.ToolTip", "your classic perlin noise" },
		{ "FractionalBrownian.Comment", "// based on underwater fake custic rendering, gives swirly look\n" },
		{ "FractionalBrownian.Name", "PCGSpatialNoiseMask2DMode::FractionalBrownian" },
		{ "FractionalBrownian.ToolTip", "based on underwater fake custic rendering, gives swirly look" },
		{ "ModuleRelativePath", "Public/Elements/PCGSpatialNoise.h" },
		{ "Perlin.Name", "PCGSpatialNoiseMask2DMode::Perlin" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_PCGSpatialNoiseMask2DMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"PCGSpatialNoiseMask2DMode",
		"PCGSpatialNoiseMask2DMode",
		Z_Construct_UEnum_PCG_PCGSpatialNoiseMask2DMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_PCGSpatialNoiseMask2DMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_PCGSpatialNoiseMask2DMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCG_PCGSpatialNoiseMask2DMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_PCG_PCGSpatialNoiseMask2DMode()
	{
		if (!Z_Registration_Info_UEnum_PCGSpatialNoiseMask2DMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_PCGSpatialNoiseMask2DMode.InnerSingleton, Z_Construct_UEnum_PCG_PCGSpatialNoiseMask2DMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_PCGSpatialNoiseMask2DMode.InnerSingleton;
	}
	void UPCGSpatialNoiseSettings::StaticRegisterNativesUPCGSpatialNoiseSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGSpatialNoiseSettings);
	UClass* Z_Construct_UClass_UPCGSpatialNoiseSettings_NoRegister()
	{
		return UPCGSpatialNoiseSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UECodeGen_Private::FIntPropertyParams NewProp_EdgeMask2DMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdgeMask2DMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EdgeMask2DMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Iterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Iterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTiling_MetaData[];
#endif
		static void NewProp_bTiling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTiling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Brightness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Brightness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Contrast_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Contrast;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ValueTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RandomOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoronoiCellRandomness_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_VoronoiCellRandomness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoronoiCellIDTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VoronoiCellIDTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVoronoiOrientSamplesToCellEdge_MetaData[];
#endif
		static void NewProp_bVoronoiOrientSamplesToCellEdge_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVoronoiOrientSamplesToCellEdge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TiledVoronoiResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TiledVoronoiResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TiledVoronoiEdgeBlendCellCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TiledVoronoiEdgeBlendCellCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdgeBlendDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EdgeBlendDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdgeBlendCurveOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EdgeBlendCurveOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdgeBlendCurveIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EdgeBlendCurveIntensity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * Various fractal noises that can be used to filter points\n */" },
		{ "IncludePath", "Elements/PCGSpatialNoise.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGSpatialNoise.h" },
		{ "ToolTip", "Various fractal noises that can be used to filter points" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The noise method used\n" },
		{ "ModuleRelativePath", "Public/Elements/PCGSpatialNoise.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The noise method used" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGSpatialNoiseSettings, Mode), Z_Construct_UEnum_PCG_PCGSpatialNoiseMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_Mode_MetaData), Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_Mode_MetaData) }; // 1309399282
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_EdgeMask2DMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_EdgeMask2DMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Mode == PCGSpatialNoiseMode::EdgeMask2D" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGSpatialNoise.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_EdgeMask2DMode = { "EdgeMask2DMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGSpatialNoiseSettings, EdgeMask2DMode), Z_Construct_UEnum_PCG_PCGSpatialNoiseMask2DMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_EdgeMask2DMode_MetaData), Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_EdgeMask2DMode_MetaData) }; // 1455021107
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_Iterations_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "Comment", "// this is how many times the fractal method recurses. A higher number will mean more detail\n" },
		{ "EditCondition", "Mode != PCGSpatialNoiseMode::Voronoi2D" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGSpatialNoise.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "this is how many times the fractal method recurses. A higher number will mean more detail" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_Iterations = { "Iterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGSpatialNoiseSettings, Iterations), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_Iterations_MetaData), Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_Iterations_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_bTiling_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// if true, will generate results that tile along the bounding box size of the \n" },
		{ "ModuleRelativePath", "Public/Elements/PCGSpatialNoise.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "if true, will generate results that tile along the bounding box size of the" },
	};
#endif
	void Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_bTiling_SetBit(void* Obj)
	{
		((UPCGSpatialNoiseSettings*)Obj)->bTiling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_bTiling = { "bTiling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGSpatialNoiseSettings), &Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_bTiling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_bTiling_MetaData), Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_bTiling_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_Brightness_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGSpatialNoise.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_Brightness = { "Brightness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGSpatialNoiseSettings, Brightness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_Brightness_MetaData), Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_Brightness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_Contrast_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGSpatialNoise.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_Contrast = { "Contrast", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGSpatialNoiseSettings, Contrast), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_Contrast_MetaData), Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_Contrast_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_ValueTarget_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The output attribute name to write, if not 'None'\n" },
		{ "ModuleRelativePath", "Public/Elements/PCGSpatialNoise.h" },
		{ "ToolTip", "The output attribute name to write, if not 'None'" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_ValueTarget = { "ValueTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGSpatialNoiseSettings, ValueTarget), Z_Construct_UScriptStruct_FPCGAttributePropertyOutputNoSourceSelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_ValueTarget_MetaData), Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_ValueTarget_MetaData) }; // 2827493386
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_RandomOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Adds a random amount of offset up to this amount\n" },
		{ "ModuleRelativePath", "Public/Elements/PCGSpatialNoise.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Adds a random amount of offset up to this amount" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_RandomOffset = { "RandomOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGSpatialNoiseSettings, RandomOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_RandomOffset_MetaData), Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_RandomOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// this will apply a transform to the points before calculating noise\n" },
		{ "EditCondition", "Mode != PCGSpatialNoiseMode::Voronoi2D || !bTiling" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGSpatialNoise.h" },
		{ "ToolTip", "this will apply a transform to the points before calculating noise" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGSpatialNoiseSettings, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_Transform_MetaData), Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_Transform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_VoronoiCellRandomness_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// the less random this is, the more it returns to being a grid\n" },
		{ "EditCondition", "Mode == PCGSpatialNoiseMode::Voronoi2D" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGSpatialNoise.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "the less random this is, the more it returns to being a grid" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_VoronoiCellRandomness = { "VoronoiCellRandomness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGSpatialNoiseSettings, VoronoiCellRandomness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_VoronoiCellRandomness_MetaData), Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_VoronoiCellRandomness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_VoronoiCellIDTarget_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The output attribute name to write the voronoi cell id, if not 'None'\n" },
		{ "EditCondition", "Mode == PCGSpatialNoiseMode::Voronoi2D" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGSpatialNoise.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The output attribute name to write the voronoi cell id, if not 'None'" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_VoronoiCellIDTarget = { "VoronoiCellIDTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGSpatialNoiseSettings, VoronoiCellIDTarget), Z_Construct_UScriptStruct_FPCGAttributePropertyOutputNoSourceSelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_VoronoiCellIDTarget_MetaData), Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_VoronoiCellIDTarget_MetaData) }; // 2827493386
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_bVoronoiOrientSamplesToCellEdge_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// If true it will orient the output points to point towards the cell edges, which can be used for effects\n" },
		{ "EditCondition", "Mode == PCGSpatialNoiseMode::Voronoi2D" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGSpatialNoise.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If true it will orient the output points to point towards the cell edges, which can be used for effects" },
	};
#endif
	void Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_bVoronoiOrientSamplesToCellEdge_SetBit(void* Obj)
	{
		((UPCGSpatialNoiseSettings*)Obj)->bVoronoiOrientSamplesToCellEdge = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_bVoronoiOrientSamplesToCellEdge = { "bVoronoiOrientSamplesToCellEdge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGSpatialNoiseSettings), &Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_bVoronoiOrientSamplesToCellEdge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_bVoronoiOrientSamplesToCellEdge_MetaData), Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_bVoronoiOrientSamplesToCellEdge_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_TiledVoronoiResolution_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "// The cell resolution of the tiled voronoi (across the bounds)\n" },
		{ "EditCondition", "Mode == PCGSpatialNoiseMode::Voronoi2D && bTiling" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGSpatialNoise.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The cell resolution of the tiled voronoi (across the bounds)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_TiledVoronoiResolution = { "TiledVoronoiResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGSpatialNoiseSettings, TiledVoronoiResolution), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_TiledVoronoiResolution_MetaData), Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_TiledVoronoiResolution_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_TiledVoronoiEdgeBlendCellCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// how many cells around the edge will tile\n" },
		{ "EditCondition", "Mode == PCGSpatialNoiseMode::Voronoi2D && bTiling" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGSpatialNoise.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "how many cells around the edge will tile" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_TiledVoronoiEdgeBlendCellCount = { "TiledVoronoiEdgeBlendCellCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGSpatialNoiseSettings, TiledVoronoiEdgeBlendCellCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_TiledVoronoiEdgeBlendCellCount_MetaData), Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_TiledVoronoiEdgeBlendCellCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_EdgeBlendDistance_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// if > 0, we blend to a tiling edge value\n" },
		{ "EditCondition", "Mode == PCGSpatialNoiseMode::EdgeMask2D" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGSpatialNoise.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "if > 0, we blend to a tiling edge value" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_EdgeBlendDistance = { "EdgeBlendDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGSpatialNoiseSettings, EdgeBlendDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_EdgeBlendDistance_MetaData), Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_EdgeBlendDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_EdgeBlendCurveOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "// Adjust the center point of the curve (where x = curve(x) crosses over)\n" },
		{ "EditCondition", "Mode == PCGSpatialNoiseMode::EdgeMask2D" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGSpatialNoise.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Adjust the center point of the curve (where x = curve(x) crosses over)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_EdgeBlendCurveOffset = { "EdgeBlendCurveOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGSpatialNoiseSettings, EdgeBlendCurveOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_EdgeBlendCurveOffset_MetaData), Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_EdgeBlendCurveOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_EdgeBlendCurveIntensity_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "// will makes the falloff harsher or softer\n" },
		{ "EditCondition", "Mode == PCGSpatialNoiseMode::EdgeMask2D" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGSpatialNoise.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "will makes the falloff harsher or softer" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_EdgeBlendCurveIntensity = { "EdgeBlendCurveIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGSpatialNoiseSettings, EdgeBlendCurveIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_EdgeBlendCurveIntensity_MetaData), Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_EdgeBlendCurveIntensity_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_EdgeMask2DMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_EdgeMask2DMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_Iterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_bTiling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_Brightness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_Contrast,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_ValueTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_RandomOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_VoronoiCellRandomness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_VoronoiCellIDTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_bVoronoiOrientSamplesToCellEdge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_TiledVoronoiResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_TiledVoronoiEdgeBlendCellCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_EdgeBlendDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_EdgeBlendCurveOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::NewProp_EdgeBlendCurveIntensity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGSpatialNoiseSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::ClassParams = {
		&UPCGSpatialNoiseSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPCGSpatialNoiseSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGSpatialNoiseSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGSpatialNoiseSettings.OuterSingleton, Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGSpatialNoiseSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGSpatialNoiseSettings>()
	{
		return UPCGSpatialNoiseSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGSpatialNoiseSettings);
	UPCGSpatialNoiseSettings::~UPCGSpatialNoiseSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGSpatialNoise_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGSpatialNoise_h_Statics::EnumInfo[] = {
		{ PCGSpatialNoiseMode_StaticEnum, TEXT("PCGSpatialNoiseMode"), &Z_Registration_Info_UEnum_PCGSpatialNoiseMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1309399282U) },
		{ PCGSpatialNoiseMask2DMode_StaticEnum, TEXT("PCGSpatialNoiseMask2DMode"), &Z_Registration_Info_UEnum_PCGSpatialNoiseMask2DMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1455021107U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGSpatialNoise_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGSpatialNoiseSettings, UPCGSpatialNoiseSettings::StaticClass, TEXT("UPCGSpatialNoiseSettings"), &Z_Registration_Info_UClass_UPCGSpatialNoiseSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGSpatialNoiseSettings), 2020444430U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGSpatialNoise_h_1478302518(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGSpatialNoise_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGSpatialNoise_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGSpatialNoise_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGSpatialNoise_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
