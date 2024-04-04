// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/Param/IAnimNextParameterBlockReferenceInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAnimNextParameterBlockReferenceInterface() {}
// Cross Module References
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextParameterBlockReferenceInterface();
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextParameterBlockReferenceInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AnimNextUncookedOnly();
// End Cross Module References
	void UAnimNextParameterBlockReferenceInterface::StaticRegisterNativesUAnimNextParameterBlockReferenceInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNextParameterBlockReferenceInterface);
	UClass* Z_Construct_UClass_UAnimNextParameterBlockReferenceInterface_NoRegister()
	{
		return UAnimNextParameterBlockReferenceInterface::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNextParameterBlockReferenceInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNextParameterBlockReferenceInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextUncookedOnly,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlockReferenceInterface_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterBlockReferenceInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Internal/Param/IAnimNextParameterBlockReferenceInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNextParameterBlockReferenceInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAnimNextParameterBlockReferenceInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNextParameterBlockReferenceInterface_Statics::ClassParams = {
		&UAnimNextParameterBlockReferenceInterface::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlockReferenceInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNextParameterBlockReferenceInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAnimNextParameterBlockReferenceInterface()
	{
		if (!Z_Registration_Info_UClass_UAnimNextParameterBlockReferenceInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNextParameterBlockReferenceInterface.OuterSingleton, Z_Construct_UClass_UAnimNextParameterBlockReferenceInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNextParameterBlockReferenceInterface.OuterSingleton;
	}
	template<> ANIMNEXTUNCOOKEDONLY_API UClass* StaticClass<UAnimNextParameterBlockReferenceInterface>()
	{
		return UAnimNextParameterBlockReferenceInterface::StaticClass();
	}
	UAnimNextParameterBlockReferenceInterface::UAnimNextParameterBlockReferenceInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNextParameterBlockReferenceInterface);
	UAnimNextParameterBlockReferenceInterface::~UAnimNextParameterBlockReferenceInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_IAnimNextParameterBlockReferenceInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_IAnimNextParameterBlockReferenceInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNextParameterBlockReferenceInterface, UAnimNextParameterBlockReferenceInterface::StaticClass, TEXT("UAnimNextParameterBlockReferenceInterface"), &Z_Registration_Info_UClass_UAnimNextParameterBlockReferenceInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNextParameterBlockReferenceInterface), 2472258722U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_IAnimNextParameterBlockReferenceInterface_h_1084106556(TEXT("/Script/AnimNextUncookedOnly"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_IAnimNextParameterBlockReferenceInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_IAnimNextParameterBlockReferenceInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
