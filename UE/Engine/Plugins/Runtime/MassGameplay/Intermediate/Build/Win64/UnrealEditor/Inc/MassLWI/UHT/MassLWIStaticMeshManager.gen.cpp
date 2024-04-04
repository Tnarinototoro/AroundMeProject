// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassLWIStaticMeshManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassLWIStaticMeshManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ALightWeightInstanceStaticMeshManager();
	MASSLWI_API UClass* Z_Construct_UClass_AMassLWIStaticMeshManager();
	MASSLWI_API UClass* Z_Construct_UClass_AMassLWIStaticMeshManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassLWI();
// End Cross Module References
	void AMassLWIStaticMeshManager::StaticRegisterNativesAMassLWIStaticMeshManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMassLWIStaticMeshManager);
	UClass* Z_Construct_UClass_AMassLWIStaticMeshManager_NoRegister()
	{
		return AMassLWIStaticMeshManager::StaticClass();
	}
	struct Z_Construct_UClass_AMassLWIStaticMeshManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMassLWIStaticMeshManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALightWeightInstanceStaticMeshManager,
		(UObject* (*)())Z_Construct_UPackage__Script_MassLWI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMassLWIStaticMeshManager_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassLWIStaticMeshManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassLWIStaticMeshManager.h" },
		{ "ModuleRelativePath", "Public/MassLWIStaticMeshManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMassLWIStaticMeshManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMassLWIStaticMeshManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMassLWIStaticMeshManager_Statics::ClassParams = {
		&AMassLWIStaticMeshManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassLWIStaticMeshManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AMassLWIStaticMeshManager_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMassLWIStaticMeshManager()
	{
		if (!Z_Registration_Info_UClass_AMassLWIStaticMeshManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMassLWIStaticMeshManager.OuterSingleton, Z_Construct_UClass_AMassLWIStaticMeshManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMassLWIStaticMeshManager.OuterSingleton;
	}
	template<> MASSLWI_API UClass* StaticClass<AMassLWIStaticMeshManager>()
	{
		return AMassLWIStaticMeshManager::StaticClass();
	}
	AMassLWIStaticMeshManager::AMassLWIStaticMeshManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMassLWIStaticMeshManager);
	AMassLWIStaticMeshManager::~AMassLWIStaticMeshManager() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLWI_Public_MassLWIStaticMeshManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLWI_Public_MassLWIStaticMeshManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMassLWIStaticMeshManager, AMassLWIStaticMeshManager::StaticClass, TEXT("AMassLWIStaticMeshManager"), &Z_Registration_Info_UClass_AMassLWIStaticMeshManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMassLWIStaticMeshManager), 1398524863U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLWI_Public_MassLWIStaticMeshManager_h_1222985975(TEXT("/Script/MassLWI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLWI_Public_MassLWIStaticMeshManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLWI_Public_MassLWIStaticMeshManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
