// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetDefinition_DataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_DataAsset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_DataAsset();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_DataAsset_NoRegister();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UUndoableResolveHandler();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UUndoableResolveHandler_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_DataAsset::StaticRegisterNativesUAssetDefinition_DataAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_DataAsset);
	UClass* Z_Construct_UClass_UAssetDefinition_DataAsset_NoRegister()
	{
		return UAssetDefinition_DataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_DataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_DataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_DataAsset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_DataAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_DataAsset.h" },
		{ "ModuleRelativePath", "Public/AssetDefinition_DataAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_DataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_DataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_DataAsset_Statics::ClassParams = {
		&UAssetDefinition_DataAsset::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_DataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetDefinition_DataAsset_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAssetDefinition_DataAsset()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_DataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_DataAsset.OuterSingleton, Z_Construct_UClass_UAssetDefinition_DataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_DataAsset.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_DataAsset>()
	{
		return UAssetDefinition_DataAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_DataAsset);
	UAssetDefinition_DataAsset::~UAssetDefinition_DataAsset() {}
	void UUndoableResolveHandler::StaticRegisterNativesUUndoableResolveHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUndoableResolveHandler);
	UClass* Z_Construct_UClass_UUndoableResolveHandler_NoRegister()
	{
		return UUndoableResolveHandler::StaticClass();
	}
	struct Z_Construct_UClass_UUndoableResolveHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldBeResolved_MetaData[];
#endif
		static void NewProp_bShouldBeResolved_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBeResolved;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUndoableResolveHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUndoableResolveHandler_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUndoableResolveHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_DataAsset.h" },
		{ "ModuleRelativePath", "Public/AssetDefinition_DataAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUndoableResolveHandler_Statics::NewProp_bShouldBeResolved_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssetDefinition_DataAsset.h" },
	};
#endif
	void Z_Construct_UClass_UUndoableResolveHandler_Statics::NewProp_bShouldBeResolved_SetBit(void* Obj)
	{
		((UUndoableResolveHandler*)Obj)->bShouldBeResolved = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUndoableResolveHandler_Statics::NewProp_bShouldBeResolved = { "bShouldBeResolved", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUndoableResolveHandler), &Z_Construct_UClass_UUndoableResolveHandler_Statics::NewProp_bShouldBeResolved_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUndoableResolveHandler_Statics::NewProp_bShouldBeResolved_MetaData), Z_Construct_UClass_UUndoableResolveHandler_Statics::NewProp_bShouldBeResolved_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUndoableResolveHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUndoableResolveHandler_Statics::NewProp_bShouldBeResolved,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUndoableResolveHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUndoableResolveHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUndoableResolveHandler_Statics::ClassParams = {
		&UUndoableResolveHandler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUndoableResolveHandler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUndoableResolveHandler_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUndoableResolveHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_UUndoableResolveHandler_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUndoableResolveHandler_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UUndoableResolveHandler()
	{
		if (!Z_Registration_Info_UClass_UUndoableResolveHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUndoableResolveHandler.OuterSingleton, Z_Construct_UClass_UUndoableResolveHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUndoableResolveHandler.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UUndoableResolveHandler>()
	{
		return UUndoableResolveHandler::StaticClass();
	}
	UUndoableResolveHandler::UUndoableResolveHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUndoableResolveHandler);
	UUndoableResolveHandler::~UUndoableResolveHandler() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_AssetDefinition_DataAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_AssetDefinition_DataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_DataAsset, UAssetDefinition_DataAsset::StaticClass, TEXT("UAssetDefinition_DataAsset"), &Z_Registration_Info_UClass_UAssetDefinition_DataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_DataAsset), 4131102801U) },
		{ Z_Construct_UClass_UUndoableResolveHandler, UUndoableResolveHandler::StaticClass, TEXT("UUndoableResolveHandler"), &Z_Registration_Info_UClass_UUndoableResolveHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUndoableResolveHandler), 4096045712U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_AssetDefinition_DataAsset_h_773405816(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_AssetDefinition_DataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_AssetDefinition_DataAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
