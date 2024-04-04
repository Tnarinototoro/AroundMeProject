// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningImitationTrainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLearningImitationTrainer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	LEARNINGTRAINING_API UClass* Z_Construct_UClass_ULearningSocketImitationTrainerServerCommandlet();
	LEARNINGTRAINING_API UClass* Z_Construct_UClass_ULearningSocketImitationTrainerServerCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LearningTraining();
// End Cross Module References
	void ULearningSocketImitationTrainerServerCommandlet::StaticRegisterNativesULearningSocketImitationTrainerServerCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULearningSocketImitationTrainerServerCommandlet);
	UClass* Z_Construct_UClass_ULearningSocketImitationTrainerServerCommandlet_NoRegister()
	{
		return ULearningSocketImitationTrainerServerCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_ULearningSocketImitationTrainerServerCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULearningSocketImitationTrainerServerCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningTraining,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningSocketImitationTrainerServerCommandlet_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningSocketImitationTrainerServerCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LearningImitationTrainer.h" },
		{ "ModuleRelativePath", "Public/LearningImitationTrainer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULearningSocketImitationTrainerServerCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULearningSocketImitationTrainerServerCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULearningSocketImitationTrainerServerCommandlet_Statics::ClassParams = {
		&ULearningSocketImitationTrainerServerCommandlet::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningSocketImitationTrainerServerCommandlet_Statics::Class_MetaDataParams), Z_Construct_UClass_ULearningSocketImitationTrainerServerCommandlet_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULearningSocketImitationTrainerServerCommandlet()
	{
		if (!Z_Registration_Info_UClass_ULearningSocketImitationTrainerServerCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULearningSocketImitationTrainerServerCommandlet.OuterSingleton, Z_Construct_UClass_ULearningSocketImitationTrainerServerCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULearningSocketImitationTrainerServerCommandlet.OuterSingleton;
	}
	template<> LEARNINGTRAINING_API UClass* StaticClass<ULearningSocketImitationTrainerServerCommandlet>()
	{
		return ULearningSocketImitationTrainerServerCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULearningSocketImitationTrainerServerCommandlet);
	ULearningSocketImitationTrainerServerCommandlet::~ULearningSocketImitationTrainerServerCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningTraining_Public_LearningImitationTrainer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningTraining_Public_LearningImitationTrainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULearningSocketImitationTrainerServerCommandlet, ULearningSocketImitationTrainerServerCommandlet::StaticClass, TEXT("ULearningSocketImitationTrainerServerCommandlet"), &Z_Registration_Info_UClass_ULearningSocketImitationTrainerServerCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULearningSocketImitationTrainerServerCommandlet), 933517920U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningTraining_Public_LearningImitationTrainer_h_2733693133(TEXT("/Script/LearningTraining"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningTraining_Public_LearningImitationTrainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningTraining_Public_LearningImitationTrainer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
