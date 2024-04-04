// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../ACLPlugin/Classes/AnimBoneCompressionCodec_ACL.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimBoneCompressionCodec_ACL() {}
// Cross Module References
	ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACL();
	ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_NoRegister();
	ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ACLPlugin();
// End Cross Module References
	void UAnimBoneCompressionCodec_ACL::StaticRegisterNativesUAnimBoneCompressionCodec_ACL()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimBoneCompressionCodec_ACL);
	UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_NoRegister()
	{
		return UAnimBoneCompressionCodec_ACL::StaticClass();
	}
	struct Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
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
	UObject* (*const Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ACLPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Uses the open source Animation Compression Library with default settings suitable for general purpose animations. */" },
		{ "DisplayName", "Anim Compress ACL" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimBoneCompressionCodec_ACL.h" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACL.h" },
		{ "ToolTip", "Uses the open source Animation Compression Library with default settings suitable for general purpose animations." },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_OptimizationTargets_Inner = { "OptimizationTargets", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_OptimizationTargets_MetaData[] = {
		{ "Category", "ACL Options" },
		{ "Comment", "/** The skeletal meshes used to estimate the skinning deformation during compression. */" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACL.h" },
		{ "ToolTip", "The skeletal meshes used to estimate the skinning deformation during compression." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_OptimizationTargets = { "OptimizationTargets", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACL, OptimizationTargets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_OptimizationTargets_MetaData), Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_OptimizationTargets_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_OptimizationTargets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_OptimizationTargets,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimBoneCompressionCodec_ACL>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::ClassParams = {
		&UAnimBoneCompressionCodec_ACL::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::PropPointers), 0),
		0,
		0x000810A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::Class_MetaDataParams)
	};
#if WITH_EDITORONLY_DATA
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::PropPointers) < 2048);
#endif
	UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACL()
	{
		if (!Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACL.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACL.OuterSingleton, Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACL.OuterSingleton;
	}
	template<> ACLPLUGIN_API UClass* StaticClass<UAnimBoneCompressionCodec_ACL>()
	{
		return UAnimBoneCompressionCodec_ACL::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimBoneCompressionCodec_ACL);
	UAnimBoneCompressionCodec_ACL::~UAnimBoneCompressionCodec_ACL() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimBoneCompressionCodec_ACL_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimBoneCompressionCodec_ACL_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimBoneCompressionCodec_ACL, UAnimBoneCompressionCodec_ACL::StaticClass, TEXT("UAnimBoneCompressionCodec_ACL"), &Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACL, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimBoneCompressionCodec_ACL), 4269306183U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimBoneCompressionCodec_ACL_h_344550441(TEXT("/Script/ACLPlugin"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimBoneCompressionCodec_ACL_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimBoneCompressionCodec_ACL_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
