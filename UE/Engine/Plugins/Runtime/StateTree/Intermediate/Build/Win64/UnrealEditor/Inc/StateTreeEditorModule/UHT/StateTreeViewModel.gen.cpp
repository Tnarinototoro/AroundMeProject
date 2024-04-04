// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/StateTreeViewModel.h"
#include "StateTreePropertyBindings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeViewModel() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	STATETREEEDITORMODULE_API UClass* Z_Construct_UClass_UStateTreeClipboardBindings();
	STATETREEEDITORMODULE_API UClass* Z_Construct_UClass_UStateTreeClipboardBindings_NoRegister();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyPathBinding();
	UPackage* Z_Construct_UPackage__Script_StateTreeEditorModule();
// End Cross Module References
	void UStateTreeClipboardBindings::StaticRegisterNativesUStateTreeClipboardBindings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStateTreeClipboardBindings);
	UClass* Z_Construct_UClass_UStateTreeClipboardBindings_NoRegister()
	{
		return UStateTreeClipboardBindings::StaticClass();
	}
	struct Z_Construct_UClass_UStateTreeClipboardBindings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bindings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStateTreeClipboardBindings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeEditorModule,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeClipboardBindings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeClipboardBindings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Helper class to allow to copy bindings into clipboard. */" },
		{ "IncludePath", "StateTreeViewModel.h" },
		{ "ModuleRelativePath", "Private/StateTreeViewModel.h" },
		{ "ToolTip", "Helper class to allow to copy bindings into clipboard." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTreeClipboardBindings_Statics::NewProp_Bindings_Inner = { "Bindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStateTreePropertyPathBinding, METADATA_PARAMS(0, nullptr) }; // 3907025818
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeClipboardBindings_Statics::NewProp_Bindings_MetaData[] = {
		{ "ModuleRelativePath", "Private/StateTreeViewModel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStateTreeClipboardBindings_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTreeClipboardBindings, Bindings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeClipboardBindings_Statics::NewProp_Bindings_MetaData), Z_Construct_UClass_UStateTreeClipboardBindings_Statics::NewProp_Bindings_MetaData) }; // 3907025818
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStateTreeClipboardBindings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeClipboardBindings_Statics::NewProp_Bindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeClipboardBindings_Statics::NewProp_Bindings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStateTreeClipboardBindings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateTreeClipboardBindings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStateTreeClipboardBindings_Statics::ClassParams = {
		&UStateTreeClipboardBindings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStateTreeClipboardBindings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeClipboardBindings_Statics::PropPointers),
		0,
		0x011000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeClipboardBindings_Statics::Class_MetaDataParams), Z_Construct_UClass_UStateTreeClipboardBindings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeClipboardBindings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UStateTreeClipboardBindings()
	{
		if (!Z_Registration_Info_UClass_UStateTreeClipboardBindings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStateTreeClipboardBindings.OuterSingleton, Z_Construct_UClass_UStateTreeClipboardBindings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStateTreeClipboardBindings.OuterSingleton;
	}
	template<> STATETREEEDITORMODULE_API UClass* StaticClass<UStateTreeClipboardBindings>()
	{
		return UStateTreeClipboardBindings::StaticClass();
	}
	UStateTreeClipboardBindings::UStateTreeClipboardBindings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStateTreeClipboardBindings);
	UStateTreeClipboardBindings::~UStateTreeClipboardBindings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Private_StateTreeViewModel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Private_StateTreeViewModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStateTreeClipboardBindings, UStateTreeClipboardBindings::StaticClass, TEXT("UStateTreeClipboardBindings"), &Z_Registration_Info_UClass_UStateTreeClipboardBindings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStateTreeClipboardBindings), 339268265U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Private_StateTreeViewModel_h_2015274816(TEXT("/Script/StateTreeEditorModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Private_StateTreeViewModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Private_StateTreeViewModel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
