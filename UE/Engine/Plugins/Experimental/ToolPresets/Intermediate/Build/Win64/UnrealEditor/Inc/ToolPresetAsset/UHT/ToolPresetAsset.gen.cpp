// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolPresetAsset.h"
#include "Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolPresetAsset() {}
// Cross Module References
	EDITORCONFIG_API UClass* Z_Construct_UClass_UEditorConfigBase();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	TOOLPRESETASSET_API UClass* Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset();
	TOOLPRESETASSET_API UClass* Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_NoRegister();
	TOOLPRESETASSET_API UClass* Z_Construct_UClass_UInteractiveToolsPresetCollectionAssetFactory();
	TOOLPRESETASSET_API UClass* Z_Construct_UClass_UInteractiveToolsPresetCollectionAssetFactory_NoRegister();
	TOOLPRESETASSET_API UScriptStruct* Z_Construct_UScriptStruct_FInteractiveToolPresetDefinition();
	TOOLPRESETASSET_API UScriptStruct* Z_Construct_UScriptStruct_FInteractiveToolPresetStore();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_ToolPresetAsset();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InteractiveToolPresetDefinition;
class UScriptStruct* FInteractiveToolPresetDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InteractiveToolPresetDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InteractiveToolPresetDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractiveToolPresetDefinition, (UObject*)Z_Construct_UPackage__Script_ToolPresetAsset(), TEXT("InteractiveToolPresetDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_InteractiveToolPresetDefinition.OuterSingleton;
}
template<> TOOLPRESETASSET_API UScriptStruct* StaticStruct<FInteractiveToolPresetDefinition>()
{
	return FInteractiveToolPresetDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInteractiveToolPresetDefinition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoredProperties_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StoredProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tooltip_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tooltip;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractiveToolPresetDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ToolPresetAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInteractiveToolPresetDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractiveToolPresetDefinition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractiveToolPresetDefinition_Statics::NewProp_StoredProperties_MetaData[] = {
		{ "Category", "ToolPresetAsset" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/ToolPresetAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInteractiveToolPresetDefinition_Statics::NewProp_StoredProperties = { "StoredProperties", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractiveToolPresetDefinition, StoredProperties), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractiveToolPresetDefinition_Statics::NewProp_StoredProperties_MetaData), Z_Construct_UScriptStruct_FInteractiveToolPresetDefinition_Statics::NewProp_StoredProperties_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractiveToolPresetDefinition_Statics::NewProp_Label_MetaData[] = {
		{ "Category", "ToolPresetAsset" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/ToolPresetAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInteractiveToolPresetDefinition_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractiveToolPresetDefinition, Label), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractiveToolPresetDefinition_Statics::NewProp_Label_MetaData), Z_Construct_UScriptStruct_FInteractiveToolPresetDefinition_Statics::NewProp_Label_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractiveToolPresetDefinition_Statics::NewProp_Tooltip_MetaData[] = {
		{ "Category", "ToolPresetAsset" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/ToolPresetAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInteractiveToolPresetDefinition_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractiveToolPresetDefinition, Tooltip), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractiveToolPresetDefinition_Statics::NewProp_Tooltip_MetaData), Z_Construct_UScriptStruct_FInteractiveToolPresetDefinition_Statics::NewProp_Tooltip_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteractiveToolPresetDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractiveToolPresetDefinition_Statics::NewProp_StoredProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractiveToolPresetDefinition_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractiveToolPresetDefinition_Statics::NewProp_Tooltip,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractiveToolPresetDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ToolPresetAsset,
		nullptr,
		&NewStructOps,
		"InteractiveToolPresetDefinition",
		Z_Construct_UScriptStruct_FInteractiveToolPresetDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractiveToolPresetDefinition_Statics::PropPointers),
		sizeof(FInteractiveToolPresetDefinition),
		alignof(FInteractiveToolPresetDefinition),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractiveToolPresetDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInteractiveToolPresetDefinition_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractiveToolPresetDefinition_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FInteractiveToolPresetDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_InteractiveToolPresetDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InteractiveToolPresetDefinition.InnerSingleton, Z_Construct_UScriptStruct_FInteractiveToolPresetDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InteractiveToolPresetDefinition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InteractiveToolPresetStore;
class UScriptStruct* FInteractiveToolPresetStore::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InteractiveToolPresetStore.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InteractiveToolPresetStore.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractiveToolPresetStore, (UObject*)Z_Construct_UPackage__Script_ToolPresetAsset(), TEXT("InteractiveToolPresetStore"));
	}
	return Z_Registration_Info_UScriptStruct_InteractiveToolPresetStore.OuterSingleton;
}
template<> TOOLPRESETASSET_API UScriptStruct* StaticStruct<FInteractiveToolPresetStore>()
{
	return FInteractiveToolPresetStore::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_NamedPresets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NamedPresets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NamedPresets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolLabel_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ToolLabel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolIcon_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ToolIcon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ToolPresetAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractiveToolPresetStore>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::NewProp_NamedPresets_Inner = { "NamedPresets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInteractiveToolPresetDefinition, METADATA_PARAMS(0, nullptr) }; // 340860926
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::NewProp_NamedPresets_MetaData[] = {
		{ "Category", "ToolPresetAsset" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/ToolPresetAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::NewProp_NamedPresets = { "NamedPresets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractiveToolPresetStore, NamedPresets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::NewProp_NamedPresets_MetaData), Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::NewProp_NamedPresets_MetaData) }; // 340860926
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::NewProp_ToolLabel_MetaData[] = {
		{ "Category", "ToolPresetAsset" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/ToolPresetAsset.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::NewProp_ToolLabel = { "ToolLabel", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractiveToolPresetStore, ToolLabel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::NewProp_ToolLabel_MetaData), Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::NewProp_ToolLabel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::NewProp_ToolIcon_MetaData[] = {
		{ "Category", "ToolPresetAsset" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/ToolPresetAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::NewProp_ToolIcon = { "ToolIcon", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractiveToolPresetStore, ToolIcon), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::NewProp_ToolIcon_MetaData), Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::NewProp_ToolIcon_MetaData) }; // 899956612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::NewProp_NamedPresets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::NewProp_NamedPresets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::NewProp_ToolLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::NewProp_ToolIcon,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ToolPresetAsset,
		nullptr,
		&NewStructOps,
		"InteractiveToolPresetStore",
		Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::PropPointers),
		sizeof(FInteractiveToolPresetStore),
		alignof(FInteractiveToolPresetStore),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FInteractiveToolPresetStore()
	{
		if (!Z_Registration_Info_UScriptStruct_InteractiveToolPresetStore.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InteractiveToolPresetStore.InnerSingleton, Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InteractiveToolPresetStore.InnerSingleton;
	}
	void UInteractiveToolsPresetCollectionAsset::StaticRegisterNativesUInteractiveToolsPresetCollectionAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractiveToolsPresetCollectionAsset);
	UClass* Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_NoRegister()
	{
		return UInteractiveToolsPresetCollectionAsset::StaticClass();
	}
	struct Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerToolPresets_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PerToolPresets_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerToolPresets_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PerToolPresets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollectionLabel_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_CollectionLabel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorConfigBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ToolPresetAsset,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Implements an asset that can be used to store tool settings as a named preset\n */" },
		{ "EditorConfig", "UInteractiveToolsPresetCollectionAsset_DefaultCollection" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ToolPresetAsset.h" },
		{ "ModuleRelativePath", "Public/ToolPresetAsset.h" },
		{ "ToolTip", "Implements an asset that can be used to store tool settings as a named preset" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::NewProp_PerToolPresets_ValueProp = { "PerToolPresets", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FInteractiveToolPresetStore, METADATA_PARAMS(0, nullptr) }; // 62115993
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::NewProp_PerToolPresets_Key_KeyProp = { "PerToolPresets_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::NewProp_PerToolPresets_MetaData[] = {
		{ "Category", "ToolPresetAsset" },
		{ "Comment", "// TODO: Currently there are no helper methods within this class, simply providing\n// raw access to the underlying arrays and maps. This is intentional.\n// Until the design of the preset concept is more firmly decided, it seems like a waste to\n// implement a bunch of methods that we don't know if we actually want/need at the end.\n// Once we are satisifed with the data structure, planned accessors and mutators will include\n// support for adding, removing, renaming, saving and retrieving presets.\n" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/ToolPresetAsset.h" },
		{ "ToolTip", "TODO: Currently there are no helper methods within this class, simply providing\nraw access to the underlying arrays and maps. This is intentional.\nUntil the design of the preset concept is more firmly decided, it seems like a waste to\nimplement a bunch of methods that we don't know if we actually want/need at the end.\nOnce we are satisifed with the data structure, planned accessors and mutators will include\nsupport for adding, removing, renaming, saving and retrieving presets." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::NewProp_PerToolPresets = { "PerToolPresets", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractiveToolsPresetCollectionAsset, PerToolPresets), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::NewProp_PerToolPresets_MetaData), Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::NewProp_PerToolPresets_MetaData) }; // 62115993
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::NewProp_CollectionLabel_MetaData[] = {
		{ "Category", "ToolPresetAsset" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/ToolPresetAsset.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::NewProp_CollectionLabel = { "CollectionLabel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractiveToolsPresetCollectionAsset, CollectionLabel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::NewProp_CollectionLabel_MetaData), Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::NewProp_CollectionLabel_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::NewProp_PerToolPresets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::NewProp_PerToolPresets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::NewProp_PerToolPresets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::NewProp_CollectionLabel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractiveToolsPresetCollectionAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::ClassParams = {
		&UInteractiveToolsPresetCollectionAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset()
	{
		if (!Z_Registration_Info_UClass_UInteractiveToolsPresetCollectionAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveToolsPresetCollectionAsset.OuterSingleton, Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractiveToolsPresetCollectionAsset.OuterSingleton;
	}
	template<> TOOLPRESETASSET_API UClass* StaticClass<UInteractiveToolsPresetCollectionAsset>()
	{
		return UInteractiveToolsPresetCollectionAsset::StaticClass();
	}
	UInteractiveToolsPresetCollectionAsset::UInteractiveToolsPresetCollectionAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveToolsPresetCollectionAsset);
	UInteractiveToolsPresetCollectionAsset::~UInteractiveToolsPresetCollectionAsset() {}
	void UInteractiveToolsPresetCollectionAssetFactory::StaticRegisterNativesUInteractiveToolsPresetCollectionAssetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractiveToolsPresetCollectionAssetFactory);
	UClass* Z_Construct_UClass_UInteractiveToolsPresetCollectionAssetFactory_NoRegister()
	{
		return UInteractiveToolsPresetCollectionAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UInteractiveToolsPresetCollectionAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractiveToolsPresetCollectionAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_ToolPresetAsset,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolsPresetCollectionAssetFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveToolsPresetCollectionAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ToolPresetAsset.h" },
		{ "ModuleRelativePath", "Public/ToolPresetAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractiveToolsPresetCollectionAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractiveToolsPresetCollectionAssetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveToolsPresetCollectionAssetFactory_Statics::ClassParams = {
		&UInteractiveToolsPresetCollectionAssetFactory::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolsPresetCollectionAssetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractiveToolsPresetCollectionAssetFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UInteractiveToolsPresetCollectionAssetFactory()
	{
		if (!Z_Registration_Info_UClass_UInteractiveToolsPresetCollectionAssetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveToolsPresetCollectionAssetFactory.OuterSingleton, Z_Construct_UClass_UInteractiveToolsPresetCollectionAssetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractiveToolsPresetCollectionAssetFactory.OuterSingleton;
	}
	template<> TOOLPRESETASSET_API UClass* StaticClass<UInteractiveToolsPresetCollectionAssetFactory>()
	{
		return UInteractiveToolsPresetCollectionAssetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveToolsPresetCollectionAssetFactory);
	UInteractiveToolsPresetCollectionAssetFactory::~UInteractiveToolsPresetCollectionAssetFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ToolPresets_Source_ToolPresetAsset_Public_ToolPresetAsset_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ToolPresets_Source_ToolPresetAsset_Public_ToolPresetAsset_h_Statics::ScriptStructInfo[] = {
		{ FInteractiveToolPresetDefinition::StaticStruct, Z_Construct_UScriptStruct_FInteractiveToolPresetDefinition_Statics::NewStructOps, TEXT("InteractiveToolPresetDefinition"), &Z_Registration_Info_UScriptStruct_InteractiveToolPresetDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInteractiveToolPresetDefinition), 340860926U) },
		{ FInteractiveToolPresetStore::StaticStruct, Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::NewStructOps, TEXT("InteractiveToolPresetStore"), &Z_Registration_Info_UScriptStruct_InteractiveToolPresetStore, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInteractiveToolPresetStore), 62115993U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ToolPresets_Source_ToolPresetAsset_Public_ToolPresetAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset, UInteractiveToolsPresetCollectionAsset::StaticClass, TEXT("UInteractiveToolsPresetCollectionAsset"), &Z_Registration_Info_UClass_UInteractiveToolsPresetCollectionAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveToolsPresetCollectionAsset), 739743393U) },
		{ Z_Construct_UClass_UInteractiveToolsPresetCollectionAssetFactory, UInteractiveToolsPresetCollectionAssetFactory::StaticClass, TEXT("UInteractiveToolsPresetCollectionAssetFactory"), &Z_Registration_Info_UClass_UInteractiveToolsPresetCollectionAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveToolsPresetCollectionAssetFactory), 1900053098U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ToolPresets_Source_ToolPresetAsset_Public_ToolPresetAsset_h_3145322375(TEXT("/Script/ToolPresetAsset"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ToolPresets_Source_ToolPresetAsset_Public_ToolPresetAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ToolPresets_Source_ToolPresetAsset_Public_ToolPresetAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ToolPresets_Source_ToolPresetAsset_Public_ToolPresetAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ToolPresets_Source_ToolPresetAsset_Public_ToolPresetAsset_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
