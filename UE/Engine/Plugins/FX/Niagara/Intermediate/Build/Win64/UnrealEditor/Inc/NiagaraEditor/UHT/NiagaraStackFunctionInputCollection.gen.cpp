// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewModels/Stack/NiagaraStackFunctionInputCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStackFunctionInputCollection() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackFunctionInputCollection();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackFunctionInputCollection_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackItemContent();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackValueCollection();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackValueCollection_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraStackValueCollection::StaticRegisterNativesUNiagaraStackValueCollection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStackValueCollection);
	UClass* Z_Construct_UClass_UNiagaraStackValueCollection_NoRegister()
	{
		return UNiagaraStackValueCollection::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraStackValueCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraStackValueCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraStackItemContent,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackValueCollection_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackValueCollection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A base class for value collections. Values can be all kinds of input data, such as module inputs, object properties etc.\n * This has base functionality for sections.\n */" },
		{ "IncludePath", "ViewModels/Stack/NiagaraStackFunctionInputCollection.h" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackFunctionInputCollection.h" },
		{ "ToolTip", "A base class for value collections. Values can be all kinds of input data, such as module inputs, object properties etc.\nThis has base functionality for sections." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraStackValueCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStackValueCollection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStackValueCollection_Statics::ClassParams = {
		&UNiagaraStackValueCollection::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackValueCollection_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraStackValueCollection_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UNiagaraStackValueCollection()
	{
		if (!Z_Registration_Info_UClass_UNiagaraStackValueCollection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStackValueCollection.OuterSingleton, Z_Construct_UClass_UNiagaraStackValueCollection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraStackValueCollection.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraStackValueCollection>()
	{
		return UNiagaraStackValueCollection::StaticClass();
	}
	UNiagaraStackValueCollection::UNiagaraStackValueCollection() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStackValueCollection);
	UNiagaraStackValueCollection::~UNiagaraStackValueCollection() {}
	void UNiagaraStackFunctionInputCollection::StaticRegisterNativesUNiagaraStackFunctionInputCollection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStackFunctionInputCollection);
	UClass* Z_Construct_UClass_UNiagaraStackFunctionInputCollection_NoRegister()
	{
		return UNiagaraStackFunctionInputCollection::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraStackFunctionInputCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraStackFunctionInputCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraStackValueCollection,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackFunctionInputCollection_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackFunctionInputCollection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/Stack/NiagaraStackFunctionInputCollection.h" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackFunctionInputCollection.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraStackFunctionInputCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStackFunctionInputCollection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStackFunctionInputCollection_Statics::ClassParams = {
		&UNiagaraStackFunctionInputCollection::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackFunctionInputCollection_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraStackFunctionInputCollection_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UNiagaraStackFunctionInputCollection()
	{
		if (!Z_Registration_Info_UClass_UNiagaraStackFunctionInputCollection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStackFunctionInputCollection.OuterSingleton, Z_Construct_UClass_UNiagaraStackFunctionInputCollection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraStackFunctionInputCollection.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraStackFunctionInputCollection>()
	{
		return UNiagaraStackFunctionInputCollection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStackFunctionInputCollection);
	UNiagaraStackFunctionInputCollection::~UNiagaraStackFunctionInputCollection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackFunctionInputCollection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackFunctionInputCollection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStackValueCollection, UNiagaraStackValueCollection::StaticClass, TEXT("UNiagaraStackValueCollection"), &Z_Registration_Info_UClass_UNiagaraStackValueCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStackValueCollection), 3322202531U) },
		{ Z_Construct_UClass_UNiagaraStackFunctionInputCollection, UNiagaraStackFunctionInputCollection::StaticClass, TEXT("UNiagaraStackFunctionInputCollection"), &Z_Registration_Info_UClass_UNiagaraStackFunctionInputCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStackFunctionInputCollection), 2617968734U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackFunctionInputCollection_h_3414233772(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackFunctionInputCollection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackFunctionInputCollection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
