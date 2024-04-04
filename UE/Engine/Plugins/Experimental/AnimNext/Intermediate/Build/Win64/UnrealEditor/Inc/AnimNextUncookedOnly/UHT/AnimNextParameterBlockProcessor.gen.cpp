// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/Param/AnimNextParameterBlockProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNextParameterBlockProcessor() {}
// Cross Module References
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextParameterBlockEntry();
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextParameterBlockProcessor();
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextParameterBlockProcessor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AnimNextUncookedOnly();
// End Cross Module References
	void UAnimNextParameterBlockProcessor::StaticRegisterNativesUAnimNextParameterBlockProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNextParameterBlockProcessor);
	UClass* Z_Construct_UClass_UAnimNextParameterBlockProcessor_NoRegister()
	{
		return UAnimNextParameterBlockProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNextParameterBlockProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNextParameterBlockProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNextParameterBlockEntry,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextUncookedOnly,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlockProcessor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterBlockProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Block entry that performs arbitrary logic at the point the block is applied */" },
		{ "IncludePath", "Param/AnimNextParameterBlockProcessor.h" },
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlockProcessor.h" },
		{ "ToolTip", "Block entry that performs arbitrary logic at the point the block is applied" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNextParameterBlockProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNextParameterBlockProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNextParameterBlockProcessor_Statics::ClassParams = {
		&UAnimNextParameterBlockProcessor::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlockProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNextParameterBlockProcessor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAnimNextParameterBlockProcessor()
	{
		if (!Z_Registration_Info_UClass_UAnimNextParameterBlockProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNextParameterBlockProcessor.OuterSingleton, Z_Construct_UClass_UAnimNextParameterBlockProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNextParameterBlockProcessor.OuterSingleton;
	}
	template<> ANIMNEXTUNCOOKEDONLY_API UClass* StaticClass<UAnimNextParameterBlockProcessor>()
	{
		return UAnimNextParameterBlockProcessor::StaticClass();
	}
	UAnimNextParameterBlockProcessor::UAnimNextParameterBlockProcessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNextParameterBlockProcessor);
	UAnimNextParameterBlockProcessor::~UAnimNextParameterBlockProcessor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterBlockProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterBlockProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNextParameterBlockProcessor, UAnimNextParameterBlockProcessor::StaticClass, TEXT("UAnimNextParameterBlockProcessor"), &Z_Registration_Info_UClass_UAnimNextParameterBlockProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNextParameterBlockProcessor), 2402806417U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterBlockProcessor_h_1722471032(TEXT("/Script/AnimNextUncookedOnly"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterBlockProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterBlockProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
