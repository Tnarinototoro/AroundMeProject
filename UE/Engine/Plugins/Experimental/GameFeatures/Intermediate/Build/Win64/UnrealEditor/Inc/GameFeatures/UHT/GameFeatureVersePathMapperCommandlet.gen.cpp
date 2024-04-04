// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFeatureVersePathMapperCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFeatureVersePathMapperCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureVersePathMapperCommandlet();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureVersePathMapperCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameFeatures();
// End Cross Module References
	void UGameFeatureVersePathMapperCommandlet::StaticRegisterNativesUGameFeatureVersePathMapperCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameFeatureVersePathMapperCommandlet);
	UClass* Z_Construct_UClass_UGameFeatureVersePathMapperCommandlet_NoRegister()
	{
		return UGameFeatureVersePathMapperCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UGameFeatureVersePathMapperCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameFeatureVersePathMapperCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_GameFeatures,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureVersePathMapperCommandlet_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureVersePathMapperCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameFeatureVersePathMapperCommandlet.h" },
		{ "ModuleRelativePath", "Public/GameFeatureVersePathMapperCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameFeatureVersePathMapperCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFeatureVersePathMapperCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFeatureVersePathMapperCommandlet_Statics::ClassParams = {
		&UGameFeatureVersePathMapperCommandlet::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureVersePathMapperCommandlet_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameFeatureVersePathMapperCommandlet_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGameFeatureVersePathMapperCommandlet()
	{
		if (!Z_Registration_Info_UClass_UGameFeatureVersePathMapperCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFeatureVersePathMapperCommandlet.OuterSingleton, Z_Construct_UClass_UGameFeatureVersePathMapperCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameFeatureVersePathMapperCommandlet.OuterSingleton;
	}
	template<> GAMEFEATURES_API UClass* StaticClass<UGameFeatureVersePathMapperCommandlet>()
	{
		return UGameFeatureVersePathMapperCommandlet::StaticClass();
	}
	UGameFeatureVersePathMapperCommandlet::UGameFeatureVersePathMapperCommandlet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFeatureVersePathMapperCommandlet);
	UGameFeatureVersePathMapperCommandlet::~UGameFeatureVersePathMapperCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureVersePathMapperCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureVersePathMapperCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameFeatureVersePathMapperCommandlet, UGameFeatureVersePathMapperCommandlet::StaticClass, TEXT("UGameFeatureVersePathMapperCommandlet"), &Z_Registration_Info_UClass_UGameFeatureVersePathMapperCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFeatureVersePathMapperCommandlet), 3362254497U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureVersePathMapperCommandlet_h_1420653260(TEXT("/Script/GameFeatures"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureVersePathMapperCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureVersePathMapperCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
