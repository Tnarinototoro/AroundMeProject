// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Scene/InterchangeLightActorFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeLightActorFactory() {}
// Cross Module References
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeActorFactory();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeLightActorFactory();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeLightActorFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References
	void UInterchangeLightActorFactory::StaticRegisterNativesUInterchangeLightActorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeLightActorFactory);
	UClass* Z_Construct_UClass_UInterchangeLightActorFactory_NoRegister()
	{
		return UInterchangeLightActorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeLightActorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeLightActorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeLightActorFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeLightActorFactory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Scene/InterchangeLightActorFactory.h" },
		{ "ModuleRelativePath", "Public/Scene/InterchangeLightActorFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeLightActorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeLightActorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeLightActorFactory_Statics::ClassParams = {
		&UInterchangeLightActorFactory::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeLightActorFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeLightActorFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UInterchangeLightActorFactory()
	{
		if (!Z_Registration_Info_UClass_UInterchangeLightActorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeLightActorFactory.OuterSingleton, Z_Construct_UClass_UInterchangeLightActorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeLightActorFactory.OuterSingleton;
	}
	template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeLightActorFactory>()
	{
		return UInterchangeLightActorFactory::StaticClass();
	}
	UInterchangeLightActorFactory::UInterchangeLightActorFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeLightActorFactory);
	UInterchangeLightActorFactory::~UInterchangeLightActorFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeLightActorFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeLightActorFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeLightActorFactory, UInterchangeLightActorFactory::StaticClass, TEXT("UInterchangeLightActorFactory"), &Z_Registration_Info_UClass_UInterchangeLightActorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeLightActorFactory), 3768236817U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeLightActorFactory_h_3828889664(TEXT("/Script/InterchangeImport"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeLightActorFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeLightActorFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
