// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UVEditorDistortionVisualization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVEditorDistortionVisualization() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	UPackage* Z_Construct_UPackage__Script_UVEditor();
	UVEDITOR_API UClass* Z_Construct_UClass_UUVEditorDistortionVisualization();
	UVEDITOR_API UClass* Z_Construct_UClass_UUVEditorDistortionVisualization_NoRegister();
	UVEDITOR_API UClass* Z_Construct_UClass_UUVEditorDistortionVisualizationProperties();
	UVEDITOR_API UClass* Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_NoRegister();
	UVEDITOR_API UEnum* Z_Construct_UEnum_UVEditor_EDistortionMetric();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorToolMeshInput_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDistortionMetric;
	static UEnum* EDistortionMetric_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDistortionMetric.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDistortionMetric.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UVEditor_EDistortionMetric, (UObject*)Z_Construct_UPackage__Script_UVEditor(), TEXT("EDistortionMetric"));
		}
		return Z_Registration_Info_UEnum_EDistortionMetric.OuterSingleton;
	}
	template<> UVEDITOR_API UEnum* StaticEnum<EDistortionMetric>()
	{
		return EDistortionMetric_StaticEnum();
	}
	struct Z_Construct_UEnum_UVEditor_EDistortionMetric_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UVEditor_EDistortionMetric_Statics::Enumerators[] = {
		{ "EDistortionMetric::ReedBeta", (int64)EDistortionMetric::ReedBeta },
		{ "EDistortionMetric::Sander_L2", (int64)EDistortionMetric::Sander_L2 },
		{ "EDistortionMetric::Sander_LInf", (int64)EDistortionMetric::Sander_LInf },
		{ "EDistortionMetric::TexelDensity", (int64)EDistortionMetric::TexelDensity },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UVEditor_EDistortionMetric_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UVEditorDistortionVisualization.h" },
		{ "ReedBeta.Comment", "// Represents the shape deviation from the worldspace triangle element, sans scaling. \n" },
		{ "ReedBeta.DisplayName", "Elliptical Eccentricity" },
		{ "ReedBeta.Name", "EDistortionMetric::ReedBeta" },
		{ "ReedBeta.ToolTip", "Represents the shape deviation from the worldspace triangle element, sans scaling." },
		{ "Sander_L2.Comment", "// Represents the root-mean-square strech over all directions vs the worldspace triangle element\n" },
		{ "Sander_L2.DisplayName", "L2 Norm" },
		{ "Sander_L2.Name", "EDistortionMetric::Sander_L2" },
		{ "Sander_L2.ToolTip", "Represents the root-mean-square strech over all directions vs the worldspace triangle element" },
		{ "Sander_LInf.Comment", "// Represents the worst-case, or greatest stretch in any particular direction, vs the worldspace triangle element\n" },
		{ "Sander_LInf.DisplayName", "L Infinity Norm" },
		{ "Sander_LInf.Name", "EDistortionMetric::Sander_LInf" },
		{ "Sander_LInf.ToolTip", "Represents the worst-case, or greatest stretch in any particular direction, vs the worldspace triangle element" },
		{ "TexelDensity.Comment", "// Shows the current texile density ratio, compared against the average baseline of the entire mesh. \n" },
		{ "TexelDensity.DisplayName", "Texel Density" },
		{ "TexelDensity.Name", "EDistortionMetric::TexelDensity" },
		{ "TexelDensity.ToolTip", "Shows the current texile density ratio, compared against the average baseline of the entire mesh." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UVEditor_EDistortionMetric_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UVEditor,
		nullptr,
		"EDistortionMetric",
		"EDistortionMetric",
		Z_Construct_UEnum_UVEditor_EDistortionMetric_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UVEditor_EDistortionMetric_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UVEditor_EDistortionMetric_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UVEditor_EDistortionMetric_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_UVEditor_EDistortionMetric()
	{
		if (!Z_Registration_Info_UEnum_EDistortionMetric.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDistortionMetric.InnerSingleton, Z_Construct_UEnum_UVEditor_EDistortionMetric_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDistortionMetric.InnerSingleton;
	}
	void UUVEditorDistortionVisualizationProperties::StaticRegisterNativesUUVEditorDistortionVisualizationProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorDistortionVisualizationProperties);
	UClass* Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_NoRegister()
	{
		return UUVEditorDistortionVisualizationProperties::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[];
#endif
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Metric_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metric_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Metric;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCompareToAverageDensity_MetaData[];
#endif
		static void NewProp_bCompareToAverageDensity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompareToAverageDensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRespectUDIMTextureResolutions_MetaData[];
#endif
		static void NewProp_bRespectUDIMTextureResolutions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRespectUDIMTextureResolutions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MapSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetTexelDensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetTexelDensity;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PerUDIMTextureResolution_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PerUDIMTextureResolution_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerUDIMTextureResolution_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PerUDIMTextureResolution;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Visualization settings for the UUVEditorDistortionVisualization\n */" },
		{ "IncludePath", "UVEditorDistortionVisualization.h" },
		{ "ModuleRelativePath", "Public/UVEditorDistortionVisualization.h" },
		{ "ToolTip", "Visualization settings for the UUVEditorDistortionVisualization" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_bVisible_MetaData[] = {
		{ "Category", "Distortion Visualization" },
		{ "Comment", "/** Should the visualization be shown.*/" },
		{ "DisplayName", "Display UV Distortion Visualization" },
		{ "ModuleRelativePath", "Public/UVEditorDistortionVisualization.h" },
		{ "ToolTip", "Should the visualization be shown." },
	};
#endif
	void Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((UUVEditorDistortionVisualizationProperties*)Obj)->bVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUVEditorDistortionVisualizationProperties), &Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_bVisible_MetaData), Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_bVisible_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_Metric_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_Metric_MetaData[] = {
		{ "Category", "Distortion Visualization" },
		{ "Comment", "/** The specific metric used to classify and visualize distortion. */" },
		{ "DisplayName", "Metric" },
		{ "ModuleRelativePath", "Public/UVEditorDistortionVisualization.h" },
		{ "ToolTip", "The specific metric used to classify and visualize distortion." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_Metric = { "Metric", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVEditorDistortionVisualizationProperties, Metric), Z_Construct_UEnum_UVEditor_EDistortionMetric, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_Metric_MetaData), Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_Metric_MetaData) }; // 2263674727
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_bCompareToAverageDensity_MetaData[] = {
		{ "Comment", "//~UPROPERTY(EditAnywhere, Category = \"Distortion Visualization|Texel Density\", meta = (DisplayName = \"Use Average Baseline\", EditCondition = \"Metric == EDistortionMetric::TexelDensity\"))\n" },
		{ "ModuleRelativePath", "Public/UVEditorDistortionVisualization.h" },
	};
#endif
	void Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_bCompareToAverageDensity_SetBit(void* Obj)
	{
		((UUVEditorDistortionVisualizationProperties*)Obj)->bCompareToAverageDensity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_bCompareToAverageDensity = { "bCompareToAverageDensity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUVEditorDistortionVisualizationProperties), &Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_bCompareToAverageDensity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_bCompareToAverageDensity_MetaData), Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_bCompareToAverageDensity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_bRespectUDIMTextureResolutions_MetaData[] = {
		{ "Category", "Distortion Visualization|Texel Density" },
		{ "Comment", "/** When computing average texel density, take into account specific UDIM tile resolutions for a more accurate representation */" },
		{ "DisplayName", "Use UDIM Resolutions" },
		{ "EditCondition", "Metric == EDistortionMetric::TexelDensity" },
		{ "ModuleRelativePath", "Public/UVEditorDistortionVisualization.h" },
		{ "ToolTip", "When computing average texel density, take into account specific UDIM tile resolutions for a more accurate representation" },
	};
#endif
	void Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_bRespectUDIMTextureResolutions_SetBit(void* Obj)
	{
		((UUVEditorDistortionVisualizationProperties*)Obj)->bRespectUDIMTextureResolutions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_bRespectUDIMTextureResolutions = { "bRespectUDIMTextureResolutions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUVEditorDistortionVisualizationProperties), &Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_bRespectUDIMTextureResolutions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_bRespectUDIMTextureResolutions_MetaData), Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_bRespectUDIMTextureResolutions_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_MapSize_MetaData[] = {
		{ "Comment", "//~ TODO - Enable support for manual density specificaitons at a future date\n//~UPROPERTY(EditAnywhere, Category = \"Distortion Visualization|Texel Density\", meta = (DisplayName = \"Texture Map Dimension\", EditCondition = \"!bCompareToAverageDensity && !bRespectUDIMTextureResolutions && Metric == EDistortionMetric::TexelDensity\"))\n" },
		{ "ModuleRelativePath", "Public/UVEditorDistortionVisualization.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_MapSize = { "MapSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVEditorDistortionVisualizationProperties, MapSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_MapSize_MetaData), Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_MapSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_TargetTexelDensity_MetaData[] = {
		{ "Comment", "//~ TODO - Enable support for manual density specificaitons at a future date\x09\n//~UPROPERTY(EditAnywhere, Category = \"Distortion Visualization|Texel Density\", meta = (DisplayName = \"Target Texel Density\", EditCondition = \"!bCompareToAverageDensity && Metric == EDistortionMetric::TexelDensity\", ClampMin = 0.0, UIMin = 0.0))\n" },
		{ "ModuleRelativePath", "Public/UVEditorDistortionVisualization.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_TargetTexelDensity = { "TargetTexelDensity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVEditorDistortionVisualizationProperties, TargetTexelDensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_TargetTexelDensity_MetaData), Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_TargetTexelDensity_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_PerUDIMTextureResolution_ValueProp = { "PerUDIMTextureResolution", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_PerUDIMTextureResolution_Key_KeyProp = { "PerUDIMTextureResolution_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_PerUDIMTextureResolution_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorDistortionVisualization.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_PerUDIMTextureResolution = { "PerUDIMTextureResolution", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVEditorDistortionVisualizationProperties, PerUDIMTextureResolution), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_PerUDIMTextureResolution_MetaData), Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_PerUDIMTextureResolution_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_bVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_Metric_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_Metric,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_bCompareToAverageDensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_bRespectUDIMTextureResolutions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_MapSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_TargetTexelDensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_PerUDIMTextureResolution_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_PerUDIMTextureResolution_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::NewProp_PerUDIMTextureResolution,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorDistortionVisualizationProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::ClassParams = {
		&UUVEditorDistortionVisualizationProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UUVEditorDistortionVisualizationProperties()
	{
		if (!Z_Registration_Info_UClass_UUVEditorDistortionVisualizationProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorDistortionVisualizationProperties.OuterSingleton, Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorDistortionVisualizationProperties.OuterSingleton;
	}
	template<> UVEDITOR_API UClass* StaticClass<UUVEditorDistortionVisualizationProperties>()
	{
		return UUVEditorDistortionVisualizationProperties::StaticClass();
	}
	UUVEditorDistortionVisualizationProperties::UUVEditorDistortionVisualizationProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorDistortionVisualizationProperties);
	UUVEditorDistortionVisualizationProperties::~UUVEditorDistortionVisualizationProperties() {}
	void UUVEditorDistortionVisualization::StaticRegisterNativesUUVEditorDistortionVisualization()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorDistortionVisualization);
	UClass* Z_Construct_UClass_UUVEditorDistortionVisualization_NoRegister()
	{
		return UUVEditorDistortionVisualization::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorDistortionVisualization_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Targets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVEditorDistortionVisualization_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorDistortionVisualization_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorDistortionVisualization_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  This class contains the logic for handling distortion visualization within the UV Editor. It manages the setting\n  of triangle color and computing the potential metrics used to describe the amount of distortion present in the UVs.\n */" },
		{ "IncludePath", "UVEditorDistortionVisualization.h" },
		{ "ModuleRelativePath", "Public/UVEditorDistortionVisualization.h" },
		{ "ToolTip", "This class contains the logic for handling distortion visualization within the UV Editor. It manages the setting\nof triangle color and computing the potential metrics used to describe the amount of distortion present in the UVs." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorDistortionVisualization_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorDistortionVisualization.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorDistortionVisualization_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVEditorDistortionVisualization, Settings), Z_Construct_UClass_UUVEditorDistortionVisualizationProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorDistortionVisualization_Statics::NewProp_Settings_MetaData), Z_Construct_UClass_UUVEditorDistortionVisualization_Statics::NewProp_Settings_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorDistortionVisualization_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UUVEditorToolMeshInput_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorDistortionVisualization_Statics::NewProp_Targets_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorDistortionVisualization.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUVEditorDistortionVisualization_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVEditorDistortionVisualization, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorDistortionVisualization_Statics::NewProp_Targets_MetaData), Z_Construct_UClass_UUVEditorDistortionVisualization_Statics::NewProp_Targets_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVEditorDistortionVisualization_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorDistortionVisualization_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorDistortionVisualization_Statics::NewProp_Targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorDistortionVisualization_Statics::NewProp_Targets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorDistortionVisualization_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorDistortionVisualization>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorDistortionVisualization_Statics::ClassParams = {
		&UUVEditorDistortionVisualization::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUVEditorDistortionVisualization_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorDistortionVisualization_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorDistortionVisualization_Statics::Class_MetaDataParams), Z_Construct_UClass_UUVEditorDistortionVisualization_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorDistortionVisualization_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UUVEditorDistortionVisualization()
	{
		if (!Z_Registration_Info_UClass_UUVEditorDistortionVisualization.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorDistortionVisualization.OuterSingleton, Z_Construct_UClass_UUVEditorDistortionVisualization_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorDistortionVisualization.OuterSingleton;
	}
	template<> UVEDITOR_API UClass* StaticClass<UUVEditorDistortionVisualization>()
	{
		return UUVEditorDistortionVisualization::StaticClass();
	}
	UUVEditorDistortionVisualization::UUVEditorDistortionVisualization(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorDistortionVisualization);
	UUVEditorDistortionVisualization::~UUVEditorDistortionVisualization() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorDistortionVisualization_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorDistortionVisualization_h_Statics::EnumInfo[] = {
		{ EDistortionMetric_StaticEnum, TEXT("EDistortionMetric"), &Z_Registration_Info_UEnum_EDistortionMetric, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2263674727U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorDistortionVisualization_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUVEditorDistortionVisualizationProperties, UUVEditorDistortionVisualizationProperties::StaticClass, TEXT("UUVEditorDistortionVisualizationProperties"), &Z_Registration_Info_UClass_UUVEditorDistortionVisualizationProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorDistortionVisualizationProperties), 2370522744U) },
		{ Z_Construct_UClass_UUVEditorDistortionVisualization, UUVEditorDistortionVisualization::StaticClass, TEXT("UUVEditorDistortionVisualization"), &Z_Registration_Info_UClass_UUVEditorDistortionVisualization, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorDistortionVisualization), 590084253U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorDistortionVisualization_h_3374220522(TEXT("/Script/UVEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorDistortionVisualization_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorDistortionVisualization_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorDistortionVisualization_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorDistortionVisualization_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
