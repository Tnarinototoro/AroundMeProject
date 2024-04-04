// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMXPixelMappingPixelMapRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXPixelMappingPixelMapRenderer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DMXPIXELMAPPINGRENDERER_API UClass* Z_Construct_UClass_UDMXPixelMappingPixelMapRenderer();
	DMXPIXELMAPPINGRENDERER_API UClass* Z_Construct_UClass_UDMXPixelMappingPixelMapRenderer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXPixelMappingRenderer();
// End Cross Module References
	void UDMXPixelMappingPixelMapRenderer::StaticRegisterNativesUDMXPixelMappingPixelMapRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXPixelMappingPixelMapRenderer);
	UClass* Z_Construct_UClass_UDMXPixelMappingPixelMapRenderer_NoRegister()
	{
		return UDMXPixelMappingPixelMapRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UDMXPixelMappingPixelMapRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PixelMapRenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PixelMapRenderTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXPixelMappingPixelMapRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXPixelMappingRenderer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingPixelMapRenderer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingPixelMapRenderer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Maps pixel map render elements to pixels */" },
		{ "IncludePath", "DMXPixelMappingPixelMapRenderer.h" },
		{ "ModuleRelativePath", "Public/DMXPixelMappingPixelMapRenderer.h" },
		{ "ToolTip", "Maps pixel map render elements to pixels" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingPixelMapRenderer_Statics::NewProp_PixelMapRenderTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/DMXPixelMappingPixelMapRenderer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXPixelMappingPixelMapRenderer_Statics::NewProp_PixelMapRenderTarget = { "PixelMapRenderTarget", nullptr, (EPropertyFlags)0x0044000000202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXPixelMappingPixelMapRenderer, PixelMapRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingPixelMapRenderer_Statics::NewProp_PixelMapRenderTarget_MetaData), Z_Construct_UClass_UDMXPixelMappingPixelMapRenderer_Statics::NewProp_PixelMapRenderTarget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXPixelMappingPixelMapRenderer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingPixelMapRenderer_Statics::NewProp_PixelMapRenderTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXPixelMappingPixelMapRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXPixelMappingPixelMapRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXPixelMappingPixelMapRenderer_Statics::ClassParams = {
		&UDMXPixelMappingPixelMapRenderer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXPixelMappingPixelMapRenderer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingPixelMapRenderer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingPixelMapRenderer_Statics::Class_MetaDataParams), Z_Construct_UClass_UDMXPixelMappingPixelMapRenderer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingPixelMapRenderer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDMXPixelMappingPixelMapRenderer()
	{
		if (!Z_Registration_Info_UClass_UDMXPixelMappingPixelMapRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXPixelMappingPixelMapRenderer.OuterSingleton, Z_Construct_UClass_UDMXPixelMappingPixelMapRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXPixelMappingPixelMapRenderer.OuterSingleton;
	}
	template<> DMXPIXELMAPPINGRENDERER_API UClass* StaticClass<UDMXPixelMappingPixelMapRenderer>()
	{
		return UDMXPixelMappingPixelMapRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXPixelMappingPixelMapRenderer);
	UDMXPixelMappingPixelMapRenderer::~UDMXPixelMappingPixelMapRenderer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRenderer_Public_DMXPixelMappingPixelMapRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRenderer_Public_DMXPixelMappingPixelMapRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXPixelMappingPixelMapRenderer, UDMXPixelMappingPixelMapRenderer::StaticClass, TEXT("UDMXPixelMappingPixelMapRenderer"), &Z_Registration_Info_UClass_UDMXPixelMappingPixelMapRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXPixelMappingPixelMapRenderer), 3148840267U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRenderer_Public_DMXPixelMappingPixelMapRenderer_h_3821094398(TEXT("/Script/DMXPixelMappingRenderer"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRenderer_Public_DMXPixelMappingPixelMapRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRenderer_Public_DMXPixelMappingPixelMapRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
