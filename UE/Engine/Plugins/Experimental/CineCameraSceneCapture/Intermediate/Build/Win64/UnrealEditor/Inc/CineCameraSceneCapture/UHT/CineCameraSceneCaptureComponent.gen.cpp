// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CineCameraSceneCaptureComponent.h"
#include "OpenColorIOColorSpace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCineCameraSceneCaptureComponent() {}
// Cross Module References
	CINECAMERASCENECAPTURE_API UClass* Z_Construct_UClass_UCineCaptureComponent2D();
	CINECAMERASCENECAPTURE_API UClass* Z_Construct_UClass_UCineCaptureComponent2D_NoRegister();
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D();
	OPENCOLORIO_API UScriptStruct* Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration();
	UPackage* Z_Construct_UPackage__Script_CineCameraSceneCapture();
// End Cross Module References
	void UCineCaptureComponent2D::StaticRegisterNativesUCineCaptureComponent2D()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCineCaptureComponent2D);
	UClass* Z_Construct_UClass_UCineCaptureComponent2D_NoRegister()
	{
		return UCineCaptureComponent2D::StaticClass();
	}
	struct Z_Construct_UClass_UCineCaptureComponent2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetHighestDimension_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RenderTargetHighestDimension;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFollowSceneCaptureRenderPath_MetaData[];
