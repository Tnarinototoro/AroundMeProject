// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Commandlets/NiagaraScriptValidationCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraScriptValidationCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraScriptValidationCommandlet();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraScriptValidationCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraScriptValidationCommandlet::StaticRegisterNativesUNiagaraScriptValidationCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraScriptValidationCommandlet);
	UClass* Z_Construct_UClass_UNiagaraScriptValidationCommandlet_NoRegister()
	{
		return UNiagaraScriptValidationCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraScriptValidationCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraScriptValidationCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScriptValidationCommandlet_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScriptValidationCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/NiagaraScriptValidationCommandlet.h" },
		{ "ModuleRelativePath", "Public/Commandlets/NiagaraScriptValidationCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraScriptValidationCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraScriptValidationCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraScriptValidationCommandlet_Statics::ClassParams = {
		&UNiagaraScriptValidationCommandlet::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScriptValidationCommandlet_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraScriptValidationCommandlet_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UNiagaraScriptValidationCommandlet()
	{
		if (!Z_Registration_Info_UClass_UNiagaraScriptValidationCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraScriptValidationCommandlet.OuterSingleton, Z_Construct_UClass_UNiagaraScriptValidationCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraScriptValidationCommandlet.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraScriptValidationCommandlet>()
	{
		return UNiagaraScriptValidationCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraScriptValidationCommandlet);
	UNiagaraScriptValidationCommandlet::~UNiagaraScriptValidationCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraScriptValidationCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraScriptValidationCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraScriptValidationCommandlet, UNiagaraScriptValidationCommandlet::StaticClass, TEXT("UNiagaraScriptValidationCommandlet"), &Z_Registration_Info_UClass_UNiagaraScriptValidationCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraScriptValidationCommandlet), 3408768538U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraScriptValidationCommandlet_h_3675479600(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraScriptValidationCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraScriptValidationCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
