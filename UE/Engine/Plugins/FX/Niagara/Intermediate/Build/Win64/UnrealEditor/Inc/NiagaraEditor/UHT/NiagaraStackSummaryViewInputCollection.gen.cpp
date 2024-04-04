// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewModels/Stack/NiagaraStackSummaryViewInputCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStackSummaryViewInputCollection() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackSummaryViewCollection();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackSummaryViewCollection_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackValueCollection();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraStackSummaryViewCollection::StaticRegisterNativesUNiagaraStackSummaryViewCollection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStackSummaryViewCollection);
	UClass* Z_Construct_UClass_UNiagaraStackSummaryViewCollection_NoRegister()
	{
		return UNiagaraStackSummaryViewCollection::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraStackSummaryViewCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraStackSummaryViewCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraStackValueCollection,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackSummaryViewCollection_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackSummaryViewCollection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/Stack/NiagaraStackSummaryViewInputCollection.h" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackSummaryViewInputCollection.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraStackSummaryViewCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStackSummaryViewCollection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStackSummaryViewCollection_Statics::ClassParams = {
		&UNiagaraStackSummaryViewCollection::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackSummaryViewCollection_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraStackSummaryViewCollection_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UNiagaraStackSummaryViewCollection()
	{
		if (!Z_Registration_Info_UClass_UNiagaraStackSummaryViewCollection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStackSummaryViewCollection.OuterSingleton, Z_Construct_UClass_UNiagaraStackSummaryViewCollection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraStackSummaryViewCollection.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraStackSummaryViewCollection>()
	{
		return UNiagaraStackSummaryViewCollection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStackSummaryViewCollection);
	UNiagaraStackSummaryViewCollection::~UNiagaraStackSummaryViewCollection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackSummaryViewInputCollection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackSummaryViewInputCollection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStackSummaryViewCollection, UNiagaraStackSummaryViewCollection::StaticClass, TEXT("UNiagaraStackSummaryViewCollection"), &Z_Registration_Info_UClass_UNiagaraStackSummaryViewCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStackSummaryViewCollection), 2968381786U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackSummaryViewInputCollection_h_2028211086(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackSummaryViewInputCollection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackSummaryViewInputCollection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
