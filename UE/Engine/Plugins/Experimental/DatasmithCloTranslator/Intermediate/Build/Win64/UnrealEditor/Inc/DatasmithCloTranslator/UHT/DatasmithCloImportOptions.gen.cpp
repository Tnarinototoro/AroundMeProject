// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithCloImportOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithCloImportOptions() {}
// Cross Module References
	DATASMITHCLOTRANSLATOR_API UClass* Z_Construct_UClass_UDatasmithCloImportOptions();
	DATASMITHCLOTRANSLATOR_API UClass* Z_Construct_UClass_UDatasmithCloImportOptions_NoRegister();
	DATASMITHCLOTRANSLATOR_API UScriptStruct* Z_Construct_UScriptStruct_FCloOptions();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithOptionsBase();
	UPackage* Z_Construct_UPackage__Script_DatasmithCloTranslator();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CloOptions;
class UScriptStruct* FCloOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CloOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CloOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloOptions, (UObject*)Z_Construct_UPackage__Script_DatasmithCloTranslator(), TEXT("CloOptions"));
	}
	return Z_Registration_Info_UScriptStruct_CloOptions.OuterSingleton;
}
template<> DATASMITHCLOTRANSLATOR_API UScriptStruct* StaticStruct<FCloOptions>()
{
	return FCloOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCloOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateClothStaticMesh_MetaData[];
#endif
		static void NewProp_bGenerateClothStaticMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateClothStaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGeneratePerPanel2DMesh_MetaData[];
#endif
		static void NewProp_bGeneratePerPanel2DMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGeneratePerPanel2DMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateClothActor_MetaData[];
#endif
		static void NewProp_bGenerateClothActor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateClothActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPerPanelMaterial_MetaData[];
#endif
		static void NewProp_bPerPanelMaterial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPerPanelMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipPanelsWithoutPhysicsProperties_MetaData[];
#endif
		static void NewProp_bSkipPanelsWithoutPhysicsProperties_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipPanelsWithoutPhysicsProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DatasmithCloImportOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCloOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloOptions_Statics::NewProp_bGenerateClothStaticMesh_MetaData[] = {
		{ "Category", "Clo" },
		{ "ModuleRelativePath", "Public/DatasmithCloImportOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCloOptions_Statics::NewProp_bGenerateClothStaticMesh_SetBit(void* Obj)
	{
		((FCloOptions*)Obj)->bGenerateClothStaticMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCloOptions_Statics::NewProp_bGenerateClothStaticMesh = { "bGenerateClothStaticMesh", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCloOptions), &Z_Construct_UScriptStruct_FCloOptions_Statics::NewProp_bGenerateClothStaticMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloOptions_Statics::NewProp_bGenerateClothStaticMesh_MetaData), Z_Construct_UScriptStruct_FCloOptions_Statics::NewProp_bGenerateClothStaticMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloOptions_Statics::NewProp_bGeneratePerPanel2DMesh_MetaData[] = {
		{ "Category", "Clo" },
		{ "ModuleRelativePath", "Public/DatasmithCloImportOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCloOptions_Statics::NewProp_bGeneratePerPanel2DMesh_SetBit(void* Obj)
	{
		((FCloOptions*)Obj)->bGeneratePerPanel2DMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCloOptions_Statics::NewProp_bGeneratePerPanel2DMesh = { "bGeneratePerPanel2DMesh", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCloOptions), &Z_Construct_UScriptStruct_FCloOptions_Statics::NewProp_bGeneratePerPanel2DMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloOptions_Statics::NewProp_bGeneratePerPanel2DMesh_MetaData), Z_Construct_UScriptStruct_FCloOptions_Statics::NewProp_bGeneratePerPanel2DMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloOptions_Statics::NewProp_bGenerateClothActor_MetaData[] = {
		{ "Category", "Clo" },
		{ "ModuleRelativePath", "Public/DatasmithCloImportOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCloOptions_Statics::NewProp_bGenerateClothActor_SetBit(void* Obj)
	{
		((FCloOptions*)Obj)->bGenerateClothActor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCloOptions_Statics::NewProp_bGenerateClothActor = { "bGenerateClothActor", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCloOptions), &Z_Construct_UScriptStruct_FCloOptions_Statics::NewProp_bGenerateClothActor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloOptions_Statics::NewProp_bGenerateClothActor_MetaData), Z_Construct_UScriptStruct_FCloOptions_Statics::NewProp_bGenerateClothActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloOptions_Statics::NewProp_bPerPanelMaterial_MetaData[] = {
		{ "Category", "Clo" },
		{ "ModuleRelativePath", "Public/DatasmithCloImportOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCloOptions_Statics::NewProp_bPerPanelMaterial_SetBit(void* Obj)
	{
		((FCloOptions*)Obj)->bPerPanelMaterial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCloOptions_Statics::NewProp_bPerPanelMaterial = { "bPerPanelMaterial", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCloOptions), &Z_Construct_UScriptStruct_FCloOptions_Statics::NewProp_bPerPanelMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloOptions_Statics::NewProp_bPerPanelMaterial_MetaData), Z_Construct_UScriptStruct_FCloOptions_Statics::NewProp_bPerPanelMaterial_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloOptions_Statics::NewProp_bSkipPanelsWithoutPhysicsProperties_MetaData[] = {
		{ "Category", "Clo" },
		{ "ModuleRelativePath", "Public/DatasmithCloImportOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCloOptions_Statics::NewProp_bSkipPanelsWithoutPhysicsProperties_SetBit(void* Obj)
	{
		((FCloOptions*)Obj)->bSkipPanelsWithoutPhysicsProperties = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCloOptions_Statics::NewProp_bSkipPanelsWithoutPhysicsProperties = { "bSkipPanelsWithoutPhysicsProperties", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCloOptions), &Z_Construct_UScriptStruct_FCloOptions_Statics::NewProp_bSkipPanelsWithoutPhysicsProperties_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloOptions_Statics::NewProp_bSkipPanelsWithoutPhysicsProperties_MetaData), Z_Construct_UScriptStruct_FCloOptions_Statics::NewProp_bSkipPanelsWithoutPhysicsProperties_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloOptions_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Clo" },
		{ "ModuleRelativePath", "Public/DatasmithCloImportOptions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCloOptions_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloOptions, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloOptions_Statics::NewProp_Scale_MetaData), Z_Construct_UScriptStruct_FCloOptions_Statics::NewProp_Scale_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloOptions_Statics::NewProp_bGenerateClothStaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloOptions_Statics::NewProp_bGeneratePerPanel2DMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloOptions_Statics::NewProp_bGenerateClothActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloOptions_Statics::NewProp_bPerPanelMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloOptions_Statics::NewProp_bSkipPanelsWithoutPhysicsProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloOptions_Statics::NewProp_Scale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithCloTranslator,
		nullptr,
		&NewStructOps,
		"CloOptions",
		Z_Construct_UScriptStruct_FCloOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloOptions_Statics::PropPointers),
		sizeof(FCloOptions),
		alignof(FCloOptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCloOptions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloOptions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCloOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_CloOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CloOptions.InnerSingleton, Z_Construct_UScriptStruct_FCloOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CloOptions.InnerSingleton;
	}
	void UDatasmithCloImportOptions::StaticRegisterNativesUDatasmithCloImportOptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithCloImportOptions);
	UClass* Z_Construct_UClass_UDatasmithCloImportOptions_NoRegister()
	{
		return UDatasmithCloImportOptions::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithCloImportOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithCloImportOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithOptionsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithCloTranslator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCloImportOptions_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithCloImportOptions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DatasmithCloImportOptions.h" },
		{ "ModuleRelativePath", "Public/DatasmithCloImportOptions.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithCloImportOptions_Statics::NewProp_Options_MetaData[] = {
		{ "Category", "Clo" },
		{ "ModuleRelativePath", "Public/DatasmithCloImportOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithCloImportOptions_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithCloImportOptions, Options), Z_Construct_UScriptStruct_FCloOptions, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCloImportOptions_Statics::NewProp_Options_MetaData), Z_Construct_UClass_UDatasmithCloImportOptions_Statics::NewProp_Options_MetaData) }; // 2496251175
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithCloImportOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithCloImportOptions_Statics::NewProp_Options,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithCloImportOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithCloImportOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithCloImportOptions_Statics::ClassParams = {
		&UDatasmithCloImportOptions::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithCloImportOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCloImportOptions_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCloImportOptions_Statics::Class_MetaDataParams), Z_Construct_UClass_UDatasmithCloImportOptions_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCloImportOptions_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDatasmithCloImportOptions()
	{
		if (!Z_Registration_Info_UClass_UDatasmithCloImportOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithCloImportOptions.OuterSingleton, Z_Construct_UClass_UDatasmithCloImportOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithCloImportOptions.OuterSingleton;
	}
	template<> DATASMITHCLOTRANSLATOR_API UClass* StaticClass<UDatasmithCloImportOptions>()
	{
		return UDatasmithCloImportOptions::StaticClass();
	}
	UDatasmithCloImportOptions::UDatasmithCloImportOptions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithCloImportOptions);
	UDatasmithCloImportOptions::~UDatasmithCloImportOptions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_DatasmithCloTranslator_Source_DatasmithCloTranslator_Public_DatasmithCloImportOptions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_DatasmithCloTranslator_Source_DatasmithCloTranslator_Public_DatasmithCloImportOptions_h_Statics::ScriptStructInfo[] = {
		{ FCloOptions::StaticStruct, Z_Construct_UScriptStruct_FCloOptions_Statics::NewStructOps, TEXT("CloOptions"), &Z_Registration_Info_UScriptStruct_CloOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCloOptions), 2496251175U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_DatasmithCloTranslator_Source_DatasmithCloTranslator_Public_DatasmithCloImportOptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithCloImportOptions, UDatasmithCloImportOptions::StaticClass, TEXT("UDatasmithCloImportOptions"), &Z_Registration_Info_UClass_UDatasmithCloImportOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithCloImportOptions), 3073381548U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_DatasmithCloTranslator_Source_DatasmithCloTranslator_Public_DatasmithCloImportOptions_h_2687309357(TEXT("/Script/DatasmithCloTranslator"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_DatasmithCloTranslator_Source_DatasmithCloTranslator_Public_DatasmithCloImportOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_DatasmithCloTranslator_Source_DatasmithCloTranslator_Public_DatasmithCloImportOptions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_DatasmithCloTranslator_Source_DatasmithCloTranslator_Public_DatasmithCloImportOptions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_DatasmithCloTranslator_Source_DatasmithCloTranslator_Public_DatasmithCloImportOptions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
