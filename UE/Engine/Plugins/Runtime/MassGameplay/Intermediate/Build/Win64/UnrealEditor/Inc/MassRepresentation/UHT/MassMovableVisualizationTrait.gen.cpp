// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassMovableVisualizationTrait.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassMovableVisualizationTrait() {}
// Cross Module References
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassMovableVisualizationTrait();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassMovableVisualizationTrait_NoRegister();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassVisualizationTrait();
	UPackage* Z_Construct_UPackage__Script_MassRepresentation();
// End Cross Module References
	void UMassMovableVisualizationTrait::StaticRegisterNativesUMassMovableVisualizationTrait()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassMovableVisualizationTrait);
	UClass* Z_Construct_UClass_UMassMovableVisualizationTrait_NoRegister()
	{
		return UMassMovableVisualizationTrait::StaticClass();
	}
	struct Z_Construct_UClass_UMassMovableVisualizationTrait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassMovableVisualizationTrait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassVisualizationTrait,
		(UObject* (*)())Z_Construct_UPackage__Script_MassRepresentation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassMovableVisualizationTrait_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassMovableVisualizationTrait_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassMovableVisualizationTrait.h" },
		{ "ModuleRelativePath", "Public/MassMovableVisualizationTrait.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassMovableVisualizationTrait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassMovableVisualizationTrait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassMovableVisualizationTrait_Statics::ClassParams = {
		&UMassMovableVisualizationTrait::StaticClass,
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
		0x001030A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassMovableVisualizationTrait_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassMovableVisualizationTrait_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMassMovableVisualizationTrait()
	{
		if (!Z_Registration_Info_UClass_UMassMovableVisualizationTrait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassMovableVisualizationTrait.OuterSingleton, Z_Construct_UClass_UMassMovableVisualizationTrait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassMovableVisualizationTrait.OuterSingleton;
	}
	template<> MASSREPRESENTATION_API UClass* StaticClass<UMassMovableVisualizationTrait>()
	{
		return UMassMovableVisualizationTrait::StaticClass();
	}
	UMassMovableVisualizationTrait::UMassMovableVisualizationTrait() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassMovableVisualizationTrait);
	UMassMovableVisualizationTrait::~UMassMovableVisualizationTrait() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassMovableVisualizationTrait_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassMovableVisualizationTrait_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassMovableVisualizationTrait, UMassMovableVisualizationTrait::StaticClass, TEXT("UMassMovableVisualizationTrait"), &Z_Registration_Info_UClass_UMassMovableVisualizationTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassMovableVisualizationTrait), 839753795U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassMovableVisualizationTrait_h_896840963(TEXT("/Script/MassRepresentation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassMovableVisualizationTrait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassMovableVisualizationTrait_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
