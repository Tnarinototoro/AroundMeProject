// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PhysicsControlProfileAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsControlProfileAssetFactory() {}
// Cross Module References
	PHYSICSCONTROLEDITOR_API UClass* Z_Construct_UClass_UPhysicsControlProfileAssetFactory();
	PHYSICSCONTROLEDITOR_API UClass* Z_Construct_UClass_UPhysicsControlProfileAssetFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_PhysicsControlEditor();
// End Cross Module References
	void UPhysicsControlProfileAssetFactory::StaticRegisterNativesUPhysicsControlProfileAssetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsControlProfileAssetFactory);
	UClass* Z_Construct_UClass_UPhysicsControlProfileAssetFactory_NoRegister()
	{
		return UPhysicsControlProfileAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsControlProfileAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsControlProfileAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsControlEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsControlProfileAssetFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsControlProfileAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PhysicsControlProfileAssetFactory.h" },
		{ "ModuleRelativePath", "Private/PhysicsControlProfileAssetFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsControlProfileAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsControlProfileAssetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsControlProfileAssetFactory_Statics::ClassParams = {
		&UPhysicsControlProfileAssetFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsControlProfileAssetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPhysicsControlProfileAssetFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPhysicsControlProfileAssetFactory()
	{
		if (!Z_Registration_Info_UClass_UPhysicsControlProfileAssetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsControlProfileAssetFactory.OuterSingleton, Z_Construct_UClass_UPhysicsControlProfileAssetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhysicsControlProfileAssetFactory.OuterSingleton;
	}
	template<> PHYSICSCONTROLEDITOR_API UClass* StaticClass<UPhysicsControlProfileAssetFactory>()
	{
		return UPhysicsControlProfileAssetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsControlProfileAssetFactory);
	UPhysicsControlProfileAssetFactory::~UPhysicsControlProfileAssetFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControlEditor_Private_PhysicsControlProfileAssetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControlEditor_Private_PhysicsControlProfileAssetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsControlProfileAssetFactory, UPhysicsControlProfileAssetFactory::StaticClass, TEXT("UPhysicsControlProfileAssetFactory"), &Z_Registration_Info_UClass_UPhysicsControlProfileAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsControlProfileAssetFactory), 683863017U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControlEditor_Private_PhysicsControlProfileAssetFactory_h_2971954531(TEXT("/Script/PhysicsControlEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControlEditor_Private_PhysicsControlProfileAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControlEditor_Private_PhysicsControlProfileAssetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
