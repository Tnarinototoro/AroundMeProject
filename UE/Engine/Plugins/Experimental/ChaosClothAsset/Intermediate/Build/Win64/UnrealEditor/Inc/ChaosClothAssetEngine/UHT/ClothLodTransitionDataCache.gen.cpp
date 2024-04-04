// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/ClothLodTransitionDataCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothLodTransitionDataCache() {}
// Cross Module References
	CHAOSCLOTHASSETENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetLodTransitionDataCache();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetEngine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosClothAssetLodTransitionDataCache;
class UScriptStruct* FChaosClothAssetLodTransitionDataCache::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetLodTransitionDataCache.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosClothAssetLodTransitionDataCache.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosClothAssetLodTransitionDataCache, (UObject*)Z_Construct_UPackage__Script_ChaosClothAssetEngine(), TEXT("ChaosClothAssetLodTransitionDataCache"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosClothAssetLodTransitionDataCache.OuterSingleton;
}
template<> CHAOSCLOTHASSETENGINE_API UScriptStruct* StaticStruct<FChaosClothAssetLodTransitionDataCache>()
{
	return FChaosClothAssetLodTransitionDataCache::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosClothAssetLodTransitionDataCache_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetLodTransitionDataCache_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothLodTransitionDataCache.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosClothAssetLodTransitionDataCache_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosClothAssetLodTransitionDataCache>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosClothAssetLodTransitionDataCache_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetEngine,
		nullptr,
		&NewStructOps,
		"ChaosClothAssetLodTransitionDataCache",
		nullptr,
		0,
		sizeof(FChaosClothAssetLodTransitionDataCache),
		alignof(FChaosClothAssetLodTransitionDataCache),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetLodTransitionDataCache_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosClothAssetLodTransitionDataCache_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetLodTransitionDataCache()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetLodTransitionDataCache.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosClothAssetLodTransitionDataCache.InnerSingleton, Z_Construct_UScriptStruct_FChaosClothAssetLodTransitionDataCache_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosClothAssetLodTransitionDataCache.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothLodTransitionDataCache_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothLodTransitionDataCache_h_Statics::ScriptStructInfo[] = {
		{ FChaosClothAssetLodTransitionDataCache::StaticStruct, Z_Construct_UScriptStruct_FChaosClothAssetLodTransitionDataCache_Statics::NewStructOps, TEXT("ChaosClothAssetLodTransitionDataCache"), &Z_Registration_Info_UScriptStruct_ChaosClothAssetLodTransitionDataCache, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosClothAssetLodTransitionDataCache), 1913156591U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothLodTransitionDataCache_h_2841258656(TEXT("/Script/ChaosClothAssetEngine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothLodTransitionDataCache_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothLodTransitionDataCache_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
