// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MLDeformerAssetDefinitions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLDeformerAssetDefinitions() {}
// Cross Module References
	MLDEFORMERFRAMEWORKEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_MLDeformer();
	MLDEFORMERFRAMEWORKEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_MLDeformer_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_MLDeformerFrameworkEditor();
// End Cross Module References
	void UAssetDefinition_MLDeformer::StaticRegisterNativesUAssetDefinition_MLDeformer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_MLDeformer);
	UClass* Z_Construct_UClass_UAssetDefinition_MLDeformer_NoRegister()
	{
		return UAssetDefinition_MLDeformer::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_MLDeformer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_MLDeformer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_MLDeformerFrameworkEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_MLDeformer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_MLDeformer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MLDeformerAssetDefinitions.h" },
		{ "ModuleRelativePath", "Private/MLDeformerAssetDefinitions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_MLDeformer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_MLDeformer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_MLDeformer_Statics::ClassParams = {
		&UAssetDefinition_MLDeformer::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_MLDeformer_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetDefinition_MLDeformer_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAssetDefinition_MLDeformer()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_MLDeformer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_MLDeformer.OuterSingleton, Z_Construct_UClass_UAssetDefinition_MLDeformer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_MLDeformer.OuterSingleton;
	}
	template<> MLDEFORMERFRAMEWORKEDITOR_API UClass* StaticClass<UAssetDefinition_MLDeformer>()
	{
		return UAssetDefinition_MLDeformer::StaticClass();
	}
	UAssetDefinition_MLDeformer::UAssetDefinition_MLDeformer() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_MLDeformer);
	UAssetDefinition_MLDeformer::~UAssetDefinition_MLDeformer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Private_MLDeformerAssetDefinitions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Private_MLDeformerAssetDefinitions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_MLDeformer, UAssetDefinition_MLDeformer::StaticClass, TEXT("UAssetDefinition_MLDeformer"), &Z_Registration_Info_UClass_UAssetDefinition_MLDeformer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_MLDeformer), 459877008U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Private_MLDeformerAssetDefinitions_h_3369846094(TEXT("/Script/MLDeformerFrameworkEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Private_MLDeformerAssetDefinitions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Private_MLDeformerAssetDefinitions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
