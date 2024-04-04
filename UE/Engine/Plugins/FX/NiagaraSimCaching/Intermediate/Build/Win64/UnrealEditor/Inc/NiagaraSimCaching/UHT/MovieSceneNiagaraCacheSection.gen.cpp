// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Sequencer/MovieSceneNiagaraCacheSection.h"
#include "NiagaraSimCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneNiagaraCacheSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneBaseCacheSection();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimCache_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters();
	NIAGARASIMCACHING_API UClass* Z_Construct_UClass_UMovieSceneNiagaraCacheSection();
	NIAGARASIMCACHING_API UClass* Z_Construct_UClass_UMovieSceneNiagaraCacheSection_NoRegister();
	NIAGARASIMCACHING_API UEnum* Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionPlayMode();
	NIAGARASIMCACHING_API UEnum* Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionStretchMode();
	NIAGARASIMCACHING_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams();
	UPackage* Z_Construct_UPackage__Script_NiagaraSimCaching();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraSimCacheSectionPlayMode;
	static UEnum* ENiagaraSimCacheSectionPlayMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraSimCacheSectionPlayMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraSimCacheSectionPlayMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionPlayMode, (UObject*)Z_Construct_UPackage__Script_NiagaraSimCaching(), TEXT("ENiagaraSimCacheSectionPlayMode"));
		}
		return Z_Registration_Info_UEnum_ENiagaraSimCacheSectionPlayMode.OuterSingleton;
	}
	template<> NIAGARASIMCACHING_API UEnum* StaticEnum<ENiagaraSimCacheSectionPlayMode>()
	{
		return ENiagaraSimCacheSectionPlayMode_StaticEnum();
	}
	struct Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionPlayMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionPlayMode_Statics::Enumerators[] = {
		{ "ENiagaraSimCacheSectionPlayMode::SimWithoutCache", (int64)ENiagaraSimCacheSectionPlayMode::SimWithoutCache },
		{ "ENiagaraSimCacheSectionPlayMode::DisplayCacheOnly", (int64)ENiagaraSimCacheSectionPlayMode::DisplayCacheOnly },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionPlayMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayCacheOnly.Comment", "/**\n\x09When the sequence has no cached data to display, the Niagara component is disabled\n\x09*/" },
		{ "DisplayCacheOnly.Name", "ENiagaraSimCacheSectionPlayMode::DisplayCacheOnly" },
		{ "DisplayCacheOnly.ToolTip", "When the sequence has no cached data to display, the Niagara component is disabled" },
		{ "ModuleRelativePath", "Public/Niagara/Sequencer/MovieSceneNiagaraCacheSection.h" },
		{ "SimWithoutCache.Comment", "/**\n\x09When the sequence has no cached data to display, the Niagara component runs the simulation normally\n\x09*/" },
		{ "SimWithoutCache.Name", "ENiagaraSimCacheSectionPlayMode::SimWithoutCache" },
		{ "SimWithoutCache.ToolTip", "When the sequence has no cached data to display, the Niagara component runs the simulation normally" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionPlayMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NiagaraSimCaching,
		nullptr,
		"ENiagaraSimCacheSectionPlayMode",
		"ENiagaraSimCacheSectionPlayMode",
		Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionPlayMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionPlayMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionPlayMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionPlayMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionPlayMode()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraSimCacheSectionPlayMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraSimCacheSectionPlayMode.InnerSingleton, Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionPlayMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraSimCacheSectionPlayMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraSimCacheSectionStretchMode;
	static UEnum* ENiagaraSimCacheSectionStretchMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraSimCacheSectionStretchMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraSimCacheSectionStretchMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionStretchMode, (UObject*)Z_Construct_UPackage__Script_NiagaraSimCaching(), TEXT("ENiagaraSimCacheSectionStretchMode"));
		}
		return Z_Registration_Info_UEnum_ENiagaraSimCacheSectionStretchMode.OuterSingleton;
	}
	template<> NIAGARASIMCACHING_API UEnum* StaticEnum<ENiagaraSimCacheSectionStretchMode>()
	{
		return ENiagaraSimCacheSectionStretchMode_StaticEnum();
	}
	struct Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionStretchMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionStretchMode_Statics::Enumerators[] = {
		{ "ENiagaraSimCacheSectionStretchMode::Repeat", (int64)ENiagaraSimCacheSectionStretchMode::Repeat },
		{ "ENiagaraSimCacheSectionStretchMode::TimeDilate", (int64)ENiagaraSimCacheSectionStretchMode::TimeDilate },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionStretchMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Niagara/Sequencer/MovieSceneNiagaraCacheSection.h" },
		{ "Repeat.Comment", "/**\n\x09When the cache section is stretched in the track it will repeat the cached data \n\x09*/" },
		{ "Repeat.Name", "ENiagaraSimCacheSectionStretchMode::Repeat" },
		{ "Repeat.ToolTip", "When the cache section is stretched in the track it will repeat the cached data" },
		{ "TimeDilate.Comment", "/**\n\x09When the cache section is stretched in the track it will dilate the input time so the cached data is stretched once over the full section\n\x09*/" },
		{ "TimeDilate.Name", "ENiagaraSimCacheSectionStretchMode::TimeDilate" },
		{ "TimeDilate.ToolTip", "When the cache section is stretched in the track it will dilate the input time so the cached data is stretched once over the full section" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionStretchMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NiagaraSimCaching,
		nullptr,
		"ENiagaraSimCacheSectionStretchMode",
		"ENiagaraSimCacheSectionStretchMode",
		Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionStretchMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionStretchMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionStretchMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionStretchMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionStretchMode()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraSimCacheSectionStretchMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraSimCacheSectionStretchMode.InnerSingleton, Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionStretchMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraSimCacheSectionStretchMode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMovieSceneNiagaraCacheParams>() == std::is_polymorphic<FMovieSceneBaseCacheParams>(), "USTRUCT FMovieSceneNiagaraCacheParams cannot be polymorphic unless super FMovieSceneBaseCacheParams is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneNiagaraCacheParams;
class UScriptStruct* FMovieSceneNiagaraCacheParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneNiagaraCacheParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneNiagaraCacheParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams, (UObject*)Z_Construct_UPackage__Script_NiagaraSimCaching(), TEXT("MovieSceneNiagaraCacheParams"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneNiagaraCacheParams.OuterSingleton;
}
template<> NIAGARASIMCACHING_API UScriptStruct* StaticStruct<FMovieSceneNiagaraCacheParams>()
{
	return FMovieSceneNiagaraCacheParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CacheParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CacheParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimCache_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SimCache;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CacheReplayPlayMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CacheReplayPlayMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CacheReplayPlayMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SectionStretchMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionStretchMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SectionStretchMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Niagara/Sequencer/MovieSceneNiagaraCacheSection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneNiagaraCacheParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_CacheParameters_MetaData[] = {
		{ "Category", "NiagaraCache" },
		{ "ModuleRelativePath", "Public/Niagara/Sequencer/MovieSceneNiagaraCacheSection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_CacheParameters = { "CacheParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneNiagaraCacheParams, CacheParameters), Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_CacheParameters_MetaData), Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_CacheParameters_MetaData) }; // 2326604867
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_SimCache_MetaData[] = {
		{ "Category", "NiagaraCache" },
		{ "Comment", "/** The sim cache this section plays and records into */" },
		{ "ModuleRelativePath", "Public/Niagara/Sequencer/MovieSceneNiagaraCacheSection.h" },
		{ "ToolTip", "The sim cache this section plays and records into" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_SimCache = { "SimCache", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneNiagaraCacheParams, SimCache), Z_Construct_UClass_UNiagaraSimCache_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_SimCache_MetaData), Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_SimCache_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_CacheReplayPlayMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_CacheReplayPlayMode_MetaData[] = {
		{ "Category", "SimCache" },
		{ "Comment", "/** What should the effect do when the track has no cache data to display */" },
		{ "ModuleRelativePath", "Public/Niagara/Sequencer/MovieSceneNiagaraCacheSection.h" },
		{ "ToolTip", "What should the effect do when the track has no cache data to display" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_CacheReplayPlayMode = { "CacheReplayPlayMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneNiagaraCacheParams, CacheReplayPlayMode), Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionPlayMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_CacheReplayPlayMode_MetaData), Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_CacheReplayPlayMode_MetaData) }; // 4114709094
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_SectionStretchMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_SectionStretchMode_MetaData[] = {
		{ "Category", "SimCache" },
		{ "Comment", "/** What should the effect do when the cache section is stretched? */" },
		{ "ModuleRelativePath", "Public/Niagara/Sequencer/MovieSceneNiagaraCacheSection.h" },
		{ "ToolTip", "What should the effect do when the cache section is stretched?" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_SectionStretchMode = { "SectionStretchMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneNiagaraCacheParams, SectionStretchMode), Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionStretchMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_SectionStretchMode_MetaData), Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_SectionStretchMode_MetaData) }; // 394009330
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_CacheParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_SimCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_CacheReplayPlayMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_CacheReplayPlayMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_SectionStretchMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_SectionStretchMode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraSimCaching,
		Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams,
		&NewStructOps,
		"MovieSceneNiagaraCacheParams",
		Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::PropPointers),
		sizeof(FMovieSceneNiagaraCacheParams),
		alignof(FMovieSceneNiagaraCacheParams),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneNiagaraCacheParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneNiagaraCacheParams.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneNiagaraCacheParams.InnerSingleton;
	}
	void UMovieSceneNiagaraCacheSection::StaticRegisterNativesUMovieSceneNiagaraCacheSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneNiagaraCacheSection);
	UClass* Z_Construct_UClass_UMovieSceneNiagaraCacheSection_NoRegister()
	{
		return UMovieSceneNiagaraCacheSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCacheOutOfDate_MetaData[];
#endif
		static void NewProp_bCacheOutOfDate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCacheOutOfDate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneBaseCacheSection,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraSimCaching,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Movie scene section that control NiagaraCache playback\n */" },
		{ "IncludePath", "Niagara/Sequencer/MovieSceneNiagaraCacheSection.h" },
		{ "ModuleRelativePath", "Public/Niagara/Sequencer/MovieSceneNiagaraCacheSection.h" },
		{ "ToolTip", "Movie scene section that control NiagaraCache playback" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics::NewProp_Params_MetaData[] = {
		{ "Category", "NiagaraCache" },
		{ "ModuleRelativePath", "Public/Niagara/Sequencer/MovieSceneNiagaraCacheSection.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneNiagaraCacheSection, Params), Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics::NewProp_Params_MetaData), Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics::NewProp_Params_MetaData) }; // 3633687697
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics::NewProp_bCacheOutOfDate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Niagara/Sequencer/MovieSceneNiagaraCacheSection.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics::NewProp_bCacheOutOfDate_SetBit(void* Obj)
	{
		((UMovieSceneNiagaraCacheSection*)Obj)->bCacheOutOfDate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics::NewProp_bCacheOutOfDate = { "bCacheOutOfDate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneNiagaraCacheSection), &Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics::NewProp_bCacheOutOfDate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics::NewProp_bCacheOutOfDate_MetaData), Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics::NewProp_bCacheOutOfDate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics::NewProp_bCacheOutOfDate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneNiagaraCacheSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics::ClassParams = {
		&UMovieSceneNiagaraCacheSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMovieSceneNiagaraCacheSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneNiagaraCacheSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneNiagaraCacheSection.OuterSingleton, Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneNiagaraCacheSection.OuterSingleton;
	}
	template<> NIAGARASIMCACHING_API UClass* StaticClass<UMovieSceneNiagaraCacheSection>()
	{
		return UMovieSceneNiagaraCacheSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneNiagaraCacheSection);
	UMovieSceneNiagaraCacheSection::~UMovieSceneNiagaraCacheSection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheSection_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheSection_h_Statics::EnumInfo[] = {
		{ ENiagaraSimCacheSectionPlayMode_StaticEnum, TEXT("ENiagaraSimCacheSectionPlayMode"), &Z_Registration_Info_UEnum_ENiagaraSimCacheSectionPlayMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4114709094U) },
		{ ENiagaraSimCacheSectionStretchMode_StaticEnum, TEXT("ENiagaraSimCacheSectionStretchMode"), &Z_Registration_Info_UEnum_ENiagaraSimCacheSectionStretchMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 394009330U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheSection_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneNiagaraCacheParams::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewStructOps, TEXT("MovieSceneNiagaraCacheParams"), &Z_Registration_Info_UScriptStruct_MovieSceneNiagaraCacheParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneNiagaraCacheParams), 3633687697U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneNiagaraCacheSection, UMovieSceneNiagaraCacheSection::StaticClass, TEXT("UMovieSceneNiagaraCacheSection"), &Z_Registration_Info_UClass_UMovieSceneNiagaraCacheSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneNiagaraCacheSection), 3305846232U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheSection_h_3056318226(TEXT("/Script/NiagaraSimCaching"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheSection_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheSection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheSection_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheSection_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheSection_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
