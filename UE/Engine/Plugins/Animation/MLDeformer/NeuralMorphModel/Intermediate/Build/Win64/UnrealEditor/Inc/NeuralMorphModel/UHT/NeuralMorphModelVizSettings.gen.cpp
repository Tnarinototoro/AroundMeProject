// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuralMorphModelVizSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeuralMorphModelVizSettings() {}
// Cross Module References
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerMorphModelVizSettings();
	NEURALMORPHMODEL_API UClass* Z_Construct_UClass_UNeuralMorphModelVizSettings();
	NEURALMORPHMODEL_API UClass* Z_Construct_UClass_UNeuralMorphModelVizSettings_NoRegister();
	NEURALMORPHMODEL_API UEnum* Z_Construct_UEnum_NeuralMorphModel_ENeuralMorphMaskVizMode();
	UPackage* Z_Construct_UPackage__Script_NeuralMorphModel();
// End Cross Module References
	void UNeuralMorphModelVizSettings::StaticRegisterNativesUNeuralMorphModelVizSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNeuralMorphModelVizSettings);
	UClass* Z_Construct_UClass_UNeuralMorphModelVizSettings_NoRegister()
	{
		return UNeuralMorphModelVizSettings::StaticClass();
	}
	struct Z_Construct_UClass_UNeuralMorphModelVizSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaskVizMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaskVizMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MaskVizMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNeuralMorphModelVizSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMLDeformerMorphModelVizSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_NeuralMorphModel,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphModelVizSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphModelVizSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The vizualization settings specific to this model.\n * Even if we have no new properties compared to the morph model, we still need to\n * create this class in order to propertly register a detail customization for it in our editor module.\n */" },
		{ "IncludePath", "NeuralMorphModelVizSettings.h" },
		{ "ModuleRelativePath", "Public/NeuralMorphModelVizSettings.h" },
		{ "ToolTip", "The vizualization settings specific to this model.\nEven if we have no new properties compared to the morph model, we still need to\ncreate this class in order to propertly register a detail customization for it in our editor module." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNeuralMorphModelVizSettings_Statics::NewProp_MaskVizMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphModelVizSettings_Statics::NewProp_MaskVizMode_MetaData[] = {
		{ "Category", "Live Settings" },
		{ "Comment", "/**\n\x09 * The visualization mode for the masks.\n\x09 * Each bone, curve, bone group or curve group has a specific mask area on the mesh.\n\x09 * This mask defines areas where generated morph targets can be active. They can be used to filter out deformations in undesired areas.\n\x09 * For example if you rotate the left arm, you don't want the right arm to deform. The mask for the left arm can be setup in a way that it only includes \n\x09 * vertices around the area of the left arm to enforce this.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NeuralMorphModelVizSettings.h" },
		{ "ToolTip", "The visualization mode for the masks.\nEach bone, curve, bone group or curve group has a specific mask area on the mesh.\nThis mask defines areas where generated morph targets can be active. They can be used to filter out deformations in undesired areas.\nFor example if you rotate the left arm, you don't want the right arm to deform. The mask for the left arm can be setup in a way that it only includes\nvertices around the area of the left arm to enforce this." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNeuralMorphModelVizSettings_Statics::NewProp_MaskVizMode = { "MaskVizMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNeuralMorphModelVizSettings, MaskVizMode), Z_Construct_UEnum_NeuralMorphModel_ENeuralMorphMaskVizMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphModelVizSettings_Statics::NewProp_MaskVizMode_MetaData), Z_Construct_UClass_UNeuralMorphModelVizSettings_Statics::NewProp_MaskVizMode_MetaData) }; // 3975074985
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNeuralMorphModelVizSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphModelVizSettings_Statics::NewProp_MaskVizMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphModelVizSettings_Statics::NewProp_MaskVizMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNeuralMorphModelVizSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNeuralMorphModelVizSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNeuralMorphModelVizSettings_Statics::ClassParams = {
		&UNeuralMorphModelVizSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNeuralMorphModelVizSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphModelVizSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphModelVizSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UNeuralMorphModelVizSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphModelVizSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNeuralMorphModelVizSettings()
	{
		if (!Z_Registration_Info_UClass_UNeuralMorphModelVizSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNeuralMorphModelVizSettings.OuterSingleton, Z_Construct_UClass_UNeuralMorphModelVizSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNeuralMorphModelVizSettings.OuterSingleton;
	}
	template<> NEURALMORPHMODEL_API UClass* StaticClass<UNeuralMorphModelVizSettings>()
	{
		return UNeuralMorphModelVizSettings::StaticClass();
	}
	UNeuralMorphModelVizSettings::UNeuralMorphModelVizSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNeuralMorphModelVizSettings);
	UNeuralMorphModelVizSettings::~UNeuralMorphModelVizSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModelVizSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModelVizSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNeuralMorphModelVizSettings, UNeuralMorphModelVizSettings::StaticClass, TEXT("UNeuralMorphModelVizSettings"), &Z_Registration_Info_UClass_UNeuralMorphModelVizSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNeuralMorphModelVizSettings), 2023779406U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModelVizSettings_h_2721538371(TEXT("/Script/NeuralMorphModel"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModelVizSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModelVizSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
