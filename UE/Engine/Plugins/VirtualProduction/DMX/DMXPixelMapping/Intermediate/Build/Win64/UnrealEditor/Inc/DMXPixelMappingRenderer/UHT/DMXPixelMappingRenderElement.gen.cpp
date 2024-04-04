// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMXPixelMappingRenderElement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXPixelMappingRenderElement() {}
// Cross Module References
	DMXPIXELMAPPINGRENDERER_API UEnum* Z_Construct_UEnum_DMXPixelMappingRenderer_EDMXPixelBlendingQuality();
	UPackage* Z_Construct_UPackage__Script_DMXPixelMappingRenderer();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDMXPixelBlendingQuality;
	static UEnum* EDMXPixelBlendingQuality_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDMXPixelBlendingQuality.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDMXPixelBlendingQuality.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DMXPixelMappingRenderer_EDMXPixelBlendingQuality, (UObject*)Z_Construct_UPackage__Script_DMXPixelMappingRenderer(), TEXT("EDMXPixelBlendingQuality"));
		}
		return Z_Registration_Info_UEnum_EDMXPixelBlendingQuality.OuterSingleton;
	}
	template<> DMXPIXELMAPPINGRENDERER_API UEnum* StaticEnum<EDMXPixelBlendingQuality>()
	{
		return EDMXPixelBlendingQuality_StaticEnum();
	}
	struct Z_Construct_UEnum_DMXPixelMappingRenderer_EDMXPixelBlendingQuality_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DMXPixelMappingRenderer_EDMXPixelBlendingQuality_Statics::Enumerators[] = {
		{ "EDMXPixelBlendingQuality::Low", (int64)EDMXPixelBlendingQuality::Low },
		{ "EDMXPixelBlendingQuality::Medium", (int64)EDMXPixelBlendingQuality::Medium },
		{ "EDMXPixelBlendingQuality::High", (int64)EDMXPixelBlendingQuality::High },
		{ "EDMXPixelBlendingQuality::MAX", (int64)EDMXPixelBlendingQuality::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DMXPixelMappingRenderer_EDMXPixelBlendingQuality_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Enum that defines the quality of how pixels are rendered */" },
		{ "High.Comment", "/** 9 samples ( 3 x 3 ) */" },
		{ "High.Name", "EDMXPixelBlendingQuality::High" },
		{ "High.ToolTip", "9 samples ( 3 x 3 )" },
		{ "Low.Comment", "/** 1 sample */" },
		{ "Low.Name", "EDMXPixelBlendingQuality::Low" },
		{ "Low.ToolTip", "1 sample" },
		{ "MAX.Comment", "/** Max, for shaders only */" },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "EDMXPixelBlendingQuality::MAX" },
		{ "MAX.ToolTip", "Max, for shaders only" },
		{ "Medium.Comment", "/** 5 samples ( 2 x 2 with center) */" },
		{ "Medium.Name", "EDMXPixelBlendingQuality::Medium" },
		{ "Medium.ToolTip", "5 samples ( 2 x 2 with center)" },
		{ "ModuleRelativePath", "Public/DMXPixelMappingRenderElement.h" },
		{ "ToolTip", "Enum that defines the quality of how pixels are rendered" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DMXPixelMappingRenderer_EDMXPixelBlendingQuality_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DMXPixelMappingRenderer,
		nullptr,
		"EDMXPixelBlendingQuality",
		"EDMXPixelBlendingQuality",
		Z_Construct_UEnum_DMXPixelMappingRenderer_EDMXPixelBlendingQuality_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DMXPixelMappingRenderer_EDMXPixelBlendingQuality_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DMXPixelMappingRenderer_EDMXPixelBlendingQuality_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DMXPixelMappingRenderer_EDMXPixelBlendingQuality_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_DMXPixelMappingRenderer_EDMXPixelBlendingQuality()
	{
		if (!Z_Registration_Info_UEnum_EDMXPixelBlendingQuality.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDMXPixelBlendingQuality.InnerSingleton, Z_Construct_UEnum_DMXPixelMappingRenderer_EDMXPixelBlendingQuality_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDMXPixelBlendingQuality.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRenderer_Public_DMXPixelMappingRenderElement_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRenderer_Public_DMXPixelMappingRenderElement_h_Statics::EnumInfo[] = {
		{ EDMXPixelBlendingQuality_StaticEnum, TEXT("EDMXPixelBlendingQuality"), &Z_Registration_Info_UEnum_EDMXPixelBlendingQuality, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3871461642U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRenderer_Public_DMXPixelMappingRenderElement_h_2157045927(TEXT("/Script/DMXPixelMappingRenderer"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRenderer_Public_DMXPixelMappingRenderElement_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRenderer_Public_DMXPixelMappingRenderElement_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
