// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassStationaryISMSwitcherProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassStationaryISMSwitcherProcessor() {}
// Cross Module References
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassStationaryISMSwitcherProcessor();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassStationaryISMSwitcherProcessor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassRepresentation();
// End Cross Module References
	void UMassStationaryISMSwitcherProcessor::StaticRegisterNativesUMassStationaryISMSwitcherProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassStationaryISMSwitcherProcessor);
	UClass* Z_Construct_UClass_UMassStationaryISMSwitcherProcessor_NoRegister()
	{
		return UMassStationaryISMSwitcherProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassStationaryISMSwitcherProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassStationaryISMSwitcherProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassRepresentation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassStationaryISMSwitcherProcessor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassStationaryISMSwitcherProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * This processor's sole responsibility is to process all entities tagged with FMassStaticRepresentationTag\n * and check if they've switched to or away from EMassRepresentationType::StaticMeshInstance; and acordingly add or remove \n * the entity from the appropriate FMassInstancedStaticMeshInfoArrayView.\n */" },
		{ "IncludePath", "MassStationaryISMSwitcherProcessor.h" },
		{ "ModuleRelativePath", "Public/MassStationaryISMSwitcherProcessor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "This processor's sole responsibility is to process all entities tagged with FMassStaticRepresentationTag\nand check if they've switched to or away from EMassRepresentationType::StaticMeshInstance; and acordingly add or remove\nthe entity from the appropriate FMassInstancedStaticMeshInfoArrayView." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassStationaryISMSwitcherProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassStationaryISMSwitcherProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassStationaryISMSwitcherProcessor_Statics::ClassParams = {
		&UMassStationaryISMSwitcherProcessor::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassStationaryISMSwitcherProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassStationaryISMSwitcherProcessor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMassStationaryISMSwitcherProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassStationaryISMSwitcherProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassStationaryISMSwitcherProcessor.OuterSingleton, Z_Construct_UClass_UMassStationaryISMSwitcherProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassStationaryISMSwitcherProcessor.OuterSingleton;
	}
	template<> MASSREPRESENTATION_API UClass* StaticClass<UMassStationaryISMSwitcherProcessor>()
	{
		return UMassStationaryISMSwitcherProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassStationaryISMSwitcherProcessor);
	UMassStationaryISMSwitcherProcessor::~UMassStationaryISMSwitcherProcessor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassStationaryISMSwitcherProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassStationaryISMSwitcherProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassStationaryISMSwitcherProcessor, UMassStationaryISMSwitcherProcessor::StaticClass, TEXT("UMassStationaryISMSwitcherProcessor"), &Z_Registration_Info_UClass_UMassStationaryISMSwitcherProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassStationaryISMSwitcherProcessor), 1304050590U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassStationaryISMSwitcherProcessor_h_3018073198(TEXT("/Script/MassRepresentation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassStationaryISMSwitcherProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassStationaryISMSwitcherProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
