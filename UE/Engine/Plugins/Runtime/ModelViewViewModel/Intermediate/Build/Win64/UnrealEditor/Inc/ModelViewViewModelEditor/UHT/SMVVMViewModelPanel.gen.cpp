// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Widgets/SMVVMViewModelPanel.h"
#include "MVVMBlueprintViewModelContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMVVMViewModelPanel() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MODELVIEWVIEWMODELBLUEPRINT_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext();
	MODELVIEWVIEWMODELEDITOR_API UClass* Z_Construct_UClass_UMVVMBlueprintViewModelContextWrapper();
	MODELVIEWVIEWMODELEDITOR_API UClass* Z_Construct_UClass_UMVVMBlueprintViewModelContextWrapper_NoRegister();
	MODELVIEWVIEWMODELEDITOR_API UClass* Z_Construct_UClass_UMVVMViewModelPanelToolMenuContext();
	MODELVIEWVIEWMODELEDITOR_API UClass* Z_Construct_UClass_UMVVMViewModelPanelToolMenuContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModelEditor();
// End Cross Module References
	void UMVVMBlueprintViewModelContextWrapper::StaticRegisterNativesUMVVMBlueprintViewModelContextWrapper()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMVVMBlueprintViewModelContextWrapper);
	UClass* Z_Construct_UClass_UMVVMBlueprintViewModelContextWrapper_NoRegister()
	{
		return UMVVMBlueprintViewModelContextWrapper::StaticClass();
	}
	struct Z_Construct_UClass_UMVVMBlueprintViewModelContextWrapper_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Wrapper_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Wrapper;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMVVMBlueprintViewModelContextWrapper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModelEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMBlueprintViewModelContextWrapper_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMBlueprintViewModelContextWrapper_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/SMVVMViewModelPanel.h" },
		{ "ModuleRelativePath", "Private/Widgets/SMVVMViewModelPanel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMBlueprintViewModelContextWrapper_Statics::NewProp_Wrapper_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Private/Widgets/SMVVMViewModelPanel.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMBlueprintViewModelContextWrapper_Statics::NewProp_Wrapper = { "Wrapper", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMBlueprintViewModelContextWrapper, Wrapper), Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMBlueprintViewModelContextWrapper_Statics::NewProp_Wrapper_MetaData), Z_Construct_UClass_UMVVMBlueprintViewModelContextWrapper_Statics::NewProp_Wrapper_MetaData) }; // 398059915
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMVVMBlueprintViewModelContextWrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMBlueprintViewModelContextWrapper_Statics::NewProp_Wrapper,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMVVMBlueprintViewModelContextWrapper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMVVMBlueprintViewModelContextWrapper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMVVMBlueprintViewModelContextWrapper_Statics::ClassParams = {
		&UMVVMBlueprintViewModelContextWrapper::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMVVMBlueprintViewModelContextWrapper_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMBlueprintViewModelContextWrapper_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMBlueprintViewModelContextWrapper_Statics::Class_MetaDataParams), Z_Construct_UClass_UMVVMBlueprintViewModelContextWrapper_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMBlueprintViewModelContextWrapper_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMVVMBlueprintViewModelContextWrapper()
	{
		if (!Z_Registration_Info_UClass_UMVVMBlueprintViewModelContextWrapper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMVVMBlueprintViewModelContextWrapper.OuterSingleton, Z_Construct_UClass_UMVVMBlueprintViewModelContextWrapper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMVVMBlueprintViewModelContextWrapper.OuterSingleton;
	}
	template<> MODELVIEWVIEWMODELEDITOR_API UClass* StaticClass<UMVVMBlueprintViewModelContextWrapper>()
	{
		return UMVVMBlueprintViewModelContextWrapper::StaticClass();
	}
	UMVVMBlueprintViewModelContextWrapper::UMVVMBlueprintViewModelContextWrapper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMVVMBlueprintViewModelContextWrapper);
	UMVVMBlueprintViewModelContextWrapper::~UMVVMBlueprintViewModelContextWrapper() {}
	void UMVVMViewModelPanelToolMenuContext::StaticRegisterNativesUMVVMViewModelPanelToolMenuContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMVVMViewModelPanelToolMenuContext);
	UClass* Z_Construct_UClass_UMVVMViewModelPanelToolMenuContext_NoRegister()
	{
		return UMVVMViewModelPanelToolMenuContext::StaticClass();
	}
	struct Z_Construct_UClass_UMVVMViewModelPanelToolMenuContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMVVMViewModelPanelToolMenuContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModelEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelPanelToolMenuContext_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMViewModelPanelToolMenuContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/SMVVMViewModelPanel.h" },
		{ "ModuleRelativePath", "Private/Widgets/SMVVMViewModelPanel.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMVVMViewModelPanelToolMenuContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMVVMViewModelPanelToolMenuContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMVVMViewModelPanelToolMenuContext_Statics::ClassParams = {
		&UMVVMViewModelPanelToolMenuContext::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelPanelToolMenuContext_Statics::Class_MetaDataParams), Z_Construct_UClass_UMVVMViewModelPanelToolMenuContext_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMVVMViewModelPanelToolMenuContext()
	{
		if (!Z_Registration_Info_UClass_UMVVMViewModelPanelToolMenuContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMVVMViewModelPanelToolMenuContext.OuterSingleton, Z_Construct_UClass_UMVVMViewModelPanelToolMenuContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMVVMViewModelPanelToolMenuContext.OuterSingleton;
	}
	template<> MODELVIEWVIEWMODELEDITOR_API UClass* StaticClass<UMVVMViewModelPanelToolMenuContext>()
	{
		return UMVVMViewModelPanelToolMenuContext::StaticClass();
	}
	UMVVMViewModelPanelToolMenuContext::UMVVMViewModelPanelToolMenuContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMVVMViewModelPanelToolMenuContext);
	UMVVMViewModelPanelToolMenuContext::~UMVVMViewModelPanelToolMenuContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Private_Widgets_SMVVMViewModelPanel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Private_Widgets_SMVVMViewModelPanel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMVVMBlueprintViewModelContextWrapper, UMVVMBlueprintViewModelContextWrapper::StaticClass, TEXT("UMVVMBlueprintViewModelContextWrapper"), &Z_Registration_Info_UClass_UMVVMBlueprintViewModelContextWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMVVMBlueprintViewModelContextWrapper), 857902486U) },
		{ Z_Construct_UClass_UMVVMViewModelPanelToolMenuContext, UMVVMViewModelPanelToolMenuContext::StaticClass, TEXT("UMVVMViewModelPanelToolMenuContext"), &Z_Registration_Info_UClass_UMVVMViewModelPanelToolMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMVVMViewModelPanelToolMenuContext), 326188641U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Private_Widgets_SMVVMViewModelPanel_h_1204962049(TEXT("/Script/ModelViewViewModelEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Private_Widgets_SMVVMViewModelPanel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Private_Widgets_SMVVMViewModelPanel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
