// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VCamBaseActorWithPreset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVCamBaseActorWithPreset() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VCamExtensions();
	VCAMCORE_API UClass* Z_Construct_UClass_AVCamBaseActor();
	VCAMEXTENSIONS_API UClass* Z_Construct_UClass_AVCamBaseActorWithPreset();
	VCAMEXTENSIONS_API UClass* Z_Construct_UClass_AVCamBaseActorWithPreset_NoRegister();
// End Cross Module References
	void AVCamBaseActorWithPreset::StaticRegisterNativesAVCamBaseActorWithPreset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVCamBaseActorWithPreset);
	UClass* Z_Construct_UClass_AVCamBaseActorWithPreset_NoRegister()
	{
		return AVCamBaseActorWithPreset::StaticClass();
	}
	struct Z_Construct_UClass_AVCamBaseActorWithPreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVCamBaseActorWithPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVCamBaseActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamExtensions,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVCamBaseActorWithPreset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVCamBaseActorWithPreset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for the VCamActor preset Blueprint.\n * \n * If the platform supports pixel streaming, this activates all pixel streaming and deactivates all remote session output providers.\n * The child Blueprint is expected to contain 1 pixel streaming and 1 remote session output provider.\n */" },
		{ "HideCategories", "Input VCamComponent SceneComponent Input Rendering AutoPlayerActivation Input Rendering" },
		{ "IncludePath", "VCamBaseActorWithPreset.h" },
		{ "ModuleRelativePath", "Public/VCamBaseActorWithPreset.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Base class for the VCamActor preset Blueprint.\n\nIf the platform supports pixel streaming, this activates all pixel streaming and deactivates all remote session output providers.\nThe child Blueprint is expected to contain 1 pixel streaming and 1 remote session output provider." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVCamBaseActorWithPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVCamBaseActorWithPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVCamBaseActorWithPreset_Statics::ClassParams = {
		&AVCamBaseActorWithPreset::StaticClass,
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
		0x009000A5u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVCamBaseActorWithPreset_Statics::Class_MetaDataParams), Z_Construct_UClass_AVCamBaseActorWithPreset_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AVCamBaseActorWithPreset()
	{
		if (!Z_Registration_Info_UClass_AVCamBaseActorWithPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVCamBaseActorWithPreset.OuterSingleton, Z_Construct_UClass_AVCamBaseActorWithPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVCamBaseActorWithPreset.OuterSingleton;
	}
	template<> VCAMEXTENSIONS_API UClass* StaticClass<AVCamBaseActorWithPreset>()
	{
		return AVCamBaseActorWithPreset::StaticClass();
	}
	AVCamBaseActorWithPreset::AVCamBaseActorWithPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVCamBaseActorWithPreset);
	AVCamBaseActorWithPreset::~AVCamBaseActorWithPreset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCamera_Source_VCamExtensions_Public_VCamBaseActorWithPreset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCamera_Source_VCamExtensions_Public_VCamBaseActorWithPreset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVCamBaseActorWithPreset, AVCamBaseActorWithPreset::StaticClass, TEXT("AVCamBaseActorWithPreset"), &Z_Registration_Info_UClass_AVCamBaseActorWithPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVCamBaseActorWithPreset), 3569029863U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCamera_Source_VCamExtensions_Public_VCamBaseActorWithPreset_h_1721813199(TEXT("/Script/VCamExtensions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCamera_Source_VCamExtensions_Public_VCamBaseActorWithPreset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCamera_Source_VCamExtensions_Public_VCamBaseActorWithPreset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
