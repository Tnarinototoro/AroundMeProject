// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition_StateTree.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_StateTree() {}
// Cross Module References
	STATETREEEDITORMODULE_API UClass* Z_Construct_UClass_UAssetDefinition_StateTree();
	STATETREEEDITORMODULE_API UClass* Z_Construct_UClass_UAssetDefinition_StateTree_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_StateTreeEditorModule();
// End Cross Module References
	void UAssetDefinition_StateTree::StaticRegisterNativesUAssetDefinition_StateTree()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_StateTree);
	UClass* Z_Construct_UClass_UAssetDefinition_StateTree_NoRegister()
	{
		return UAssetDefinition_StateTree::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_StateTree_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_StateTree_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeEditorModule,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_StateTree_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_StateTree_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_StateTree.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_StateTree.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_StateTree_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_StateTree>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_StateTree_Statics::ClassParams = {
		&UAssetDefinition_StateTree::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_StateTree_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetDefinition_StateTree_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAssetDefinition_StateTree()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_StateTree.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_StateTree.OuterSingleton, Z_Construct_UClass_UAssetDefinition_StateTree_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_StateTree.OuterSingleton;
	}
	template<> STATETREEEDITORMODULE_API UClass* StaticClass<UAssetDefinition_StateTree>()
	{
		return UAssetDefinition_StateTree::StaticClass();
	}
	UAssetDefinition_StateTree::UAssetDefinition_StateTree() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_StateTree);
	UAssetDefinition_StateTree::~UAssetDefinition_StateTree() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Private_AssetDefinition_StateTree_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Private_AssetDefinition_StateTree_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_StateTree, UAssetDefinition_StateTree::StaticClass, TEXT("UAssetDefinition_StateTree"), &Z_Registration_Info_UClass_UAssetDefinition_StateTree, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_StateTree), 3618199462U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Private_AssetDefinition_StateTree_h_4214790035(TEXT("/Script/StateTreeEditorModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Private_AssetDefinition_StateTree_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Private_AssetDefinition_StateTree_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
