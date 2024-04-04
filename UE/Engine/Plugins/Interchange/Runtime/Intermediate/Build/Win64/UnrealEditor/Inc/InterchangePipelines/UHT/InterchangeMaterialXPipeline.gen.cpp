// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeMaterialXPipeline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeMaterialXPipeline() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangePipelineBase();
	INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeMaterialXPipeline();
	INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeMaterialXPipeline_NoRegister();
	INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UMaterialXPipelineSettings();
	INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UMaterialXPipelineSettings_NoRegister();
	INTERCHANGEPIPELINES_API UEnum* Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialXShaders();
	UPackage* Z_Construct_UPackage__Script_InterchangePipelines();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangeMaterialXShaders;
	static UEnum* EInterchangeMaterialXShaders_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInterchangeMaterialXShaders.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInterchangeMaterialXShaders.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialXShaders, (UObject*)Z_Construct_UPackage__Script_InterchangePipelines(), TEXT("EInterchangeMaterialXShaders"));
		}
		return Z_Registration_Info_UEnum_EInterchangeMaterialXShaders.OuterSingleton;
	}
	template<> INTERCHANGEPIPELINES_API UEnum* StaticEnum<EInterchangeMaterialXShaders>()
	{
		return EInterchangeMaterialXShaders_StaticEnum();
	}
	struct Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialXShaders_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialXShaders_Statics::Enumerators[] = {
		{ "EInterchangeMaterialXShaders::StandardSurface", (int64)EInterchangeMaterialXShaders::StandardSurface },
		{ "EInterchangeMaterialXShaders::StandardSurfaceTransmission", (int64)EInterchangeMaterialXShaders::StandardSurfaceTransmission },
		{ "EInterchangeMaterialXShaders::SurfaceUnlit", (int64)EInterchangeMaterialXShaders::SurfaceUnlit },
		{ "EInterchangeMaterialXShaders::UsdPreviewSurface", (int64)EInterchangeMaterialXShaders::UsdPreviewSurface },
		{ "EInterchangeMaterialXShaders::MaxShaderCount", (int64)EInterchangeMaterialXShaders::MaxShaderCount },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialXShaders_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "MaxShaderCount.Name", "EInterchangeMaterialXShaders::MaxShaderCount" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialXPipeline.h" },
		{ "StandardSurface.Comment", "/** Default settings for Autodesk's Standard Surface shader\x09*/" },
		{ "StandardSurface.Name", "EInterchangeMaterialXShaders::StandardSurface" },
		{ "StandardSurface.ToolTip", "Default settings for Autodesk's Standard Surface shader" },
		{ "StandardSurfaceTransmission.Comment", "/** Standard Surface shader used for translucency\x09*/" },
		{ "StandardSurfaceTransmission.Name", "EInterchangeMaterialXShaders::StandardSurfaceTransmission" },
		{ "StandardSurfaceTransmission.ToolTip", "Standard Surface shader used for translucency" },
		{ "SurfaceUnlit.Comment", "/** Shader used for unlit surface*/" },
		{ "SurfaceUnlit.Name", "EInterchangeMaterialXShaders::SurfaceUnlit" },
		{ "SurfaceUnlit.ToolTip", "Shader used for unlit surface" },
		{ "UsdPreviewSurface.Comment", "/** Default settings for USD's Surface shader\x09*/" },
		{ "UsdPreviewSurface.Name", "EInterchangeMaterialXShaders::UsdPreviewSurface" },
		{ "UsdPreviewSurface.ToolTip", "Default settings for USD's Surface shader" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialXShaders_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InterchangePipelines,
		nullptr,
		"EInterchangeMaterialXShaders",
		"EInterchangeMaterialXShaders",
		Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialXShaders_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialXShaders_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialXShaders_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialXShaders_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialXShaders()
	{
		if (!Z_Registration_Info_UEnum_EInterchangeMaterialXShaders.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangeMaterialXShaders.InnerSingleton, Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialXShaders_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInterchangeMaterialXShaders.InnerSingleton;
	}
	void UMaterialXPipelineSettings::StaticRegisterNativesUMaterialXPipelineSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialXPipelineSettings);
	UClass* Z_Construct_UClass_UMaterialXPipelineSettings_NoRegister()
	{
		return UMaterialXPipelineSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialXPipelineSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PredefinedSurfaceShaders_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PredefinedSurfaceShaders_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PredefinedSurfaceShaders_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PredefinedSurfaceShaders_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PredefinedSurfaceShaders;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialXPipelineSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangePipelines,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialXPipelineSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialXPipelineSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Interchange MaterialX" },
		{ "IncludePath", "InterchangeMaterialXPipeline.h" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialXPipeline.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedSurfaceShaders_ValueProp = { "PredefinedSurfaceShaders", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedSurfaceShaders_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedSurfaceShaders_Key_KeyProp = { "PredefinedSurfaceShaders_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialXShaders, METADATA_PARAMS(0, nullptr) }; // 2596172150
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedSurfaceShaders_MetaData[] = {
		{ "Category", "MaterialXPredefined" },
		{ "DisplayName", "MaterialX Predefined Surface Shaders" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialXPipeline.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedSurfaceShaders = { "PredefinedSurfaceShaders", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialXPipelineSettings, PredefinedSurfaceShaders), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedSurfaceShaders_MetaData), Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedSurfaceShaders_MetaData) }; // 2596172150
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialXPipelineSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedSurfaceShaders_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedSurfaceShaders_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedSurfaceShaders_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedSurfaceShaders,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialXPipelineSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialXPipelineSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialXPipelineSettings_Statics::ClassParams = {
		&UMaterialXPipelineSettings::StaticClass,
		"Interchange",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialXPipelineSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialXPipelineSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialXPipelineSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialXPipelineSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialXPipelineSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMaterialXPipelineSettings()
	{
		if (!Z_Registration_Info_UClass_UMaterialXPipelineSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialXPipelineSettings.OuterSingleton, Z_Construct_UClass_UMaterialXPipelineSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialXPipelineSettings.OuterSingleton;
	}
	template<> INTERCHANGEPIPELINES_API UClass* StaticClass<UMaterialXPipelineSettings>()
	{
		return UMaterialXPipelineSettings::StaticClass();
	}
	UMaterialXPipelineSettings::UMaterialXPipelineSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialXPipelineSettings);
	UMaterialXPipelineSettings::~UMaterialXPipelineSettings() {}
	void UInterchangeMaterialXPipeline::StaticRegisterNativesUInterchangeMaterialXPipeline()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeMaterialXPipeline);
	UClass* Z_Construct_UClass_UInterchangeMaterialXPipeline_NoRegister()
	{
		return UInterchangeMaterialXPipeline::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeMaterialXPipeline_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeMaterialXPipeline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangePipelineBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangePipelines,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeMaterialXPipeline_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeMaterialXPipeline_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeMaterialXPipeline.h" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialXPipeline.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeMaterialXPipeline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeMaterialXPipeline>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeMaterialXPipeline_Statics::ClassParams = {
		&UInterchangeMaterialXPipeline::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeMaterialXPipeline_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeMaterialXPipeline_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UInterchangeMaterialXPipeline()
	{
		if (!Z_Registration_Info_UClass_UInterchangeMaterialXPipeline.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeMaterialXPipeline.OuterSingleton, Z_Construct_UClass_UInterchangeMaterialXPipeline_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeMaterialXPipeline.OuterSingleton;
	}
	template<> INTERCHANGEPIPELINES_API UClass* StaticClass<UInterchangeMaterialXPipeline>()
	{
		return UInterchangeMaterialXPipeline::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeMaterialXPipeline);
	UInterchangeMaterialXPipeline::~UInterchangeMaterialXPipeline() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeMaterialXPipeline_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeMaterialXPipeline_h_Statics::EnumInfo[] = {
		{ EInterchangeMaterialXShaders_StaticEnum, TEXT("EInterchangeMaterialXShaders"), &Z_Registration_Info_UEnum_EInterchangeMaterialXShaders, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2596172150U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeMaterialXPipeline_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialXPipelineSettings, UMaterialXPipelineSettings::StaticClass, TEXT("UMaterialXPipelineSettings"), &Z_Registration_Info_UClass_UMaterialXPipelineSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialXPipelineSettings), 3488984646U) },
		{ Z_Construct_UClass_UInterchangeMaterialXPipeline, UInterchangeMaterialXPipeline::StaticClass, TEXT("UInterchangeMaterialXPipeline"), &Z_Registration_Info_UClass_UInterchangeMaterialXPipeline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeMaterialXPipeline), 893355946U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeMaterialXPipeline_h_1644931294(TEXT("/Script/InterchangePipelines"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeMaterialXPipeline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeMaterialXPipeline_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeMaterialXPipeline_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeMaterialXPipeline_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
