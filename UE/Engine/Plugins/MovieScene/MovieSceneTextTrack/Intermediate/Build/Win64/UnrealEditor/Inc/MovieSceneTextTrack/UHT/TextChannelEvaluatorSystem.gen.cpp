// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TextChannelEvaluatorSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextChannelEvaluatorSystem() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
	MOVIESCENETEXTTRACK_API UClass* Z_Construct_UClass_UTextChannelEvaluatorSystem();
	MOVIESCENETEXTTRACK_API UClass* Z_Construct_UClass_UTextChannelEvaluatorSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTextTrack();
// End Cross Module References
	void UTextChannelEvaluatorSystem::StaticRegisterNativesUTextChannelEvaluatorSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextChannelEvaluatorSystem);
	UClass* Z_Construct_UClass_UTextChannelEvaluatorSystem_NoRegister()
	{
		return UTextChannelEvaluatorSystem::StaticClass();
	}
	struct Z_Construct_UClass_UTextChannelEvaluatorSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextChannelEvaluatorSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTextTrack,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextChannelEvaluatorSystem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextChannelEvaluatorSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** System responsible for evaluating Text channels */" },
		{ "IncludePath", "TextChannelEvaluatorSystem.h" },
		{ "ModuleRelativePath", "Public/TextChannelEvaluatorSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System responsible for evaluating Text channels" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextChannelEvaluatorSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextChannelEvaluatorSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextChannelEvaluatorSystem_Statics::ClassParams = {
		&UTextChannelEvaluatorSystem::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTextChannelEvaluatorSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UTextChannelEvaluatorSystem_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTextChannelEvaluatorSystem()
	{
		if (!Z_Registration_Info_UClass_UTextChannelEvaluatorSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextChannelEvaluatorSystem.OuterSingleton, Z_Construct_UClass_UTextChannelEvaluatorSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextChannelEvaluatorSystem.OuterSingleton;
	}
	template<> MOVIESCENETEXTTRACK_API UClass* StaticClass<UTextChannelEvaluatorSystem>()
	{
		return UTextChannelEvaluatorSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextChannelEvaluatorSystem);
	UTextChannelEvaluatorSystem::~UTextChannelEvaluatorSystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieSceneTextTrack_Source_MovieSceneTextTrack_Public_TextChannelEvaluatorSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieSceneTextTrack_Source_MovieSceneTextTrack_Public_TextChannelEvaluatorSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextChannelEvaluatorSystem, UTextChannelEvaluatorSystem::StaticClass, TEXT("UTextChannelEvaluatorSystem"), &Z_Registration_Info_UClass_UTextChannelEvaluatorSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextChannelEvaluatorSystem), 3088145776U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieSceneTextTrack_Source_MovieSceneTextTrack_Public_TextChannelEvaluatorSystem_h_1039713224(TEXT("/Script/MovieSceneTextTrack"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieSceneTextTrack_Source_MovieSceneTextTrack_Public_TextChannelEvaluatorSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieSceneTextTrack_Source_MovieSceneTextTrack_Public_TextChannelEvaluatorSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
