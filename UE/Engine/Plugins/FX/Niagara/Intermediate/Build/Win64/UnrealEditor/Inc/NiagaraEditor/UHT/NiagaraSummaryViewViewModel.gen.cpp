// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewModels/HierarchyEditor/NiagaraSummaryViewViewModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraSummaryViewViewModel() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRendererProperties_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchyAssignmentInput();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchyAssignmentInput_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchyDataRefreshContext();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchyEventHandler();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchyEventHandler_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchyEventHandlerProperties();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchyEventHandlerProperties_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchyItem();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchyModule();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchyModule_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchyModuleInput();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchyModuleInput_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchyRenderer();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchyRenderer_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchySimStage();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchySimStage_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchySimStageProperties();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchySimStageProperties_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchySummaryDataRefreshContext();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchySummaryDataRefreshContext_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchyViewModelBase();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraSummaryViewViewModel();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraSummaryViewViewModel_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraHierarchySummaryDataRefreshContext::StaticRegisterNativesUNiagaraHierarchySummaryDataRefreshContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraHierarchySummaryDataRefreshContext);
	UClass* Z_Construct_UClass_UNiagaraHierarchySummaryDataRefreshContext_NoRegister()
	{
		return UNiagaraHierarchySummaryDataRefreshContext::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraHierarchySummaryDataRefreshContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Renderers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Renderers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Renderers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraHierarchySummaryDataRefreshContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraHierarchyDataRefreshContext,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchySummaryDataRefreshContext_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraHierarchySummaryDataRefreshContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/HierarchyEditor/NiagaraSummaryViewViewModel.h" },
		{ "ModuleRelativePath", "Public/ViewModels/HierarchyEditor/NiagaraSummaryViewViewModel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraHierarchySummaryDataRefreshContext_Statics::NewProp_Renderers_Inner = { "Renderers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraRendererProperties_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraHierarchySummaryDataRefreshContext_Statics::NewProp_Renderers_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/HierarchyEditor/NiagaraSummaryViewViewModel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraHierarchySummaryDataRefreshContext_Statics::NewProp_Renderers = { "Renderers", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraHierarchySummaryDataRefreshContext, Renderers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchySummaryDataRefreshContext_Statics::NewProp_Renderers_MetaData), Z_Construct_UClass_UNiagaraHierarchySummaryDataRefreshContext_Statics::NewProp_Renderers_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraHierarchySummaryDataRefreshContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraHierarchySummaryDataRefreshContext_Statics::NewProp_Renderers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraHierarchySummaryDataRefreshContext_Statics::NewProp_Renderers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraHierarchySummaryDataRefreshContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraHierarchySummaryDataRefreshContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraHierarchySummaryDataRefreshContext_Statics::ClassParams = {
		&UNiagaraHierarchySummaryDataRefreshContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraHierarchySummaryDataRefreshContext_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchySummaryDataRefreshContext_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchySummaryDataRefreshContext_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraHierarchySummaryDataRefreshContext_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchySummaryDataRefreshContext_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNiagaraHierarchySummaryDataRefreshContext()
	{
		if (!Z_Registration_Info_UClass_UNiagaraHierarchySummaryDataRefreshContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraHierarchySummaryDataRefreshContext.OuterSingleton, Z_Construct_UClass_UNiagaraHierarchySummaryDataRefreshContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraHierarchySummaryDataRefreshContext.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraHierarchySummaryDataRefreshContext>()
	{
		return UNiagaraHierarchySummaryDataRefreshContext::StaticClass();
	}
	UNiagaraHierarchySummaryDataRefreshContext::UNiagaraHierarchySummaryDataRefreshContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraHierarchySummaryDataRefreshContext);
	UNiagaraHierarchySummaryDataRefreshContext::~UNiagaraHierarchySummaryDataRefreshContext() {}
	void UNiagaraHierarchyModule::StaticRegisterNativesUNiagaraHierarchyModule()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraHierarchyModule);
	UClass* Z_Construct_UClass_UNiagaraHierarchyModule_NoRegister()
	{
		return UNiagaraHierarchyModule::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraHierarchyModule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraHierarchyModule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraHierarchyItem,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyModule_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraHierarchyModule_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/HierarchyEditor/NiagaraSummaryViewViewModel.h" },
		{ "ModuleRelativePath", "Public/ViewModels/HierarchyEditor/NiagaraSummaryViewViewModel.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraHierarchyModule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraHierarchyModule>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraHierarchyModule_Statics::ClassParams = {
		&UNiagaraHierarchyModule::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyModule_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraHierarchyModule_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UNiagaraHierarchyModule()
	{
		if (!Z_Registration_Info_UClass_UNiagaraHierarchyModule.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraHierarchyModule.OuterSingleton, Z_Construct_UClass_UNiagaraHierarchyModule_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraHierarchyModule.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraHierarchyModule>()
	{
		return UNiagaraHierarchyModule::StaticClass();
	}
	UNiagaraHierarchyModule::UNiagaraHierarchyModule() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraHierarchyModule);
	UNiagaraHierarchyModule::~UNiagaraHierarchyModule() {}
	void UNiagaraHierarchyModuleInput::StaticRegisterNativesUNiagaraHierarchyModuleInput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraHierarchyModuleInput);
	UClass* Z_Construct_UClass_UNiagaraHierarchyModuleInput_NoRegister()
	{
		return UNiagaraHierarchyModuleInput::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraHierarchyModuleInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayNameOverride_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayNameOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TooltipOverride_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TooltipOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraHierarchyModuleInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraHierarchyItem,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyModuleInput_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraHierarchyModuleInput_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/HierarchyEditor/NiagaraSummaryViewViewModel.h" },
		{ "ModuleRelativePath", "Public/ViewModels/HierarchyEditor/NiagaraSummaryViewViewModel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraHierarchyModuleInput_Statics::NewProp_DisplayNameOverride_MetaData[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** If specified, will override how this input is presented in the stack. */" },
		{ "ModuleRelativePath", "Public/ViewModels/HierarchyEditor/NiagaraSummaryViewViewModel.h" },
		{ "ToolTip", "If specified, will override how this input is presented in the stack." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraHierarchyModuleInput_Statics::NewProp_DisplayNameOverride = { "DisplayNameOverride", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraHierarchyModuleInput, DisplayNameOverride), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyModuleInput_Statics::NewProp_DisplayNameOverride_MetaData), Z_Construct_UClass_UNiagaraHierarchyModuleInput_Statics::NewProp_DisplayNameOverride_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraHierarchyModuleInput_Statics::NewProp_TooltipOverride_MetaData[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** If specified, will override how the tooltip of this input in the stack. */" },
		{ "ModuleRelativePath", "Public/ViewModels/HierarchyEditor/NiagaraSummaryViewViewModel.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "If specified, will override how the tooltip of this input in the stack." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraHierarchyModuleInput_Statics::NewProp_TooltipOverride = { "TooltipOverride", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraHierarchyModuleInput, TooltipOverride), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyModuleInput_Statics::NewProp_TooltipOverride_MetaData), Z_Construct_UClass_UNiagaraHierarchyModuleInput_Statics::NewProp_TooltipOverride_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraHierarchyModuleInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraHierarchyModuleInput_Statics::NewProp_DisplayNameOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraHierarchyModuleInput_Statics::NewProp_TooltipOverride,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraHierarchyModuleInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraHierarchyModuleInput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraHierarchyModuleInput_Statics::ClassParams = {
		&UNiagaraHierarchyModuleInput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraHierarchyModuleInput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyModuleInput_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyModuleInput_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraHierarchyModuleInput_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyModuleInput_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNiagaraHierarchyModuleInput()
	{
		if (!Z_Registration_Info_UClass_UNiagaraHierarchyModuleInput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraHierarchyModuleInput.OuterSingleton, Z_Construct_UClass_UNiagaraHierarchyModuleInput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraHierarchyModuleInput.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraHierarchyModuleInput>()
	{
		return UNiagaraHierarchyModuleInput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraHierarchyModuleInput);
	void UNiagaraHierarchyAssignmentInput::StaticRegisterNativesUNiagaraHierarchyAssignmentInput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraHierarchyAssignmentInput);
	UClass* Z_Construct_UClass_UNiagaraHierarchyAssignmentInput_NoRegister()
	{
		return UNiagaraHierarchyAssignmentInput::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraHierarchyAssignmentInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TooltipOverride_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TooltipOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraHierarchyAssignmentInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraHierarchyItem,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyAssignmentInput_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraHierarchyAssignmentInput_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/HierarchyEditor/NiagaraSummaryViewViewModel.h" },
		{ "ModuleRelativePath", "Public/ViewModels/HierarchyEditor/NiagaraSummaryViewViewModel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraHierarchyAssignmentInput_Statics::NewProp_TooltipOverride_MetaData[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** If specified, will override how the tooltip of this input in the stack. */" },
		{ "ModuleRelativePath", "Public/ViewModels/HierarchyEditor/NiagaraSummaryViewViewModel.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "If specified, will override how the tooltip of this input in the stack." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraHierarchyAssignmentInput_Statics::NewProp_TooltipOverride = { "TooltipOverride", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraHierarchyAssignmentInput, TooltipOverride), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyAssignmentInput_Statics::NewProp_TooltipOverride_MetaData), Z_Construct_UClass_UNiagaraHierarchyAssignmentInput_Statics::NewProp_TooltipOverride_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraHierarchyAssignmentInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraHierarchyAssignmentInput_Statics::NewProp_TooltipOverride,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraHierarchyAssignmentInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraHierarchyAssignmentInput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraHierarchyAssignmentInput_Statics::ClassParams = {
		&UNiagaraHierarchyAssignmentInput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraHierarchyAssignmentInput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyAssignmentInput_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyAssignmentInput_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraHierarchyAssignmentInput_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyAssignmentInput_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNiagaraHierarchyAssignmentInput()
	{
		if (!Z_Registration_Info_UClass_UNiagaraHierarchyAssignmentInput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraHierarchyAssignmentInput.OuterSingleton, Z_Construct_UClass_UNiagaraHierarchyAssignmentInput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraHierarchyAssignmentInput.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraHierarchyAssignmentInput>()
	{
		return UNiagaraHierarchyAssignmentInput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraHierarchyAssignmentInput);
	void UNiagaraHierarchyRenderer::StaticRegisterNativesUNiagaraHierarchyRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraHierarchyRenderer);
	UClass* Z_Construct_UClass_UNiagaraHierarchyRenderer_NoRegister()
	{
		return UNiagaraHierarchyRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraHierarchyRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraHierarchyRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraHierarchyItem,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyRenderer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraHierarchyRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/HierarchyEditor/NiagaraSummaryViewViewModel.h" },
		{ "ModuleRelativePath", "Public/ViewModels/HierarchyEditor/NiagaraSummaryViewViewModel.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraHierarchyRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraHierarchyRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraHierarchyRenderer_Statics::ClassParams = {
		&UNiagaraHierarchyRenderer::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyRenderer_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraHierarchyRenderer_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UNiagaraHierarchyRenderer()
	{
		if (!Z_Registration_Info_UClass_UNiagaraHierarchyRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraHierarchyRenderer.OuterSingleton, Z_Construct_UClass_UNiagaraHierarchyRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraHierarchyRenderer.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraHierarchyRenderer>()
	{
		return UNiagaraHierarchyRenderer::StaticClass();
	}
	UNiagaraHierarchyRenderer::UNiagaraHierarchyRenderer() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraHierarchyRenderer);
	UNiagaraHierarchyRenderer::~UNiagaraHierarchyRenderer() {}
	void UNiagaraHierarchyEventHandler::StaticRegisterNativesUNiagaraHierarchyEventHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraHierarchyEventHandler);
	UClass* Z_Construct_UClass_UNiagaraHierarchyEventHandler_NoRegister()
	{
		return UNiagaraHierarchyEventHandler::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraHierarchyEventHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraHierarchyEventHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraHierarchyItem,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyEventHandler_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraHierarchyEventHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/HierarchyEditor/NiagaraSummaryViewViewModel.h" },
		{ "ModuleRelativePath", "Public/ViewModels/HierarchyEditor/NiagaraSummaryViewViewModel.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraHierarchyEventHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraHierarchyEventHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraHierarchyEventHandler_Statics::ClassParams = {
		&UNiagaraHierarchyEventHandler::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyEventHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraHierarchyEventHandler_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UNiagaraHierarchyEventHandler()
	{
		if (!Z_Registration_Info_UClass_UNiagaraHierarchyEventHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraHierarchyEventHandler.OuterSingleton, Z_Construct_UClass_UNiagaraHierarchyEventHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraHierarchyEventHandler.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraHierarchyEventHandler>()
	{
		return UNiagaraHierarchyEventHandler::StaticClass();
	}
	UNiagaraHierarchyEventHandler::UNiagaraHierarchyEventHandler() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraHierarchyEventHandler);
	UNiagaraHierarchyEventHandler::~UNiagaraHierarchyEventHandler() {}
	void UNiagaraHierarchyEventHandlerProperties::StaticRegisterNativesUNiagaraHierarchyEventHandlerProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraHierarchyEventHandlerProperties);
	UClass* Z_Construct_UClass_UNiagaraHierarchyEventHandlerProperties_NoRegister()
	{
		return UNiagaraHierarchyEventHandlerProperties::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraHierarchyEventHandlerProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraHierarchyEventHandlerProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraHierarchyItem,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyEventHandlerProperties_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraHierarchyEventHandlerProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/HierarchyEditor/NiagaraSummaryViewViewModel.h" },
		{ "ModuleRelativePath", "Public/ViewModels/HierarchyEditor/NiagaraSummaryViewViewModel.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraHierarchyEventHandlerProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraHierarchyEventHandlerProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraHierarchyEventHandlerProperties_Statics::ClassParams = {
		&UNiagaraHierarchyEventHandlerProperties::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyEventHandlerProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraHierarchyEventHandlerProperties_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UNiagaraHierarchyEventHandlerProperties()
	{
		if (!Z_Registration_Info_UClass_UNiagaraHierarchyEventHandlerProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraHierarchyEventHandlerProperties.OuterSingleton, Z_Construct_UClass_UNiagaraHierarchyEventHandlerProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraHierarchyEventHandlerProperties.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraHierarchyEventHandlerProperties>()
	{
		return UNiagaraHierarchyEventHandlerProperties::StaticClass();
	}
	UNiagaraHierarchyEventHandlerProperties::UNiagaraHierarchyEventHandlerProperties() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraHierarchyEventHandlerProperties);
	UNiagaraHierarchyEventHandlerProperties::~UNiagaraHierarchyEventHandlerProperties() {}
	void UNiagaraHierarchySimStage::StaticRegisterNativesUNiagaraHierarchySimStage()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraHierarchySimStage);
	UClass* Z_Construct_UClass_UNiagaraHierarchySimStage_NoRegister()
	{
		return UNiagaraHierarchySimStage::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraHierarchySimStage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraHierarchySimStage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraHierarchyItem,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchySimStage_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraHierarchySimStage_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/HierarchyEditor/NiagaraSummaryViewViewModel.h" },
		{ "ModuleRelativePath", "Public/ViewModels/HierarchyEditor/NiagaraSummaryViewViewModel.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraHierarchySimStage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraHierarchySimStage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraHierarchySimStage_Statics::ClassParams = {
		&UNiagaraHierarchySimStage::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchySimStage_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraHierarchySimStage_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UNiagaraHierarchySimStage()
	{
		if (!Z_Registration_Info_UClass_UNiagaraHierarchySimStage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraHierarchySimStage.OuterSingleton, Z_Construct_UClass_UNiagaraHierarchySimStage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraHierarchySimStage.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraHierarchySimStage>()
	{
		return UNiagaraHierarchySimStage::StaticClass();
	}
	UNiagaraHierarchySimStage::UNiagaraHierarchySimStage() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraHierarchySimStage);
	UNiagaraHierarchySimStage::~UNiagaraHierarchySimStage() {}
	void UNiagaraHierarchySimStageProperties::StaticRegisterNativesUNiagaraHierarchySimStageProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraHierarchySimStageProperties);
	UClass* Z_Construct_UClass_UNiagaraHierarchySimStageProperties_NoRegister()
	{
		return UNiagaraHierarchySimStageProperties::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraHierarchySimStageProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraHierarchySimStageProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraHierarchyItem,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchySimStageProperties_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraHierarchySimStageProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/HierarchyEditor/NiagaraSummaryViewViewModel.h" },
		{ "ModuleRelativePath", "Public/ViewModels/HierarchyEditor/NiagaraSummaryViewViewModel.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraHierarchySimStageProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraHierarchySimStageProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraHierarchySimStageProperties_Statics::ClassParams = {
		&UNiagaraHierarchySimStageProperties::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchySimStageProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraHierarchySimStageProperties_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UNiagaraHierarchySimStageProperties()
	{
		if (!Z_Registration_Info_UClass_UNiagaraHierarchySimStageProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraHierarchySimStageProperties.OuterSingleton, Z_Construct_UClass_UNiagaraHierarchySimStageProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraHierarchySimStageProperties.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraHierarchySimStageProperties>()
	{
		return UNiagaraHierarchySimStageProperties::StaticClass();
	}
	UNiagaraHierarchySimStageProperties::UNiagaraHierarchySimStageProperties() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraHierarchySimStageProperties);
	UNiagaraHierarchySimStageProperties::~UNiagaraHierarchySimStageProperties() {}
	void UNiagaraSummaryViewViewModel::StaticRegisterNativesUNiagaraSummaryViewViewModel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraSummaryViewViewModel);
	UClass* Z_Construct_UClass_UNiagaraSummaryViewViewModel_NoRegister()
	{
		return UNiagaraSummaryViewViewModel::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraSummaryViewViewModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraSummaryViewViewModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraHierarchyViewModelBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSummaryViewViewModel_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSummaryViewViewModel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/HierarchyEditor/NiagaraSummaryViewViewModel.h" },
		{ "ModuleRelativePath", "Public/ViewModels/HierarchyEditor/NiagaraSummaryViewViewModel.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraSummaryViewViewModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraSummaryViewViewModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraSummaryViewViewModel_Statics::ClassParams = {
		&UNiagaraSummaryViewViewModel::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSummaryViewViewModel_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraSummaryViewViewModel_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UNiagaraSummaryViewViewModel()
	{
		if (!Z_Registration_Info_UClass_UNiagaraSummaryViewViewModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraSummaryViewViewModel.OuterSingleton, Z_Construct_UClass_UNiagaraSummaryViewViewModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraSummaryViewViewModel.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraSummaryViewViewModel>()
	{
		return UNiagaraSummaryViewViewModel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraSummaryViewViewModel);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_HierarchyEditor_NiagaraSummaryViewViewModel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_HierarchyEditor_NiagaraSummaryViewViewModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraHierarchySummaryDataRefreshContext, UNiagaraHierarchySummaryDataRefreshContext::StaticClass, TEXT("UNiagaraHierarchySummaryDataRefreshContext"), &Z_Registration_Info_UClass_UNiagaraHierarchySummaryDataRefreshContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraHierarchySummaryDataRefreshContext), 1227247148U) },
		{ Z_Construct_UClass_UNiagaraHierarchyModule, UNiagaraHierarchyModule::StaticClass, TEXT("UNiagaraHierarchyModule"), &Z_Registration_Info_UClass_UNiagaraHierarchyModule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraHierarchyModule), 3831391944U) },
		{ Z_Construct_UClass_UNiagaraHierarchyModuleInput, UNiagaraHierarchyModuleInput::StaticClass, TEXT("UNiagaraHierarchyModuleInput"), &Z_Registration_Info_UClass_UNiagaraHierarchyModuleInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraHierarchyModuleInput), 3644049966U) },
		{ Z_Construct_UClass_UNiagaraHierarchyAssignmentInput, UNiagaraHierarchyAssignmentInput::StaticClass, TEXT("UNiagaraHierarchyAssignmentInput"), &Z_Registration_Info_UClass_UNiagaraHierarchyAssignmentInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraHierarchyAssignmentInput), 3079588880U) },
		{ Z_Construct_UClass_UNiagaraHierarchyRenderer, UNiagaraHierarchyRenderer::StaticClass, TEXT("UNiagaraHierarchyRenderer"), &Z_Registration_Info_UClass_UNiagaraHierarchyRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraHierarchyRenderer), 4104685243U) },
		{ Z_Construct_UClass_UNiagaraHierarchyEventHandler, UNiagaraHierarchyEventHandler::StaticClass, TEXT("UNiagaraHierarchyEventHandler"), &Z_Registration_Info_UClass_UNiagaraHierarchyEventHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraHierarchyEventHandler), 2218915070U) },
		{ Z_Construct_UClass_UNiagaraHierarchyEventHandlerProperties, UNiagaraHierarchyEventHandlerProperties::StaticClass, TEXT("UNiagaraHierarchyEventHandlerProperties"), &Z_Registration_Info_UClass_UNiagaraHierarchyEventHandlerProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraHierarchyEventHandlerProperties), 2705932730U) },
		{ Z_Construct_UClass_UNiagaraHierarchySimStage, UNiagaraHierarchySimStage::StaticClass, TEXT("UNiagaraHierarchySimStage"), &Z_Registration_Info_UClass_UNiagaraHierarchySimStage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraHierarchySimStage), 118468023U) },
		{ Z_Construct_UClass_UNiagaraHierarchySimStageProperties, UNiagaraHierarchySimStageProperties::StaticClass, TEXT("UNiagaraHierarchySimStageProperties"), &Z_Registration_Info_UClass_UNiagaraHierarchySimStageProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraHierarchySimStageProperties), 3593505336U) },
		{ Z_Construct_UClass_UNiagaraSummaryViewViewModel, UNiagaraSummaryViewViewModel::StaticClass, TEXT("UNiagaraSummaryViewViewModel"), &Z_Registration_Info_UClass_UNiagaraSummaryViewViewModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraSummaryViewViewModel), 3940656517U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_HierarchyEditor_NiagaraSummaryViewViewModel_h_1905150856(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_HierarchyEditor_NiagaraSummaryViewViewModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_HierarchyEditor_NiagaraSummaryViewViewModel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
