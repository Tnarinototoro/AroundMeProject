// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassLWIVisualizationTrait.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassLWIVisualizationTrait() {}
// Cross Module References
	MASSLWI_API UClass* Z_Construct_UClass_UMassLWIVisualizationTrait();
	MASSLWI_API UClass* Z_Construct_UClass_UMassLWIVisualizationTrait_NoRegister();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassStationaryVisualizationTrait();
	UPackage* Z_Construct_UPackage__Script_MassLWI();
// End Cross Module References
	void UMassLWIVisualizationTrait::StaticRegisterNativesUMassLWIVisualizationTrait()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassLWIVisualizationTrait);
	UClass* Z_Construct_UClass_UMassLWIVisualizationTrait_NoRegister()
	{
		return UMassLWIVisualizationTrait::StaticClass();
	}
	struct Z_Construct_UClass_UMassLWIVisualizationTrait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassLWIVisualizationTrait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassStationaryVisualizationTrait,
		(UObject* (*)())Z_Construct_UPackage__Script_MassLWI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassLWIVisualizationTrait_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassLWIVisualizationTrait_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassLWIVisualizationTrait.h" },
		{ "ModuleRelativePath", "Public/MassLWIVisualizationTrait.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassLWIVisualizationTrait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassLWIVisualizationTrait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassLWIVisualizationTrait_Statics::ClassParams = {
		&UMassLWIVisualizationTrait::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassLWIVisualizationTrait_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassLWIVisualizationTrait_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMassLWIVisualizationTrait()
	{
		if (!Z_Registration_Info_UClass_UMassLWIVisualizationTrait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassLWIVisualizationTrait.OuterSingleton, Z_Construct_UClass_UMassLWIVisualizationTrait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassLWIVisualizationTrait.OuterSingleton;
	}
	template<> MASSLWI_API UClass* StaticClass<UMassLWIVisualizationTrait>()
	{
		return UMassLWIVisualizationTrait::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassLWIVisualizationTrait);
	UMassLWIVisualizationTrait::~UMassLWIVisualizationTrait() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLWI_Public_MassLWIVisualizationTrait_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLWI_Public_MassLWIVisualizationTrait_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassLWIVisualizationTrait, UMassLWIVisualizationTrait::StaticClass, TEXT("UMassLWIVisualizationTrait"), &Z_Registration_Info_UClass_UMassLWIVisualizationTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassLWIVisualizationTrait), 3264142985U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLWI_Public_MassLWIVisualizationTrait_h_2016176126(TEXT("/Script/MassLWI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLWI_Public_MassLWIVisualizationTrait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLWI_Public_MassLWIVisualizationTrait_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
