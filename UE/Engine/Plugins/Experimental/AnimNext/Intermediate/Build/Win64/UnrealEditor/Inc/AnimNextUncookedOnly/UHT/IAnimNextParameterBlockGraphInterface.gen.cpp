// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/Param/IAnimNextParameterBlockGraphInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAnimNextParameterBlockGraphInterface() {}
// Cross Module References
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextParameterBlockGraphInterface();
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextParameterBlockGraphInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AnimNextUncookedOnly();
// End Cross Module References
	void UAnimNextParameterBlockGraphInterface::StaticRegisterNativesUAnimNextParameterBlockGraphInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNextParameterBlockGraphInterface);
	UClass* Z_Construct_UClass_UAnimNextParameterBlockGraphInterface_NoRegister()
	{
		return UAnimNextParameterBlockGraphInterface::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNextParameterBlockGraphInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNextParameterBlockGraphInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextUncookedOnly,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlockGraphInterface_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterBlockGraphInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Internal/Param/IAnimNextParameterBlockGraphInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNextParameterBlockGraphInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAnimNextParameterBlockGraphInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNextParameterBlockGraphInterface_Statics::ClassParams = {
		&UAnimNextParameterBlockGraphInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlockGraphInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNextParameterBlockGraphInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAnimNextParameterBlockGraphInterface()
	{
		if (!Z_Registration_Info_UClass_UAnimNextParameterBlockGraphInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNextParameterBlockGraphInterface.OuterSingleton, Z_Construct_UClass_UAnimNextParameterBlockGraphInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNextParameterBlockGraphInterface.OuterSingleton;
	}
	template<> ANIMNEXTUNCOOKEDONLY_API UClass* StaticClass<UAnimNextParameterBlockGraphInterface>()
	{
		return UAnimNextParameterBlockGraphInterface::StaticClass();
	}
	UAnimNextParameterBlockGraphInterface::UAnimNextParameterBlockGraphInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNextParameterBlockGraphInterface);
	UAnimNextParameterBlockGraphInterface::~UAnimNextParameterBlockGraphInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_IAnimNextParameterBlockGraphInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_IAnimNextParameterBlockGraphInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNextParameterBlockGraphInterface, UAnimNextParameterBlockGraphInterface::StaticClass, TEXT("UAnimNextParameterBlockGraphInterface"), &Z_Registration_Info_UClass_UAnimNextParameterBlockGraphInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNextParameterBlockGraphInterface), 463229635U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_IAnimNextParameterBlockGraphInterface_h_1350863983(TEXT("/Script/AnimNextUncookedOnly"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_IAnimNextParameterBlockGraphInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_IAnimNextParameterBlockGraphInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
