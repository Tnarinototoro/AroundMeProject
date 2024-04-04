// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Factories/DMXGDTFImportUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXGDTFImportUI() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DMXEDITOR_API UClass* Z_Construct_UClass_UDMXGDTFImportUI();
	DMXEDITOR_API UClass* Z_Construct_UClass_UDMXGDTFImportUI_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXEditor();
// End Cross Module References
	void UDMXGDTFImportUI::StaticRegisterNativesUDMXGDTFImportUI()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXGDTFImportUI);
	UClass* Z_Construct_UClass_UDMXGDTFImportUI_NoRegister()
	{
		return UDMXGDTFImportUI::StaticClass();
	}
	struct Z_Construct_UClass_UDMXGDTFImportUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSubDirectory_MetaData[];
#endif
		static void NewProp_bUseSubDirectory_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSubDirectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportXML_MetaData[];
#endif
		static void NewProp_bImportXML_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportXML;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportTextures_MetaData[];
#endif
		static void NewProp_bImportTextures_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportTextures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportModels_MetaData[];
#endif
		static void NewProp_bImportModels_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportModels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXGDTFImportUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXGDTFImportUI_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXGDTFImportUI_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/DMXGDTFImportUI.h" },
		{ "ModuleRelativePath", "Private/Factories/DMXGDTFImportUI.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXGDTFImportUI_Statics::NewProp_bUseSubDirectory_MetaData[] = {
		{ "Category", "DMX" },
		{ "ModuleRelativePath", "Private/Factories/DMXGDTFImportUI.h" },
	};
#endif
	void Z_Construct_UClass_UDMXGDTFImportUI_Statics::NewProp_bUseSubDirectory_SetBit(void* Obj)
	{
		((UDMXGDTFImportUI*)Obj)->bUseSubDirectory = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXGDTFImportUI_Statics::NewProp_bUseSubDirectory = { "bUseSubDirectory", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDMXGDTFImportUI), &Z_Construct_UClass_UDMXGDTFImportUI_Statics::NewProp_bUseSubDirectory_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXGDTFImportUI_Statics::NewProp_bUseSubDirectory_MetaData), Z_Construct_UClass_UDMXGDTFImportUI_Statics::NewProp_bUseSubDirectory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXGDTFImportUI_Statics::NewProp_bImportXML_MetaData[] = {
		{ "Category", "DMX" },
		{ "ModuleRelativePath", "Private/Factories/DMXGDTFImportUI.h" },
	};
#endif
	void Z_Construct_UClass_UDMXGDTFImportUI_Statics::NewProp_bImportXML_SetBit(void* Obj)
	{
		((UDMXGDTFImportUI*)Obj)->bImportXML = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXGDTFImportUI_Statics::NewProp_bImportXML = { "bImportXML", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDMXGDTFImportUI), &Z_Construct_UClass_UDMXGDTFImportUI_Statics::NewProp_bImportXML_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXGDTFImportUI_Statics::NewProp_bImportXML_MetaData), Z_Construct_UClass_UDMXGDTFImportUI_Statics::NewProp_bImportXML_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXGDTFImportUI_Statics::NewProp_bImportTextures_MetaData[] = {
		{ "Category", "DMX" },
		{ "ModuleRelativePath", "Private/Factories/DMXGDTFImportUI.h" },
	};
#endif
	void Z_Construct_UClass_UDMXGDTFImportUI_Statics::NewProp_bImportTextures_SetBit(void* Obj)
	{
		((UDMXGDTFImportUI*)Obj)->bImportTextures = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXGDTFImportUI_Statics::NewProp_bImportTextures = { "bImportTextures", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDMXGDTFImportUI), &Z_Construct_UClass_UDMXGDTFImportUI_Statics::NewProp_bImportTextures_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXGDTFImportUI_Statics::NewProp_bImportTextures_MetaData), Z_Construct_UClass_UDMXGDTFImportUI_Statics::NewProp_bImportTextures_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXGDTFImportUI_Statics::NewProp_bImportModels_MetaData[] = {
		{ "Category", "DMX" },
		{ "ModuleRelativePath", "Private/Factories/DMXGDTFImportUI.h" },
	};
#endif
	void Z_Construct_UClass_UDMXGDTFImportUI_Statics::NewProp_bImportModels_SetBit(void* Obj)
	{
		((UDMXGDTFImportUI*)Obj)->bImportModels = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXGDTFImportUI_Statics::NewProp_bImportModels = { "bImportModels", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDMXGDTFImportUI), &Z_Construct_UClass_UDMXGDTFImportUI_Statics::NewProp_bImportModels_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXGDTFImportUI_Statics::NewProp_bImportModels_MetaData), Z_Construct_UClass_UDMXGDTFImportUI_Statics::NewProp_bImportModels_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXGDTFImportUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXGDTFImportUI_Statics::NewProp_bUseSubDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXGDTFImportUI_Statics::NewProp_bImportXML,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXGDTFImportUI_Statics::NewProp_bImportTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXGDTFImportUI_Statics::NewProp_bImportModels,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXGDTFImportUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXGDTFImportUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXGDTFImportUI_Statics::ClassParams = {
		&UDMXGDTFImportUI::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXGDTFImportUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXGDTFImportUI_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXGDTFImportUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UDMXGDTFImportUI_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXGDTFImportUI_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDMXGDTFImportUI()
	{
		if (!Z_Registration_Info_UClass_UDMXGDTFImportUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXGDTFImportUI.OuterSingleton, Z_Construct_UClass_UDMXGDTFImportUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXGDTFImportUI.OuterSingleton;
	}
	template<> DMXEDITOR_API UClass* StaticClass<UDMXGDTFImportUI>()
	{
		return UDMXGDTFImportUI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXGDTFImportUI);
	UDMXGDTFImportUI::~UDMXGDTFImportUI() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Factories_DMXGDTFImportUI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Factories_DMXGDTFImportUI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXGDTFImportUI, UDMXGDTFImportUI::StaticClass, TEXT("UDMXGDTFImportUI"), &Z_Registration_Info_UClass_UDMXGDTFImportUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXGDTFImportUI), 2089088180U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Factories_DMXGDTFImportUI_h_3249114959(TEXT("/Script/DMXEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Factories_DMXGDTFImportUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Factories_DMXGDTFImportUI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
