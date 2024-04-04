// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothGeneratorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothGeneratorComponent() {}
// Cross Module References
	CHAOSCLOTHASSETENGINE_API UClass* Z_Construct_UClass_UChaosClothComponent();
	CHAOSCLOTHGENERATOR_API UClass* Z_Construct_UClass_UClothGeneratorComponent();
	CHAOSCLOTHGENERATOR_API UClass* Z_Construct_UClass_UClothGeneratorComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ChaosClothGenerator();
// End Cross Module References
	void UClothGeneratorComponent::StaticRegisterNativesUClothGeneratorComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothGeneratorComponent);
	UClass* Z_Construct_UClass_UClothGeneratorComponent_NoRegister()
	{
		return UClothGeneratorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UClothGeneratorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothGeneratorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChaosClothComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothGenerator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClothGeneratorComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothGeneratorComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Cloth data generation component.\n */" },
		{ "HideCategories", "Object Mesh|SkeletalAsset Constraints Advanced Cooking Collision Navigation Object Mobility Trigger" },
		{ "IncludePath", "ClothGeneratorComponent.h" },
		{ "ModuleRelativePath", "Private/ClothGeneratorComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Cloth data generation component." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothGeneratorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothGeneratorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothGeneratorComponent_Statics::ClassParams = {
		&UClothGeneratorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothGeneratorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UClothGeneratorComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UClothGeneratorComponent()
	{
		if (!Z_Registration_Info_UClass_UClothGeneratorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothGeneratorComponent.OuterSingleton, Z_Construct_UClass_UClothGeneratorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothGeneratorComponent.OuterSingleton;
	}
	template<> CHAOSCLOTHGENERATOR_API UClass* StaticClass<UClothGeneratorComponent>()
	{
		return UClothGeneratorComponent::StaticClass();
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_ChaosClothGenerator_Source_ChaosClothGenerator_Private_ClothGeneratorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_ChaosClothGenerator_Source_ChaosClothGenerator_Private_ClothGeneratorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UClothGeneratorComponent, UClothGeneratorComponent::StaticClass, TEXT("UClothGeneratorComponent"), &Z_Registration_Info_UClass_UClothGeneratorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothGeneratorComponent), 3937889608U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_ChaosClothGenerator_Source_ChaosClothGenerator_Private_ClothGeneratorComponent_h_3945478333(TEXT("/Script/ChaosClothGenerator"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_ChaosClothGenerator_Source_ChaosClothGenerator_Private_ClothGeneratorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_ChaosClothGenerator_Source_ChaosClothGenerator_Private_ClothGeneratorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
