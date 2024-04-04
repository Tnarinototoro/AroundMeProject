// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/View/MVVMBindingSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMBindingSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMBindingSubsystem();
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMBindingSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModel();
// End Cross Module References
	void UMVVMBindingSubsystem::StaticRegisterNativesUMVVMBindingSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMVVMBindingSubsystem);
	UClass* Z_Construct_UClass_UMVVMBindingSubsystem_NoRegister()
	{
		return UMVVMBindingSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMVVMBindingSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMVVMBindingSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModel,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMBindingSubsystem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMBindingSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** */" },
		{ "IncludePath", "View/MVVMBindingSubsystem.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/View/MVVMBindingSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMVVMBindingSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMVVMBindingSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMVVMBindingSubsystem_Statics::ClassParams = {
		&UMVVMBindingSubsystem::StaticClass,
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
		0x010000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMBindingSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMVVMBindingSubsystem_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMVVMBindingSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMVVMBindingSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMVVMBindingSubsystem.OuterSingleton, Z_Construct_UClass_UMVVMBindingSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMVVMBindingSubsystem.OuterSingleton;
	}
	template<> MODELVIEWVIEWMODEL_API UClass* StaticClass<UMVVMBindingSubsystem>()
	{
		return UMVVMBindingSubsystem::StaticClass();
	}
	UMVVMBindingSubsystem::UMVVMBindingSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMVVMBindingSubsystem);
	UMVVMBindingSubsystem::~UMVVMBindingSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Private_View_MVVMBindingSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Private_View_MVVMBindingSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMVVMBindingSubsystem, UMVVMBindingSubsystem::StaticClass, TEXT("UMVVMBindingSubsystem"), &Z_Registration_Info_UClass_UMVVMBindingSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMVVMBindingSubsystem), 2218240354U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Private_View_MVVMBindingSubsystem_h_1410524286(TEXT("/Script/ModelViewViewModel"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Private_View_MVVMBindingSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Private_View_MVVMBindingSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
