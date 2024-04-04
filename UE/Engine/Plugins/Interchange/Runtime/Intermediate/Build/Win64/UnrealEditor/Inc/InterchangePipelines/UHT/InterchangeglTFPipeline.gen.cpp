// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeglTFPipeline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeglTFPipeline() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangePipelineBase();
	INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UGLTFPipelineSettings();
	INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UGLTFPipelineSettings_NoRegister();
	INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGLTFPipeline();
	INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGLTFPipeline_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangePipelines();
// End Cross Module References
	void UGLTFPipelineSettings::StaticRegisterNativesUGLTFPipelineSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLTFPipelineSettings);
	UClass* Z_Construct_UClass_UGLTFPipelineSettings_NoRegister()
	{
		return UGLTFPipelineSettings::StaticClass();
	}
	struct Z_Construct_UClass_UGLTFPipelineSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialParents_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialParents_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialParents_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MaterialParents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGLTFPipelineSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangePipelines,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFPipelineSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFPipelineSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Interchange glTF" },
		{ "IncludePath", "InterchangeglTFPipeline.h" },
		{ "ModuleRelativePath", "Public/InterchangeglTFPipeline.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGLTFPipelineSettings_Statics::NewProp_MaterialParents_ValueProp = { "MaterialParents", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGLTFPipelineSettings_Statics::NewProp_MaterialParents_Key_KeyProp = { "MaterialParents_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFPipelineSettings_Statics::NewProp_MaterialParents_MetaData[] = {
		{ "Category", "PredefinedglTFMaterialLibrary" },
		{ "DisplayName", "Predefined glTF Material Library" },
		{ "ModuleRelativePath", "Public/InterchangeglTFPipeline.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGLTFPipelineSettings_Statics::NewProp_MaterialParents = { "MaterialParents", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGLTFPipelineSettings, MaterialParents), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFPipelineSettings_Statics::NewProp_MaterialParents_MetaData), Z_Construct_UClass_UGLTFPipelineSettings_Statics::NewProp_MaterialParents_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGLTFPipelineSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFPipelineSettings_Statics::NewProp_MaterialParents_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFPipelineSettings_Statics::NewProp_MaterialParents_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFPipelineSettings_Statics::NewProp_MaterialParents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGLTFPipelineSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLTFPipelineSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLTFPipelineSettings_Statics::ClassParams = {
		&UGLTFPipelineSettings::StaticClass,
		"Interchange",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGLTFPipelineSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFPipelineSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFPipelineSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UGLTFPipelineSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFPipelineSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGLTFPipelineSettings()
	{
		if (!Z_Registration_Info_UClass_UGLTFPipelineSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLTFPipelineSettings.OuterSingleton, Z_Construct_UClass_UGLTFPipelineSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGLTFPipelineSettings.OuterSingleton;
	}
	template<> INTERCHANGEPIPELINES_API UClass* StaticClass<UGLTFPipelineSettings>()
	{
		return UGLTFPipelineSettings::StaticClass();
	}
	UGLTFPipelineSettings::UGLTFPipelineSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGLTFPipelineSettings);
	UGLTFPipelineSettings::~UGLTFPipelineSettings() {}
	void UInterchangeGLTFPipeline::StaticRegisterNativesUInterchangeGLTFPipeline()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeGLTFPipeline);
	UClass* Z_Construct_UClass_UInterchangeGLTFPipeline_NoRegister()
	{
		return UInterchangeGLTFPipeline::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeGLTFPipeline_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseGLTFMaterialInstanceLibrary_MetaData[];
#endif
		static void NewProp_bUseGLTFMaterialInstanceLibrary_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGLTFMaterialInstanceLibrary;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeGLTFPipeline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangePipelineBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangePipelines,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGLTFPipeline_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGLTFPipeline_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeglTFPipeline.h" },
		{ "ModuleRelativePath", "Public/InterchangeglTFPipeline.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGLTFPipeline_Statics::NewProp_bUseGLTFMaterialInstanceLibrary_MetaData[] = {
		{ "Category", "glTF" },
		{ "DisplayName", "Use glTF Material Instance Library" },
		{ "ModuleRelativePath", "Public/InterchangeglTFPipeline.h" },
	};
#endif
	void Z_Construct_UClass_UInterchangeGLTFPipeline_Statics::NewProp_bUseGLTFMaterialInstanceLibrary_SetBit(void* Obj)
	{
		((UInterchangeGLTFPipeline*)Obj)->bUseGLTFMaterialInstanceLibrary = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGLTFPipeline_Statics::NewProp_bUseGLTFMaterialInstanceLibrary = { "bUseGLTFMaterialInstanceLibrary", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGLTFPipeline), &Z_Construct_UClass_UInterchangeGLTFPipeline_Statics::NewProp_bUseGLTFMaterialInstanceLibrary_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGLTFPipeline_Statics::NewProp_bUseGLTFMaterialInstanceLibrary_MetaData), Z_Construct_UClass_UInterchangeGLTFPipeline_Statics::NewProp_bUseGLTFMaterialInstanceLibrary_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeGLTFPipeline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGLTFPipeline_Statics::NewProp_bUseGLTFMaterialInstanceLibrary,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeGLTFPipeline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeGLTFPipeline>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeGLTFPipeline_Statics::ClassParams = {
		&UInterchangeGLTFPipeline::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterchangeGLTFPipeline_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGLTFPipeline_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGLTFPipeline_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeGLTFPipeline_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGLTFPipeline_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UInterchangeGLTFPipeline()
	{
		if (!Z_Registration_Info_UClass_UInterchangeGLTFPipeline.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeGLTFPipeline.OuterSingleton, Z_Construct_UClass_UInterchangeGLTFPipeline_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeGLTFPipeline.OuterSingleton;
	}
	template<> INTERCHANGEPIPELINES_API UClass* StaticClass<UInterchangeGLTFPipeline>()
	{
		return UInterchangeGLTFPipeline::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeGLTFPipeline);
	UInterchangeGLTFPipeline::~UInterchangeGLTFPipeline() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeglTFPipeline_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeglTFPipeline_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGLTFPipelineSettings, UGLTFPipelineSettings::StaticClass, TEXT("UGLTFPipelineSettings"), &Z_Registration_Info_UClass_UGLTFPipelineSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLTFPipelineSettings), 243502604U) },
		{ Z_Construct_UClass_UInterchangeGLTFPipeline, UInterchangeGLTFPipeline::StaticClass, TEXT("UInterchangeGLTFPipeline"), &Z_Registration_Info_UClass_UInterchangeGLTFPipeline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeGLTFPipeline), 298558866U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeglTFPipeline_h_2677026651(TEXT("/Script/InterchangePipelines"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeglTFPipeline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeglTFPipeline_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
