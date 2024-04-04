// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../DMXPixelMappingEditor/Private/ViewModels/DMXPixelMappingDMXLibraryViewModel.h"
#include "Widgets/SDMXReadOnlyFixturePatchList.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXPixelMappingDMXLibraryViewModel() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DMXEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDMXReadOnlyFixturePatchListDescriptor();
	DMXPIXELMAPPINGEDITOR_API UClass* Z_Construct_UClass_UDMXPixelMappingDMXLibraryViewModel();
	DMXPIXELMAPPINGEDITOR_API UClass* Z_Construct_UClass_UDMXPixelMappingDMXLibraryViewModel_NoRegister();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingFixtureGroupComponent_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXPixelMappingEditor();
// End Cross Module References
	void UDMXPixelMappingDMXLibraryViewModel::StaticRegisterNativesUDMXPixelMappingDMXLibraryViewModel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXPixelMappingDMXLibraryViewModel);
	UClass* Z_Construct_UClass_UDMXPixelMappingDMXLibraryViewModel_NoRegister()
	{
		return UDMXPixelMappingDMXLibraryViewModel::StaticClass();
	}
	struct Z_Construct_UClass_UDMXPixelMappingDMXLibraryViewModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DMXLibrary_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DMXLibrary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeakFixtureGroupComponent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_WeakFixtureGroupComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixturePatchListDescriptor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FixturePatchListDescriptor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXPixelMappingDMXLibraryViewModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXPixelMappingEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingDMXLibraryViewModel_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingDMXLibraryViewModel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Model for the DMX Library View */" },
		{ "IncludePath", "ViewModels/DMXPixelMappingDMXLibraryViewModel.h" },
		{ "ModuleRelativePath", "Private/ViewModels/DMXPixelMappingDMXLibraryViewModel.h" },
		{ "ToolTip", "Model for the DMX Library View" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingDMXLibraryViewModel_Statics::NewProp_DMXLibrary_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DMXLibrary" },
		{ "Comment", "/** The DMX library of this view */" },
		{ "ModuleRelativePath", "Private/ViewModels/DMXPixelMappingDMXLibraryViewModel.h" },
		{ "ToolTip", "The DMX library of this view" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXPixelMappingDMXLibraryViewModel_Statics::NewProp_DMXLibrary = { "DMXLibrary", nullptr, (EPropertyFlags)0x0044000000002001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXPixelMappingDMXLibraryViewModel, DMXLibrary), Z_Construct_UClass_UDMXLibrary_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingDMXLibraryViewModel_Statics::NewProp_DMXLibrary_MetaData), Z_Construct_UClass_UDMXPixelMappingDMXLibraryViewModel_Statics::NewProp_DMXLibrary_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingDMXLibraryViewModel_Statics::NewProp_WeakFixtureGroupComponent_MetaData[] = {
		{ "Comment", "/** The fixture group component that this model uses */" },
		{ "ModuleRelativePath", "Private/ViewModels/DMXPixelMappingDMXLibraryViewModel.h" },
		{ "ToolTip", "The fixture group component that this model uses" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDMXPixelMappingDMXLibraryViewModel_Statics::NewProp_WeakFixtureGroupComponent = { "WeakFixtureGroupComponent", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXPixelMappingDMXLibraryViewModel, WeakFixtureGroupComponent), Z_Construct_UClass_UDMXPixelMappingFixtureGroupComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingDMXLibraryViewModel_Statics::NewProp_WeakFixtureGroupComponent_MetaData), Z_Construct_UClass_UDMXPixelMappingDMXLibraryViewModel_Statics::NewProp_WeakFixtureGroupComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingDMXLibraryViewModel_Statics::NewProp_FixturePatchListDescriptor_MetaData[] = {
		{ "Comment", "/** Default fixture patch list descriptor */" },
		{ "ModuleRelativePath", "Private/ViewModels/DMXPixelMappingDMXLibraryViewModel.h" },
		{ "ToolTip", "Default fixture patch list descriptor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXPixelMappingDMXLibraryViewModel_Statics::NewProp_FixturePatchListDescriptor = { "FixturePatchListDescriptor", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXPixelMappingDMXLibraryViewModel, FixturePatchListDescriptor), Z_Construct_UScriptStruct_FDMXReadOnlyFixturePatchListDescriptor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingDMXLibraryViewModel_Statics::NewProp_FixturePatchListDescriptor_MetaData), Z_Construct_UClass_UDMXPixelMappingDMXLibraryViewModel_Statics::NewProp_FixturePatchListDescriptor_MetaData) }; // 2111640318
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXPixelMappingDMXLibraryViewModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingDMXLibraryViewModel_Statics::NewProp_DMXLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingDMXLibraryViewModel_Statics::NewProp_WeakFixtureGroupComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingDMXLibraryViewModel_Statics::NewProp_FixturePatchListDescriptor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXPixelMappingDMXLibraryViewModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXPixelMappingDMXLibraryViewModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXPixelMappingDMXLibraryViewModel_Statics::ClassParams = {
		&UDMXPixelMappingDMXLibraryViewModel::StaticClass,
		"DMXEditor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXPixelMappingDMXLibraryViewModel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingDMXLibraryViewModel_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingDMXLibraryViewModel_Statics::Class_MetaDataParams), Z_Construct_UClass_UDMXPixelMappingDMXLibraryViewModel_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingDMXLibraryViewModel_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDMXPixelMappingDMXLibraryViewModel()
	{
		if (!Z_Registration_Info_UClass_UDMXPixelMappingDMXLibraryViewModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXPixelMappingDMXLibraryViewModel.OuterSingleton, Z_Construct_UClass_UDMXPixelMappingDMXLibraryViewModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXPixelMappingDMXLibraryViewModel.OuterSingleton;
	}
	template<> DMXPIXELMAPPINGEDITOR_API UClass* StaticClass<UDMXPixelMappingDMXLibraryViewModel>()
	{
		return UDMXPixelMappingDMXLibraryViewModel::StaticClass();
	}
	UDMXPixelMappingDMXLibraryViewModel::UDMXPixelMappingDMXLibraryViewModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXPixelMappingDMXLibraryViewModel);
	UDMXPixelMappingDMXLibraryViewModel::~UDMXPixelMappingDMXLibraryViewModel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingEditor_Private_ViewModels_DMXPixelMappingDMXLibraryViewModel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingEditor_Private_ViewModels_DMXPixelMappingDMXLibraryViewModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXPixelMappingDMXLibraryViewModel, UDMXPixelMappingDMXLibraryViewModel::StaticClass, TEXT("UDMXPixelMappingDMXLibraryViewModel"), &Z_Registration_Info_UClass_UDMXPixelMappingDMXLibraryViewModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXPixelMappingDMXLibraryViewModel), 3324240044U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingEditor_Private_ViewModels_DMXPixelMappingDMXLibraryViewModel_h_1795468749(TEXT("/Script/DMXPixelMappingEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingEditor_Private_ViewModels_DMXPixelMappingDMXLibraryViewModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingEditor_Private_ViewModels_DMXPixelMappingDMXLibraryViewModel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
