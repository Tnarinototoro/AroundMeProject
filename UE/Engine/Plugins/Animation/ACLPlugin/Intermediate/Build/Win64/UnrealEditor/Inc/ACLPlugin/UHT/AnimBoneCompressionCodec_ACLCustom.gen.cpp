// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../ACLPlugin/Classes/AnimBoneCompressionCodec_ACLCustom.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimBoneCompressionCodec_ACLCustom() {}
// Cross Module References
	ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase();
	ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom();
	ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_NoRegister();
	ACLPLUGIN_API UEnum* Z_Construct_UEnum_ACLPlugin_ACLRotationFormat();
	ACLPLUGIN_API UEnum* Z_Construct_UEnum_ACLPlugin_ACLVectorFormat();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ACLPlugin();
// End Cross Module References
	void UAnimBoneCompressionCodec_ACLCustom::StaticRegisterNativesUAnimBoneCompressionCodec_ACLCustom()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimBoneCompressionCodec_ACLCustom);
	UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_NoRegister()
	{
		return UAnimBoneCompressionCodec_ACLCustom::StaticClass();
	}
	struct Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationFormat_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslationFormat_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TranslationFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleFormat_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScaleFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstantRotationThresholdAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstantRotationThresholdAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstantTranslationThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstantTranslationThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstantScaleThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstantScaleThreshold;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OptimizationTargets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptimizationTargets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OptimizationTargets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ACLPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Uses the open source Animation Compression Library with custom settings suitable for debugging purposes. */" },
		{ "DisplayName", "Anim Compress ACL Custom" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimBoneCompressionCodec_ACLCustom.h" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACLCustom.h" },
		{ "ToolTip", "Uses the open source Animation Compression Library with custom settings suitable for debugging purposes." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_RotationFormat_MetaData[] = {
		{ "Category", "Clip" },
		{ "Comment", "/** The rotation format to use. */" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACLCustom.h" },
		{ "ToolTip", "The rotation format to use." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_RotationFormat = { "RotationFormat", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACLCustom, RotationFormat), Z_Construct_UEnum_ACLPlugin_ACLRotationFormat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_RotationFormat_MetaData), Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_RotationFormat_MetaData) }; // 232586517
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_TranslationFormat_MetaData[] = {
		{ "Category", "Clip" },
		{ "Comment", "/** The translation format to use. */" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACLCustom.h" },
		{ "ToolTip", "The translation format to use." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_TranslationFormat = { "TranslationFormat", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACLCustom, TranslationFormat), Z_Construct_UEnum_ACLPlugin_ACLVectorFormat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_TranslationFormat_MetaData), Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_TranslationFormat_MetaData) }; // 3294351191
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_ScaleFormat_MetaData[] = {
		{ "Category", "Clip" },
		{ "Comment", "/** The scale format to use. */" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACLCustom.h" },
		{ "ToolTip", "The scale format to use." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_ScaleFormat = { "ScaleFormat", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACLCustom, ScaleFormat), Z_Construct_UEnum_ACLPlugin_ACLVectorFormat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_ScaleFormat_MetaData), Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_ScaleFormat_MetaData) }; // 3294351191
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_ConstantRotationThresholdAngle_MetaData[] = {
		{ "Category", "Clip" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The threshold used to detect constant rotation tracks. */" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACLCustom.h" },
		{ "ToolTip", "The threshold used to detect constant rotation tracks." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_ConstantRotationThresholdAngle = { "ConstantRotationThresholdAngle", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACLCustom, ConstantRotationThresholdAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_ConstantRotationThresholdAngle_MetaData), Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_ConstantRotationThresholdAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_ConstantTranslationThreshold_MetaData[] = {
		{ "Category", "Clip" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The threshold used to detect constant translation tracks. */" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACLCustom.h" },
		{ "ToolTip", "The threshold used to detect constant translation tracks." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_ConstantTranslationThreshold = { "ConstantTranslationThreshold", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACLCustom, ConstantTranslationThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_ConstantTranslationThreshold_MetaData), Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_ConstantTranslationThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_ConstantScaleThreshold_MetaData[] = {
		{ "Category", "Clip" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The threshold used to detect constant scale tracks. */" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACLCustom.h" },
		{ "ToolTip", "The threshold used to detect constant scale tracks." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_ConstantScaleThreshold = { "ConstantScaleThreshold", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACLCustom, ConstantScaleThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_ConstantScaleThreshold_MetaData), Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_ConstantScaleThreshold_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_OptimizationTargets_Inner = { "OptimizationTargets", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_OptimizationTargets_MetaData[] = {
		{ "Category", "ACL Options" },
		{ "Comment", "/** The skeletal meshes used to estimate the skinning deformation during compression. */" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACLCustom.h" },
		{ "ToolTip", "The skeletal meshes used to estimate the skinning deformation during compression." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_OptimizationTargets = { "OptimizationTargets", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACLCustom, OptimizationTargets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_OptimizationTargets_MetaData), Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_OptimizationTargets_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_RotationFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_TranslationFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_ScaleFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_ConstantRotationThresholdAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_ConstantTranslationThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_ConstantScaleThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_OptimizationTargets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_OptimizationTargets,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimBoneCompressionCodec_ACLCustom>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::ClassParams = {
		&UAnimBoneCompressionCodec_ACLCustom::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::PropPointers), 0),
		0,
		0x000810A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::Class_MetaDataParams)
	};
#if WITH_EDITORONLY_DATA
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::PropPointers) < 2048);
#endif
	UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom()
	{
		if (!Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACLCustom.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACLCustom.OuterSingleton, Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACLCustom.OuterSingleton;
	}
	template<> ACLPLUGIN_API UClass* StaticClass<UAnimBoneCompressionCodec_ACLCustom>()
	{
		return UAnimBoneCompressionCodec_ACLCustom::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimBoneCompressionCodec_ACLCustom);
	UAnimBoneCompressionCodec_ACLCustom::~UAnimBoneCompressionCodec_ACLCustom() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimBoneCompressionCodec_ACLCustom_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimBoneCompressionCodec_ACLCustom_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom, UAnimBoneCompressionCodec_ACLCustom::StaticClass, TEXT("UAnimBoneCompressionCodec_ACLCustom"), &Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACLCustom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimBoneCompressionCodec_ACLCustom), 1741843279U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimBoneCompressionCodec_ACLCustom_h_3850920847(TEXT("/Script/ACLPlugin"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimBoneCompressionCodec_ACLCustom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimBoneCompressionCodec_ACLCustom_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
