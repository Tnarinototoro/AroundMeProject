// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Visualizers/ChaosVDDataVisualizerBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosVDDataVisualizerBase() {}
// Cross Module References
	CHAOSVD_API UClass* Z_Construct_UClass_UChaosVDVisualizerContainerInterface();
	CHAOSVD_API UClass* Z_Construct_UClass_UChaosVDVisualizerContainerInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ChaosVD();
// End Cross Module References
	void UChaosVDVisualizerContainerInterface::StaticRegisterNativesUChaosVDVisualizerContainerInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosVDVisualizerContainerInterface);
	UClass* Z_Construct_UClass_UChaosVDVisualizerContainerInterface_NoRegister()
	{
		return UChaosVDVisualizerContainerInterface::StaticClass();
	}
	struct Z_Construct_UClass_UChaosVDVisualizerContainerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosVDVisualizerContainerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVD,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVDVisualizerContainerInterface_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVDVisualizerContainerInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Visualizers/ChaosVDDataVisualizerBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosVDVisualizerContainerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IChaosVDVisualizerContainerInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosVDVisualizerContainerInterface_Statics::ClassParams = {
		&UChaosVDVisualizerContainerInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVDVisualizerContainerInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UChaosVDVisualizerContainerInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UChaosVDVisualizerContainerInterface()
	{
		if (!Z_Registration_Info_UClass_UChaosVDVisualizerContainerInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosVDVisualizerContainerInterface.OuterSingleton, Z_Construct_UClass_UChaosVDVisualizerContainerInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChaosVDVisualizerContainerInterface.OuterSingleton;
	}
	template<> CHAOSVD_API UClass* StaticClass<UChaosVDVisualizerContainerInterface>()
	{
		return UChaosVDVisualizerContainerInterface::StaticClass();
	}
	UChaosVDVisualizerContainerInterface::UChaosVDVisualizerContainerInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosVDVisualizerContainerInterface);
	UChaosVDVisualizerContainerInterface::~UChaosVDVisualizerContainerInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_Visualizers_ChaosVDDataVisualizerBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_Visualizers_ChaosVDDataVisualizerBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChaosVDVisualizerContainerInterface, UChaosVDVisualizerContainerInterface::StaticClass, TEXT("UChaosVDVisualizerContainerInterface"), &Z_Registration_Info_UClass_UChaosVDVisualizerContainerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosVDVisualizerContainerInterface), 1402228781U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_Visualizers_ChaosVDDataVisualizerBase_h_1022747539(TEXT("/Script/ChaosVD"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_Visualizers_ChaosVDDataVisualizerBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_Visualizers_ChaosVDDataVisualizerBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
