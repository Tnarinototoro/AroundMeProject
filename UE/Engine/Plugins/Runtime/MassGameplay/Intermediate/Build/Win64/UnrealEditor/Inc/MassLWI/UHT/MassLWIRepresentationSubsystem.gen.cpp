// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassLWIRepresentationSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassLWIRepresentationSubsystem() {}
// Cross Module References
	MASSLWI_API UClass* Z_Construct_UClass_UMassLWIRepresentationSubsystem();
	MASSLWI_API UClass* Z_Construct_UClass_UMassLWIRepresentationSubsystem_NoRegister();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassRepresentationSubsystem();
	UPackage* Z_Construct_UPackage__Script_MassLWI();
// End Cross Module References
	void UMassLWIRepresentationSubsystem::StaticRegisterNativesUMassLWIRepresentationSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassLWIRepresentationSubsystem);
	UClass* Z_Construct_UClass_UMassLWIRepresentationSubsystem_NoRegister()
	{
		return UMassLWIRepresentationSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMassLWIRepresentationSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassLWIRepresentationSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassRepresentationSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MassLWI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassLWIRepresentationSubsystem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassLWIRepresentationSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassLWIRepresentationSubsystem.h" },
		{ "ModuleRelativePath", "Public/MassLWIRepresentationSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassLWIRepresentationSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassLWIRepresentationSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassLWIRepresentationSubsystem_Statics::ClassParams = {
		&UMassLWIRepresentationSubsystem::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassLWIRepresentationSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassLWIRepresentationSubsystem_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMassLWIRepresentationSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMassLWIRepresentationSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassLWIRepresentationSubsystem.OuterSingleton, Z_Construct_UClass_UMassLWIRepresentationSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassLWIRepresentationSubsystem.OuterSingleton;
	}
	template<> MASSLWI_API UClass* StaticClass<UMassLWIRepresentationSubsystem>()
	{
		return UMassLWIRepresentationSubsystem::StaticClass();
	}
	UMassLWIRepresentationSubsystem::UMassLWIRepresentationSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassLWIRepresentationSubsystem);
	UMassLWIRepresentationSubsystem::~UMassLWIRepresentationSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLWI_Public_MassLWIRepresentationSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLWI_Public_MassLWIRepresentationSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassLWIRepresentationSubsystem, UMassLWIRepresentationSubsystem::StaticClass, TEXT("UMassLWIRepresentationSubsystem"), &Z_Registration_Info_UClass_UMassLWIRepresentationSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassLWIRepresentationSubsystem), 3685972445U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLWI_Public_MassLWIRepresentationSubsystem_h_2319793917(TEXT("/Script/MassLWI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLWI_Public_MassLWIRepresentationSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLWI_Public_MassLWIRepresentationSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
