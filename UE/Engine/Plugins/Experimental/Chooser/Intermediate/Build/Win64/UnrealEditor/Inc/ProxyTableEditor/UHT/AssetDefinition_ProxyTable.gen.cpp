// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetDefinition_ProxyTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_ProxyTable() {}
// Cross Module References
	PROXYTABLEEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_ProxyTable();
	PROXYTABLEEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_ProxyTable_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_ProxyTableEditor();
// End Cross Module References
	void UAssetDefinition_ProxyTable::StaticRegisterNativesUAssetDefinition_ProxyTable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_ProxyTable);
	UClass* Z_Construct_UClass_UAssetDefinition_ProxyTable_NoRegister()
	{
		return UAssetDefinition_ProxyTable::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_ProxyTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_ProxyTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_ProxyTableEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_ProxyTable_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_ProxyTable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_ProxyTable.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_ProxyTable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_ProxyTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_ProxyTable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_ProxyTable_Statics::ClassParams = {
		&UAssetDefinition_ProxyTable::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_ProxyTable_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetDefinition_ProxyTable_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAssetDefinition_ProxyTable()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_ProxyTable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_ProxyTable.OuterSingleton, Z_Construct_UClass_UAssetDefinition_ProxyTable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_ProxyTable.OuterSingleton;
	}
	template<> PROXYTABLEEDITOR_API UClass* StaticClass<UAssetDefinition_ProxyTable>()
	{
		return UAssetDefinition_ProxyTable::StaticClass();
	}
	UAssetDefinition_ProxyTable::UAssetDefinition_ProxyTable() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_ProxyTable);
	UAssetDefinition_ProxyTable::~UAssetDefinition_ProxyTable() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTableEditor_Private_AssetDefinition_ProxyTable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTableEditor_Private_AssetDefinition_ProxyTable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_ProxyTable, UAssetDefinition_ProxyTable::StaticClass, TEXT("UAssetDefinition_ProxyTable"), &Z_Registration_Info_UClass_UAssetDefinition_ProxyTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_ProxyTable), 2047464904U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTableEditor_Private_AssetDefinition_ProxyTable_h_1320466263(TEXT("/Script/ProxyTableEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTableEditor_Private_AssetDefinition_ProxyTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTableEditor_Private_AssetDefinition_ProxyTable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
