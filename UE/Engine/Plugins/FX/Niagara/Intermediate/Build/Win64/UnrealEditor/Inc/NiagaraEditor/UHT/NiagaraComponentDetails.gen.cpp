// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Customizations/NiagaraComponentDetails.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraComponentDetails() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraObjectAssetHelper();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraObjectAssetHelper_NoRegister();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEnumToByteHelper();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraEnumToByteHelper;
class UScriptStruct* FNiagaraEnumToByteHelper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraEnumToByteHelper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraEnumToByteHelper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEnumToByteHelper, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraEnumToByteHelper"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraEnumToByteHelper.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraEnumToByteHelper>()
{
	return FNiagaraEnumToByteHelper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraEnumToByteHelper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEnumToByteHelper_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Customizations/NiagaraComponentDetails.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraEnumToByteHelper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraEnumToByteHelper>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEnumToByteHelper_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Private/Customizations/NiagaraComponentDetails.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraEnumToByteHelper_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEnumToByteHelper, Value), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEnumToByteHelper_Statics::NewProp_Value_MetaData), Z_Construct_UScriptStruct_FNiagaraEnumToByteHelper_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraEnumToByteHelper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEnumToByteHelper_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraEnumToByteHelper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"NiagaraEnumToByteHelper",
		Z_Construct_UScriptStruct_FNiagaraEnumToByteHelper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEnumToByteHelper_Statics::PropPointers),
		sizeof(FNiagaraEnumToByteHelper),
		alignof(FNiagaraEnumToByteHelper),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEnumToByteHelper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraEnumToByteHelper_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEnumToByteHelper_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEnumToByteHelper()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraEnumToByteHelper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraEnumToByteHelper.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraEnumToByteHelper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraEnumToByteHelper.InnerSingleton;
	}
	void UNiagaraObjectAssetHelper::StaticRegisterNativesUNiagaraObjectAssetHelper()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraObjectAssetHelper);
	UClass* Z_Construct_UClass_UNiagaraObjectAssetHelper_NoRegister()
	{
		return UNiagaraObjectAssetHelper::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraObjectAssetHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Path;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraObjectAssetHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraObjectAssetHelper_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraObjectAssetHelper_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Customizations/NiagaraComponentDetails.h" },
		{ "ModuleRelativePath", "Private/Customizations/NiagaraComponentDetails.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraObjectAssetHelper_Statics::NewProp_Path_MetaData[] = {
		{ "Category", "Asset" },
		{ "Comment", "/** We are customizing the instance property metadata for this to restrict the allowed classes in the UI */" },
		{ "ModuleRelativePath", "Private/Customizations/NiagaraComponentDetails.h" },
		{ "ToolTip", "We are customizing the instance property metadata for this to restrict the allowed classes in the UI" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraObjectAssetHelper_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraObjectAssetHelper, Path), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraObjectAssetHelper_Statics::NewProp_Path_MetaData), Z_Construct_UClass_UNiagaraObjectAssetHelper_Statics::NewProp_Path_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraObjectAssetHelper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraObjectAssetHelper_Statics::NewProp_Path,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraObjectAssetHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraObjectAssetHelper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraObjectAssetHelper_Statics::ClassParams = {
		&UNiagaraObjectAssetHelper::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraObjectAssetHelper_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraObjectAssetHelper_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraObjectAssetHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraObjectAssetHelper_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraObjectAssetHelper_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNiagaraObjectAssetHelper()
	{
		if (!Z_Registration_Info_UClass_UNiagaraObjectAssetHelper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraObjectAssetHelper.OuterSingleton, Z_Construct_UClass_UNiagaraObjectAssetHelper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraObjectAssetHelper.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraObjectAssetHelper>()
	{
		return UNiagaraObjectAssetHelper::StaticClass();
	}
	UNiagaraObjectAssetHelper::UNiagaraObjectAssetHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraObjectAssetHelper);
	UNiagaraObjectAssetHelper::~UNiagaraObjectAssetHelper() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraComponentDetails_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraComponentDetails_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraEnumToByteHelper::StaticStruct, Z_Construct_UScriptStruct_FNiagaraEnumToByteHelper_Statics::NewStructOps, TEXT("NiagaraEnumToByteHelper"), &Z_Registration_Info_UScriptStruct_NiagaraEnumToByteHelper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraEnumToByteHelper), 2474069869U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraComponentDetails_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraObjectAssetHelper, UNiagaraObjectAssetHelper::StaticClass, TEXT("UNiagaraObjectAssetHelper"), &Z_Registration_Info_UClass_UNiagaraObjectAssetHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraObjectAssetHelper), 3901409832U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraComponentDetails_h_1399687073(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraComponentDetails_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraComponentDetails_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraComponentDetails_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraComponentDetails_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
