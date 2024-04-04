// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gltf/InterchangeGltfTranslator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeGltfTranslator() {}
// Cross Module References
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeTranslatorBase();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeAnimationPayloadInterface_NoRegister();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeGLTFTranslator();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeGLTFTranslator_NoRegister();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeMeshPayloadInterface_NoRegister();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeTexturePayloadInterface_NoRegister();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeVariantSetPayloadInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References
	void UInterchangeGLTFTranslator::StaticRegisterNativesUInterchangeGLTFTranslator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeGLTFTranslator);
	UClass* Z_Construct_UClass_UInterchangeGLTFTranslator_NoRegister()
	{
		return UInterchangeGLTFTranslator::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeGLTFTranslator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeGLTFTranslator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeTranslatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGLTFTranslator_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGLTFTranslator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* glTF translator class support import of texture, material, static mesh, skeletal mesh, */" },
		{ "IncludePath", "Gltf/InterchangeGltfTranslator.h" },
		{ "ModuleRelativePath", "Public/Gltf/InterchangeGltfTranslator.h" },
		{ "ToolTip", "glTF translator class support import of texture, material, static mesh, skeletal mesh," },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInterchangeGLTFTranslator_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterchangeMeshPayloadInterface_NoRegister, (int32)VTABLE_OFFSET(UInterchangeGLTFTranslator, IInterchangeMeshPayloadInterface), false },  // 681125245
			{ Z_Construct_UClass_UInterchangeTexturePayloadInterface_NoRegister, (int32)VTABLE_OFFSET(UInterchangeGLTFTranslator, IInterchangeTexturePayloadInterface), false },  // 469965785
			{ Z_Construct_UClass_UInterchangeAnimationPayloadInterface_NoRegister, (int32)VTABLE_OFFSET(UInterchangeGLTFTranslator, IInterchangeAnimationPayloadInterface), false },  // 739771593
			{ Z_Construct_UClass_UInterchangeVariantSetPayloadInterface_NoRegister, (int32)VTABLE_OFFSET(UInterchangeGLTFTranslator, IInterchangeVariantSetPayloadInterface), false },  // 1075796063
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGLTFTranslator_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeGLTFTranslator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeGLTFTranslator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeGLTFTranslator_Statics::ClassParams = {
		&UInterchangeGLTFTranslator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGLTFTranslator_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeGLTFTranslator_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UInterchangeGLTFTranslator()
	{
		if (!Z_Registration_Info_UClass_UInterchangeGLTFTranslator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeGLTFTranslator.OuterSingleton, Z_Construct_UClass_UInterchangeGLTFTranslator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeGLTFTranslator.OuterSingleton;
	}
	template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeGLTFTranslator>()
	{
		return UInterchangeGLTFTranslator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeGLTFTranslator);
	UInterchangeGLTFTranslator::~UInterchangeGLTFTranslator() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Gltf_InterchangeGltfTranslator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Gltf_InterchangeGltfTranslator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeGLTFTranslator, UInterchangeGLTFTranslator::StaticClass, TEXT("UInterchangeGLTFTranslator"), &Z_Registration_Info_UClass_UInterchangeGLTFTranslator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeGLTFTranslator), 2013986886U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Gltf_InterchangeGltfTranslator_h_2137108864(TEXT("/Script/InterchangeImport"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Gltf_InterchangeGltfTranslator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Gltf_InterchangeGltfTranslator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
