// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraDataChannelAssetFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataChannelAssetFactoryNew() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraDataChannelAssetFactoryNew();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraDataChannelAssetFactoryNew_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraDataChannelAssetFactoryNew::StaticRegisterNativesUNiagaraDataChannelAssetFactoryNew()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataChannelAssetFactoryNew);
	UClass* Z_Construct_UClass_UNiagaraDataChannelAssetFactoryNew_NoRegister()
	{
		return UNiagaraDataChannelAssetFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataChannelAssetFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataChannelAssetFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelAssetFactoryNew_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannelAssetFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "NiagaraDataChannelAssetFactoryNew.h" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelAssetFactoryNew.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataChannelAssetFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataChannelAssetFactoryNew>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataChannelAssetFactoryNew_Statics::ClassParams = {
		&UNiagaraDataChannelAssetFactoryNew::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelAssetFactoryNew_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataChannelAssetFactoryNew_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UNiagaraDataChannelAssetFactoryNew()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataChannelAssetFactoryNew.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataChannelAssetFactoryNew.OuterSingleton, Z_Construct_UClass_UNiagaraDataChannelAssetFactoryNew_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataChannelAssetFactoryNew.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraDataChannelAssetFactoryNew>()
	{
		return UNiagaraDataChannelAssetFactoryNew::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataChannelAssetFactoryNew);
	UNiagaraDataChannelAssetFactoryNew::~UNiagaraDataChannelAssetFactoryNew() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraDataChannelAssetFactoryNew_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraDataChannelAssetFactoryNew_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataChannelAssetFactoryNew, UNiagaraDataChannelAssetFactoryNew::StaticClass, TEXT("UNiagaraDataChannelAssetFactoryNew"), &Z_Registration_Info_UClass_UNiagaraDataChannelAssetFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataChannelAssetFactoryNew), 3476182896U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraDataChannelAssetFactoryNew_h_1678832119(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraDataChannelAssetFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraDataChannelAssetFactoryNew_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
