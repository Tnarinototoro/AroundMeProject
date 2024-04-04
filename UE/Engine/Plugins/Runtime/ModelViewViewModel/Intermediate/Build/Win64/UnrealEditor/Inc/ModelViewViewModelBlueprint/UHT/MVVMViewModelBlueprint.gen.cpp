// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewModel/MVVMViewModelBlueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMViewModelBlueprint() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
	MODELVIEWVIEWMODELBLUEPRINT_API UClass* Z_Construct_UClass_UMVVMViewModelBlueprint();
	MODELVIEWVIEWMODELBLUEPRINT_API UClass* Z_Construct_UClass_UMVVMViewModelBlueprint_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModelBlueprint();
// End Cross Module References
	void UMVVMViewModelBlueprint::StaticRegisterNativesUMVVMViewModelBlueprint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMVVMViewModelBlueprint);
	UClass* Z_Construct_UClass_UMVVMViewModelBlueprint_NoRegister()
	{
		return UMVVMViewModelBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UMVVMViewModelBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMVVMViewModelBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModelBlueprint,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelBlueprint_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMViewModelBlueprint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Will be deprecated in the next version.\n */" },
		{ "IncludePath", "ViewModel/MVVMViewModelBlueprint.h" },
		{ "ModuleRelativePath", "Public/ViewModel/MVVMViewModelBlueprint.h" },
		{ "ToolTip", "Will be deprecated in the next version." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMVVMViewModelBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMVVMViewModelBlueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMVVMViewModelBlueprint_Statics::ClassParams = {
		&UMVVMViewModelBlueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelBlueprint_Statics::Class_MetaDataParams), Z_Construct_UClass_UMVVMViewModelBlueprint_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMVVMViewModelBlueprint()
	{
		if (!Z_Registration_Info_UClass_UMVVMViewModelBlueprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMVVMViewModelBlueprint.OuterSingleton, Z_Construct_UClass_UMVVMViewModelBlueprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMVVMViewModelBlueprint.OuterSingleton;
	}
	template<> MODELVIEWVIEWMODELBLUEPRINT_API UClass* StaticClass<UMVVMViewModelBlueprint>()
	{
		return UMVVMViewModelBlueprint::StaticClass();
	}
	UMVVMViewModelBlueprint::UMVVMViewModelBlueprint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMVVMViewModelBlueprint);
	UMVVMViewModelBlueprint::~UMVVMViewModelBlueprint() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_ViewModel_MVVMViewModelBlueprint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_ViewModel_MVVMViewModelBlueprint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMVVMViewModelBlueprint, UMVVMViewModelBlueprint::StaticClass, TEXT("UMVVMViewModelBlueprint"), &Z_Registration_Info_UClass_UMVVMViewModelBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMVVMViewModelBlueprint), 1142916905U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_ViewModel_MVVMViewModelBlueprint_h_3922881522(TEXT("/Script/ModelViewViewModelBlueprint"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_ViewModel_MVVMViewModelBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_ViewModel_MVVMViewModelBlueprint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
