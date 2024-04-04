// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/NiagaraVolumeRendererProperties.h"
#include "../Public/NiagaraCommon.h"
#include "../Public/NiagaraParameterBinding.h"
#include "../Public/NiagaraRendererProperties.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraVolumeRendererProperties() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRendererProperties();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraVolumeRendererProperties();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraVolumeRendererProperties_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterBinding();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraVolumeRendererProperties::StaticRegisterNativesUNiagaraVolumeRendererProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraVolumeRendererProperties);
	UClass* Z_Construct_UClass_UNiagaraVolumeRendererProperties_NoRegister()
	{
		return UNiagaraVolumeRendererProperties::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Material;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MICMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MICMaterial;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialParameterBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialParameterBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RendererVisibility_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RendererVisibility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StepFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightingDownsampleFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightingDownsampleFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowStepFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShadowStepFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowBiasFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShadowBiasFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RendererVisibilityTagBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RendererVisibilityTagBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeResolutionMaxAxisBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VolumeResolutionMaxAxisBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeWorldSpaceSizeBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VolumeWorldSpaceSizeBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraRendererProperties,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Volume Renderer" },
		{ "IncludePath", "NiagaraVolumeRendererProperties.h" },
		{ "ModuleRelativePath", "Public/NiagaraVolumeRendererProperties.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Volume Rendering" },
		{ "Comment", "/** What material to use for the volume. */" },
		{ "ModuleRelativePath", "Public/NiagaraVolumeRendererProperties.h" },
		{ "ToolTip", "What material to use for the volume." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraVolumeRendererProperties, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_Material_MetaData), Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_Material_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_MICMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraVolumeRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_MICMaterial = { "MICMaterial", nullptr, (EPropertyFlags)0x0014000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraVolumeRendererProperties, MICMaterial), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_MICMaterial_MetaData), Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_MICMaterial_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_MaterialParameterBinding_MetaData[] = {
		{ "Category", "Volume Rendering" },
		{ "Comment", "/** Binding to material. */" },
		{ "ModuleRelativePath", "Public/NiagaraVolumeRendererProperties.h" },
		{ "ToolTip", "Binding to material." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_MaterialParameterBinding = { "MaterialParameterBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraVolumeRendererProperties, MaterialParameterBinding), Z_Construct_UScriptStruct_FNiagaraParameterBinding, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_MaterialParameterBinding_MetaData), Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_MaterialParameterBinding_MetaData) }; // 3491511441
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_RendererVisibility_MetaData[] = {
		{ "Category", "Volume Rendering" },
		{ "Comment", "/** If a render visibility tag is present, particles whose tag matches this value will be visible in this renderer. */" },
		{ "ModuleRelativePath", "Public/NiagaraVolumeRendererProperties.h" },
		{ "ToolTip", "If a render visibility tag is present, particles whose tag matches this value will be visible in this renderer." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_RendererVisibility = { "RendererVisibility", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraVolumeRendererProperties, RendererVisibility), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_RendererVisibility_MetaData), Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_RendererVisibility_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_StepFactor_MetaData[] = {
		{ "Category", "Volume Rendering" },
		{ "ModuleRelativePath", "Public/NiagaraVolumeRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_StepFactor = { "StepFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraVolumeRendererProperties, StepFactor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_StepFactor_MetaData), Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_StepFactor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_LightingDownsampleFactor_MetaData[] = {
		{ "Category", "Volume Rendering" },
		{ "ModuleRelativePath", "Public/NiagaraVolumeRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_LightingDownsampleFactor = { "LightingDownsampleFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraVolumeRendererProperties, LightingDownsampleFactor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_LightingDownsampleFactor_MetaData), Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_LightingDownsampleFactor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_ShadowStepFactor_MetaData[] = {
		{ "Category", "Volume Rendering" },
		{ "ModuleRelativePath", "Public/NiagaraVolumeRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_ShadowStepFactor = { "ShadowStepFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraVolumeRendererProperties, ShadowStepFactor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_ShadowStepFactor_MetaData), Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_ShadowStepFactor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_ShadowBiasFactor_MetaData[] = {
		{ "Category", "Volume Rendering" },
		{ "ModuleRelativePath", "Public/NiagaraVolumeRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_ShadowBiasFactor = { "ShadowBiasFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraVolumeRendererProperties, ShadowBiasFactor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_ShadowBiasFactor_MetaData), Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_ShadowBiasFactor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_RendererVisibilityTagBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Visibility tag binding, when valid the returned values is compared with RendererVisibility. */" },
		{ "ModuleRelativePath", "Public/NiagaraVolumeRendererProperties.h" },
		{ "ToolTip", "Visibility tag binding, when valid the returned values is compared with RendererVisibility." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_RendererVisibilityTagBinding = { "RendererVisibilityTagBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraVolumeRendererProperties, RendererVisibilityTagBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_RendererVisibilityTagBinding_MetaData), Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_RendererVisibilityTagBinding_MetaData) }; // 872410273
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_VolumeResolutionMaxAxisBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "ModuleRelativePath", "Public/NiagaraVolumeRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_VolumeResolutionMaxAxisBinding = { "VolumeResolutionMaxAxisBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraVolumeRendererProperties, VolumeResolutionMaxAxisBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_VolumeResolutionMaxAxisBinding_MetaData), Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_VolumeResolutionMaxAxisBinding_MetaData) }; // 872410273
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_VolumeWorldSpaceSizeBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "ModuleRelativePath", "Public/NiagaraVolumeRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_VolumeWorldSpaceSizeBinding = { "VolumeWorldSpaceSizeBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraVolumeRendererProperties, VolumeWorldSpaceSizeBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_VolumeWorldSpaceSizeBinding_MetaData), Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_VolumeWorldSpaceSizeBinding_MetaData) }; // 872410273
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_MaterialParameters_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** If this array has entries, we will create a MaterialInstanceDynamic per Emitter instance from Material and set the Material parameters using the Niagara simulation variables listed.*/" },
		{ "ModuleRelativePath", "Public/NiagaraVolumeRendererProperties.h" },
		{ "ToolTip", "If this array has entries, we will create a MaterialInstanceDynamic per Emitter instance from Material and set the Material parameters using the Niagara simulation variables listed." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_MaterialParameters = { "MaterialParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraVolumeRendererProperties, MaterialParameters), Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_MaterialParameters_MetaData), Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_MaterialParameters_MetaData) }; // 762046674
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_Material,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_MICMaterial,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_MaterialParameterBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_RendererVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_StepFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_LightingDownsampleFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_ShadowStepFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_ShadowBiasFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_RendererVisibilityTagBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_VolumeResolutionMaxAxisBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_VolumeWorldSpaceSizeBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::NewProp_MaterialParameters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraVolumeRendererProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::ClassParams = {
		&UNiagaraVolumeRendererProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNiagaraVolumeRendererProperties()
	{
		if (!Z_Registration_Info_UClass_UNiagaraVolumeRendererProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraVolumeRendererProperties.OuterSingleton, Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraVolumeRendererProperties.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraVolumeRendererProperties>()
	{
		return UNiagaraVolumeRendererProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraVolumeRendererProperties);
	UNiagaraVolumeRendererProperties::~UNiagaraVolumeRendererProperties() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraVolumeRendererProperties)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVolumeRendererProperties_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVolumeRendererProperties_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraVolumeRendererProperties, UNiagaraVolumeRendererProperties::StaticClass, TEXT("UNiagaraVolumeRendererProperties"), &Z_Registration_Info_UClass_UNiagaraVolumeRendererProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraVolumeRendererProperties), 2057741228U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVolumeRendererProperties_h_3316163899(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVolumeRendererProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVolumeRendererProperties_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
