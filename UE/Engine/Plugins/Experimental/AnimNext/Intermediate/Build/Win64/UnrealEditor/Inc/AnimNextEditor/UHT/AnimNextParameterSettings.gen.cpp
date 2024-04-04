// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Param/AnimNextParameterSettings.h"
#include "Param/ParamType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNextParameterSettings() {}
// Cross Module References
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextParamType();
	ANIMNEXTEDITOR_API UClass* Z_Construct_UClass_UAnimNextParameterSettings();
	ANIMNEXTEDITOR_API UClass* Z_Construct_UClass_UAnimNextParameterSettings_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	UPackage* Z_Construct_UPackage__Script_AnimNextEditor();
// End Cross Module References
	void UAnimNextParameterSettings::StaticRegisterNativesUAnimNextParameterSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNextParameterSettings);
	UClass* Z_Construct_UClass_UAnimNextParameterSettings_NoRegister()
	{
		return UAnimNextParameterSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNextParameterSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastLibrary_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastLibrary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastParameterType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastParameterType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNextParameterSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Param/AnimNextParameterSettings.h" },
		{ "ModuleRelativePath", "Private/Param/AnimNextParameterSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterSettings_Statics::NewProp_LastLibrary_MetaData[] = {
		{ "ModuleRelativePath", "Private/Param/AnimNextParameterSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNextParameterSettings_Statics::NewProp_LastLibrary = { "LastLibrary", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNextParameterSettings, LastLibrary), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterSettings_Statics::NewProp_LastLibrary_MetaData), Z_Construct_UClass_UAnimNextParameterSettings_Statics::NewProp_LastLibrary_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterSettings_Statics::NewProp_LastParameterType_MetaData[] = {
		{ "ModuleRelativePath", "Private/Param/AnimNextParameterSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNextParameterSettings_Statics::NewProp_LastParameterType = { "LastParameterType", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNextParameterSettings, LastParameterType), Z_Construct_UScriptStruct_FAnimNextParamType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterSettings_Statics::NewProp_LastParameterType_MetaData), Z_Construct_UClass_UAnimNextParameterSettings_Statics::NewProp_LastParameterType_MetaData) }; // 2379401833
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNextParameterSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextParameterSettings_Statics::NewProp_LastLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextParameterSettings_Statics::NewProp_LastParameterType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNextParameterSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNextParameterSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNextParameterSettings_Statics::ClassParams = {
		&UAnimNextParameterSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimNextParameterSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNextParameterSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAnimNextParameterSettings()
	{
		if (!Z_Registration_Info_UClass_UAnimNextParameterSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNextParameterSettings.OuterSingleton, Z_Construct_UClass_UAnimNextParameterSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNextParameterSettings.OuterSingleton;
	}
	template<> ANIMNEXTEDITOR_API UClass* StaticClass<UAnimNextParameterSettings>()
	{
		return UAnimNextParameterSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNextParameterSettings);
	UAnimNextParameterSettings::~UAnimNextParameterSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextEditor_Private_Param_AnimNextParameterSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextEditor_Private_Param_AnimNextParameterSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNextParameterSettings, UAnimNextParameterSettings::StaticClass, TEXT("UAnimNextParameterSettings"), &Z_Registration_Info_UClass_UAnimNextParameterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNextParameterSettings), 3511062741U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextEditor_Private_Param_AnimNextParameterSettings_h_1375775375(TEXT("/Script/AnimNextEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextEditor_Private_Param_AnimNextParameterSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextEditor_Private_Param_AnimNextParameterSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
