// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationCompressionLibraryDatabaseFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationCompressionLibraryDatabaseFactory() {}
// Cross Module References
	ACLPLUGINEDITOR_API UClass* Z_Construct_UClass_UAnimationCompressionLibraryDatabaseFactory();
	ACLPLUGINEDITOR_API UClass* Z_Construct_UClass_UAnimationCompressionLibraryDatabaseFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_ACLPluginEditor();
// End Cross Module References
	void UAnimationCompressionLibraryDatabaseFactory::StaticRegisterNativesUAnimationCompressionLibraryDatabaseFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationCompressionLibraryDatabaseFactory);
	UClass* Z_Construct_UClass_UAnimationCompressionLibraryDatabaseFactory_NoRegister()
	{
		return UAnimationCompressionLibraryDatabaseFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationCompressionLibraryDatabaseFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationCompressionLibraryDatabaseFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_ACLPluginEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationCompressionLibraryDatabaseFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationCompressionLibraryDatabaseFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimationCompressionLibraryDatabaseFactory.h" },
		{ "ModuleRelativePath", "Classes/AnimationCompressionLibraryDatabaseFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationCompressionLibraryDatabaseFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationCompressionLibraryDatabaseFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationCompressionLibraryDatabaseFactory_Statics::ClassParams = {
		&UAnimationCompressionLibraryDatabaseFactory::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationCompressionLibraryDatabaseFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimationCompressionLibraryDatabaseFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAnimationCompressionLibraryDatabaseFactory()
	{
		if (!Z_Registration_Info_UClass_UAnimationCompressionLibraryDatabaseFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationCompressionLibraryDatabaseFactory.OuterSingleton, Z_Construct_UClass_UAnimationCompressionLibraryDatabaseFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimationCompressionLibraryDatabaseFactory.OuterSingleton;
	}
	template<> ACLPLUGINEDITOR_API UClass* StaticClass<UAnimationCompressionLibraryDatabaseFactory>()
	{
		return UAnimationCompressionLibraryDatabaseFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationCompressionLibraryDatabaseFactory);
	UAnimationCompressionLibraryDatabaseFactory::~UAnimationCompressionLibraryDatabaseFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPluginEditor_Classes_AnimationCompressionLibraryDatabaseFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPluginEditor_Classes_AnimationCompressionLibraryDatabaseFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationCompressionLibraryDatabaseFactory, UAnimationCompressionLibraryDatabaseFactory::StaticClass, TEXT("UAnimationCompressionLibraryDatabaseFactory"), &Z_Registration_Info_UClass_UAnimationCompressionLibraryDatabaseFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationCompressionLibraryDatabaseFactory), 1266595004U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPluginEditor_Classes_AnimationCompressionLibraryDatabaseFactory_h_603328724(TEXT("/Script/ACLPluginEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPluginEditor_Classes_AnimationCompressionLibraryDatabaseFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPluginEditor_Classes_AnimationCompressionLibraryDatabaseFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
