// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFeatureAction_AddChunkOverride.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFeatureAction_AddChunkOverride() {}
// Cross Module References
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction_AddChunkOverride();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction_AddChunkOverride_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameFeatures();
// End Cross Module References
	void UGameFeatureAction_AddChunkOverride::StaticRegisterNativesUGameFeatureAction_AddChunkOverride()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameFeatureAction_AddChunkOverride);
	UClass* Z_Construct_UClass_UGameFeatureAction_AddChunkOverride_NoRegister()
	{
		return UGameFeatureAction_AddChunkOverride::StaticClass();
	}
	struct Z_Construct_UClass_UGameFeatureAction_AddChunkOverride_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldOverrideChunk_MetaData[];
#endif
		static void NewProp_bShouldOverrideChunk_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldOverrideChunk;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChunkId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChunkId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowestAllowedChunkIndexForAutoGeneration_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LowestAllowedChunkIndexForAutoGeneration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameFeatureAction_AddChunkOverride_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameFeatureAction,
		(UObject* (*)())Z_Construct_UPackage__Script_GameFeatures,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddChunkOverride_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureAction_AddChunkOverride_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Used to cook assets from a GFP into a specified chunkId.\n * This can be useful when individually cooking GFPs for iteration or splitting up a packaged\n * game into smaller downloadable chunks.\n */" },
		{ "DisplayName", "Add Chunk Override" },
		{ "IncludePath", "GameFeatureAction_AddChunkOverride.h" },
		{ "ModuleRelativePath", "Public/GameFeatureAction_AddChunkOverride.h" },
		{ "ToolTip", "Used to cook assets from a GFP into a specified chunkId.\nThis can be useful when individually cooking GFPs for iteration or splitting up a packaged\ngame into smaller downloadable chunks." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureAction_AddChunkOverride_Statics::NewProp_bShouldOverrideChunk_MetaData[] = {
		{ "Category", "Asset Management" },
		{ "Comment", "/**\n\x09 * Should this GFP have their packages cooked into the specified ChunkId\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFeatureAction_AddChunkOverride.h" },
		{ "ToolTip", "Should this GFP have their packages cooked into the specified ChunkId" },
	};
#endif
	void Z_Construct_UClass_UGameFeatureAction_AddChunkOverride_Statics::NewProp_bShouldOverrideChunk_SetBit(void* Obj)
	{
		((UGameFeatureAction_AddChunkOverride*)Obj)->bShouldOverrideChunk = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameFeatureAction_AddChunkOverride_Statics::NewProp_bShouldOverrideChunk = { "bShouldOverrideChunk", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameFeatureAction_AddChunkOverride), &Z_Construct_UClass_UGameFeatureAction_AddChunkOverride_Statics::NewProp_bShouldOverrideChunk_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddChunkOverride_Statics::NewProp_bShouldOverrideChunk_MetaData), Z_Construct_UClass_UGameFeatureAction_AddChunkOverride_Statics::NewProp_bShouldOverrideChunk_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureAction_AddChunkOverride_Statics::NewProp_ChunkId_MetaData[] = {
		{ "Category", "Asset Management" },
		{ "Comment", "/**\n\x09 * What ChunkId to place the packages inside for this particular GFP.\n\x09 */" },
		{ "EditCondition", "bShouldOverrideChunk" },
		{ "ModuleRelativePath", "Public/GameFeatureAction_AddChunkOverride.h" },
		{ "ToolTip", "What ChunkId to place the packages inside for this particular GFP." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameFeatureAction_AddChunkOverride_Statics::NewProp_ChunkId = { "ChunkId", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameFeatureAction_AddChunkOverride, ChunkId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddChunkOverride_Statics::NewProp_ChunkId_MetaData), Z_Construct_UClass_UGameFeatureAction_AddChunkOverride_Statics::NewProp_ChunkId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureAction_AddChunkOverride_Statics::NewProp_LowestAllowedChunkIndexForAutoGeneration_MetaData[] = {
		{ "Comment", "/**\n\x09 * Config defined value for what is the smallest chunk index the autogeneration code can generate.\n\x09 * If autogeneration produces a chunk index lower than this value users will need to manually define the chunk index this GFP will cook into.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFeatureAction_AddChunkOverride.h" },
		{ "ToolTip", "Config defined value for what is the smallest chunk index the autogeneration code can generate.\nIf autogeneration produces a chunk index lower than this value users will need to manually define the chunk index this GFP will cook into." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameFeatureAction_AddChunkOverride_Statics::NewProp_LowestAllowedChunkIndexForAutoGeneration = { "LowestAllowedChunkIndexForAutoGeneration", nullptr, (EPropertyFlags)0x0040000800004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameFeatureAction_AddChunkOverride, LowestAllowedChunkIndexForAutoGeneration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddChunkOverride_Statics::NewProp_LowestAllowedChunkIndexForAutoGeneration_MetaData), Z_Construct_UClass_UGameFeatureAction_AddChunkOverride_Statics::NewProp_LowestAllowedChunkIndexForAutoGeneration_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameFeatureAction_AddChunkOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddChunkOverride_Statics::NewProp_bShouldOverrideChunk,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddChunkOverride_Statics::NewProp_ChunkId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddChunkOverride_Statics::NewProp_LowestAllowedChunkIndexForAutoGeneration,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameFeatureAction_AddChunkOverride_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFeatureAction_AddChunkOverride>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFeatureAction_AddChunkOverride_Statics::ClassParams = {
		&UGameFeatureAction_AddChunkOverride::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UGameFeatureAction_AddChunkOverride_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddChunkOverride_Statics::PropPointers), 0),
		0,
		0x002810A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddChunkOverride_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameFeatureAction_AddChunkOverride_Statics::Class_MetaDataParams)
	};
#if WITH_EDITORONLY_DATA
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddChunkOverride_Statics::PropPointers) < 2048);
#endif
	UClass* Z_Construct_UClass_UGameFeatureAction_AddChunkOverride()
	{
		if (!Z_Registration_Info_UClass_UGameFeatureAction_AddChunkOverride.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFeatureAction_AddChunkOverride.OuterSingleton, Z_Construct_UClass_UGameFeatureAction_AddChunkOverride_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameFeatureAction_AddChunkOverride.OuterSingleton;
	}
	template<> GAMEFEATURES_API UClass* StaticClass<UGameFeatureAction_AddChunkOverride>()
	{
		return UGameFeatureAction_AddChunkOverride::StaticClass();
	}
	UGameFeatureAction_AddChunkOverride::UGameFeatureAction_AddChunkOverride(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFeatureAction_AddChunkOverride);
	UGameFeatureAction_AddChunkOverride::~UGameFeatureAction_AddChunkOverride() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_AddChunkOverride_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_AddChunkOverride_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameFeatureAction_AddChunkOverride, UGameFeatureAction_AddChunkOverride::StaticClass, TEXT("UGameFeatureAction_AddChunkOverride"), &Z_Registration_Info_UClass_UGameFeatureAction_AddChunkOverride, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFeatureAction_AddChunkOverride), 1098548430U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_AddChunkOverride_h_4050417891(TEXT("/Script/GameFeatures"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_AddChunkOverride_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_AddChunkOverride_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
