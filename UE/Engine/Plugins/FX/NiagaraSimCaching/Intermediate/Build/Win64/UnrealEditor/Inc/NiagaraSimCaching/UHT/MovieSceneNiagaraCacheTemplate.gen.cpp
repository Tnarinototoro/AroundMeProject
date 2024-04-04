// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Niagara/Sequencer/MovieSceneNiagaraCacheTemplate.h"
#include "MovieSceneFrameMigration.h"
#include "Niagara/Sequencer/MovieSceneNiagaraCacheSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneNiagaraCacheTemplate() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFrameRange();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackImplementation();
	NIAGARASIMCACHING_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams();
	NIAGARASIMCACHING_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheSectionTemplate();
	NIAGARASIMCACHING_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraSectionTemplateParameter();
	UPackage* Z_Construct_UPackage__Script_NiagaraSimCaching();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneNiagaraSectionTemplateParameter;
class UScriptStruct* FMovieSceneNiagaraSectionTemplateParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneNiagaraSectionTemplateParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneNiagaraSectionTemplateParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNiagaraSectionTemplateParameter, (UObject*)Z_Construct_UPackage__Script_NiagaraSimCaching(), TEXT("MovieSceneNiagaraSectionTemplateParameter"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneNiagaraSectionTemplateParameter.OuterSingleton;
}
template<> NIAGARASIMCACHING_API UScriptStruct* StaticStruct<FMovieSceneNiagaraSectionTemplateParameter>()
{
	return FMovieSceneNiagaraSectionTemplateParameter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneNiagaraSectionTemplateParameter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SectionRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraSectionTemplateParameter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Niagara/Sequencer/MovieSceneNiagaraCacheTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneNiagaraSectionTemplateParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneNiagaraSectionTemplateParameter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraSectionTemplateParameter_Statics::NewProp_SectionRange_MetaData[] = {
		{ "ModuleRelativePath", "Private/Niagara/Sequencer/MovieSceneNiagaraCacheTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraSectionTemplateParameter_Statics::NewProp_SectionRange = { "SectionRange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneNiagaraSectionTemplateParameter, SectionRange), Z_Construct_UScriptStruct_FMovieSceneFrameRange, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraSectionTemplateParameter_Statics::NewProp_SectionRange_MetaData), Z_Construct_UScriptStruct_FMovieSceneNiagaraSectionTemplateParameter_Statics::NewProp_SectionRange_MetaData) }; // 615535994
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraSectionTemplateParameter_Statics::NewProp_Params_MetaData[] = {
		{ "ModuleRelativePath", "Private/Niagara/Sequencer/MovieSceneNiagaraCacheTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraSectionTemplateParameter_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneNiagaraSectionTemplateParameter, Params), Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraSectionTemplateParameter_Statics::NewProp_Params_MetaData), Z_Construct_UScriptStruct_FMovieSceneNiagaraSectionTemplateParameter_Statics::NewProp_Params_MetaData) }; // 3633687697
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneNiagaraSectionTemplateParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraSectionTemplateParameter_Statics::NewProp_SectionRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraSectionTemplateParameter_Statics::NewProp_Params,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneNiagaraSectionTemplateParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraSimCaching,
		nullptr,
		&NewStructOps,
		"MovieSceneNiagaraSectionTemplateParameter",
		Z_Construct_UScriptStruct_FMovieSceneNiagaraSectionTemplateParameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraSectionTemplateParameter_Statics::PropPointers),
		sizeof(FMovieSceneNiagaraSectionTemplateParameter),
		alignof(FMovieSceneNiagaraSectionTemplateParameter),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraSectionTemplateParameter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneNiagaraSectionTemplateParameter_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraSectionTemplateParameter_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraSectionTemplateParameter()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneNiagaraSectionTemplateParameter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneNiagaraSectionTemplateParameter.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneNiagaraSectionTemplateParameter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneNiagaraSectionTemplateParameter.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMovieSceneNiagaraCacheSectionTemplate>() == std::is_polymorphic<FMovieSceneTrackImplementation>(), "USTRUCT FMovieSceneNiagaraCacheSectionTemplate cannot be polymorphic unless super FMovieSceneTrackImplementation is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneNiagaraCacheSectionTemplate;
class UScriptStruct* FMovieSceneNiagaraCacheSectionTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneNiagaraCacheSectionTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneNiagaraCacheSectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheSectionTemplate, (UObject*)Z_Construct_UPackage__Script_NiagaraSimCaching(), TEXT("MovieSceneNiagaraCacheSectionTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneNiagaraCacheSectionTemplate.OuterSingleton;
}
template<> NIAGARASIMCACHING_API UScriptStruct* StaticStruct<FMovieSceneNiagaraCacheSectionTemplate>()
{
	return FMovieSceneNiagaraCacheSectionTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_CacheSections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CacheSections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CacheSections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Niagara/Sequencer/MovieSceneNiagaraCacheTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneNiagaraCacheSectionTemplate>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheSectionTemplate_Statics::NewProp_CacheSections_Inner = { "CacheSections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneNiagaraSectionTemplateParameter, METADATA_PARAMS(0, nullptr) }; // 3333170094
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheSectionTemplate_Statics::NewProp_CacheSections_MetaData[] = {
		{ "ModuleRelativePath", "Private/Niagara/Sequencer/MovieSceneNiagaraCacheTemplate.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheSectionTemplate_Statics::NewProp_CacheSections = { "CacheSections", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneNiagaraCacheSectionTemplate, CacheSections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheSectionTemplate_Statics::NewProp_CacheSections_MetaData), Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheSectionTemplate_Statics::NewProp_CacheSections_MetaData) }; // 3333170094
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheSectionTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheSectionTemplate_Statics::NewProp_CacheSections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheSectionTemplate_Statics::NewProp_CacheSections,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraSimCaching,
		Z_Construct_UScriptStruct_FMovieSceneTrackImplementation,
		&NewStructOps,
		"MovieSceneNiagaraCacheSectionTemplate",
		Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheSectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheSectionTemplate_Statics::PropPointers),
		sizeof(FMovieSceneNiagaraCacheSectionTemplate),
		alignof(FMovieSceneNiagaraCacheSectionTemplate),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheSectionTemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheSectionTemplate_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheSectionTemplate_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheSectionTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneNiagaraCacheSectionTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneNiagaraCacheSectionTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheSectionTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneNiagaraCacheSectionTemplate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Private_Niagara_Sequencer_MovieSceneNiagaraCacheTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Private_Niagara_Sequencer_MovieSceneNiagaraCacheTemplate_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneNiagaraSectionTemplateParameter::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneNiagaraSectionTemplateParameter_Statics::NewStructOps, TEXT("MovieSceneNiagaraSectionTemplateParameter"), &Z_Registration_Info_UScriptStruct_MovieSceneNiagaraSectionTemplateParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneNiagaraSectionTemplateParameter), 3333170094U) },
		{ FMovieSceneNiagaraCacheSectionTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheSectionTemplate_Statics::NewStructOps, TEXT("MovieSceneNiagaraCacheSectionTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneNiagaraCacheSectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneNiagaraCacheSectionTemplate), 2563768960U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Private_Niagara_Sequencer_MovieSceneNiagaraCacheTemplate_h_833836870(TEXT("/Script/NiagaraSimCaching"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Private_Niagara_Sequencer_MovieSceneNiagaraCacheTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Private_Niagara_Sequencer_MovieSceneNiagaraCacheTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
