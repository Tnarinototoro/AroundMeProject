// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTextKeyStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTextKeyStruct() {}
// Cross Module References
	MOVIESCENETEXTTRACKEDITOR_API UClass* Z_Construct_UClass_UMovieSceneTextKeyStruct();
	MOVIESCENETEXTTRACKEDITOR_API UClass* Z_Construct_UClass_UMovieSceneTextKeyStruct_NoRegister();
	SEQUENCER_API UClass* Z_Construct_UClass_UMovieSceneKeyStructType();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTextTrackEditor();
// End Cross Module References
	void UMovieSceneTextKeyStruct::StaticRegisterNativesUMovieSceneTextKeyStruct()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneTextKeyStruct);
	UClass* Z_Construct_UClass_UMovieSceneTextKeyStruct_NoRegister()
	{
		return UMovieSceneTextKeyStruct::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneTextKeyStruct_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneTextKeyStruct_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneKeyStructType,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTextTrackEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTextKeyStruct_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTextKeyStruct_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Derived only to explicitly specify that it's Editor Only\n * to be ignored in Cooked Builds as these KeyStructs are instanced under a non-editor package for text localization\n * @see InstanceGeneratedStruct overload for FMovieSceneTextChannel\n */" },
		{ "IncludePath", "MovieSceneTextKeyStruct.h" },
		{ "ModuleRelativePath", "Private/MovieSceneTextKeyStruct.h" },
		{ "ToolTip", "Derived only to explicitly specify that it's Editor Only\nto be ignored in Cooked Builds as these KeyStructs are instanced under a non-editor package for text localization\n@see InstanceGeneratedStruct overload for FMovieSceneTextChannel" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneTextKeyStruct_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneTextKeyStruct>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneTextKeyStruct_Statics::ClassParams = {
		&UMovieSceneTextKeyStruct::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTextKeyStruct_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneTextKeyStruct_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMovieSceneTextKeyStruct()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneTextKeyStruct.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneTextKeyStruct.OuterSingleton, Z_Construct_UClass_UMovieSceneTextKeyStruct_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneTextKeyStruct.OuterSingleton;
	}
	template<> MOVIESCENETEXTTRACKEDITOR_API UClass* StaticClass<UMovieSceneTextKeyStruct>()
	{
		return UMovieSceneTextKeyStruct::StaticClass();
	}
	UMovieSceneTextKeyStruct::UMovieSceneTextKeyStruct(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTextKeyStruct);
	UMovieSceneTextKeyStruct::~UMovieSceneTextKeyStruct() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieSceneTextTrack_Source_MovieSceneTextTrackEditor_Private_MovieSceneTextKeyStruct_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieSceneTextTrack_Source_MovieSceneTextTrackEditor_Private_MovieSceneTextKeyStruct_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneTextKeyStruct, UMovieSceneTextKeyStruct::StaticClass, TEXT("UMovieSceneTextKeyStruct"), &Z_Registration_Info_UClass_UMovieSceneTextKeyStruct, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneTextKeyStruct), 551927215U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieSceneTextTrack_Source_MovieSceneTextTrackEditor_Private_MovieSceneTextKeyStruct_h_3828635517(TEXT("/Script/MovieSceneTextTrackEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieSceneTextTrack_Source_MovieSceneTextTrackEditor_Private_MovieSceneTextKeyStruct_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieSceneTextTrack_Source_MovieSceneTextTrackEditor_Private_MovieSceneTextKeyStruct_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
