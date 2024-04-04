// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMXPixelMappingPreprocessRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXPixelMappingPreprocessRenderer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DMXPIXELMAPPINGRENDERER_API UClass* Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer();
	DMXPIXELMAPPINGRENDERER_API UClass* Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_NoRegister();
	DMXPIXELMAPPINGRENDERER_API UEnum* Z_Construct_UEnum_DMXPixelMappingRenderer_EDMXPixelMappingRenderingPreprocessorSizeMode();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXPixelMappingRenderer();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDMXPixelMappingRenderingPreprocessorSizeMode;
	static UEnum* EDMXPixelMappingRenderingPreprocessorSizeMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDMXPixelMappingRenderingPreprocessorSizeMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDMXPixelMappingRenderingPreprocessorSizeMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DMXPixelMappingRenderer_EDMXPixelMappingRenderingPreprocessorSizeMode, (UObject*)Z_Construct_UPackage__Script_DMXPixelMappingRenderer(), TEXT("EDMXPixelMappingRenderingPreprocessorSizeMode"));
		}
		return Z_Registration_Info_UEnum_EDMXPixelMappingRenderingPreprocessorSizeMode.OuterSingleton;
	}
	template<> DMXPIXELMAPPINGRENDERER_API UEnum* StaticEnum<EDMXPixelMappingRenderingPreprocessorSizeMode>()
	{
		return EDMXPixelMappingRenderingPreprocessorSizeMode_StaticEnum();
	}
	struct Z_Construct_UEnum_DMXPixelMappingRenderer_EDMXPixelMappingRenderingPreprocessorSizeMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DMXPixelMappingRenderer_EDMXPixelMappingRenderingPreprocessorSizeMode_Statics::Enumerators[] = {
		{ "EDMXPixelMappingRenderingPreprocessorSizeMode::SameAsInput", (int64)EDMXPixelMappingRenderingPreprocessorSizeMode::SameAsInput },
		{ "EDMXPixelMappingRenderingPreprocessorSizeMode::Downsampled", (int64)EDMXPixelMappingRenderingPreprocessorSizeMode::Downsampled },
		{ "EDMXPixelMappingRenderingPreprocessorSizeMode::CustomSize", (int64)EDMXPixelMappingRenderingPreprocessorSizeMode::CustomSize },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DMXPixelMappingRenderer_EDMXPixelMappingRenderingPreprocessorSizeMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CustomSize.Name", "EDMXPixelMappingRenderingPreprocessorSizeMode::CustomSize" },
		{ "Downsampled.Name", "EDMXPixelMappingRenderingPreprocessorSizeMode::Downsampled" },
		{ "ModuleRelativePath", "Public/DMXPixelMappingPreprocessRenderer.h" },
		{ "SameAsInput.Name", "EDMXPixelMappingRenderingPreprocessorSizeMode::SameAsInput" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DMXPixelMappingRenderer_EDMXPixelMappingRenderingPreprocessorSizeMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DMXPixelMappingRenderer,
		nullptr,
		"EDMXPixelMappingRenderingPreprocessorSizeMode",
		"EDMXPixelMappingRenderingPreprocessorSizeMode",
		Z_Construct_UEnum_DMXPixelMappingRenderer_EDMXPixelMappingRenderingPreprocessorSizeMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DMXPixelMappingRenderer_EDMXPixelMappingRenderingPreprocessorSizeMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DMXPixelMappingRenderer_EDMXPixelMappingRenderingPreprocessorSizeMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DMXPixelMappingRenderer_EDMXPixelMappingRenderingPreprocessorSizeMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_DMXPixelMappingRenderer_EDMXPixelMappingRenderingPreprocessorSizeMode()
	{
		if (!Z_Registration_Info_UEnum_EDMXPixelMappingRenderingPreprocessorSizeMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDMXPixelMappingRenderingPreprocessorSizeMode.InnerSingleton, Z_Construct_UEnum_DMXPixelMappingRenderer_EDMXPixelMappingRenderingPreprocessorSizeMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDMXPixelMappingRenderingPreprocessorSizeMode.InnerSingleton;
	}
	void UDMXPixelMappingPreprocessRenderer::StaticRegisterNativesUDMXPixelMappingPreprocessRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXPixelMappingPreprocessRenderer);
	UClass* Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_NoRegister()
	{
		return UDMXPixelMappingPreprocessRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumDownSamplePasses_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumDownSamplePasses;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutputSizeMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputSizeMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputSizeMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomOutputSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomOutputSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FilterMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FilterMID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyFilterMaterialEachDownsamplePass_MetaData[];
#endif
		static void NewProp_bApplyFilterMaterialEachDownsamplePass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyFilterMaterialEachDownsamplePass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlurDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlurDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TextureParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlurDistanceParamterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BlurDistanceParamterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowInputSize_MetaData[];
#endif
		static void NewProp_bShowInputSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowInputSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXPixelMappingRenderer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Renders the texture that is used to pixel map */" },
		{ "IncludePath", "DMXPixelMappingPreprocessRenderer.h" },
		{ "ModuleRelativePath", "Public/DMXPixelMappingPreprocessRenderer.h" },
		{ "ToolTip", "Renders the texture that is used to pixel map" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_InputSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Render Settings" },
		{ "ClampMax", "8192" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Size of the input texture (Material and User Widget only) */" },
		{ "EditCondition", "bShowInputSize" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/DMXPixelMappingPreprocessRenderer.h" },
		{ "ToolTip", "Size of the input texture (Material and User Widget only)" },
		{ "UIMax", "4096" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_InputSize = { "InputSize", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXPixelMappingPreprocessRenderer, InputSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_InputSize_MetaData), Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_InputSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_NumDownSamplePasses_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Filtering" },
		{ "ClampMax", "256" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of times the pixelmapping input is downsampled */" },
		{ "ModuleRelativePath", "Public/DMXPixelMappingPreprocessRenderer.h" },
		{ "ToolTip", "Number of times the pixelmapping input is downsampled" },
		{ "UIMax", "16" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_NumDownSamplePasses = { "NumDownSamplePasses", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXPixelMappingPreprocessRenderer, NumDownSamplePasses), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_NumDownSamplePasses_MetaData), Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_NumDownSamplePasses_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_OutputSizeMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_OutputSizeMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Filtering" },
		{ "Comment", "/** Defines how the texture is resized after filtering */" },
		{ "ModuleRelativePath", "Public/DMXPixelMappingPreprocessRenderer.h" },
		{ "ToolTip", "Defines how the texture is resized after filtering" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_OutputSizeMode = { "OutputSizeMode", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXPixelMappingPreprocessRenderer, OutputSizeMode), Z_Construct_UEnum_DMXPixelMappingRenderer_EDMXPixelMappingRenderingPreprocessorSizeMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_OutputSizeMode_MetaData), Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_OutputSizeMode_MetaData) }; // 1673804497
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_CustomOutputSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Filtering" },
		{ "ClampMax", "2048" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Size of the rendered texture */" },
		{ "DisplayName", "Custom Size" },
		{ "EditCondition", "OutputSizeMode == EDMXPixelMappingRenderingPreprocessorSizeMode::CustomSize" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DMXPixelMappingPreprocessRenderer.h" },
		{ "ToolTip", "Size of the rendered texture" },
		{ "UIMax", "2048" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_CustomOutputSize = { "CustomOutputSize", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXPixelMappingPreprocessRenderer, CustomOutputSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_CustomOutputSize_MetaData), Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_CustomOutputSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_FilterMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Filtering" },
		{ "Comment", "/** Filter material applied to the rendered input */" },
		{ "ModuleRelativePath", "Public/DMXPixelMappingPreprocessRenderer.h" },
		{ "ToolTip", "Filter material applied to the rendered input" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_FilterMaterial = { "FilterMaterial", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXPixelMappingPreprocessRenderer, FilterMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_FilterMaterial_MetaData), Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_FilterMaterial_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_FilterMID_MetaData[] = {
		{ "Comment", "/** Actual material instance dynamic applied to the rendered input */" },
		{ "ModuleRelativePath", "Public/DMXPixelMappingPreprocessRenderer.h" },
		{ "ToolTip", "Actual material instance dynamic applied to the rendered input" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_FilterMID = { "FilterMID", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXPixelMappingPreprocessRenderer, FilterMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_FilterMID_MetaData), Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_FilterMID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_bApplyFilterMaterialEachDownsamplePass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Filtering" },
		{ "Comment", "/** If true, the filter material is applied each downsample pass, otherwise only once after the last pass */" },
		{ "DisplayName", "Apply Material each pass" },
		{ "ModuleRelativePath", "Public/DMXPixelMappingPreprocessRenderer.h" },
		{ "ToolTip", "If true, the filter material is applied each downsample pass, otherwise only once after the last pass" },
	};
#endif
	void Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_bApplyFilterMaterialEachDownsamplePass_SetBit(void* Obj)
	{
		((UDMXPixelMappingPreprocessRenderer*)Obj)->bApplyFilterMaterialEachDownsamplePass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_bApplyFilterMaterialEachDownsamplePass = { "bApplyFilterMaterialEachDownsamplePass", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDMXPixelMappingPreprocessRenderer), &Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_bApplyFilterMaterialEachDownsamplePass_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_bApplyFilterMaterialEachDownsamplePass_MetaData), Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_bApplyFilterMaterialEachDownsamplePass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_BlurDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Filtering" },
		{ "Comment", "/** Blur distance applied, only applicable if the filter matierial has a \"BlurDistance\" parameter */" },
		{ "ModuleRelativePath", "Public/DMXPixelMappingPreprocessRenderer.h" },
		{ "SliderExponent", "2.000000" },
		{ "ToolTip", "Blur distance applied, only applicable if the filter matierial has a \"BlurDistance\" parameter" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_BlurDistance = { "BlurDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXPixelMappingPreprocessRenderer, BlurDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_BlurDistance_MetaData), Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_BlurDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_TextureParameterName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Filtering" },
		{ "Comment", "/** The texture parameter name in the Filter Material */" },
		{ "ModuleRelativePath", "Public/DMXPixelMappingPreprocessRenderer.h" },
		{ "ToolTip", "The texture parameter name in the Filter Material" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_TextureParameterName = { "TextureParameterName", nullptr, (EPropertyFlags)0x0040040000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXPixelMappingPreprocessRenderer, TextureParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_TextureParameterName_MetaData), Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_TextureParameterName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_BlurDistanceParamterName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Filtering" },
		{ "Comment", "/** The blur distance parameter name in the Filter Material */" },
		{ "ModuleRelativePath", "Public/DMXPixelMappingPreprocessRenderer.h" },
		{ "ToolTip", "The blur distance parameter name in the Filter Material" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_BlurDistanceParamterName = { "BlurDistanceParamterName", nullptr, (EPropertyFlags)0x0040040000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXPixelMappingPreprocessRenderer, BlurDistanceParamterName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_BlurDistanceParamterName_MetaData), Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_BlurDistanceParamterName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_bShowInputSize_MetaData[] = {
		{ "Comment", "/** If true, shows the input size property */" },
		{ "ModuleRelativePath", "Public/DMXPixelMappingPreprocessRenderer.h" },
		{ "ToolTip", "If true, shows the input size property" },
	};
#endif
	void Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_bShowInputSize_SetBit(void* Obj)
	{
		((UDMXPixelMappingPreprocessRenderer*)Obj)->bShowInputSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_bShowInputSize = { "bShowInputSize", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDMXPixelMappingPreprocessRenderer), &Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_bShowInputSize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_bShowInputSize_MetaData), Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_bShowInputSize_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_InputSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_NumDownSamplePasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_OutputSizeMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_OutputSizeMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_CustomOutputSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_FilterMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_FilterMID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_bApplyFilterMaterialEachDownsamplePass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_BlurDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_TextureParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_BlurDistanceParamterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::NewProp_bShowInputSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXPixelMappingPreprocessRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::ClassParams = {
		&UDMXPixelMappingPreprocessRenderer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::Class_MetaDataParams), Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer()
	{
		if (!Z_Registration_Info_UClass_UDMXPixelMappingPreprocessRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXPixelMappingPreprocessRenderer.OuterSingleton, Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXPixelMappingPreprocessRenderer.OuterSingleton;
	}
	template<> DMXPIXELMAPPINGRENDERER_API UClass* StaticClass<UDMXPixelMappingPreprocessRenderer>()
	{
		return UDMXPixelMappingPreprocessRenderer::StaticClass();
	}
	UDMXPixelMappingPreprocessRenderer::UDMXPixelMappingPreprocessRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXPixelMappingPreprocessRenderer);
	UDMXPixelMappingPreprocessRenderer::~UDMXPixelMappingPreprocessRenderer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRenderer_Public_DMXPixelMappingPreprocessRenderer_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRenderer_Public_DMXPixelMappingPreprocessRenderer_h_Statics::EnumInfo[] = {
		{ EDMXPixelMappingRenderingPreprocessorSizeMode_StaticEnum, TEXT("EDMXPixelMappingRenderingPreprocessorSizeMode"), &Z_Registration_Info_UEnum_EDMXPixelMappingRenderingPreprocessorSizeMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1673804497U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRenderer_Public_DMXPixelMappingPreprocessRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer, UDMXPixelMappingPreprocessRenderer::StaticClass, TEXT("UDMXPixelMappingPreprocessRenderer"), &Z_Registration_Info_UClass_UDMXPixelMappingPreprocessRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXPixelMappingPreprocessRenderer), 2240344035U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRenderer_Public_DMXPixelMappingPreprocessRenderer_h_2216347550(TEXT("/Script/DMXPixelMappingRenderer"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRenderer_Public_DMXPixelMappingPreprocessRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRenderer_Public_DMXPixelMappingPreprocessRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRenderer_Public_DMXPixelMappingPreprocessRenderer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRenderer_Public_DMXPixelMappingPreprocessRenderer_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
