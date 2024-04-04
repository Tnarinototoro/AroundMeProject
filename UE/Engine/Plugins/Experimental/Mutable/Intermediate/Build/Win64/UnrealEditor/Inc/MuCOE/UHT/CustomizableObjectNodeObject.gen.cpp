// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/Nodes/CustomizableObjectNodeObject.h"
#include "../Public/MuCO/CustomizableObjectUIData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodeObject() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObject_NoRegister();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMutableParamUIMetadata();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNode();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeObject();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeObject_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UEnum* Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectAutomaticLODStrategy();
	CUSTOMIZABLEOBJECTEDITOR_API UEnum* Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectSelectionOverride();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FBoneToRemove();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FComponentSettings();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectState();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLODReductionSettings();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride();
	MUTABLERUNTIME_API UEnum* Z_Construct_UEnum_MutableRuntime_ETextureCompressionStrategy();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoneToRemove;
class UScriptStruct* FBoneToRemove::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoneToRemove.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoneToRemove.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneToRemove, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("BoneToRemove"));
	}
	return Z_Registration_Info_UScriptStruct_BoneToRemove.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* StaticStruct<FBoneToRemove>()
{
	return FBoneToRemove::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBoneToRemove_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyRemoveChildren_MetaData[];
#endif
		static void NewProp_bOnlyRemoveChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyRemoveChildren;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneToRemove_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoneToRemove_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneToRemove>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneToRemove_Statics::NewProp_bOnlyRemoveChildren_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBoneToRemove_Statics::NewProp_bOnlyRemoveChildren_SetBit(void* Obj)
	{
		((FBoneToRemove*)Obj)->bOnlyRemoveChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBoneToRemove_Statics::NewProp_bOnlyRemoveChildren = { "bOnlyRemoveChildren", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBoneToRemove), &Z_Construct_UScriptStruct_FBoneToRemove_Statics::NewProp_bOnlyRemoveChildren_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneToRemove_Statics::NewProp_bOnlyRemoveChildren_MetaData), Z_Construct_UScriptStruct_FBoneToRemove_Statics::NewProp_bOnlyRemoveChildren_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneToRemove_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBoneToRemove_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoneToRemove, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneToRemove_Statics::NewProp_BoneName_MetaData), Z_Construct_UScriptStruct_FBoneToRemove_Statics::NewProp_BoneName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoneToRemove_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneToRemove_Statics::NewProp_bOnlyRemoveChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneToRemove_Statics::NewProp_BoneName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoneToRemove_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		&NewStructOps,
		"BoneToRemove",
		Z_Construct_UScriptStruct_FBoneToRemove_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneToRemove_Statics::PropPointers),
		sizeof(FBoneToRemove),
		alignof(FBoneToRemove),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneToRemove_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBoneToRemove_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneToRemove_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FBoneToRemove()
	{
		if (!Z_Registration_Info_UScriptStruct_BoneToRemove.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoneToRemove.InnerSingleton, Z_Construct_UScriptStruct_FBoneToRemove_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BoneToRemove.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LODReductionSettings;
class UScriptStruct* FLODReductionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LODReductionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LODReductionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLODReductionSettings, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("LODReductionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LODReductionSettings.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* StaticStruct<FLODReductionSettings>()
{
	return FLODReductionSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLODReductionSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_BonesToRemove_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonesToRemove_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BonesToRemove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLODReductionSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLODReductionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLODReductionSettings>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLODReductionSettings_Statics::NewProp_BonesToRemove_Inner = { "BonesToRemove", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBoneToRemove, METADATA_PARAMS(0, nullptr) }; // 3233915412
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLODReductionSettings_Statics::NewProp_BonesToRemove_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "/** Selects which bones will be removed from the final skeleton\n\x09* BoneName: Name of the bone that will be removed. Its children will be removed too.\n\x09* Remove Only Children: If true, only the children of the selected bone will be removed. The selected bone will remain.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
		{ "ToolTip", "Selects which bones will be removed from the final skeleton\nBoneName: Name of the bone that will be removed. Its children will be removed too.\nRemove Only Children: If true, only the children of the selected bone will be removed. The selected bone will remain." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLODReductionSettings_Statics::NewProp_BonesToRemove = { "BonesToRemove", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLODReductionSettings, BonesToRemove), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLODReductionSettings_Statics::NewProp_BonesToRemove_MetaData), Z_Construct_UScriptStruct_FLODReductionSettings_Statics::NewProp_BonesToRemove_MetaData) }; // 3233915412
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLODReductionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLODReductionSettings_Statics::NewProp_BonesToRemove_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLODReductionSettings_Statics::NewProp_BonesToRemove,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLODReductionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		&NewStructOps,
		"LODReductionSettings",
		Z_Construct_UScriptStruct_FLODReductionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLODReductionSettings_Statics::PropPointers),
		sizeof(FLODReductionSettings),
		alignof(FLODReductionSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLODReductionSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLODReductionSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLODReductionSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLODReductionSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LODReductionSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LODReductionSettings.InnerSingleton, Z_Construct_UScriptStruct_FLODReductionSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LODReductionSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComponentSettings;
class UScriptStruct* FComponentSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComponentSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComponentSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComponentSettings, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("ComponentSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ComponentSettings.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* StaticStruct<FComponentSettings>()
{
	return FComponentSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComponentSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_LODReductionSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODReductionSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LODReductionSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComponentSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComponentSettings>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComponentSettings_Statics::NewProp_LODReductionSettings_Inner = { "LODReductionSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLODReductionSettings, METADATA_PARAMS(0, nullptr) }; // 3900701022
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentSettings_Statics::NewProp_LODReductionSettings_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComponentSettings_Statics::NewProp_LODReductionSettings = { "LODReductionSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponentSettings, LODReductionSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentSettings_Statics::NewProp_LODReductionSettings_MetaData), Z_Construct_UScriptStruct_FComponentSettings_Statics::NewProp_LODReductionSettings_MetaData) }; // 3900701022
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComponentSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentSettings_Statics::NewProp_LODReductionSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentSettings_Statics::NewProp_LODReductionSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComponentSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		&NewStructOps,
		"ComponentSettings",
		Z_Construct_UScriptStruct_FComponentSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentSettings_Statics::PropPointers),
		sizeof(FComponentSettings),
		alignof(FComponentSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComponentSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FComponentSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_ComponentSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComponentSettings.InnerSingleton, Z_Construct_UScriptStruct_FComponentSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComponentSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableObjectState;
class UScriptStruct* FCustomizableObjectState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableObjectState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableObjectState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectState, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("CustomizableObjectState"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableObjectState.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* StaticStruct<FCustomizableObjectState>()
{
	return FCustomizableObjectState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableObjectState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RuntimeParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RuntimeParameters;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TextureCompressionStrategy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureCompressionStrategy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TextureCompressionStrategy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLiveUpdateMode_MetaData[];
#endif
		static void NewProp_bLiveUpdateMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLiveUpdateMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReuseInstanceTextures_MetaData[];
#endif
		static void NewProp_bReuseInstanceTextures_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReuseInstanceTextures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBuildOnlyFirstLOD_MetaData[];
#endif
		static void NewProp_bBuildOnlyFirstLOD_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBuildOnlyFirstLOD;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumExtraLODsToBuildPerPlatform_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_NumExtraLODsToBuildPerPlatform_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumExtraLODsToBuildPerPlatform_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NumExtraLODsToBuildPerPlatform;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ForcedParameterValues_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ForcedParameterValues_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForcedParameterValues_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ForcedParameterValues;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateUIMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StateUIMetadata;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDontCompressRuntimeTextures_MetaData[];
#endif
		static void NewProp_bDontCompressRuntimeTextures_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDontCompressRuntimeTextures;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableObjectState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectState, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_RuntimeParameters_Inner = { "RuntimeParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_RuntimeParameters_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_RuntimeParameters = { "RuntimeParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectState, RuntimeParameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_RuntimeParameters_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_RuntimeParameters_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_TextureCompressionStrategy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_TextureCompressionStrategy_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "/** Special treatment of texture compression for this state. */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
		{ "ToolTip", "Special treatment of texture compression for this state." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_TextureCompressionStrategy = { "TextureCompressionStrategy", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectState, TextureCompressionStrategy), Z_Construct_UEnum_MutableRuntime_ETextureCompressionStrategy, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_TextureCompressionStrategy_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_TextureCompressionStrategy_MetaData) }; // 67038083
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bLiveUpdateMode_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "/** LiveUpdateMode will reuse instance temp. data between updates and speed up update times, but spend much more memory. Good for customization screens, not for actual gameplay modes. */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
		{ "ToolTip", "LiveUpdateMode will reuse instance temp. data between updates and speed up update times, but spend much more memory. Good for customization screens, not for actual gameplay modes." },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bLiveUpdateMode_SetBit(void* Obj)
	{
		((FCustomizableObjectState*)Obj)->bLiveUpdateMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bLiveUpdateMode = { "bLiveUpdateMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCustomizableObjectState), &Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bLiveUpdateMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bLiveUpdateMode_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bLiveUpdateMode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bReuseInstanceTextures_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "// Enables the reuse of all possible textures when the instance is updated without any changes in geometry or state (the first update after creation doesn't reuse any)\n// It will only work if the textures aren't compressed, so set the instance to a Mutable state with texture compression disabled\n// WARNING! If texture reuse is enabled, do NOT keep external references to the textures of the instance. The instance owns the textures.\n" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
		{ "ToolTip", "Enables the reuse of all possible textures when the instance is updated without any changes in geometry or state (the first update after creation doesn't reuse any)\nIt will only work if the textures aren't compressed, so set the instance to a Mutable state with texture compression disabled\nWARNING! If texture reuse is enabled, do NOT keep external references to the textures of the instance. The instance owns the textures." },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bReuseInstanceTextures_SetBit(void* Obj)
	{
		((FCustomizableObjectState*)Obj)->bReuseInstanceTextures = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bReuseInstanceTextures = { "bReuseInstanceTextures", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCustomizableObjectState), &Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bReuseInstanceTextures_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bReuseInstanceTextures_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bReuseInstanceTextures_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bBuildOnlyFirstLOD_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bBuildOnlyFirstLOD_SetBit(void* Obj)
	{
		((FCustomizableObjectState*)Obj)->bBuildOnlyFirstLOD = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bBuildOnlyFirstLOD = { "bBuildOnlyFirstLOD", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCustomizableObjectState), &Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bBuildOnlyFirstLOD_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bBuildOnlyFirstLOD_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bBuildOnlyFirstLOD_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_NumExtraLODsToBuildPerPlatform_ValueProp = { "NumExtraLODsToBuildPerPlatform", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_NumExtraLODsToBuildPerPlatform_Key_KeyProp = { "NumExtraLODsToBuildPerPlatform_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_NumExtraLODsToBuildPerPlatform_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "/** If there's an entry for a specific platform, when compiling for that platform Num LODs will be built after bBuildOnlyFirstLOD */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
		{ "ToolTip", "If there's an entry for a specific platform, when compiling for that platform Num LODs will be built after bBuildOnlyFirstLOD" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_NumExtraLODsToBuildPerPlatform = { "NumExtraLODsToBuildPerPlatform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectState, NumExtraLODsToBuildPerPlatform), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_NumExtraLODsToBuildPerPlatform_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_NumExtraLODsToBuildPerPlatform_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_ForcedParameterValues_ValueProp = { "ForcedParameterValues", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_ForcedParameterValues_Key_KeyProp = { "ForcedParameterValues_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_ForcedParameterValues_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_ForcedParameterValues = { "ForcedParameterValues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectState, ForcedParameterValues), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_ForcedParameterValues_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_ForcedParameterValues_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_StateUIMetadata_MetaData[] = {
		{ "Category", "UI" },
		{ "DisplayName", "State UI Metadata" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_StateUIMetadata = { "StateUIMetadata", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectState, StateUIMetadata), Z_Construct_UScriptStruct_FMutableParamUIMetadata, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_StateUIMetadata_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_StateUIMetadata_MetaData) }; // 177590584
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bDontCompressRuntimeTextures_MetaData[] = {
		{ "Comment", "/** This is now TextureCompressionStrategy.  */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
		{ "ToolTip", "This is now TextureCompressionStrategy." },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bDontCompressRuntimeTextures_SetBit(void* Obj)
	{
		((FCustomizableObjectState*)Obj)->bDontCompressRuntimeTextures_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bDontCompressRuntimeTextures = { "bDontCompressRuntimeTextures", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCustomizableObjectState), &Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bDontCompressRuntimeTextures_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bDontCompressRuntimeTextures_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bDontCompressRuntimeTextures_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_RuntimeParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_RuntimeParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_TextureCompressionStrategy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_TextureCompressionStrategy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bLiveUpdateMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bReuseInstanceTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bBuildOnlyFirstLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_NumExtraLODsToBuildPerPlatform_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_NumExtraLODsToBuildPerPlatform_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_NumExtraLODsToBuildPerPlatform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_ForcedParameterValues_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_ForcedParameterValues_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_ForcedParameterValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_StateUIMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bDontCompressRuntimeTextures,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		&NewStructOps,
		"CustomizableObjectState",
		Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::PropPointers),
		sizeof(FCustomizableObjectState),
		alignof(FCustomizableObjectState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectState()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableObjectState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableObjectState.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableObjectState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECustomizableObjectAutomaticLODStrategy;
	static UEnum* ECustomizableObjectAutomaticLODStrategy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECustomizableObjectAutomaticLODStrategy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECustomizableObjectAutomaticLODStrategy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectAutomaticLODStrategy, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("ECustomizableObjectAutomaticLODStrategy"));
		}
		return Z_Registration_Info_UEnum_ECustomizableObjectAutomaticLODStrategy.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UEnum* StaticEnum<ECustomizableObjectAutomaticLODStrategy>()
	{
		return ECustomizableObjectAutomaticLODStrategy_StaticEnum();
	}
	struct Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectAutomaticLODStrategy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectAutomaticLODStrategy_Statics::Enumerators[] = {
		{ "ECustomizableObjectAutomaticLODStrategy::Inherited", (int64)ECustomizableObjectAutomaticLODStrategy::Inherited },
		{ "ECustomizableObjectAutomaticLODStrategy::Manual", (int64)ECustomizableObjectAutomaticLODStrategy::Manual },
		{ "ECustomizableObjectAutomaticLODStrategy::AutomaticFromMesh", (int64)ECustomizableObjectAutomaticLODStrategy::AutomaticFromMesh },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectAutomaticLODStrategy_Statics::Enum_MetaDataParams[] = {
		{ "AutomaticFromMesh.Comment", "// Try to generate the same material structure than LOd 0 if the source meshes have LODs.\n" },
		{ "AutomaticFromMesh.DisplayName", "Automatic from mesh" },
		{ "AutomaticFromMesh.Name", "ECustomizableObjectAutomaticLODStrategy::AutomaticFromMesh" },
		{ "AutomaticFromMesh.ToolTip", "Try to generate the same material structure than LOd 0 if the source meshes have LODs." },
		{ "Inherited.Comment", "// Use the same strategy than the parent object. If root, then use \"Manual\".\n" },
		{ "Inherited.DisplayName", "Inherit from parent object" },
		{ "Inherited.Name", "ECustomizableObjectAutomaticLODStrategy::Inherited" },
		{ "Inherited.ToolTip", "Use the same strategy than the parent object. If root, then use \"Manual\"." },
		{ "Manual.Comment", "// Don't try to generate LODs automatically for the child nodes. Only the ones tha explicitely define them will be used.\n" },
		{ "Manual.DisplayName", "Only manually created LODs" },
		{ "Manual.Name", "ECustomizableObjectAutomaticLODStrategy::Manual" },
		{ "Manual.ToolTip", "Don't try to generate LODs automatically for the child nodes. Only the ones tha explicitely define them will be used." },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectAutomaticLODStrategy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		"ECustomizableObjectAutomaticLODStrategy",
		"ECustomizableObjectAutomaticLODStrategy",
		Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectAutomaticLODStrategy_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectAutomaticLODStrategy_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectAutomaticLODStrategy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectAutomaticLODStrategy_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectAutomaticLODStrategy()
	{
		if (!Z_Registration_Info_UEnum_ECustomizableObjectAutomaticLODStrategy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECustomizableObjectAutomaticLODStrategy.InnerSingleton, Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectAutomaticLODStrategy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECustomizableObjectAutomaticLODStrategy.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECustomizableObjectSelectionOverride;
	static UEnum* ECustomizableObjectSelectionOverride_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECustomizableObjectSelectionOverride.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECustomizableObjectSelectionOverride.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectSelectionOverride, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("ECustomizableObjectSelectionOverride"));
		}
		return Z_Registration_Info_UEnum_ECustomizableObjectSelectionOverride.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UEnum* StaticEnum<ECustomizableObjectSelectionOverride>()
	{
		return ECustomizableObjectSelectionOverride_StaticEnum();
	}
	struct Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectSelectionOverride_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectSelectionOverride_Statics::Enumerators[] = {
		{ "ECustomizableObjectSelectionOverride::NoOverride", (int64)ECustomizableObjectSelectionOverride::NoOverride },
		{ "ECustomizableObjectSelectionOverride::Disable", (int64)ECustomizableObjectSelectionOverride::Disable },
		{ "ECustomizableObjectSelectionOverride::Enable", (int64)ECustomizableObjectSelectionOverride::Enable },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectSelectionOverride_Statics::Enum_MetaDataParams[] = {
		{ "Disable.DisplayName", "Disable" },
		{ "Disable.Name", "ECustomizableObjectSelectionOverride::Disable" },
		{ "Enable.DisplayName", "Enable" },
		{ "Enable.Name", "ECustomizableObjectSelectionOverride::Enable" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
		{ "NoOverride.DisplayName", "No Override" },
		{ "NoOverride.Name", "ECustomizableObjectSelectionOverride::NoOverride" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectSelectionOverride_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		"ECustomizableObjectSelectionOverride",
		"ECustomizableObjectSelectionOverride",
		Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectSelectionOverride_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectSelectionOverride_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectSelectionOverride_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectSelectionOverride_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectSelectionOverride()
	{
		if (!Z_Registration_Info_UEnum_ECustomizableObjectSelectionOverride.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECustomizableObjectSelectionOverride.InnerSingleton, Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectSelectionOverride_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECustomizableObjectSelectionOverride.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RealTimeMorphSelectionOverride;
class UScriptStruct* FRealTimeMorphSelectionOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RealTimeMorphSelectionOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RealTimeMorphSelectionOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("RealTimeMorphSelectionOverride"));
	}
	return Z_Registration_Info_UScriptStruct_RealTimeMorphSelectionOverride.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* StaticStruct<FRealTimeMorphSelectionOverride>()
{
	return FRealTimeMorphSelectionOverride::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MorphName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MorphName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionOverride_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionOverride_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectionOverride;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SkeletalMeshesNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshesNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SkeletalMeshesNames;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Override_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Override_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Override_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Override;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRealTimeMorphSelectionOverride>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_MorphName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_MorphName = { "MorphName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealTimeMorphSelectionOverride, MorphName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_MorphName_MetaData), Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_MorphName_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_SelectionOverride_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_SelectionOverride_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_SelectionOverride = { "SelectionOverride", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealTimeMorphSelectionOverride, SelectionOverride), Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectSelectionOverride, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_SelectionOverride_MetaData), Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_SelectionOverride_MetaData) }; // 4001689989
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_SkeletalMeshesNames_Inner = { "SkeletalMeshesNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_SkeletalMeshesNames_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_SkeletalMeshesNames = { "SkeletalMeshesNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealTimeMorphSelectionOverride, SkeletalMeshesNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_SkeletalMeshesNames_MetaData), Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_SkeletalMeshesNames_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_Override_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_Override_Inner = { "Override", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectSelectionOverride, METADATA_PARAMS(0, nullptr) }; // 4001689989
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_Override_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_Override = { "Override", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealTimeMorphSelectionOverride, Override), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_Override_MetaData), Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_Override_MetaData) }; // 4001689989
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_MorphName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_SelectionOverride_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_SelectionOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_SkeletalMeshesNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_SkeletalMeshesNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_Override_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_Override_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_Override,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		&NewStructOps,
		"RealTimeMorphSelectionOverride",
		Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::PropPointers),
		sizeof(FRealTimeMorphSelectionOverride),
		alignof(FRealTimeMorphSelectionOverride),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride()
	{
		if (!Z_Registration_Info_UScriptStruct_RealTimeMorphSelectionOverride.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RealTimeMorphSelectionOverride.InnerSingleton, Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RealTimeMorphSelectionOverride.InnerSingleton;
	}
	void UCustomizableObjectNodeObject::StaticRegisterNativesUCustomizableObjectNodeObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeObject);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeObject_NoRegister()
	{
		return UCustomizableObjectNodeObject::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamUIMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParamUIMetadata;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumLODs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumLODs;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AutoLODStrategy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoLODStrategy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoLODStrategy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumMeshComponents_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumMeshComponents;
		static const UECodeGen_Private::FStructPropertyParams NewProp_States_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_States_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_States;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentObjectGroupId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentObjectGroupId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferencedSkeletalMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedSkeletalMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReferencedSkeletalMeshes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RealTimeMorphSelectionOverrides_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RealTimeMorphSelectionOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RealTimeMorphSelectionOverrides;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsBase_MetaData[];
#endif
		static void NewProp_bIsBase_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBase;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNode,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeObject.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ObjectName_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeObject, ObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ObjectName_MetaData), Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ObjectName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ParamUIMetadata_MetaData[] = {
		{ "Category", "UI" },
		{ "DisplayName", "Parameter UI Metadata" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ParamUIMetadata = { "ParamUIMetadata", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeObject, ParamUIMetadata), Z_Construct_UScriptStruct_FMutableParamUIMetadata, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ParamUIMetadata_MetaData), Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ParamUIMetadata_MetaData) }; // 177590584
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_NumLODs_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_NumLODs = { "NumLODs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeObject, NumLODs), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_NumLODs_MetaData), Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_NumLODs_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_AutoLODStrategy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_AutoLODStrategy_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_AutoLODStrategy = { "AutoLODStrategy", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeObject, AutoLODStrategy), Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectAutomaticLODStrategy, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_AutoLODStrategy_MetaData), Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_AutoLODStrategy_MetaData) }; // 3329571287
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_NumMeshComponents_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_NumMeshComponents = { "NumMeshComponents", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeObject, NumMeshComponents), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_NumMeshComponents_MetaData), Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_NumMeshComponents_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_States_Inner = { "States", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCustomizableObjectState, METADATA_PARAMS(0, nullptr) }; // 1685848921
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_States_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
		{ "TitleProperty", "Name" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_States = { "States", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeObject, States), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_States_MetaData), Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_States_MetaData) }; // 1685848921
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ParentObject_MetaData[] = {
		{ "Category", "AttachedToExternalObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ParentObject = { "ParentObject", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeObject, ParentObject), Z_Construct_UClass_UCustomizableObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ParentObject_MetaData), Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ParentObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ParentObjectGroupId_MetaData[] = {
		{ "Category", "AttachedToExternalObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ParentObjectGroupId = { "ParentObjectGroupId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeObject, ParentObjectGroupId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ParentObjectGroupId_MetaData), Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ParentObjectGroupId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_Identifier_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeObject, Identifier), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_Identifier_MetaData), Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_Identifier_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ReferencedSkeletalMeshes_Inner = { "ReferencedSkeletalMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ReferencedSkeletalMeshes_MetaData[] = {
		{ "Comment", "// Soft references SkeletalMeshes found in the previous compilation.\n// Only populated if the node is the root.\n" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
		{ "ToolTip", "Soft references SkeletalMeshes found in the previous compilation.\nOnly populated if the node is the root." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ReferencedSkeletalMeshes = { "ReferencedSkeletalMeshes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeObject, ReferencedSkeletalMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ReferencedSkeletalMeshes_MetaData), Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ReferencedSkeletalMeshes_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_RealTimeMorphSelectionOverrides_Inner = { "RealTimeMorphSelectionOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride, METADATA_PARAMS(0, nullptr) }; // 408689684
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_RealTimeMorphSelectionOverrides_MetaData[] = {
		{ "Comment", "// Information about the realtime morph targets usage. It indexes to ReferncedSkeletakMeshes array\n// so it is need to keep them syncronized. \n// This overrides the per skeletal mesh node selection \n" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
		{ "ToolTip", "Information about the realtime morph targets usage. It indexes to ReferncedSkeletakMeshes array\nso it is need to keep them syncronized.\nThis overrides the per skeletal mesh node selection" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_RealTimeMorphSelectionOverrides = { "RealTimeMorphSelectionOverrides", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeObject, RealTimeMorphSelectionOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_RealTimeMorphSelectionOverrides_MetaData), Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_RealTimeMorphSelectionOverrides_MetaData) }; // 408689684
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ComponentSettings_Inner = { "ComponentSettings", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FComponentSettings, METADATA_PARAMS(0, nullptr) }; // 3409656664
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ComponentSettings_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "// Array of bones to remove from the mesh.All influences assigned to these bones will be transferred to the closest valid bone.\n// Selected per component and LOD. Bones will be accumulated down the line.\n" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
		{ "ToolTip", "Array of bones to remove from the mesh.All influences assigned to these bones will be transferred to the closest valid bone.\nSelected per component and LOD. Bones will be accumulated down the line." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ComponentSettings = { "ComponentSettings", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeObject, ComponentSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ComponentSettings_MetaData), Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ComponentSettings_MetaData) }; // 3409656664
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_bIsBase_MetaData[] = {
		{ "Comment", "// Own interface\n" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
		{ "ToolTip", "Own interface" },
	};
#endif
	void Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_bIsBase_SetBit(void* Obj)
	{
		((UCustomizableObjectNodeObject*)Obj)->bIsBase = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_bIsBase = { "bIsBase", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCustomizableObjectNodeObject), &Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_bIsBase_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_bIsBase_MetaData), Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_bIsBase_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ParamUIMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_NumLODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_AutoLODStrategy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_AutoLODStrategy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_NumMeshComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_States_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_States,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ParentObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ParentObjectGroupId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ReferencedSkeletalMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ReferencedSkeletalMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_RealTimeMorphSelectionOverrides_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_RealTimeMorphSelectionOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ComponentSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ComponentSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_bIsBase,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::ClassParams = {
		&UCustomizableObjectNodeObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeObject()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeObject.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeObject.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeObject>()
	{
		return UCustomizableObjectNodeObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeObject);
	UCustomizableObjectNodeObject::~UCustomizableObjectNodeObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeObject_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeObject_h_Statics::EnumInfo[] = {
		{ ECustomizableObjectAutomaticLODStrategy_StaticEnum, TEXT("ECustomizableObjectAutomaticLODStrategy"), &Z_Registration_Info_UEnum_ECustomizableObjectAutomaticLODStrategy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3329571287U) },
		{ ECustomizableObjectSelectionOverride_StaticEnum, TEXT("ECustomizableObjectSelectionOverride"), &Z_Registration_Info_UEnum_ECustomizableObjectSelectionOverride, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4001689989U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeObject_h_Statics::ScriptStructInfo[] = {
		{ FBoneToRemove::StaticStruct, Z_Construct_UScriptStruct_FBoneToRemove_Statics::NewStructOps, TEXT("BoneToRemove"), &Z_Registration_Info_UScriptStruct_BoneToRemove, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoneToRemove), 3233915412U) },
		{ FLODReductionSettings::StaticStruct, Z_Construct_UScriptStruct_FLODReductionSettings_Statics::NewStructOps, TEXT("LODReductionSettings"), &Z_Registration_Info_UScriptStruct_LODReductionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLODReductionSettings), 3900701022U) },
		{ FComponentSettings::StaticStruct, Z_Construct_UScriptStruct_FComponentSettings_Statics::NewStructOps, TEXT("ComponentSettings"), &Z_Registration_Info_UScriptStruct_ComponentSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComponentSettings), 3409656664U) },
		{ FCustomizableObjectState::StaticStruct, Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewStructOps, TEXT("CustomizableObjectState"), &Z_Registration_Info_UScriptStruct_CustomizableObjectState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableObjectState), 1685848921U) },
		{ FRealTimeMorphSelectionOverride::StaticStruct, Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewStructOps, TEXT("RealTimeMorphSelectionOverride"), &Z_Registration_Info_UScriptStruct_RealTimeMorphSelectionOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRealTimeMorphSelectionOverride), 408689684U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodeObject, UCustomizableObjectNodeObject::StaticClass, TEXT("UCustomizableObjectNodeObject"), &Z_Registration_Info_UClass_UCustomizableObjectNodeObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeObject), 1469475602U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeObject_h_2493819223(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeObject_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeObject_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeObject_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeObject_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
