// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition/RenderGridBlueprintAssetDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRenderGridBlueprintAssetDefinition() {}
// Cross Module References
	RENDERGRIDEDITOR_API UClass* Z_Construct_UClass_URenderGridBlueprintAssetDefinition();
	RENDERGRIDEDITOR_API UClass* Z_Construct_UClass_URenderGridBlueprintAssetDefinition_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_RenderGridEditor();
// End Cross Module References
	void URenderGridBlueprintAssetDefinition::StaticRegisterNativesURenderGridBlueprintAssetDefinition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URenderGridBlueprintAssetDefinition);
	UClass* Z_Construct_UClass_URenderGridBlueprintAssetDefinition_NoRegister()
	{
		return URenderGridBlueprintAssetDefinition::StaticClass();
	}
	struct Z_Construct_UClass_URenderGridBlueprintAssetDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URenderGridBlueprintAssetDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_RenderGridEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridBlueprintAssetDefinition_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridBlueprintAssetDefinition_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This class adds support for the RenderGrid (RenderGridBlueprint) class to the AssetDefinition module.\n */" },
		{ "IncludePath", "AssetDefinition/RenderGridBlueprintAssetDefinition.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition/RenderGridBlueprintAssetDefinition.h" },
		{ "ToolTip", "This class adds support for the RenderGrid (RenderGridBlueprint) class to the AssetDefinition module." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URenderGridBlueprintAssetDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenderGridBlueprintAssetDefinition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URenderGridBlueprintAssetDefinition_Statics::ClassParams = {
		&URenderGridBlueprintAssetDefinition::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridBlueprintAssetDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_URenderGridBlueprintAssetDefinition_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_URenderGridBlueprintAssetDefinition()
	{
		if (!Z_Registration_Info_UClass_URenderGridBlueprintAssetDefinition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenderGridBlueprintAssetDefinition.OuterSingleton, Z_Construct_UClass_URenderGridBlueprintAssetDefinition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URenderGridBlueprintAssetDefinition.OuterSingleton;
	}
	template<> RENDERGRIDEDITOR_API UClass* StaticClass<URenderGridBlueprintAssetDefinition>()
	{
		return URenderGridBlueprintAssetDefinition::StaticClass();
	}
	URenderGridBlueprintAssetDefinition::URenderGridBlueprintAssetDefinition() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URenderGridBlueprintAssetDefinition);
	URenderGridBlueprintAssetDefinition::~URenderGridBlueprintAssetDefinition() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridEditor_Private_AssetDefinition_RenderGridBlueprintAssetDefinition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridEditor_Private_AssetDefinition_RenderGridBlueprintAssetDefinition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URenderGridBlueprintAssetDefinition, URenderGridBlueprintAssetDefinition::StaticClass, TEXT("URenderGridBlueprintAssetDefinition"), &Z_Registration_Info_UClass_URenderGridBlueprintAssetDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenderGridBlueprintAssetDefinition), 113211917U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridEditor_Private_AssetDefinition_RenderGridBlueprintAssetDefinition_h_66621936(TEXT("/Script/RenderGridEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridEditor_Private_AssetDefinition_RenderGridBlueprintAssetDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridEditor_Private_AssetDefinition_RenderGridBlueprintAssetDefinition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
