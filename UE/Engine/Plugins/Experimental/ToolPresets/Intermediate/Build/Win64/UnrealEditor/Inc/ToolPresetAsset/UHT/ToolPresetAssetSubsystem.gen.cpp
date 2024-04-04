// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolPresetAssetSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolPresetAssetSubsystem() {}
// Cross Module References
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	TOOLPRESETASSET_API UClass* Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_NoRegister();
	TOOLPRESETASSET_API UClass* Z_Construct_UClass_UToolPresetAssetSubsystem();
	TOOLPRESETASSET_API UClass* Z_Construct_UClass_UToolPresetAssetSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ToolPresetAsset();
// End Cross Module References
	void UToolPresetAssetSubsystem::StaticRegisterNativesUToolPresetAssetSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToolPresetAssetSubsystem);
	UClass* Z_Construct_UClass_UToolPresetAssetSubsystem_NoRegister()
	{
		return UToolPresetAssetSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UToolPresetAssetSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCollection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultCollection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UToolPresetAssetSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_ToolPresetAsset,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToolPresetAssetSubsystem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolPresetAssetSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Using an editor subsystem allows us to make sure that we have a default preset asset whenever the editor exists\n *  (and to avoid accidentally trying to make one when it doesn't, such as when running cooking scripts).\n */" },
		{ "IncludePath", "ToolPresetAssetSubsystem.h" },
		{ "ModuleRelativePath", "Public/ToolPresetAssetSubsystem.h" },
		{ "ToolTip", "Using an editor subsystem allows us to make sure that we have a default preset asset whenever the editor exists\n (and to avoid accidentally trying to make one when it doesn't, such as when running cooking scripts)." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolPresetAssetSubsystem_Statics::NewProp_DefaultCollection_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolPresetAssetSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UToolPresetAssetSubsystem_Statics::NewProp_DefaultCollection = { "DefaultCollection", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UToolPresetAssetSubsystem, DefaultCollection), Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UToolPresetAssetSubsystem_Statics::NewProp_DefaultCollection_MetaData), Z_Construct_UClass_UToolPresetAssetSubsystem_Statics::NewProp_DefaultCollection_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UToolPresetAssetSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolPresetAssetSubsystem_Statics::NewProp_DefaultCollection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UToolPresetAssetSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToolPresetAssetSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UToolPresetAssetSubsystem_Statics::ClassParams = {
		&UToolPresetAssetSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UToolPresetAssetSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UToolPresetAssetSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UToolPresetAssetSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UToolPresetAssetSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToolPresetAssetSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UToolPresetAssetSubsystem()
	{
		if (!Z_Registration_Info_UClass_UToolPresetAssetSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToolPresetAssetSubsystem.OuterSingleton, Z_Construct_UClass_UToolPresetAssetSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UToolPresetAssetSubsystem.OuterSingleton;
	}
	template<> TOOLPRESETASSET_API UClass* StaticClass<UToolPresetAssetSubsystem>()
	{
		return UToolPresetAssetSubsystem::StaticClass();
	}
	UToolPresetAssetSubsystem::UToolPresetAssetSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UToolPresetAssetSubsystem);
	UToolPresetAssetSubsystem::~UToolPresetAssetSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ToolPresets_Source_ToolPresetAsset_Public_ToolPresetAssetSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ToolPresets_Source_ToolPresetAsset_Public_ToolPresetAssetSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UToolPresetAssetSubsystem, UToolPresetAssetSubsystem::StaticClass, TEXT("UToolPresetAssetSubsystem"), &Z_Registration_Info_UClass_UToolPresetAssetSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToolPresetAssetSubsystem), 581511021U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ToolPresets_Source_ToolPresetAsset_Public_ToolPresetAssetSubsystem_h_1821559858(TEXT("/Script/ToolPresetAsset"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ToolPresets_Source_ToolPresetAsset_Public_ToolPresetAssetSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ToolPresets_Source_ToolPresetAsset_Public_ToolPresetAssetSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
