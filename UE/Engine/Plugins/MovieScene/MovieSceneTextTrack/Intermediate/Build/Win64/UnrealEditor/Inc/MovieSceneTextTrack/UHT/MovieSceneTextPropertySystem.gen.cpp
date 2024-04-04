// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTextPropertySystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTextPropertySystem() {}
// Cross Module References
	MOVIESCENETEXTTRACK_API UClass* Z_Construct_UClass_UMovieSceneTextPropertySystem();
	MOVIESCENETEXTTRACK_API UClass* Z_Construct_UClass_UMovieSceneTextPropertySystem_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertySystem();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTextTrack();
// End Cross Module References
	void UMovieSceneTextPropertySystem::StaticRegisterNativesUMovieSceneTextPropertySystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneTextPropertySystem);
	UClass* Z_Construct_UClass_UMovieSceneTextPropertySystem_NoRegister()
	{
		return UMovieSceneTextPropertySystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneTextPropertySystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneTextPropertySystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieScenePropertySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTextTrack,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTextPropertySystem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTextPropertySystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovieSceneTextPropertySystem.h" },
		{ "ModuleRelativePath", "Public/MovieSceneTextPropertySystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneTextPropertySystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneTextPropertySystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneTextPropertySystem_Statics::ClassParams = {
		&UMovieSceneTextPropertySystem::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTextPropertySystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneTextPropertySystem_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMovieSceneTextPropertySystem()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneTextPropertySystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneTextPropertySystem.OuterSingleton, Z_Construct_UClass_UMovieSceneTextPropertySystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneTextPropertySystem.OuterSingleton;
	}
	template<> MOVIESCENETEXTTRACK_API UClass* StaticClass<UMovieSceneTextPropertySystem>()
	{
		return UMovieSceneTextPropertySystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTextPropertySystem);
	UMovieSceneTextPropertySystem::~UMovieSceneTextPropertySystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieSceneTextTrack_Source_MovieSceneTextTrack_Public_MovieSceneTextPropertySystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieSceneTextTrack_Source_MovieSceneTextTrack_Public_MovieSceneTextPropertySystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneTextPropertySystem, UMovieSceneTextPropertySystem::StaticClass, TEXT("UMovieSceneTextPropertySystem"), &Z_Registration_Info_UClass_UMovieSceneTextPropertySystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneTextPropertySystem), 3329044739U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieSceneTextTrack_Source_MovieSceneTextTrack_Public_MovieSceneTextPropertySystem_h_2885495978(TEXT("/Script/MovieSceneTextTrack"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieSceneTextTrack_Source_MovieSceneTextTrack_Public_MovieSceneTextPropertySystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieSceneTextTrack_Source_MovieSceneTextTrack_Public_MovieSceneTextPropertySystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
