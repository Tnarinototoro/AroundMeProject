// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningPPOTrainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLearningPPOTrainer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	LEARNINGTRAINING_API UClass* Z_Construct_UClass_ULearningSocketPPOTrainerServerCommandlet();
	LEARNINGTRAINING_API UClass* Z_Construct_UClass_ULearningSocketPPOTrainerServerCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LearningTraining();
// End Cross Module References
	void ULearningSocketPPOTrainerServerCommandlet::StaticRegisterNativesULearningSocketPPOTrainerServerCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULearningSocketPPOTrainerServerCommandlet);
	UClass* Z_Construct_UClass_ULearningSocketPPOTrainerServerCommandlet_NoRegister()
	{
		return ULearningSocketPPOTrainerServerCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_ULearningSocketPPOTrainerServerCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULearningSocketPPOTrainerServerCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningTraining,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningSocketPPOTrainerServerCommandlet_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningSocketPPOTrainerServerCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LearningPPOTrainer.h" },
		{ "ModuleRelativePath", "Public/LearningPPOTrainer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULearningSocketPPOTrainerServerCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULearningSocketPPOTrainerServerCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULearningSocketPPOTrainerServerCommandlet_Statics::ClassParams = {
		&ULearningSocketPPOTrainerServerCommandlet::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningSocketPPOTrainerServerCommandlet_Statics::Class_MetaDataParams), Z_Construct_UClass_ULearningSocketPPOTrainerServerCommandlet_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULearningSocketPPOTrainerServerCommandlet()
	{
		if (!Z_Registration_Info_UClass_ULearningSocketPPOTrainerServerCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULearningSocketPPOTrainerServerCommandlet.OuterSingleton, Z_Construct_UClass_ULearningSocketPPOTrainerServerCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULearningSocketPPOTrainerServerCommandlet.OuterSingleton;
	}
	template<> LEARNINGTRAINING_API UClass* StaticClass<ULearningSocketPPOTrainerServerCommandlet>()
	{
		return ULearningSocketPPOTrainerServerCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULearningSocketPPOTrainerServerCommandlet);
	ULearningSocketPPOTrainerServerCommandlet::~ULearningSocketPPOTrainerServerCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningTraining_Public_LearningPPOTrainer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningTraining_Public_LearningPPOTrainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULearningSocketPPOTrainerServerCommandlet, ULearningSocketPPOTrainerServerCommandlet::StaticClass, TEXT("ULearningSocketPPOTrainerServerCommandlet"), &Z_Registration_Info_UClass_ULearningSocketPPOTrainerServerCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULearningSocketPPOTrainerServerCommandlet), 125522599U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningTraining_Public_LearningPPOTrainer_h_2487725208(TEXT("/Script/LearningTraining"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningTraining_Public_LearningPPOTrainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningTraining_Public_LearningPPOTrainer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
