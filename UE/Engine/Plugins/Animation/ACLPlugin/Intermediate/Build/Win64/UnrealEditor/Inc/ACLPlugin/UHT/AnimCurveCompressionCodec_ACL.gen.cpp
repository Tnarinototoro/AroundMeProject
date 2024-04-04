// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../ACLPlugin/Classes/AnimCurveCompressionCodec_ACL.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCurveCompressionCodec_ACL() {}
// Cross Module References
	ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimCurveCompressionCodec_ACL();
	ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCurveCompressionCodec();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ACLPlugin();
// End Cross Module References
	void UAnimCurveCompressionCodec_ACL::StaticRegisterNativesUAnimCurveCompressionCodec_ACL()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimCurveCompressionCodec_ACL);
	UClass* Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_NoRegister()
	{
		return UAnimCurveCompressionCodec_ACL::StaticClass();
	}
	struct Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurvePrecision_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurvePrecision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MorphTargetPositionPrecision_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MorphTargetPositionPrecision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MorphTargetSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MorphTargetSource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimCurveCompressionCodec,
		(UObject* (*)())Z_Construct_UPackage__Script_ACLPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Uses the open source Animation Compression Library with default settings suitable for general purpose animation curves. */" },
		{ "DisplayName", "ACL Curves" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimCurveCompressionCodec_ACL.h" },
		{ "ModuleRelativePath", "Classes/AnimCurveCompressionCodec_ACL.h" },
		{ "ToolTip", "Uses the open source Animation Compression Library with default settings suitable for general purpose animation curves." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::NewProp_CurvePrecision_MetaData[] = {
		{ "Category", "ACL Options" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The curve precision to target when compressing the animation curves. */" },
		{ "ModuleRelativePath", "Classes/AnimCurveCompressionCodec_ACL.h" },
		{ "ToolTip", "The curve precision to target when compressing the animation curves." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::NewProp_CurvePrecision = { "CurvePrecision", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimCurveCompressionCodec_ACL, CurvePrecision), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::NewProp_CurvePrecision_MetaData), Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::NewProp_CurvePrecision_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::NewProp_MorphTargetPositionPrecision_MetaData[] = {
		{ "Category", "ACL Options" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The mesh deformation precision to target when compressing morph target animation curves. */" },
		{ "EditCondition", "MorphTargetSource != nullptr" },
		{ "ModuleRelativePath", "Classes/AnimCurveCompressionCodec_ACL.h" },
		{ "ToolTip", "The mesh deformation precision to target when compressing morph target animation curves." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::NewProp_MorphTargetPositionPrecision = { "MorphTargetPositionPrecision", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimCurveCompressionCodec_ACL, MorphTargetPositionPrecision), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::NewProp_MorphTargetPositionPrecision_MetaData), Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::NewProp_MorphTargetPositionPrecision_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::NewProp_MorphTargetSource_MetaData[] = {
		{ "Category", "ACL Options" },
		{ "Comment", "/** The skeletal mesh used to estimate the morph target deformation during compression. */" },
		{ "ModuleRelativePath", "Classes/AnimCurveCompressionCodec_ACL.h" },
		{ "ToolTip", "The skeletal mesh used to estimate the morph target deformation during compression." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::NewProp_MorphTargetSource = { "MorphTargetSource", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimCurveCompressionCodec_ACL, MorphTargetSource), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::NewProp_MorphTargetSource_MetaData), Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::NewProp_MorphTargetSource_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::NewProp_CurvePrecision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::NewProp_MorphTargetPositionPrecision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::NewProp_MorphTargetSource,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimCurveCompressionCodec_ACL>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::ClassParams = {
		&UAnimCurveCompressionCodec_ACL::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::PropPointers), 0),
		0,
		0x000810A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::Class_MetaDataParams)
	};
#if WITH_EDITORONLY_DATA
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::PropPointers) < 2048);
#endif
	UClass* Z_Construct_UClass_UAnimCurveCompressionCodec_ACL()
	{
		if (!Z_Registration_Info_UClass_UAnimCurveCompressionCodec_ACL.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimCurveCompressionCodec_ACL.OuterSingleton, Z_Construct_UClass_UAnimCurveCompressionCodec_ACL_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimCurveCompressionCodec_ACL.OuterSingleton;
	}
	template<> ACLPLUGIN_API UClass* StaticClass<UAnimCurveCompressionCodec_ACL>()
	{
		return UAnimCurveCompressionCodec_ACL::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCurveCompressionCodec_ACL);
	UAnimCurveCompressionCodec_ACL::~UAnimCurveCompressionCodec_ACL() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimCurveCompressionCodec_ACL_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimCurveCompressionCodec_ACL_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimCurveCompressionCodec_ACL, UAnimCurveCompressionCodec_ACL::StaticClass, TEXT("UAnimCurveCompressionCodec_ACL"), &Z_Registration_Info_UClass_UAnimCurveCompressionCodec_ACL, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimCurveCompressionCodec_ACL), 3130892531U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimCurveCompressionCodec_ACL_h_3363321705(TEXT("/Script/ACLPlugin"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimCurveCompressionCodec_ACL_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimCurveCompressionCodec_ACL_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
