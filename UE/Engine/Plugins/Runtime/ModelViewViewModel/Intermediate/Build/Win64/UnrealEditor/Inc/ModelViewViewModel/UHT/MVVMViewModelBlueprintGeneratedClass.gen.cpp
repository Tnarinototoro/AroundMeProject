// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewModel/MVVMViewModelBlueprintGeneratedClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMViewModelBlueprintGeneratedClass() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintGeneratedClass();
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMViewModelBlueprintGeneratedClass();
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMViewModelBlueprintGeneratedClass_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModel();
// End Cross Module References
	void UMVVMViewModelBlueprintGeneratedClass::StaticRegisterNativesUMVVMViewModelBlueprintGeneratedClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMVVMViewModelBlueprintGeneratedClass);
	UClass* Z_Construct_UClass_UMVVMViewModelBlueprintGeneratedClass_NoRegister()
	{
		return UMVVMViewModelBlueprintGeneratedClass::StaticClass();
	}
	struct Z_Construct_UClass_UMVVMViewModelBlueprintGeneratedClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMVVMViewModelBlueprintGeneratedClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintGeneratedClass,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModel,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelBlueprintGeneratedClass_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMViewModelBlueprintGeneratedClass_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Will be deprecated in the next version. */" },
		{ "IncludePath", "ViewModel/MVVMViewModelBlueprintGeneratedClass.h" },
		{ "ModuleRelativePath", "Public/ViewModel/MVVMViewModelBlueprintGeneratedClass.h" },
		{ "ToolTip", "Will be deprecated in the next version." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMVVMViewModelBlueprintGeneratedClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMVVMViewModelBlueprintGeneratedClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMVVMViewModelBlueprintGeneratedClass_Statics::ClassParams = {
		&UMVVMViewModelBlueprintGeneratedClass::StaticClass,
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
		0x009200A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelBlueprintGeneratedClass_Statics::Class_MetaDataParams), Z_Construct_UClass_UMVVMViewModelBlueprintGeneratedClass_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMVVMViewModelBlueprintGeneratedClass()
	{
		if (!Z_Registration_Info_UClass_UMVVMViewModelBlueprintGeneratedClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMVVMViewModelBlueprintGeneratedClass.OuterSingleton, Z_Construct_UClass_UMVVMViewModelBlueprintGeneratedClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMVVMViewModelBlueprintGeneratedClass.OuterSingleton;
	}
	template<> MODELVIEWVIEWMODEL_API UClass* StaticClass<UMVVMViewModelBlueprintGeneratedClass>()
	{
		return UMVVMViewModelBlueprintGeneratedClass::StaticClass();
	}
	UMVVMViewModelBlueprintGeneratedClass::UMVVMViewModelBlueprintGeneratedClass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMVVMViewModelBlueprintGeneratedClass);
	UMVVMViewModelBlueprintGeneratedClass::~UMVVMViewModelBlueprintGeneratedClass() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_ViewModel_MVVMViewModelBlueprintGeneratedClass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_ViewModel_MVVMViewModelBlueprintGeneratedClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMVVMViewModelBlueprintGeneratedClass, UMVVMViewModelBlueprintGeneratedClass::StaticClass, TEXT("UMVVMViewModelBlueprintGeneratedClass"), &Z_Registration_Info_UClass_UMVVMViewModelBlueprintGeneratedClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMVVMViewModelBlueprintGeneratedClass), 3355989122U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_ViewModel_MVVMViewModelBlueprintGeneratedClass_h_3167649657(TEXT("/Script/ModelViewViewModel"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_ViewModel_MVVMViewModelBlueprintGeneratedClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_ViewModel_MVVMViewModelBlueprintGeneratedClass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
