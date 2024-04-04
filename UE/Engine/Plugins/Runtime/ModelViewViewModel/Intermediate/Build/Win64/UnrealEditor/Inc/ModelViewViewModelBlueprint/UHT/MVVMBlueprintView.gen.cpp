// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MVVMBlueprintView.h"
#include "MVVMBlueprintViewBinding.h"
#include "MVVMBlueprintViewModelContext.h"
#include "MVVMWidgetBlueprintExtension_View.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMBlueprintView() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	MODELVIEWVIEWMODELBLUEPRINT_API UClass* Z_Construct_UClass_UMVVMBlueprintView();
	MODELVIEWVIEWMODELBLUEPRINT_API UClass* Z_Construct_UClass_UMVVMBlueprintView_NoRegister();
	MODELVIEWVIEWMODELBLUEPRINT_API UClass* Z_Construct_UClass_UMVVMBlueprintViewSettings();
	MODELVIEWVIEWMODELBLUEPRINT_API UClass* Z_Construct_UClass_UMVVMBlueprintViewSettings_NoRegister();
	MODELVIEWVIEWMODELBLUEPRINT_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding();
	MODELVIEWVIEWMODELBLUEPRINT_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModelBlueprint();
// End Cross Module References
	void UMVVMBlueprintViewSettings::StaticRegisterNativesUMVVMBlueprintViewSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMVVMBlueprintViewSettings);
	UClass* Z_Construct_UClass_UMVVMBlueprintViewSettings_NoRegister()
	{
		return UMVVMBlueprintViewSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMVVMBlueprintViewSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitializeSourcesOnConstruct_MetaData[];
#endif
		static void NewProp_bInitializeSourcesOnConstruct_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitializeSourcesOnConstruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitializeBindingsOnConstruct_MetaData[];
#endif
		static void NewProp_bInitializeBindingsOnConstruct_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitializeBindingsOnConstruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMVVMBlueprintViewSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModelBlueprint,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMBlueprintViewSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMBlueprintViewSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "MVVMBlueprintView.h" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintView.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMBlueprintViewSettings_Statics::NewProp_bInitializeSourcesOnConstruct_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/**\n\x09 * Auto initialize the view sources when the Widget is constructed.\n\x09 * If false, the user will have to initialize the sources manually.\n\x09 * It prevents the sources evaluating until you are ready.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintView.h" },
		{ "ToolTip", "Auto initialize the view sources when the Widget is constructed.\nIf false, the user will have to initialize the sources manually.\nIt prevents the sources evaluating until you are ready." },
	};
#endif
	void Z_Construct_UClass_UMVVMBlueprintViewSettings_Statics::NewProp_bInitializeSourcesOnConstruct_SetBit(void* Obj)
	{
		((UMVVMBlueprintViewSettings*)Obj)->bInitializeSourcesOnConstruct = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMVVMBlueprintViewSettings_Statics::NewProp_bInitializeSourcesOnConstruct = { "bInitializeSourcesOnConstruct", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMVVMBlueprintViewSettings), &Z_Construct_UClass_UMVVMBlueprintViewSettings_Statics::NewProp_bInitializeSourcesOnConstruct_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMBlueprintViewSettings_Statics::NewProp_bInitializeSourcesOnConstruct_MetaData), Z_Construct_UClass_UMVVMBlueprintViewSettings_Statics::NewProp_bInitializeSourcesOnConstruct_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMBlueprintViewSettings_Statics::NewProp_bInitializeBindingsOnConstruct_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/**\n\x09 * Auto initialize the view bindings when the Widget is constructed.\n\x09 * If false, the user will have to initialize the bindings manually.\n\x09 * It prevents bindings execution and improves performance when you know the widget won't be visible.\n\x09 * @note All bindings are executed when the view is automatically initialized or manually initialized.\n\x09 * @note Sources needs to be initialized before initializing the bindings.\n\x09 * @note When Sources is manually initialized, the bindings will also be initialized if this is true.\n\x09 */" },
		{ "EditCondition", "bInitializeSourcesOnConstruct" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintView.h" },
		{ "ToolTip", "Auto initialize the view bindings when the Widget is constructed.\nIf false, the user will have to initialize the bindings manually.\nIt prevents bindings execution and improves performance when you know the widget won't be visible.\n@note All bindings are executed when the view is automatically initialized or manually initialized.\n@note Sources needs to be initialized before initializing the bindings.\n@note When Sources is manually initialized, the bindings will also be initialized if this is true." },
	};
#endif
	void Z_Construct_UClass_UMVVMBlueprintViewSettings_Statics::NewProp_bInitializeBindingsOnConstruct_SetBit(void* Obj)
	{
		((UMVVMBlueprintViewSettings*)Obj)->bInitializeBindingsOnConstruct = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMVVMBlueprintViewSettings_Statics::NewProp_bInitializeBindingsOnConstruct = { "bInitializeBindingsOnConstruct", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMVVMBlueprintViewSettings), &Z_Construct_UClass_UMVVMBlueprintViewSettings_Statics::NewProp_bInitializeBindingsOnConstruct_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMBlueprintViewSettings_Statics::NewProp_bInitializeBindingsOnConstruct_MetaData), Z_Construct_UClass_UMVVMBlueprintViewSettings_Statics::NewProp_bInitializeBindingsOnConstruct_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMVVMBlueprintViewSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMBlueprintViewSettings_Statics::NewProp_bInitializeSourcesOnConstruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMBlueprintViewSettings_Statics::NewProp_bInitializeBindingsOnConstruct,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMVVMBlueprintViewSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMVVMBlueprintViewSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMVVMBlueprintViewSettings_Statics::ClassParams = {
		&UMVVMBlueprintViewSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMVVMBlueprintViewSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMBlueprintViewSettings_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMBlueprintViewSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMVVMBlueprintViewSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMBlueprintViewSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMVVMBlueprintViewSettings()
	{
		if (!Z_Registration_Info_UClass_UMVVMBlueprintViewSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMVVMBlueprintViewSettings.OuterSingleton, Z_Construct_UClass_UMVVMBlueprintViewSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMVVMBlueprintViewSettings.OuterSingleton;
	}
	template<> MODELVIEWVIEWMODELBLUEPRINT_API UClass* StaticClass<UMVVMBlueprintViewSettings>()
	{
		return UMVVMBlueprintViewSettings::StaticClass();
	}
	UMVVMBlueprintViewSettings::UMVVMBlueprintViewSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMVVMBlueprintViewSettings);
	UMVVMBlueprintViewSettings::~UMVVMBlueprintViewSettings() {}
	void UMVVMBlueprintView::StaticRegisterNativesUMVVMBlueprintView()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMVVMBlueprintView);
	UClass* Z_Construct_UClass_UMVVMBlueprintView_NoRegister()
	{
		return UMVVMBlueprintView::StaticClass();
	}
	struct Z_Construct_UClass_UMVVMBlueprintView_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TemporaryGraph_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemporaryGraph_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TemporaryGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bindings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AvailableViewModels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvailableViewModels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableViewModels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMVVMBlueprintView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModelBlueprint,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMBlueprintView_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMBlueprintView_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MVVMBlueprintView.h" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_TemporaryGraph_Inner = { "TemporaryGraph", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_TemporaryGraph_MetaData[] = {
		{ "Comment", "// Use during compilation to clean the automatically generated graph.\n" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintView.h" },
		{ "ToolTip", "Use during compilation to clean the automatically generated graph." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_TemporaryGraph = { "TemporaryGraph", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMBlueprintView, TemporaryGraph), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_TemporaryGraph_MetaData), Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_TemporaryGraph_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/MVVMBlueprintView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMBlueprintView, Settings), Z_Construct_UClass_UMVVMBlueprintViewSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_Settings_MetaData), Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_Settings_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_Bindings_Inner = { "Bindings", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding, METADATA_PARAMS(0, nullptr) }; // 2952208364
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_Bindings_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintView.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0040008000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMBlueprintView, Bindings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_Bindings_MetaData), Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_Bindings_MetaData) }; // 2952208364
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_AvailableViewModels_Inner = { "AvailableViewModels", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext, METADATA_PARAMS(0, nullptr) }; // 398059915
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_AvailableViewModels_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintView.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_AvailableViewModels = { "AvailableViewModels", nullptr, (EPropertyFlags)0x0040008000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMBlueprintView, AvailableViewModels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_AvailableViewModels_MetaData), Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_AvailableViewModels_MetaData) }; // 398059915
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMVVMBlueprintView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_TemporaryGraph_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_TemporaryGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_Bindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_Bindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_AvailableViewModels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_AvailableViewModels,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMVVMBlueprintView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMVVMBlueprintView>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMVVMBlueprintView_Statics::ClassParams = {
		&UMVVMBlueprintView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMVVMBlueprintView_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMBlueprintView_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMBlueprintView_Statics::Class_MetaDataParams), Z_Construct_UClass_UMVVMBlueprintView_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMBlueprintView_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMVVMBlueprintView()
	{
		if (!Z_Registration_Info_UClass_UMVVMBlueprintView.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMVVMBlueprintView.OuterSingleton, Z_Construct_UClass_UMVVMBlueprintView_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMVVMBlueprintView.OuterSingleton;
	}
	template<> MODELVIEWVIEWMODELBLUEPRINT_API UClass* StaticClass<UMVVMBlueprintView>()
	{
		return UMVVMBlueprintView::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMVVMBlueprintView);
	UMVVMBlueprintView::~UMVVMBlueprintView() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMVVMBlueprintView)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintView_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintView_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMVVMBlueprintViewSettings, UMVVMBlueprintViewSettings::StaticClass, TEXT("UMVVMBlueprintViewSettings"), &Z_Registration_Info_UClass_UMVVMBlueprintViewSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMVVMBlueprintViewSettings), 3116058007U) },
		{ Z_Construct_UClass_UMVVMBlueprintView, UMVVMBlueprintView::StaticClass, TEXT("UMVVMBlueprintView"), &Z_Registration_Info_UClass_UMVVMBlueprintView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMVVMBlueprintView), 3124308555U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintView_h_1811660631(TEXT("/Script/ModelViewViewModelBlueprint"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintView_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
