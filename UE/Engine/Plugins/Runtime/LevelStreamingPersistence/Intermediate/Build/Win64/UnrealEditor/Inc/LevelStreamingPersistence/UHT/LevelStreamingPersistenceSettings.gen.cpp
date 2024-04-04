// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelStreamingPersistenceSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelStreamingPersistenceSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LEVELSTREAMINGPERSISTENCE_API UClass* Z_Construct_UClass_ULevelStreamingPersistenceSettings();
	LEVELSTREAMINGPERSISTENCE_API UClass* Z_Construct_UClass_ULevelStreamingPersistenceSettings_NoRegister();
	LEVELSTREAMINGPERSISTENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelStreamingPersistentProperty();
	UPackage* Z_Construct_UPackage__Script_LevelStreamingPersistence();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelStreamingPersistentProperty;
class UScriptStruct* FLevelStreamingPersistentProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelStreamingPersistentProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelStreamingPersistentProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelStreamingPersistentProperty, (UObject*)Z_Construct_UPackage__Script_LevelStreamingPersistence(), TEXT("LevelStreamingPersistentProperty"));
	}
	return Z_Registration_Info_UScriptStruct_LevelStreamingPersistentProperty.OuterSingleton;
}
template<> LEVELSTREAMINGPERSISTENCE_API UScriptStruct* StaticStruct<FLevelStreamingPersistentProperty>()
{
	return FLevelStreamingPersistentProperty::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLevelStreamingPersistentProperty_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPublic_MetaData[];
#endif
		static void NewProp_bIsPublic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPublic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelStreamingPersistentProperty_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelStreamingPersistenceSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelStreamingPersistentProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelStreamingPersistentProperty>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelStreamingPersistentProperty_Statics::NewProp_Path_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelStreamingPersistenceSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelStreamingPersistentProperty_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLevelStreamingPersistentProperty, Path), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelStreamingPersistentProperty_Statics::NewProp_Path_MetaData), Z_Construct_UScriptStruct_FLevelStreamingPersistentProperty_Statics::NewProp_Path_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelStreamingPersistentProperty_Statics::NewProp_bIsPublic_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelStreamingPersistenceSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelStreamingPersistentProperty_Statics::NewProp_bIsPublic_SetBit(void* Obj)
	{
		((FLevelStreamingPersistentProperty*)Obj)->bIsPublic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelStreamingPersistentProperty_Statics::NewProp_bIsPublic = { "bIsPublic", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLevelStreamingPersistentProperty), &Z_Construct_UScriptStruct_FLevelStreamingPersistentProperty_Statics::NewProp_bIsPublic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelStreamingPersistentProperty_Statics::NewProp_bIsPublic_MetaData), Z_Construct_UScriptStruct_FLevelStreamingPersistentProperty_Statics::NewProp_bIsPublic_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelStreamingPersistentProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelStreamingPersistentProperty_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelStreamingPersistentProperty_Statics::NewProp_bIsPublic,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelStreamingPersistentProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelStreamingPersistence,
		nullptr,
		&NewStructOps,
		"LevelStreamingPersistentProperty",
		Z_Construct_UScriptStruct_FLevelStreamingPersistentProperty_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelStreamingPersistentProperty_Statics::PropPointers),
		sizeof(FLevelStreamingPersistentProperty),
		alignof(FLevelStreamingPersistentProperty),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelStreamingPersistentProperty_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLevelStreamingPersistentProperty_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelStreamingPersistentProperty_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLevelStreamingPersistentProperty()
	{
		if (!Z_Registration_Info_UScriptStruct_LevelStreamingPersistentProperty.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelStreamingPersistentProperty.InnerSingleton, Z_Construct_UScriptStruct_FLevelStreamingPersistentProperty_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LevelStreamingPersistentProperty.InnerSingleton;
	}
	void ULevelStreamingPersistenceSettings::StaticRegisterNativesULevelStreamingPersistenceSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelStreamingPersistenceSettings);
	UClass* Z_Construct_UClass_ULevelStreamingPersistenceSettings_NoRegister()
	{
		return ULevelStreamingPersistenceSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULevelStreamingPersistenceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Properties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Properties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelStreamingPersistenceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelStreamingPersistence,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingPersistenceSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreamingPersistenceSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelStreamingPersistenceSettings.h" },
		{ "ModuleRelativePath", "Public/LevelStreamingPersistenceSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelStreamingPersistenceSettings_Statics::NewProp_Properties_Inner = { "Properties", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLevelStreamingPersistentProperty, METADATA_PARAMS(0, nullptr) }; // 173408282
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreamingPersistenceSettings_Statics::NewProp_Properties_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelStreamingPersistenceSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelStreamingPersistenceSettings_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelStreamingPersistenceSettings, Properties), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingPersistenceSettings_Statics::NewProp_Properties_MetaData), Z_Construct_UClass_ULevelStreamingPersistenceSettings_Statics::NewProp_Properties_MetaData) }; // 173408282
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelStreamingPersistenceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreamingPersistenceSettings_Statics::NewProp_Properties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreamingPersistenceSettings_Statics::NewProp_Properties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelStreamingPersistenceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelStreamingPersistenceSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelStreamingPersistenceSettings_Statics::ClassParams = {
		&ULevelStreamingPersistenceSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULevelStreamingPersistenceSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingPersistenceSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingPersistenceSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelStreamingPersistenceSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingPersistenceSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULevelStreamingPersistenceSettings()
	{
		if (!Z_Registration_Info_UClass_ULevelStreamingPersistenceSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelStreamingPersistenceSettings.OuterSingleton, Z_Construct_UClass_ULevelStreamingPersistenceSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelStreamingPersistenceSettings.OuterSingleton;
	}
	template<> LEVELSTREAMINGPERSISTENCE_API UClass* StaticClass<ULevelStreamingPersistenceSettings>()
	{
		return ULevelStreamingPersistenceSettings::StaticClass();
	}
	ULevelStreamingPersistenceSettings::ULevelStreamingPersistenceSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelStreamingPersistenceSettings);
	ULevelStreamingPersistenceSettings::~ULevelStreamingPersistenceSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LevelStreamingPersistence_Source_LevelStreamingPersistence_Public_LevelStreamingPersistenceSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LevelStreamingPersistence_Source_LevelStreamingPersistence_Public_LevelStreamingPersistenceSettings_h_Statics::ScriptStructInfo[] = {
		{ FLevelStreamingPersistentProperty::StaticStruct, Z_Construct_UScriptStruct_FLevelStreamingPersistentProperty_Statics::NewStructOps, TEXT("LevelStreamingPersistentProperty"), &Z_Registration_Info_UScriptStruct_LevelStreamingPersistentProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelStreamingPersistentProperty), 173408282U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LevelStreamingPersistence_Source_LevelStreamingPersistence_Public_LevelStreamingPersistenceSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelStreamingPersistenceSettings, ULevelStreamingPersistenceSettings::StaticClass, TEXT("ULevelStreamingPersistenceSettings"), &Z_Registration_Info_UClass_ULevelStreamingPersistenceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelStreamingPersistenceSettings), 3540854228U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LevelStreamingPersistence_Source_LevelStreamingPersistence_Public_LevelStreamingPersistenceSettings_h_651103025(TEXT("/Script/LevelStreamingPersistence"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LevelStreamingPersistence_Source_LevelStreamingPersistence_Public_LevelStreamingPersistenceSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LevelStreamingPersistence_Source_LevelStreamingPersistence_Public_LevelStreamingPersistenceSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LevelStreamingPersistence_Source_LevelStreamingPersistence_Public_LevelStreamingPersistenceSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LevelStreamingPersistence_Source_LevelStreamingPersistence_Public_LevelStreamingPersistenceSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