#endif
		static void NewProp_bFollowSceneCaptureRenderPath_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFollowSceneCaptureRenderPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OCIOConfiguration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OCIOConfiguration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CineCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CineCameraComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCineCaptureComponent2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneCaptureComponent2D,
		(UObject* (*)())Z_Construct_UPackage__Script_CineCameraSceneCapture,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCineCaptureComponent2D_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCaptureComponent2D_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n* Cine Capture Component extends Scene Capture to allow users to render Cine Camera Component into a render target. \n* Cine Capture has a few modifiable properties, but most of the properties are controlled by Cine Camera Component.\n* Cine Capture Component is required to be parented to Cine Camera Component or a class that extends it.\n* \n*/" },
		{ "HideCategories", "Transform Collision Object Physics SceneComponent PostProcessVolume Projection Rendering PlanarReflection Collision Object Physics SceneComponent Collision Object Physics SceneComponent Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "CineCameraSceneCaptureComponent.h" },
		{ "ModuleRelativePath", "Public/CineCameraSceneCaptureComponent.h" },
		{ "ToolTip", "Cine Capture Component extends Scene Capture to allow users to render Cine Camera Component into a render target.\nCine Capture has a few modifiable properties, but most of the properties are controlled by Cine Camera Component.\nCine Capture Component is required to be parented to Cine Camera Component or a class that extends it." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCaptureComponent2D_Statics::NewProp_RenderTargetHighestDimension_MetaData[] = {
		{ "Category", "Capture Settings" },
		{ "ClampMax", "8192" },
		{ "ClampMin", "1" },
		{ "Comment", "/** \n\x09* Highest possible dimension of specified render target in either X or Y (depends on cine camera aspect ratio). Used to adjust the render target size.\n\x09* Example: With cine camera's censor aspect ratio is 2:1, and Highest Dimension set to 1000, the render target will be resized to 1000x500. \n\x09*/" },
		{ "ModuleRelativePath", "Public/CineCameraSceneCaptureComponent.h" },
		{ "ToolTip", "Highest possible dimension of specified render target in either X or Y (depends on cine camera aspect ratio). Used to adjust the render target size.\nExample: With cine camera's censor aspect ratio is 2:1, and Highest Dimension set to 1000, the render target will be resized to 1000x500." },
		{ "UIMax", "8192" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCineCaptureComponent2D_Statics::NewProp_RenderTargetHighestDimension = { "RenderTargetHighestDimension", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCineCaptureComponent2D, RenderTargetHighestDimension), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCineCaptureComponent2D_Statics::NewProp_RenderTargetHighestDimension_MetaData), Z_Construct_UClass_UCineCaptureComponent2D_Statics::NewProp_RenderTargetHighestDimension_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCaptureComponent2D_Statics::NewProp_bFollowSceneCaptureRenderPath_MetaData[] = {
		{ "Category", "Capture Settings" },
		{ "Comment", "/** \n\x09* Affects rendering path cine capture takes. Scene Capture takes a slightly different rendering route compared to viewport rendering\n\x09* for the purposes of optimization. If the results of cine capture are vastly different to what cine camera displays try disabling this.\n\x09*/" },
		{ "ModuleRelativePath", "Public/CineCameraSceneCaptureComponent.h" },
		{ "ToolTip", "Affects rendering path cine capture takes. Scene Capture takes a slightly different rendering route compared to viewport rendering\nfor the purposes of optimization. If the results of cine capture are vastly different to what cine camera displays try disabling this." },
	};
#endif
	void Z_Construct_UClass_UCineCaptureComponent2D_Statics::NewProp_bFollowSceneCaptureRenderPath_SetBit(void* Obj)
	{
		((UCineCaptureComponent2D*)Obj)->bFollowSceneCaptureRenderPath = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCineCaptureComponent2D_Statics::NewProp_bFollowSceneCaptureRenderPath = { "bFollowSceneCaptureRenderPath", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCineCaptureComponent2D), &Z_Construct_UClass_UCineCaptureComponent2D_Statics::NewProp_bFollowSceneCaptureRenderPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCineCaptureComponent2D_Statics::NewProp_bFollowSceneCaptureRenderPath_MetaData), Z_Construct_UClass_UCineCaptureComponent2D_Statics::NewProp_bFollowSceneCaptureRenderPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCaptureComponent2D_Statics::NewProp_OCIOConfiguration_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** \n\x09* Open Color IO Configuration. Used to apply color transforms.\n\x09*/" },
		{ "DisplayName", "OpenColorIO Display Configuration" },
		{ "ModuleRelativePath", "Public/CineCameraSceneCaptureComponent.h" },
		{ "ToolTip", "Open Color IO Configuration. Used to apply color transforms." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCineCaptureComponent2D_Statics::NewProp_OCIOConfiguration = { "OCIOConfiguration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCineCaptureComponent2D, OCIOConfiguration), Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCineCaptureComponent2D_Statics::NewProp_OCIOConfiguration_MetaData), Z_Construct_UClass_UCineCaptureComponent2D_Statics::NewProp_OCIOConfiguration_MetaData) }; // 128667361
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCaptureComponent2D_Statics::NewProp_CineCameraComponent_MetaData[] = {
		{ "Comment", "/** Used to gather relevant properties for View rendering. */" },
		{ "ModuleRelativePath", "Public/CineCameraSceneCaptureComponent.h" },
		{ "ToolTip", "Used to gather relevant properties for View rendering." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCineCaptureComponent2D_Statics::NewProp_CineCameraComponent = { "CineCameraComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCineCaptureComponent2D, CineCameraComponent), Z_Construct_UClass_UCineCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCineCaptureComponent2D_Statics::NewProp_CineCameraComponent_MetaData), Z_Construct_UClass_UCineCaptureComponent2D_Statics::NewProp_CineCameraComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCineCaptureComponent2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCaptureComponent2D_Statics::NewProp_RenderTargetHighestDimension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCaptureComponent2D_Statics::NewProp_bFollowSceneCaptureRenderPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCaptureComponent2D_Statics::NewProp_OCIOConfiguration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCaptureComponent2D_Statics::NewProp_CineCameraComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCineCaptureComponent2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCineCaptureComponent2D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCineCaptureComponent2D_Statics::ClassParams = {
		&UCineCaptureComponent2D::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCineCaptureComponent2D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCineCaptureComponent2D_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCineCaptureComponent2D_Statics::Class_MetaDataParams), Z_Construct_UClass_UCineCaptureComponent2D_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCineCaptureComponent2D_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCineCaptureComponent2D()
	{
		if (!Z_Registration_Info_UClass_UCineCaptureComponent2D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCineCaptureComponent2D.OuterSingleton, Z_Construct_UClass_UCineCaptureComponent2D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCineCaptureComponent2D.OuterSingleton;
	}
	template<> CINECAMERASCENECAPTURE_API UClass* StaticClass<UCineCaptureComponent2D>()
	{
		return UCineCaptureComponent2D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCineCaptureComponent2D);
	UCineCaptureComponent2D::~UCineCaptureComponent2D() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraSceneCapture_Source_CineCameraSceneCapture_Public_CineCameraSceneCaptureComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraSceneCapture_Source_CineCameraSceneCapture_Public_CineCameraSceneCaptureComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCineCaptureComponent2D, UCineCaptureComponent2D::StaticClass, TEXT("UCineCaptureComponent2D"), &Z_Registration_Info_UClass_UCineCaptureComponent2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCineCaptureComponent2D), 3745341935U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraSceneCapture_Source_CineCameraSceneCapture_Public_CineCameraSceneCaptureComponent_h_1196127136(TEXT("/Script/CineCameraSceneCapture"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraSceneCapture_Source_CineCameraSceneCapture_Public_CineCameraSceneCaptureComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraSceneCapture_Source_CineCameraSceneCapture_Public_CineCameraSceneCaptureComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
