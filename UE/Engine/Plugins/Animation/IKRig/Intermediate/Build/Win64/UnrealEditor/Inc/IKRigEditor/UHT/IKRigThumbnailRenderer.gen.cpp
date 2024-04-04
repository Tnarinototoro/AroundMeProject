// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigEditor/IKRigThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKRigThumbnailRenderer() {}
// Cross Module References
	IKRIGEDITOR_API UClass* Z_Construct_UClass_UIKRigThumbnailRenderer();
	IKRIGEDITOR_API UClass* Z_Construct_UClass_UIKRigThumbnailRenderer_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_USkeletalMeshThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_IKRigEditor();
// End Cross Module References
	void UIKRigThumbnailRenderer::StaticRegisterNativesUIKRigThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRigThumbnailRenderer);
	UClass* Z_Construct_UClass_UIKRigThumbnailRenderer_NoRegister()
	{
		return UIKRigThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UIKRigThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIKRigThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkeletalMeshThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_IKRigEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigThumbnailRenderer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// this thumbnail renderer displays a given IK Rig in the asset icon\n" },
		{ "IncludePath", "RigEditor/IKRigThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigThumbnailRenderer.h" },
		{ "ToolTip", "this thumbnail renderer displays a given IK Rig in the asset icon" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIKRigThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRigThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRigThumbnailRenderer_Statics::ClassParams = {
		&UIKRigThumbnailRenderer::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigThumbnailRenderer_Statics::Class_MetaDataParams), Z_Construct_UClass_UIKRigThumbnailRenderer_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UIKRigThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_UIKRigThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRigThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UIKRigThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIKRigThumbnailRenderer.OuterSingleton;
	}
	template<> IKRIGEDITOR_API UClass* StaticClass<UIKRigThumbnailRenderer>()
	{
		return UIKRigThumbnailRenderer::StaticClass();
	}
	UIKRigThumbnailRenderer::UIKRigThumbnailRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRigThumbnailRenderer);
	UIKRigThumbnailRenderer::~UIKRigThumbnailRenderer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigThumbnailRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigThumbnailRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIKRigThumbnailRenderer, UIKRigThumbnailRenderer::StaticClass, TEXT("UIKRigThumbnailRenderer"), &Z_Registration_Info_UClass_UIKRigThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRigThumbnailRenderer), 3313077055U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigThumbnailRenderer_h_3361580687(TEXT("/Script/IKRigEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigThumbnailRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
