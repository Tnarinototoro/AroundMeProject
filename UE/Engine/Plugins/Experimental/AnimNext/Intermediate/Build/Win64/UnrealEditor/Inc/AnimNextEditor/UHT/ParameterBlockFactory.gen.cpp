// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/Param/ParameterBlockFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParameterBlockFactory() {}
// Cross Module References
	ANIMNEXTEDITOR_API UClass* Z_Construct_UClass_UAnimNextParameterBlockFactory();
	ANIMNEXTEDITOR_API UClass* Z_Construct_UClass_UAnimNextParameterBlockFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AnimNextEditor();
// End Cross Module References
	void UAnimNextParameterBlockFactory::StaticRegisterNativesUAnimNextParameterBlockFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNextParameterBlockFactory);
	UClass* Z_Construct_UClass_UAnimNextParameterBlockFactory_NoRegister()
	{
		return UAnimNextParameterBlockFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNextParameterBlockFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNextParameterBlockFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlockFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterBlockFactory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Param/ParameterBlockFactory.h" },
		{ "ModuleRelativePath", "Internal/Param/ParameterBlockFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNextParameterBlockFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNextParameterBlockFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNextParameterBlockFactory_Statics::ClassParams = {
		&UAnimNextParameterBlockFactory::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlockFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNextParameterBlockFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAnimNextParameterBlockFactory()
	{
		if (!Z_Registration_Info_UClass_UAnimNextParameterBlockFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNextParameterBlockFactory.OuterSingleton, Z_Construct_UClass_UAnimNextParameterBlockFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNextParameterBlockFactory.OuterSingleton;
	}
	template<> ANIMNEXTEDITOR_API UClass* StaticClass<UAnimNextParameterBlockFactory>()
	{
		return UAnimNextParameterBlockFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNextParameterBlockFactory);
	UAnimNextParameterBlockFactory::~UAnimNextParameterBlockFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextEditor_Internal_Param_ParameterBlockFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextEditor_Internal_Param_ParameterBlockFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNextParameterBlockFactory, UAnimNextParameterBlockFactory::StaticClass, TEXT("UAnimNextParameterBlockFactory"), &Z_Registration_Info_UClass_UAnimNextParameterBlockFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNextParameterBlockFactory), 554346314U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextEditor_Internal_Param_ParameterBlockFactory_h_2501746600(TEXT("/Script/AnimNextEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextEditor_Internal_Param_ParameterBlockFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextEditor_Internal_Param_ParameterBlockFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
