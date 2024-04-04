// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/Param/ParameterLibraryFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParameterLibraryFactory() {}
// Cross Module References
	ANIMNEXTEDITOR_API UClass* Z_Construct_UClass_UAnimNextParameterLibraryFactory();
	ANIMNEXTEDITOR_API UClass* Z_Construct_UClass_UAnimNextParameterLibraryFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AnimNextEditor();
// End Cross Module References
	void UAnimNextParameterLibraryFactory::StaticRegisterNativesUAnimNextParameterLibraryFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNextParameterLibraryFactory);
	UClass* Z_Construct_UClass_UAnimNextParameterLibraryFactory_NoRegister()
	{
		return UAnimNextParameterLibraryFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNextParameterLibraryFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNextParameterLibraryFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterLibraryFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterLibraryFactory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Param/ParameterLibraryFactory.h" },
		{ "ModuleRelativePath", "Internal/Param/ParameterLibraryFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNextParameterLibraryFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNextParameterLibraryFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNextParameterLibraryFactory_Statics::ClassParams = {
		&UAnimNextParameterLibraryFactory::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterLibraryFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNextParameterLibraryFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAnimNextParameterLibraryFactory()
	{
		if (!Z_Registration_Info_UClass_UAnimNextParameterLibraryFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNextParameterLibraryFactory.OuterSingleton, Z_Construct_UClass_UAnimNextParameterLibraryFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNextParameterLibraryFactory.OuterSingleton;
	}
	template<> ANIMNEXTEDITOR_API UClass* StaticClass<UAnimNextParameterLibraryFactory>()
	{
		return UAnimNextParameterLibraryFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNextParameterLibraryFactory);
	UAnimNextParameterLibraryFactory::~UAnimNextParameterLibraryFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextEditor_Internal_Param_ParameterLibraryFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextEditor_Internal_Param_ParameterLibraryFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNextParameterLibraryFactory, UAnimNextParameterLibraryFactory::StaticClass, TEXT("UAnimNextParameterLibraryFactory"), &Z_Registration_Info_UClass_UAnimNextParameterLibraryFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNextParameterLibraryFactory), 2558229613U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextEditor_Internal_Param_ParameterLibraryFactory_h_751283873(TEXT("/Script/AnimNextEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextEditor_Internal_Param_ParameterLibraryFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextEditor_Internal_Param_ParameterLibraryFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
