// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraBakerOutputSimCache.h"
#include "NiagaraSimCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraBakerOutputSimCache() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBakerOutput();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBakerOutputSimCache();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBakerOutputSimCache_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraBakerOutputSimCache::StaticRegisterNativesUNiagaraBakerOutputSimCache()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraBakerOutputSimCache);
	UClass* Z_Construct_UClass_UNiagaraBakerOutputSimCache_NoRegister()
	{
		return UNiagaraBakerOutputSimCache::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraBakerOutputSimCache_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimCacheAssetPathFormat_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SimCacheAssetPathFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreateParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CreateParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraBakerOutputSimCache_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraBakerOutput,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutputSimCache_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerOutputSimCache_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Simulation Cache Output (Experimental)" },
		{ "IncludePath", "NiagaraBakerOutputSimCache.h" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputSimCache.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerOutputSimCache_Statics::NewProp_SimCacheAssetPathFormat_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputSimCache.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraBakerOutputSimCache_Statics::NewProp_SimCacheAssetPathFormat = { "SimCacheAssetPathFormat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraBakerOutputSimCache, SimCacheAssetPathFormat), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutputSimCache_Statics::NewProp_SimCacheAssetPathFormat_MetaData), Z_Construct_UClass_UNiagaraBakerOutputSimCache_Statics::NewProp_SimCacheAssetPathFormat_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerOutputSimCache_Statics::NewProp_CreateParameters_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputSimCache.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraBakerOutputSimCache_Statics::NewProp_CreateParameters = { "CreateParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraBakerOutputSimCache, CreateParameters), Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutputSimCache_Statics::NewProp_CreateParameters_MetaData), Z_Construct_UClass_UNiagaraBakerOutputSimCache_Statics::NewProp_CreateParameters_MetaData) }; // 2326604867
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraBakerOutputSimCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerOutputSimCache_Statics::NewProp_SimCacheAssetPathFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerOutputSimCache_Statics::NewProp_CreateParameters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraBakerOutputSimCache_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraBakerOutputSimCache>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraBakerOutputSimCache_Statics::ClassParams = {
		&UNiagaraBakerOutputSimCache::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraBakerOutputSimCache_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutputSimCache_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutputSimCache_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraBakerOutputSimCache_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutputSimCache_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNiagaraBakerOutputSimCache()
	{
		if (!Z_Registration_Info_UClass_UNiagaraBakerOutputSimCache.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraBakerOutputSimCache.OuterSingleton, Z_Construct_UClass_UNiagaraBakerOutputSimCache_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraBakerOutputSimCache.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraBakerOutputSimCache>()
	{
		return UNiagaraBakerOutputSimCache::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraBakerOutputSimCache);
	UNiagaraBakerOutputSimCache::~UNiagaraBakerOutputSimCache() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutputSimCache_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutputSimCache_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraBakerOutputSimCache, UNiagaraBakerOutputSimCache::StaticClass, TEXT("UNiagaraBakerOutputSimCache"), &Z_Registration_Info_UClass_UNiagaraBakerOutputSimCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraBakerOutputSimCache), 3483920812U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutputSimCache_h_3725670322(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutputSimCache_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutputSimCache_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
