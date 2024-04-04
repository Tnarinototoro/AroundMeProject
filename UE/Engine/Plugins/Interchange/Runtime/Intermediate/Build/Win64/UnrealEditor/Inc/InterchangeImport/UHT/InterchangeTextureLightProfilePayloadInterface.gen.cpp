// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Texture/InterchangeTextureLightProfilePayloadInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeTextureLightProfilePayloadInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeTextureLightProfilePayloadInterface();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeTextureLightProfilePayloadInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References
	void UInterchangeTextureLightProfilePayloadInterface::StaticRegisterNativesUInterchangeTextureLightProfilePayloadInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeTextureLightProfilePayloadInterface);
	UClass* Z_Construct_UClass_UInterchangeTextureLightProfilePayloadInterface_NoRegister()
	{
		return UInterchangeTextureLightProfilePayloadInterface::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeTextureLightProfilePayloadInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeTextureLightProfilePayloadInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTextureLightProfilePayloadInterface_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeTextureLightProfilePayloadInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Texture/InterchangeTextureLightProfilePayloadInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeTextureLightProfilePayloadInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterchangeTextureLightProfilePayloadInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeTextureLightProfilePayloadInterface_Statics::ClassParams = {
		&UInterchangeTextureLightProfilePayloadInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTextureLightProfilePayloadInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeTextureLightProfilePayloadInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UInterchangeTextureLightProfilePayloadInterface()
	{
		if (!Z_Registration_Info_UClass_UInterchangeTextureLightProfilePayloadInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeTextureLightProfilePayloadInterface.OuterSingleton, Z_Construct_UClass_UInterchangeTextureLightProfilePayloadInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeTextureLightProfilePayloadInterface.OuterSingleton;
	}
	template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeTextureLightProfilePayloadInterface>()
	{
		return UInterchangeTextureLightProfilePayloadInterface::StaticClass();
	}
	UInterchangeTextureLightProfilePayloadInterface::UInterchangeTextureLightProfilePayloadInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeTextureLightProfilePayloadInterface);
	UInterchangeTextureLightProfilePayloadInterface::~UInterchangeTextureLightProfilePayloadInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeTextureLightProfilePayloadInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeTextureLightProfilePayloadInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeTextureLightProfilePayloadInterface, UInterchangeTextureLightProfilePayloadInterface::StaticClass, TEXT("UInterchangeTextureLightProfilePayloadInterface"), &Z_Registration_Info_UClass_UInterchangeTextureLightProfilePayloadInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeTextureLightProfilePayloadInterface), 2987174029U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeTextureLightProfilePayloadInterface_h_3883723173(TEXT("/Script/InterchangeImport"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeTextureLightProfilePayloadInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeTextureLightProfilePayloadInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
