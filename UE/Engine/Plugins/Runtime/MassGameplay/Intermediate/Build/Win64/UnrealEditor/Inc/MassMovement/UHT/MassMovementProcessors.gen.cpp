// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Movement/MassMovementProcessors.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassMovementProcessors() {}
// Cross Module References
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	MASSMOVEMENT_API UClass* Z_Construct_UClass_UMassApplyMovementProcessor();
	MASSMOVEMENT_API UClass* Z_Construct_UClass_UMassApplyMovementProcessor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassMovement();
// End Cross Module References
	void UMassApplyMovementProcessor::StaticRegisterNativesUMassApplyMovementProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassApplyMovementProcessor);
	UClass* Z_Construct_UClass_UMassApplyMovementProcessor_NoRegister()
	{
		return UMassApplyMovementProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassApplyMovementProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassApplyMovementProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassMovement,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassApplyMovementProcessor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassApplyMovementProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Updates entities position based on force and velocity.\n * Not applied on Off-LOD entities.\n */" },
		{ "IncludePath", "Movement/MassMovementProcessors.h" },
		{ "ModuleRelativePath", "Public/Movement/MassMovementProcessors.h" },
		{ "ToolTip", "Updates entities position based on force and velocity.\nNot applied on Off-LOD entities." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassApplyMovementProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassApplyMovementProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassApplyMovementProcessor_Statics::ClassParams = {
		&UMassApplyMovementProcessor::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x401030A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassApplyMovementProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassApplyMovementProcessor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMassApplyMovementProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassApplyMovementProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassApplyMovementProcessor.OuterSingleton, Z_Construct_UClass_UMassApplyMovementProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassApplyMovementProcessor.OuterSingleton;
	}
	template<> MASSMOVEMENT_API UClass* StaticClass<UMassApplyMovementProcessor>()
	{
		return UMassApplyMovementProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassApplyMovementProcessor);
	UMassApplyMovementProcessor::~UMassApplyMovementProcessor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Movement_MassMovementProcessors_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Movement_MassMovementProcessors_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassApplyMovementProcessor, UMassApplyMovementProcessor::StaticClass, TEXT("UMassApplyMovementProcessor"), &Z_Registration_Info_UClass_UMassApplyMovementProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassApplyMovementProcessor), 2652132911U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Movement_MassMovementProcessors_h_1355291262(TEXT("/Script/MassMovement"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Movement_MassMovementProcessors_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Movement_MassMovementProcessors_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
