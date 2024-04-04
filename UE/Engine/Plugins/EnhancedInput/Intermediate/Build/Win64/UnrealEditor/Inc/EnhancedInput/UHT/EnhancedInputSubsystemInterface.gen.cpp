// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnhancedInputSubsystemInterface.h"
#include "EnhancedActionKeyMapping.h"
#include "InputActionValue.h"
#include "InputCoreTypes.h"
#include "InputMappingQuery.h"
#include "PlayerMappableKeySlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnhancedInputSubsystemInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputSubsystemInterface();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputSubsystemInterface_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputUserSettings_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifier_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTrigger_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UPlayerMappableInputConfig_NoRegister();
	ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_EInputMappingRebuildType();
	ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_EMappingQueryIssue();
	ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_EMappingQueryResult();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FEnhancedActionKeyMapping();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FMappingQueryIssue();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FModifyContextOptions();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerMappableKeySlot();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UPackage* Z_Construct_UPackage__Script_EnhancedInput();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInputMappingRebuildType;
	static UEnum* EInputMappingRebuildType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInputMappingRebuildType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInputMappingRebuildType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EnhancedInput_EInputMappingRebuildType, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("EInputMappingRebuildType"));
		}
		return Z_Registration_Info_UEnum_EInputMappingRebuildType.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UEnum* StaticEnum<EInputMappingRebuildType>()
	{
		return EInputMappingRebuildType_StaticEnum();
	}
	struct Z_Construct_UEnum_EnhancedInput_EInputMappingRebuildType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EnhancedInput_EInputMappingRebuildType_Statics::Enumerators[] = {
		{ "EInputMappingRebuildType::None", (int64)EInputMappingRebuildType::None },
		{ "EInputMappingRebuildType::Rebuild", (int64)EInputMappingRebuildType::Rebuild },
		{ "EInputMappingRebuildType::RebuildWithFlush", (int64)EInputMappingRebuildType::RebuildWithFlush },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EnhancedInput_EInputMappingRebuildType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "None.Comment", "// No rebuild required.\n" },
		{ "None.Name", "EInputMappingRebuildType::None" },
		{ "None.ToolTip", "No rebuild required." },
		{ "Rebuild.Comment", "// Standard mapping rebuild. Retains existing triggers and modifiers for actions that were previously mapped.\n" },
		{ "Rebuild.Name", "EInputMappingRebuildType::Rebuild" },
		{ "Rebuild.ToolTip", "Standard mapping rebuild. Retains existing triggers and modifiers for actions that were previously mapped." },
		{ "RebuildWithFlush.Comment", "// If you have made changes to the triggers/modifiers associated with a UInputAction that was previously mapped a flush is required to reset the tracked data for that action.\n" },
		{ "RebuildWithFlush.Name", "EInputMappingRebuildType::RebuildWithFlush" },
		{ "RebuildWithFlush.ToolTip", "If you have made changes to the triggers/modifiers associated with a UInputAction that was previously mapped a flush is required to reset the tracked data for that action." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EnhancedInput_EInputMappingRebuildType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EnhancedInput,
		nullptr,
		"EInputMappingRebuildType",
		"EInputMappingRebuildType",
		Z_Construct_UEnum_EnhancedInput_EInputMappingRebuildType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_EInputMappingRebuildType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_EInputMappingRebuildType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EnhancedInput_EInputMappingRebuildType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_EnhancedInput_EInputMappingRebuildType()
	{
		if (!Z_Registration_Info_UEnum_EInputMappingRebuildType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInputMappingRebuildType.InnerSingleton, Z_Construct_UEnum_EnhancedInput_EInputMappingRebuildType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInputMappingRebuildType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModifyContextOptions;
class UScriptStruct* FModifyContextOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModifyContextOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModifyContextOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModifyContextOptions, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("ModifyContextOptions"));
	}
	return Z_Registration_Info_UScriptStruct_ModifyContextOptions.OuterSingleton;
}
template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<FModifyContextOptions>()
{
	return FModifyContextOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FModifyContextOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreAllPressedKeysUntilRelease_MetaData[];
#endif
		static void NewProp_bIgnoreAllPressedKeysUntilRelease_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreAllPressedKeysUntilRelease;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceImmediately_MetaData[];
#endif
		static void NewProp_bForceImmediately_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceImmediately;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNotifyUserSettings_MetaData[];
#endif
		static void NewProp_bNotifyUserSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotifyUserSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModifyContextOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Passed in as params for Adding/Remove input contexts */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Passed in as params for Adding/Remove input contexts" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModifyContextOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bIgnoreAllPressedKeysUntilRelease_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// If true then any keys that are pressed during the rebuild of control mappings will be ignored until they are released.\n" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "If true then any keys that are pressed during the rebuild of control mappings will be ignored until they are released." },
	};
#endif
	void Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bIgnoreAllPressedKeysUntilRelease_SetBit(void* Obj)
	{
		((FModifyContextOptions*)Obj)->bIgnoreAllPressedKeysUntilRelease = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bIgnoreAllPressedKeysUntilRelease = { "bIgnoreAllPressedKeysUntilRelease", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FModifyContextOptions), &Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bIgnoreAllPressedKeysUntilRelease_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bIgnoreAllPressedKeysUntilRelease_MetaData), Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bIgnoreAllPressedKeysUntilRelease_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bForceImmediately_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// The mapping changes will be applied synchronously, rather than at the end of the frame, making them available to the input system on the same frame.\n" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "The mapping changes will be applied synchronously, rather than at the end of the frame, making them available to the input system on the same frame." },
	};
#endif
	void Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bForceImmediately_SetBit(void* Obj)
	{
		((FModifyContextOptions*)Obj)->bForceImmediately = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bForceImmediately = { "bForceImmediately", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FModifyContextOptions), &Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bForceImmediately_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bForceImmediately_MetaData), Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bForceImmediately_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bNotifyUserSettings_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// If true, then this Mapping Context will be registered or unregistered with the Enhanced Input User Settings on this subsystem,\n// if they exist.\n" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "If true, then this Mapping Context will be registered or unregistered with the Enhanced Input User Settings on this subsystem,\nif they exist." },
	};
#endif
	void Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bNotifyUserSettings_SetBit(void* Obj)
	{
		((FModifyContextOptions*)Obj)->bNotifyUserSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bNotifyUserSettings = { "bNotifyUserSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FModifyContextOptions), &Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bNotifyUserSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bNotifyUserSettings_MetaData), Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bNotifyUserSettings_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModifyContextOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bIgnoreAllPressedKeysUntilRelease,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bForceImmediately,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bNotifyUserSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModifyContextOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
		nullptr,
		&NewStructOps,
		"ModifyContextOptions",
		Z_Construct_UScriptStruct_FModifyContextOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifyContextOptions_Statics::PropPointers),
		sizeof(FModifyContextOptions),
		alignof(FModifyContextOptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifyContextOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModifyContextOptions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifyContextOptions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FModifyContextOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_ModifyContextOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModifyContextOptions.InnerSingleton, Z_Construct_UScriptStruct_FModifyContextOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ModifyContextOptions.InnerSingleton;
	}
	DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execRemovePlayerMappableConfig)
	{
		P_GET_OBJECT(UPlayerMappableInputConfig,Z_Param_Config);
		P_GET_STRUCT_REF(FModifyContextOptions,Z_Param_Out_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemovePlayerMappableConfig(Z_Param_Config,Z_Param_Out_Options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execAddPlayerMappableConfig)
	{
		P_GET_OBJECT(UPlayerMappableInputConfig,Z_Param_Config);
		P_GET_STRUCT_REF(FModifyContextOptions,Z_Param_Out_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPlayerMappableConfig(Z_Param_Config,Z_Param_Out_Options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execRemoveAllPlayerMappedKeys)
	{
		P_GET_STRUCT_REF(FModifyContextOptions,Z_Param_Out_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllPlayerMappedKeys(Z_Param_Out_Options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execGetAllPlayerMappedKeys)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MappingName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FKey>*)Z_Param__Result=P_THIS->GetAllPlayerMappedKeys(Z_Param_MappingName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execK2_GetPlayerMappedKeyInSlot)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MappingName);
		P_GET_STRUCT_REF(FPlayerMappableKeySlot,Z_Param_Out_KeySlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKey*)Z_Param__Result=P_THIS->K2_GetPlayerMappedKeyInSlot(Z_Param_MappingName,Z_Param_Out_KeySlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execRemoveAllPlayerMappedKeysForMapping)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MappingName);
		P_GET_STRUCT_REF(FModifyContextOptions,Z_Param_Out_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RemoveAllPlayerMappedKeysForMapping(Z_Param_MappingName,Z_Param_Out_Options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execK2_RemovePlayerMappedKeyInSlot)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MappingName);
		P_GET_STRUCT_REF(FPlayerMappableKeySlot,Z_Param_Out_KeySlot);
		P_GET_STRUCT_REF(FModifyContextOptions,Z_Param_Out_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->K2_RemovePlayerMappedKeyInSlot(Z_Param_MappingName,Z_Param_Out_KeySlot,Z_Param_Out_Options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execK2_AddPlayerMappedKeyInSlot)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MappingName);
		P_GET_STRUCT(FKey,Z_Param_NewKey);
		P_GET_STRUCT_REF(FPlayerMappableKeySlot,Z_Param_Out_KeySlot);
		P_GET_STRUCT_REF(FModifyContextOptions,Z_Param_Out_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->K2_AddPlayerMappedKeyInSlot(Z_Param_MappingName,Z_Param_NewKey,Z_Param_Out_KeySlot,Z_Param_Out_Options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execGetAllPlayerMappableActionKeyMappings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FEnhancedActionKeyMapping>*)Z_Param__Result=P_THIS->GetAllPlayerMappableActionKeyMappings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execQueryKeysMappedToAction)
	{
		P_GET_OBJECT(UInputAction,Z_Param_Action);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FKey>*)Z_Param__Result=P_THIS->QueryKeysMappedToAction(Z_Param_Action);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execHasMappingContext)
	{
		P_GET_OBJECT(UInputMappingContext,Z_Param_MappingContext);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutFoundPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasMappingContext(Z_Param_MappingContext,Z_Param_Out_OutFoundPriority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execQueryMapKeyInContextSet)
	{
		P_GET_TARRAY_REF(UInputMappingContext*,Z_Param_Out_PrioritizedActiveContexts);
		P_GET_OBJECT(UInputMappingContext,Z_Param_InputContext);
		P_GET_OBJECT(UInputAction,Z_Param_Action);
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_GET_TARRAY_REF(FMappingQueryIssue,Z_Param_Out_OutIssues);
		P_GET_ENUM(EMappingQueryIssue,Z_Param_BlockingIssues);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMappingQueryResult*)Z_Param__Result=P_THIS->QueryMapKeyInContextSet(Z_Param_Out_PrioritizedActiveContexts,Z_Param_InputContext,Z_Param_Action,Z_Param_Key,Z_Param_Out_OutIssues,EMappingQueryIssue(Z_Param_BlockingIssues));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execQueryMapKeyInActiveContextSet)
	{
		P_GET_OBJECT(UInputMappingContext,Z_Param_InputContext);
		P_GET_OBJECT(UInputAction,Z_Param_Action);
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_GET_TARRAY_REF(FMappingQueryIssue,Z_Param_Out_OutIssues);
		P_GET_ENUM(EMappingQueryIssue,Z_Param_BlockingIssues);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMappingQueryResult*)Z_Param__Result=P_THIS->QueryMapKeyInActiveContextSet(Z_Param_InputContext,Z_Param_Action,Z_Param_Key,Z_Param_Out_OutIssues,EMappingQueryIssue(Z_Param_BlockingIssues));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execRequestRebuildControlMappings)
	{
		P_GET_STRUCT_REF(FModifyContextOptions,Z_Param_Out_Options);
		P_GET_ENUM(EInputMappingRebuildType,Z_Param_RebuildType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestRebuildControlMappings(Z_Param_Out_Options,EInputMappingRebuildType(Z_Param_RebuildType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execRemoveMappingContext)
	{
		P_GET_OBJECT(UInputMappingContext,Z_Param_MappingContext);
		P_GET_STRUCT_REF(FModifyContextOptions,Z_Param_Out_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveMappingContext(Z_Param_MappingContext,Z_Param_Out_Options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execAddMappingContext)
	{
		P_GET_OBJECT(UInputMappingContext,Z_Param_MappingContext);
		P_GET_PROPERTY(FIntProperty,Z_Param_Priority);
		P_GET_STRUCT_REF(FModifyContextOptions,Z_Param_Out_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMappingContext(Z_Param_MappingContext,Z_Param_Priority,Z_Param_Out_Options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execClearAllMappings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAllMappings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execStopContinuousInputInjectionForPlayerMapping)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MappingName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopContinuousInputInjectionForPlayerMapping(Z_Param_MappingName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execStopContinuousInputInjectionForAction)
	{
		P_GET_OBJECT(UInputAction,Z_Param_Action);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopContinuousInputInjectionForAction(Z_Param_Action);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execStartContinuousInputInjectionForPlayerMapping)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MappingName);
		P_GET_STRUCT(FInputActionValue,Z_Param_RawValue);
		P_GET_TARRAY_REF(UInputModifier*,Z_Param_Out_Modifiers);
		P_GET_TARRAY_REF(UInputTrigger*,Z_Param_Out_Triggers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartContinuousInputInjectionForPlayerMapping(Z_Param_MappingName,Z_Param_RawValue,Z_Param_Out_Modifiers,Z_Param_Out_Triggers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execStartContinuousInputInjectionForAction)
	{
		P_GET_OBJECT(UInputAction,Z_Param_Action);
		P_GET_STRUCT(FInputActionValue,Z_Param_RawValue);
		P_GET_TARRAY_REF(UInputModifier*,Z_Param_Out_Modifiers);
		P_GET_TARRAY_REF(UInputTrigger*,Z_Param_Out_Triggers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartContinuousInputInjectionForAction(Z_Param_Action,Z_Param_RawValue,Z_Param_Out_Modifiers,Z_Param_Out_Triggers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execInjectInputVectorForPlayerMapping)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MappingName);
		P_GET_STRUCT(FVector,Z_Param_Value);
		P_GET_TARRAY_REF(UInputModifier*,Z_Param_Out_Modifiers);
		P_GET_TARRAY_REF(UInputTrigger*,Z_Param_Out_Triggers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InjectInputVectorForPlayerMapping(Z_Param_MappingName,Z_Param_Value,Z_Param_Out_Modifiers,Z_Param_Out_Triggers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execInjectInputForPlayerMapping)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MappingName);
		P_GET_STRUCT(FInputActionValue,Z_Param_RawValue);
		P_GET_TARRAY_REF(UInputModifier*,Z_Param_Out_Modifiers);
		P_GET_TARRAY_REF(UInputTrigger*,Z_Param_Out_Triggers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InjectInputForPlayerMapping(Z_Param_MappingName,Z_Param_RawValue,Z_Param_Out_Modifiers,Z_Param_Out_Triggers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execInjectInputVectorForAction)
	{
		P_GET_OBJECT(UInputAction,Z_Param_Action);
		P_GET_STRUCT(FVector,Z_Param_Value);
		P_GET_TARRAY_REF(UInputModifier*,Z_Param_Out_Modifiers);
		P_GET_TARRAY_REF(UInputTrigger*,Z_Param_Out_Triggers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InjectInputVectorForAction(Z_Param_Action,Z_Param_Value,Z_Param_Out_Modifiers,Z_Param_Out_Triggers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execInjectInputForAction)
	{
		P_GET_OBJECT(UInputAction,Z_Param_Action);
		P_GET_STRUCT(FInputActionValue,Z_Param_RawValue);
		P_GET_TARRAY_REF(UInputModifier*,Z_Param_Out_Modifiers);
		P_GET_TARRAY_REF(UInputTrigger*,Z_Param_Out_Triggers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InjectInputForAction(Z_Param_Action,Z_Param_RawValue,Z_Param_Out_Modifiers,Z_Param_Out_Triggers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execOnUserKeyProfileChanged)
	{
		P_GET_OBJECT(UEnhancedPlayerMappableKeyProfile,Z_Param_InNewProfile);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUserKeyProfileChanged(Z_Param_InNewProfile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execOnUserSettingsChanged)
	{
		P_GET_OBJECT(UEnhancedInputUserSettings,Z_Param_Settings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUserSettingsChanged(Z_Param_Settings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execGetUserSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEnhancedInputUserSettings**)Z_Param__Result=P_THIS->GetUserSettings();
		P_NATIVE_END;
	}
	void UEnhancedInputSubsystemInterface::StaticRegisterNativesUEnhancedInputSubsystemInterface()
	{
		UClass* Class = UEnhancedInputSubsystemInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMappingContext", &IEnhancedInputSubsystemInterface::execAddMappingContext },
			{ "AddPlayerMappableConfig", &IEnhancedInputSubsystemInterface::execAddPlayerMappableConfig },
			{ "ClearAllMappings", &IEnhancedInputSubsystemInterface::execClearAllMappings },
			{ "GetAllPlayerMappableActionKeyMappings", &IEnhancedInputSubsystemInterface::execGetAllPlayerMappableActionKeyMappings },
			{ "GetAllPlayerMappedKeys", &IEnhancedInputSubsystemInterface::execGetAllPlayerMappedKeys },
			{ "GetUserSettings", &IEnhancedInputSubsystemInterface::execGetUserSettings },
			{ "HasMappingContext", &IEnhancedInputSubsystemInterface::execHasMappingContext },
			{ "InjectInputForAction", &IEnhancedInputSubsystemInterface::execInjectInputForAction },
			{ "InjectInputForPlayerMapping", &IEnhancedInputSubsystemInterface::execInjectInputForPlayerMapping },
			{ "InjectInputVectorForAction", &IEnhancedInputSubsystemInterface::execInjectInputVectorForAction },
			{ "InjectInputVectorForPlayerMapping", &IEnhancedInputSubsystemInterface::execInjectInputVectorForPlayerMapping },
			{ "K2_AddPlayerMappedKeyInSlot", &IEnhancedInputSubsystemInterface::execK2_AddPlayerMappedKeyInSlot },
			{ "K2_GetPlayerMappedKeyInSlot", &IEnhancedInputSubsystemInterface::execK2_GetPlayerMappedKeyInSlot },
			{ "K2_RemovePlayerMappedKeyInSlot", &IEnhancedInputSubsystemInterface::execK2_RemovePlayerMappedKeyInSlot },
			{ "OnUserKeyProfileChanged", &IEnhancedInputSubsystemInterface::execOnUserKeyProfileChanged },
			{ "OnUserSettingsChanged", &IEnhancedInputSubsystemInterface::execOnUserSettingsChanged },
			{ "QueryKeysMappedToAction", &IEnhancedInputSubsystemInterface::execQueryKeysMappedToAction },
			{ "QueryMapKeyInActiveContextSet", &IEnhancedInputSubsystemInterface::execQueryMapKeyInActiveContextSet },
			{ "QueryMapKeyInContextSet", &IEnhancedInputSubsystemInterface::execQueryMapKeyInContextSet },
			{ "RemoveAllPlayerMappedKeys", &IEnhancedInputSubsystemInterface::execRemoveAllPlayerMappedKeys },
			{ "RemoveAllPlayerMappedKeysForMapping", &IEnhancedInputSubsystemInterface::execRemoveAllPlayerMappedKeysForMapping },
			{ "RemoveMappingContext", &IEnhancedInputSubsystemInterface::execRemoveMappingContext },
			{ "RemovePlayerMappableConfig", &IEnhancedInputSubsystemInterface::execRemovePlayerMappableConfig },
			{ "RequestRebuildControlMappings", &IEnhancedInputSubsystemInterface::execRequestRebuildControlMappings },
			{ "StartContinuousInputInjectionForAction", &IEnhancedInputSubsystemInterface::execStartContinuousInputInjectionForAction },
			{ "StartContinuousInputInjectionForPlayerMapping", &IEnhancedInputSubsystemInterface::execStartContinuousInputInjectionForPlayerMapping },
			{ "StopContinuousInputInjectionForAction", &IEnhancedInputSubsystemInterface::execStopContinuousInputInjectionForAction },
			{ "StopContinuousInputInjectionForPlayerMapping", &IEnhancedInputSubsystemInterface::execStopContinuousInputInjectionForPlayerMapping },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics
	{
		struct EnhancedInputSubsystemInterface_eventAddMappingContext_Parms
		{
			const UInputMappingContext* MappingContext;
			int32 Priority;
			FModifyContextOptions Options;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MappingContext;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::NewProp_MappingContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::NewProp_MappingContext = { "MappingContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventAddMappingContext_Parms, MappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::NewProp_MappingContext_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::NewProp_MappingContext_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventAddMappingContext_Parms, Priority), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventAddMappingContext_Parms, Options), Z_Construct_UScriptStruct_FModifyContextOptions, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::NewProp_Options_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::NewProp_Options_MetaData) }; // 3570464288
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::NewProp_MappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::NewProp_Options,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Options" },
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Add a control mapping context.\n\x09 * @param MappingContext\x09\x09""A set of key to action mappings to apply to this player\n\x09 * @param Priority\x09\x09\x09\x09Higher priority mappings will be applied first and, if they consume input, will block lower priority mappings.\n\x09 * @param Options\x09\x09\x09\x09Options to consider when adding this mapping context.\n\x09 */" },
		{ "CPP_Default_Options", "()" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Add a control mapping context.\n@param MappingContext                A set of key to action mappings to apply to this player\n@param Priority                              Higher priority mappings will be applied first and, if they consume input, will block lower priority mappings.\n@param Options                               Options to consider when adding this mapping context." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "AddMappingContext", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::EnhancedInputSubsystemInterface_eventAddMappingContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::EnhancedInputSubsystemInterface_eventAddMappingContext_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics
	{
		struct EnhancedInputSubsystemInterface_eventAddPlayerMappableConfig_Parms
		{
			const UPlayerMappableInputConfig* Config;
			FModifyContextOptions Options;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Config;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::NewProp_Config_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventAddPlayerMappableConfig_Parms, Config), Z_Construct_UClass_UPlayerMappableInputConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::NewProp_Config_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::NewProp_Config_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventAddPlayerMappableConfig_Parms, Options), Z_Construct_UScriptStruct_FModifyContextOptions, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::NewProp_Options_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::NewProp_Options_MetaData) }; // 3570464288
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::NewProp_Config,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::NewProp_Options,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Options" },
		{ "Category", "Input|PlayerMappable" },
		{ "CPP_Default_Options", "()" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "AddPlayerMappableConfig has been deprecated, please use UEnhancedInputUserSettings instead." },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "AddPlayerMappableConfig", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::EnhancedInputSubsystemInterface_eventAddPlayerMappableConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::EnhancedInputSubsystemInterface_eventAddPlayerMappableConfig_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_ClearAllMappings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_ClearAllMappings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Remove all applied mapping contexts.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Remove all applied mapping contexts." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_ClearAllMappings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "ClearAllMappings", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_ClearAllMappings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_ClearAllMappings_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_ClearAllMappings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_ClearAllMappings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings_Statics
	{
		struct EnhancedInputSubsystemInterface_eventGetAllPlayerMappableActionKeyMappings_Parms
		{
			TArray<FEnhancedActionKeyMapping> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEnhancedActionKeyMapping, METADATA_PARAMS(0, nullptr) }; // 2568609385
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventGetAllPlayerMappableActionKeyMappings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2568609385
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|Mapping Queries" },
		{ "Comment", "/**\n\x09 * Get an array of the currently applied key mappings that are marked as Player Mappable.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Get an array of the currently applied key mappings that are marked as Player Mappable." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "GetAllPlayerMappableActionKeyMappings", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings_Statics::EnhancedInputSubsystemInterface_eventGetAllPlayerMappableActionKeyMappings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings_Statics::EnhancedInputSubsystemInterface_eventGetAllPlayerMappableActionKeyMappings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Statics
	{
		struct EnhancedInputSubsystemInterface_eventGetAllPlayerMappedKeys_Parms
		{
			FName MappingName;
			TArray<FKey> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappingName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MappingName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Statics::NewProp_MappingName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Statics::NewProp_MappingName = { "MappingName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventGetAllPlayerMappedKeys_Parms, MappingName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Statics::NewProp_MappingName_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Statics::NewProp_MappingName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 46000949
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventGetAllPlayerMappedKeys_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 46000949
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Statics::NewProp_MappingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|PlayerMappable" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetAllPlayerMappedKeys has been deprecated, please use UEnhancedInputUserSettings instead." },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "GetAllPlayerMappedKeys", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Statics::EnhancedInputSubsystemInterface_eventGetAllPlayerMappedKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Statics::EnhancedInputSubsystemInterface_eventGetAllPlayerMappedKeys_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetUserSettings_Statics
	{
		struct EnhancedInputSubsystemInterface_eventGetUserSettings_Parms
		{
			UEnhancedInputUserSettings* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetUserSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventGetUserSettings_Parms, ReturnValue), Z_Construct_UClass_UEnhancedInputUserSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetUserSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetUserSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetUserSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "DisplayName", "Get Enhanced Input User Settings" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetUserSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "GetUserSettings", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetUserSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetUserSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetUserSettings_Statics::EnhancedInputSubsystemInterface_eventGetUserSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetUserSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetUserSettings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetUserSettings_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetUserSettings_Statics::EnhancedInputSubsystemInterface_eventGetUserSettings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetUserSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetUserSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics
	{
		struct EnhancedInputSubsystemInterface_eventHasMappingContext_Parms
		{
			const UInputMappingContext* MappingContext;
			int32 OutFoundPriority;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MappingContext;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutFoundPriority;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::NewProp_MappingContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::NewProp_MappingContext = { "MappingContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventHasMappingContext_Parms, MappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::NewProp_MappingContext_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::NewProp_MappingContext_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::NewProp_OutFoundPriority = { "OutFoundPriority", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventHasMappingContext_Parms, OutFoundPriority), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EnhancedInputSubsystemInterface_eventHasMappingContext_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EnhancedInputSubsystemInterface_eventHasMappingContext_Parms), &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::NewProp_MappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::NewProp_OutFoundPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|Mapping Queries" },
		{ "Comment", "/**\n\x09 * Check if a mapping context is applied to this subsystem's owner.\n\x09 *\n\x09 * @param MappingContext\x09\x09The mapping context to search for on the subsystem's owner.\n\x09 * @param OutFoundPriority\x09\x09The priority of the mapping context if it is applied. -1 if the context is not applied\x09\n\x09 * @return\x09True if the mapping context is applied\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Check if a mapping context is applied to this subsystem's owner.\n\n@param MappingContext                The mapping context to search for on the subsystem's owner.\n@param OutFoundPriority              The priority of the mapping context if it is applied. -1 if the context is not applied\n@return      True if the mapping context is applied" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "HasMappingContext", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::EnhancedInputSubsystemInterface_eventHasMappingContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::EnhancedInputSubsystemInterface_eventHasMappingContext_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics
	{
		struct EnhancedInputSubsystemInterface_eventInjectInputForAction_Parms
		{
			const UInputAction* Action;
			FInputActionValue RawValue;
			TArray<UInputModifier*> Modifiers;
			TArray<UInputTrigger*> Triggers;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RawValue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Triggers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triggers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triggers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventInjectInputForAction_Parms, Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Action_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Action_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_RawValue = { "RawValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventInjectInputForAction_Parms, RawValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(0, nullptr) }; // 1693336646
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputModifier_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Modifiers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventInjectInputForAction_Parms, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Modifiers_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Modifiers_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Triggers_Inner = { "Triggers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputTrigger_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Triggers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Triggers = { "Triggers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventInjectInputForAction_Parms, Triggers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Triggers_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Triggers_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_RawValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Modifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Modifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Triggers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Triggers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Modifiers,Triggers" },
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Input simulation via injection. Runs modifiers and triggers delegates as if the input had come through the underlying input system as FKeys.\n\x09 * Applies action modifiers and triggers on top.\n\x09 *\n\x09 * @param Action\x09\x09The Input Action to set inject input for\n\x09 * @param RawValue\x09\x09The value to set the action to\n\x09 * @param Modifiers\x09\x09The modifiers to apply to the injected input.\n\x09 * @param Triggers\x09\x09The triggers to apply to the injected input.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Input simulation via injection. Runs modifiers and triggers delegates as if the input had come through the underlying input system as FKeys.\nApplies action modifiers and triggers on top.\n\n@param Action                The Input Action to set inject input for\n@param RawValue              The value to set the action to\n@param Modifiers             The modifiers to apply to the injected input.\n@param Triggers              The triggers to apply to the injected input." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "InjectInputForAction", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::EnhancedInputSubsystemInterface_eventInjectInputForAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::EnhancedInputSubsystemInterface_eventInjectInputForAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics
	{
		struct EnhancedInputSubsystemInterface_eventInjectInputForPlayerMapping_Parms
		{
			FName MappingName;
			FInputActionValue RawValue;
			TArray<UInputModifier*> Modifiers;
			TArray<UInputTrigger*> Triggers;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappingName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MappingName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RawValue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Triggers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triggers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triggers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::NewProp_MappingName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::NewProp_MappingName = { "MappingName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventInjectInputForPlayerMapping_Parms, MappingName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::NewProp_MappingName_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::NewProp_MappingName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::NewProp_RawValue = { "RawValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventInjectInputForPlayerMapping_Parms, RawValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(0, nullptr) }; // 1693336646
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputModifier_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::NewProp_Modifiers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventInjectInputForPlayerMapping_Parms, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::NewProp_Modifiers_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::NewProp_Modifiers_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::NewProp_Triggers_Inner = { "Triggers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputTrigger_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::NewProp_Triggers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::NewProp_Triggers = { "Triggers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventInjectInputForPlayerMapping_Parms, Triggers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::NewProp_Triggers_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::NewProp_Triggers_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::NewProp_MappingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::NewProp_RawValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::NewProp_Modifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::NewProp_Modifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::NewProp_Triggers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::NewProp_Triggers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Modifiers,Triggers" },
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Input simulation via injection. Runs modifiers and triggers delegates as if the input had come through the underlying input system as FKeys.\n\x09 * Applies action modifiers and triggers on top.\n\x09 *\n\x09 * @param MappingName\x09\x09The name of the player mapping that can be used for look up an associated UInputAction object.\n\x09 * @param RawValue\x09\x09\x09The value to set the action to\n\x09 * @param Modifiers\x09\x09\x09The modifiers to apply to the injected input.\n\x09 * @param Triggers\x09\x09\x09The triggers to apply to the injected input.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Input simulation via injection. Runs modifiers and triggers delegates as if the input had come through the underlying input system as FKeys.\nApplies action modifiers and triggers on top.\n\n@param MappingName           The name of the player mapping that can be used for look up an associated UInputAction object.\n@param RawValue                      The value to set the action to\n@param Modifiers                     The modifiers to apply to the injected input.\n@param Triggers                      The triggers to apply to the injected input." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "InjectInputForPlayerMapping", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::EnhancedInputSubsystemInterface_eventInjectInputForPlayerMapping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::EnhancedInputSubsystemInterface_eventInjectInputForPlayerMapping_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics
	{
		struct EnhancedInputSubsystemInterface_eventInjectInputVectorForAction_Parms
		{
			const UInputAction* Action;
			FVector Value;
			TArray<UInputModifier*> Modifiers;
			TArray<UInputTrigger*> Triggers;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Triggers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triggers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triggers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventInjectInputVectorForAction_Parms, Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Action_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Action_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventInjectInputVectorForAction_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputModifier_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Modifiers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventInjectInputVectorForAction_Parms, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Modifiers_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Modifiers_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Triggers_Inner = { "Triggers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputTrigger_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Triggers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Triggers = { "Triggers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventInjectInputVectorForAction_Parms, Triggers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Triggers_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Triggers_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Modifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Modifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Triggers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Triggers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Modifiers,Triggers" },
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Input simulation via injection. Runs modifiers and triggers delegates as if the input had come through the underlying input system as FKeys.\n\x09 * Applies action modifiers and triggers on top.\n\x09 *\n\x09 * @param Action\x09\x09The Input Action to set inject input for\n\x09 * @param Value\x09\x09\x09The value to set the action to (the type will be controlled by the Action)\n\x09 * @param Modifiers\x09\x09The modifiers to apply to the injected input.\n\x09 * @param Triggers\x09\x09The triggers to apply to the injected input.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Input simulation via injection. Runs modifiers and triggers delegates as if the input had come through the underlying input system as FKeys.\nApplies action modifiers and triggers on top.\n\n@param Action                The Input Action to set inject input for\n@param Value                 The value to set the action to (the type will be controlled by the Action)\n@param Modifiers             The modifiers to apply to the injected input.\n@param Triggers              The triggers to apply to the injected input." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "InjectInputVectorForAction", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::EnhancedInputSubsystemInterface_eventInjectInputVectorForAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::EnhancedInputSubsystemInterface_eventInjectInputVectorForAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics
	{
		struct EnhancedInputSubsystemInterface_eventInjectInputVectorForPlayerMapping_Parms
		{
			FName MappingName;
			FVector Value;
			TArray<UInputModifier*> Modifiers;
			TArray<UInputTrigger*> Triggers;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappingName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MappingName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Triggers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triggers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triggers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::NewProp_MappingName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::NewProp_MappingName = { "MappingName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventInjectInputVectorForPlayerMapping_Parms, MappingName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::NewProp_MappingName_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::NewProp_MappingName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventInjectInputVectorForPlayerMapping_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputModifier_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::NewProp_Modifiers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventInjectInputVectorForPlayerMapping_Parms, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::NewProp_Modifiers_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::NewProp_Modifiers_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::NewProp_Triggers_Inner = { "Triggers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputTrigger_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::NewProp_Triggers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::NewProp_Triggers = { "Triggers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventInjectInputVectorForPlayerMapping_Parms, Triggers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::NewProp_Triggers_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::NewProp_Triggers_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::NewProp_MappingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::NewProp_Modifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::NewProp_Modifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::NewProp_Triggers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::NewProp_Triggers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Modifiers,Triggers" },
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Input simulation via injection. Runs modifiers and triggers delegates as if the input had come through the underlying input system as FKeys.\n\x09 * Applies action modifiers and triggers on top.\n\x09 *\n\x09 * @param MappingName\x09\x09The name of the player mapping that can be used for look up an associated UInputAction object.\n\x09 * @param Value\x09\x09\x09\x09The value to set the action to (the type will be controlled by the Action)\n\x09 * @param Modifiers\x09\x09\x09The modifiers to apply to the injected input.\n\x09 * @param Triggers\x09\x09\x09The triggers to apply to the injected input.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Input simulation via injection. Runs modifiers and triggers delegates as if the input had come through the underlying input system as FKeys.\nApplies action modifiers and triggers on top.\n\n@param MappingName           The name of the player mapping that can be used for look up an associated UInputAction object.\n@param Value                         The value to set the action to (the type will be controlled by the Action)\n@param Modifiers                     The modifiers to apply to the injected input.\n@param Triggers                      The triggers to apply to the injected input." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "InjectInputVectorForPlayerMapping", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::EnhancedInputSubsystemInterface_eventInjectInputVectorForPlayerMapping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::EnhancedInputSubsystemInterface_eventInjectInputVectorForPlayerMapping_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics
	{
		struct EnhancedInputSubsystemInterface_eventK2_AddPlayerMappedKeyInSlot_Parms
		{
			FName MappingName;
			FKey NewKey;
			FPlayerMappableKeySlot KeySlot;
			FModifyContextOptions Options;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappingName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MappingName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeySlot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeySlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::NewProp_MappingName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::NewProp_MappingName = { "MappingName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventK2_AddPlayerMappedKeyInSlot_Parms, MappingName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::NewProp_MappingName_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::NewProp_MappingName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::NewProp_NewKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::NewProp_NewKey = { "NewKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventK2_AddPlayerMappedKeyInSlot_Parms, NewKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::NewProp_NewKey_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::NewProp_NewKey_MetaData) }; // 46000949
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::NewProp_KeySlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::NewProp_KeySlot = { "KeySlot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventK2_AddPlayerMappedKeyInSlot_Parms, KeySlot), Z_Construct_UScriptStruct_FPlayerMappableKeySlot, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::NewProp_KeySlot_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::NewProp_KeySlot_MetaData) }; // 3643067398
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventK2_AddPlayerMappedKeyInSlot_Parms, Options), Z_Construct_UScriptStruct_FModifyContextOptions, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::NewProp_Options_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::NewProp_Options_MetaData) }; // 3570464288
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventK2_AddPlayerMappedKeyInSlot_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::NewProp_MappingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::NewProp_NewKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::NewProp_KeySlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "KeySlot, Options" },
		{ "Category", "Input|PlayerMappable" },
		{ "CPP_Default_KeySlot", "()" },
		{ "CPP_Default_Options", "()" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "AddPlayerMappedKeyInSlot has been deprecated, please use UEnhancedInputUserSettings instead." },
		{ "DisplayName", "Add Player Mapped Key In Slot" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "K2_AddPlayerMappedKeyInSlot", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::EnhancedInputSubsystemInterface_eventK2_AddPlayerMappedKeyInSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::EnhancedInputSubsystemInterface_eventK2_AddPlayerMappedKeyInSlot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Statics
	{
		struct EnhancedInputSubsystemInterface_eventK2_GetPlayerMappedKeyInSlot_Parms
		{
			FName MappingName;
			FPlayerMappableKeySlot KeySlot;
			FKey ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappingName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MappingName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeySlot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeySlot;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Statics::NewProp_MappingName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Statics::NewProp_MappingName = { "MappingName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventK2_GetPlayerMappedKeyInSlot_Parms, MappingName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Statics::NewProp_MappingName_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Statics::NewProp_MappingName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Statics::NewProp_KeySlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Statics::NewProp_KeySlot = { "KeySlot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventK2_GetPlayerMappedKeyInSlot_Parms, KeySlot), Z_Construct_UScriptStruct_FPlayerMappableKeySlot, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Statics::NewProp_KeySlot_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Statics::NewProp_KeySlot_MetaData) }; // 3643067398
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventK2_GetPlayerMappedKeyInSlot_Parms, ReturnValue), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 46000949
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Statics::NewProp_MappingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Statics::NewProp_KeySlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "KeySlot" },
		{ "Category", "Input|PlayerMappable" },
		{ "CPP_Default_KeySlot", "()" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "K2_GetPlayerMappedKeyInSlot has been deprecated, please use UEnhancedInputUserSettings instead." },
		{ "DisplayName", "Get Player Mapped Key In Slot" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "K2_GetPlayerMappedKeyInSlot", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Statics::EnhancedInputSubsystemInterface_eventK2_GetPlayerMappedKeyInSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Statics::EnhancedInputSubsystemInterface_eventK2_GetPlayerMappedKeyInSlot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics
	{
		struct EnhancedInputSubsystemInterface_eventK2_RemovePlayerMappedKeyInSlot_Parms
		{
			FName MappingName;
			FPlayerMappableKeySlot KeySlot;
			FModifyContextOptions Options;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappingName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MappingName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeySlot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeySlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::NewProp_MappingName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::NewProp_MappingName = { "MappingName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventK2_RemovePlayerMappedKeyInSlot_Parms, MappingName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::NewProp_MappingName_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::NewProp_MappingName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::NewProp_KeySlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::NewProp_KeySlot = { "KeySlot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventK2_RemovePlayerMappedKeyInSlot_Parms, KeySlot), Z_Construct_UScriptStruct_FPlayerMappableKeySlot, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::NewProp_KeySlot_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::NewProp_KeySlot_MetaData) }; // 3643067398
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventK2_RemovePlayerMappedKeyInSlot_Parms, Options), Z_Construct_UScriptStruct_FModifyContextOptions, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::NewProp_Options_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::NewProp_Options_MetaData) }; // 3570464288
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventK2_RemovePlayerMappedKeyInSlot_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::NewProp_MappingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::NewProp_KeySlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "KeySlot, Options" },
		{ "Category", "Input|PlayerMappable" },
		{ "Comment", "/**\n\x09 * Removes player mapped key in the KeySlot for mapping of MappingName.\n\x09 * Requests a rebuild of the player mappings.\n\x09 *\n\x09 * @return The number of mappings that have been removed\n\x09 */" },
		{ "CPP_Default_KeySlot", "()" },
		{ "CPP_Default_Options", "()" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "K2_RemovePlayerMappedKeyInSlot has been deprecated, please use UEnhancedInputUserSettings instead." },
		{ "DisplayName", "Remove Player Mapped Key In Slot" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Removes player mapped key in the KeySlot for mapping of MappingName.\nRequests a rebuild of the player mappings.\n\n@return The number of mappings that have been removed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "K2_RemovePlayerMappedKeyInSlot", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::EnhancedInputSubsystemInterface_eventK2_RemovePlayerMappedKeyInSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::EnhancedInputSubsystemInterface_eventK2_RemovePlayerMappedKeyInSlot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserKeyProfileChanged_Statics
	{
		struct EnhancedInputSubsystemInterface_eventOnUserKeyProfileChanged_Parms
		{
			const UEnhancedPlayerMappableKeyProfile* InNewProfile;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNewProfile_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InNewProfile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserKeyProfileChanged_Statics::NewProp_InNewProfile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserKeyProfileChanged_Statics::NewProp_InNewProfile = { "InNewProfile", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventOnUserKeyProfileChanged_Parms, InNewProfile), Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserKeyProfileChanged_Statics::NewProp_InNewProfile_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserKeyProfileChanged_Statics::NewProp_InNewProfile_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserKeyProfileChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserKeyProfileChanged_Statics::NewProp_InNewProfile,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserKeyProfileChanged_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** A callback for when the user has applied a new mappable key profile. */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "A callback for when the user has applied a new mappable key profile." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserKeyProfileChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "OnUserKeyProfileChanged", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserKeyProfileChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserKeyProfileChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserKeyProfileChanged_Statics::EnhancedInputSubsystemInterface_eventOnUserKeyProfileChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserKeyProfileChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserKeyProfileChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserKeyProfileChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserKeyProfileChanged_Statics::EnhancedInputSubsystemInterface_eventOnUserKeyProfileChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserKeyProfileChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserKeyProfileChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserSettingsChanged_Statics
	{
		struct EnhancedInputSubsystemInterface_eventOnUserSettingsChanged_Parms
		{
			UEnhancedInputUserSettings* Settings;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserSettingsChanged_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventOnUserSettingsChanged_Parms, Settings), Z_Construct_UClass_UEnhancedInputUserSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserSettingsChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserSettingsChanged_Statics::NewProp_Settings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserSettingsChanged_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Callback for when any Enhanced Input user settings have been changed (a new key mapping for example) */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Callback for when any Enhanced Input user settings have been changed (a new key mapping for example)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserSettingsChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "OnUserSettingsChanged", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserSettingsChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserSettingsChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserSettingsChanged_Statics::EnhancedInputSubsystemInterface_eventOnUserSettingsChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserSettingsChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserSettingsChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserSettingsChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserSettingsChanged_Statics::EnhancedInputSubsystemInterface_eventOnUserSettingsChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserSettingsChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserSettingsChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics
	{
		struct EnhancedInputSubsystemInterface_eventQueryKeysMappedToAction_Parms
		{
			const UInputAction* Action;
			TArray<FKey> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryKeysMappedToAction_Parms, Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::NewProp_Action_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::NewProp_Action_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 46000949
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryKeysMappedToAction_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 46000949
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|Mapping Queries" },
		{ "Comment", "/**\n\x09 * Returns the keys mapped to the given action in the active input mapping contexts.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Returns the keys mapped to the given action in the active input mapping contexts." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "QueryKeysMappedToAction", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::EnhancedInputSubsystemInterface_eventQueryKeysMappedToAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::EnhancedInputSubsystemInterface_eventQueryKeysMappedToAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics
	{
		struct EnhancedInputSubsystemInterface_eventQueryMapKeyInActiveContextSet_Parms
		{
			const UInputMappingContext* InputContext;
			const UInputAction* Action;
			FKey Key;
			TArray<FMappingQueryIssue> OutIssues;
			EMappingQueryIssue BlockingIssues;
			EMappingQueryResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutIssues_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutIssues;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlockingIssues_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BlockingIssues;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_InputContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_InputContext = { "InputContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryMapKeyInActiveContextSet_Parms, InputContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_InputContext_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_InputContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryMapKeyInActiveContextSet_Parms, Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_Action_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_Action_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryMapKeyInActiveContextSet_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 46000949
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_OutIssues_Inner = { "OutIssues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMappingQueryIssue, METADATA_PARAMS(0, nullptr) }; // 1715210507
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_OutIssues = { "OutIssues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryMapKeyInActiveContextSet_Parms, OutIssues), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1715210507
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_BlockingIssues_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_BlockingIssues = { "BlockingIssues", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryMapKeyInActiveContextSet_Parms, BlockingIssues), Z_Construct_UEnum_EnhancedInput_EMappingQueryIssue, METADATA_PARAMS(0, nullptr) }; // 2199299656
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryMapKeyInActiveContextSet_Parms, ReturnValue), Z_Construct_UEnum_EnhancedInput_EMappingQueryResult, METADATA_PARAMS(0, nullptr) }; // 1365196678
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_InputContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_OutIssues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_OutIssues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_BlockingIssues_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_BlockingIssues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|Mapping Queries" },
		{ "Comment", "/* = DefaultMappingIssues::StandardFatal*/" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "= DefaultMappingIssues::StandardFatal" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "QueryMapKeyInActiveContextSet", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::EnhancedInputSubsystemInterface_eventQueryMapKeyInActiveContextSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::EnhancedInputSubsystemInterface_eventQueryMapKeyInActiveContextSet_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics
	{
		struct EnhancedInputSubsystemInterface_eventQueryMapKeyInContextSet_Parms
		{
			TArray<UInputMappingContext*> PrioritizedActiveContexts;
			const UInputMappingContext* InputContext;
			const UInputAction* Action;
			FKey Key;
			TArray<FMappingQueryIssue> OutIssues;
			EMappingQueryIssue BlockingIssues;
			EMappingQueryResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrioritizedActiveContexts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrioritizedActiveContexts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PrioritizedActiveContexts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutIssues_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutIssues;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlockingIssues_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BlockingIssues;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_PrioritizedActiveContexts_Inner = { "PrioritizedActiveContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_PrioritizedActiveContexts_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_PrioritizedActiveContexts = { "PrioritizedActiveContexts", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryMapKeyInContextSet_Parms, PrioritizedActiveContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_PrioritizedActiveContexts_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_PrioritizedActiveContexts_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_InputContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_InputContext = { "InputContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryMapKeyInContextSet_Parms, InputContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_InputContext_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_InputContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryMapKeyInContextSet_Parms, Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_Action_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_Action_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryMapKeyInContextSet_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 46000949
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_OutIssues_Inner = { "OutIssues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMappingQueryIssue, METADATA_PARAMS(0, nullptr) }; // 1715210507
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_OutIssues = { "OutIssues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryMapKeyInContextSet_Parms, OutIssues), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1715210507
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_BlockingIssues_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_BlockingIssues = { "BlockingIssues", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryMapKeyInContextSet_Parms, BlockingIssues), Z_Construct_UEnum_EnhancedInput_EMappingQueryIssue, METADATA_PARAMS(0, nullptr) }; // 2199299656
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryMapKeyInContextSet_Parms, ReturnValue), Z_Construct_UEnum_EnhancedInput_EMappingQueryResult, METADATA_PARAMS(0, nullptr) }; // 1365196678
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_PrioritizedActiveContexts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_PrioritizedActiveContexts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_InputContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_OutIssues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_OutIssues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_BlockingIssues_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_BlockingIssues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|Mapping Queries" },
		{ "Comment", "/* = DefaultMappingIssues::StandardFatal*/" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "= DefaultMappingIssues::StandardFatal" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "QueryMapKeyInContextSet", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::EnhancedInputSubsystemInterface_eventQueryMapKeyInContextSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::EnhancedInputSubsystemInterface_eventQueryMapKeyInContextSet_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys_Statics
	{
		struct EnhancedInputSubsystemInterface_eventRemoveAllPlayerMappedKeys_Parms
		{
			FModifyContextOptions Options;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys_Statics::NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventRemoveAllPlayerMappedKeys_Parms, Options), Z_Construct_UScriptStruct_FModifyContextOptions, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys_Statics::NewProp_Options_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys_Statics::NewProp_Options_MetaData) }; // 3570464288
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys_Statics::NewProp_Options,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Options" },
		{ "Category", "Input|PlayerMappable" },
		{ "CPP_Default_Options", "()" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "RemoveAllPlayerMappedKeys has been deprecated, please use UEnhancedInputUserSettings instead." },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "RemoveAllPlayerMappedKeys", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys_Statics::EnhancedInputSubsystemInterface_eventRemoveAllPlayerMappedKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys_Statics::EnhancedInputSubsystemInterface_eventRemoveAllPlayerMappedKeys_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Statics
	{
		struct EnhancedInputSubsystemInterface_eventRemoveAllPlayerMappedKeysForMapping_Parms
		{
			FName MappingName;
			FModifyContextOptions Options;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappingName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MappingName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Statics::NewProp_MappingName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Statics::NewProp_MappingName = { "MappingName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventRemoveAllPlayerMappedKeysForMapping_Parms, MappingName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Statics::NewProp_MappingName_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Statics::NewProp_MappingName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Statics::NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventRemoveAllPlayerMappedKeysForMapping_Parms, Options), Z_Construct_UScriptStruct_FModifyContextOptions, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Statics::NewProp_Options_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Statics::NewProp_Options_MetaData) }; // 3570464288
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventRemoveAllPlayerMappedKeysForMapping_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Statics::NewProp_MappingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "KeySlot, Options" },
		{ "Category", "Input|PlayerMappable" },
		{ "CPP_Default_Options", "()" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "RemoveAllPlayerMappedKeysForMapping has been deprecated, please use UEnhancedInputUserSettings instead." },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "RemoveAllPlayerMappedKeysForMapping", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Statics::EnhancedInputSubsystemInterface_eventRemoveAllPlayerMappedKeysForMapping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Statics::EnhancedInputSubsystemInterface_eventRemoveAllPlayerMappedKeysForMapping_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics
	{
		struct EnhancedInputSubsystemInterface_eventRemoveMappingContext_Parms
		{
			const UInputMappingContext* MappingContext;
			FModifyContextOptions Options;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::NewProp_MappingContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::NewProp_MappingContext = { "MappingContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventRemoveMappingContext_Parms, MappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::NewProp_MappingContext_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::NewProp_MappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventRemoveMappingContext_Parms, Options), Z_Construct_UScriptStruct_FModifyContextOptions, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::NewProp_Options_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::NewProp_Options_MetaData) }; // 3570464288
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::NewProp_MappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::NewProp_Options,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Options" },
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09* Remove a specific control context. \n\x09* This is safe to call even if the context is not applied.\n\x09* @param MappingContext\x09\x09""Context to remove from the player\n\x09* @param Options\x09\x09\x09Options to consider when removing this input mapping context\n\x09*/" },
		{ "CPP_Default_Options", "()" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Remove a specific control context.\nThis is safe to call even if the context is not applied.\n@param MappingContext         Context to remove from the player\n@param Options                        Options to consider when removing this input mapping context" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "RemoveMappingContext", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::EnhancedInputSubsystemInterface_eventRemoveMappingContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::EnhancedInputSubsystemInterface_eventRemoveMappingContext_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics
	{
		struct EnhancedInputSubsystemInterface_eventRemovePlayerMappableConfig_Parms
		{
			const UPlayerMappableInputConfig* Config;
			FModifyContextOptions Options;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Config;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::NewProp_Config_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventRemovePlayerMappableConfig_Parms, Config), Z_Construct_UClass_UPlayerMappableInputConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::NewProp_Config_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::NewProp_Config_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventRemovePlayerMappableConfig_Parms, Options), Z_Construct_UScriptStruct_FModifyContextOptions, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::NewProp_Options_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::NewProp_Options_MetaData) }; // 3570464288
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::NewProp_Config,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::NewProp_Options,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Options" },
		{ "Category", "Input|PlayerMappable" },
		{ "CPP_Default_Options", "()" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "RemovePlayerMappableConfig has been deprecated, please use UEnhancedInputUserSettings instead." },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "RemovePlayerMappableConfig", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::EnhancedInputSubsystemInterface_eventRemovePlayerMappableConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::EnhancedInputSubsystemInterface_eventRemovePlayerMappableConfig_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics
	{
		struct EnhancedInputSubsystemInterface_eventRequestRebuildControlMappings_Parms
		{
			FModifyContextOptions Options;
			EInputMappingRebuildType RebuildType;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RebuildType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RebuildType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventRequestRebuildControlMappings_Parms, Options), Z_Construct_UScriptStruct_FModifyContextOptions, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::NewProp_Options_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::NewProp_Options_MetaData) }; // 3570464288
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::NewProp_RebuildType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::NewProp_RebuildType = { "RebuildType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventRequestRebuildControlMappings_Parms, RebuildType), Z_Construct_UEnum_EnhancedInput_EInputMappingRebuildType, METADATA_PARAMS(0, nullptr) }; // 2864446305
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::NewProp_RebuildType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::NewProp_RebuildType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Options" },
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09* Flag player for reapplication of all mapping contexts at the end of this frame.\n\x09* This is called automatically when adding or removing mappings contexts.\n\x09*\n\x09* @param Options\x09\x09Options to consider when removing this input mapping context\n\x09*/" },
		{ "CPP_Default_Options", "()" },
		{ "CPP_Default_RebuildType", "Rebuild" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Flag player for reapplication of all mapping contexts at the end of this frame.\nThis is called automatically when adding or removing mappings contexts.\n\n@param Options                Options to consider when removing this input mapping context" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "RequestRebuildControlMappings", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::EnhancedInputSubsystemInterface_eventRequestRebuildControlMappings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::EnhancedInputSubsystemInterface_eventRequestRebuildControlMappings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics
	{
		struct EnhancedInputSubsystemInterface_eventStartContinuousInputInjectionForAction_Parms
		{
			const UInputAction* Action;
			FInputActionValue RawValue;
			TArray<UInputModifier*> Modifiers;
			TArray<UInputTrigger*> Triggers;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RawValue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Triggers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triggers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triggers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventStartContinuousInputInjectionForAction_Parms, Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::NewProp_Action_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::NewProp_Action_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::NewProp_RawValue = { "RawValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventStartContinuousInputInjectionForAction_Parms, RawValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(0, nullptr) }; // 1693336646
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputModifier_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::NewProp_Modifiers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventStartContinuousInputInjectionForAction_Parms, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::NewProp_Modifiers_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::NewProp_Modifiers_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::NewProp_Triggers_Inner = { "Triggers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputTrigger_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::NewProp_Triggers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::NewProp_Triggers = { "Triggers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventStartContinuousInputInjectionForAction_Parms, Triggers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::NewProp_Triggers_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::NewProp_Triggers_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::NewProp_RawValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::NewProp_Modifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::NewProp_Modifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::NewProp_Triggers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::NewProp_Triggers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Modifiers,Triggers" },
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Starts simulation of input via injection. This injects the given input every tick until it is stopped with StopContinuousInputInjectionForAction.\n\x09 *\n\x09 * @param Action\x09\x09The Input Action to set inject input for\n\x09 * @param RawValue\x09\x09The value to set the action to (the type will be controlled by the Action)\n\x09 * @param Modifiers\x09\x09The modifiers to apply to the injected input.\n\x09 * @param Triggers\x09\x09The triggers to apply to the injected input.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Starts simulation of input via injection. This injects the given input every tick until it is stopped with StopContinuousInputInjectionForAction.\n\n@param Action                The Input Action to set inject input for\n@param RawValue              The value to set the action to (the type will be controlled by the Action)\n@param Modifiers             The modifiers to apply to the injected input.\n@param Triggers              The triggers to apply to the injected input." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "StartContinuousInputInjectionForAction", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::EnhancedInputSubsystemInterface_eventStartContinuousInputInjectionForAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::EnhancedInputSubsystemInterface_eventStartContinuousInputInjectionForAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics
	{
		struct EnhancedInputSubsystemInterface_eventStartContinuousInputInjectionForPlayerMapping_Parms
		{
			FName MappingName;
			FInputActionValue RawValue;
			TArray<UInputModifier*> Modifiers;
			TArray<UInputTrigger*> Triggers;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappingName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MappingName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RawValue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Triggers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triggers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triggers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::NewProp_MappingName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::NewProp_MappingName = { "MappingName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventStartContinuousInputInjectionForPlayerMapping_Parms, MappingName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::NewProp_MappingName_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::NewProp_MappingName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::NewProp_RawValue = { "RawValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventStartContinuousInputInjectionForPlayerMapping_Parms, RawValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(0, nullptr) }; // 1693336646
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputModifier_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::NewProp_Modifiers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventStartContinuousInputInjectionForPlayerMapping_Parms, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::NewProp_Modifiers_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::NewProp_Modifiers_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::NewProp_Triggers_Inner = { "Triggers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputTrigger_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::NewProp_Triggers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::NewProp_Triggers = { "Triggers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventStartContinuousInputInjectionForPlayerMapping_Parms, Triggers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::NewProp_Triggers_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::NewProp_Triggers_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::NewProp_MappingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::NewProp_RawValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::NewProp_Modifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::NewProp_Modifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::NewProp_Triggers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::NewProp_Triggers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Modifiers,Triggers" },
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Starts simulation of input via injection. This injects the given input every tick until it is stopped with StopContinuousInputInjectionForAction.\n\x09 *\n\x09 * @param MappingName\x09\x09The name of the player mapping that can be used for look up an associated UInputAction object.\n\x09 * @param RawValue\x09\x09\x09The value to set the action to (the type will be controlled by the Action)\n\x09 * @param Modifiers\x09\x09\x09The modifiers to apply to the injected input.\n\x09 * @param Triggers\x09\x09\x09The triggers to apply to the injected input.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Starts simulation of input via injection. This injects the given input every tick until it is stopped with StopContinuousInputInjectionForAction.\n\n@param MappingName           The name of the player mapping that can be used for look up an associated UInputAction object.\n@param RawValue                      The value to set the action to (the type will be controlled by the Action)\n@param Modifiers                     The modifiers to apply to the injected input.\n@param Triggers                      The triggers to apply to the injected input." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "StartContinuousInputInjectionForPlayerMapping", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::EnhancedInputSubsystemInterface_eventStartContinuousInputInjectionForPlayerMapping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::EnhancedInputSubsystemInterface_eventStartContinuousInputInjectionForPlayerMapping_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForAction_Statics
	{
		struct EnhancedInputSubsystemInterface_eventStopContinuousInputInjectionForAction_Parms
		{
			const UInputAction* Action;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForAction_Statics::NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForAction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventStopContinuousInputInjectionForAction_Parms, Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForAction_Statics::NewProp_Action_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForAction_Statics::NewProp_Action_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForAction_Statics::NewProp_Action,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Stops continuous input injection for the given action.\n\x09 *\n\x09 * @param Action\x09\x09The action to stop injecting input for\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Stops continuous input injection for the given action.\n\n@param Action                The action to stop injecting input for" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "StopContinuousInputInjectionForAction", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForAction_Statics::EnhancedInputSubsystemInterface_eventStopContinuousInputInjectionForAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForAction_Statics::EnhancedInputSubsystemInterface_eventStopContinuousInputInjectionForAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForPlayerMapping_Statics
	{
		struct EnhancedInputSubsystemInterface_eventStopContinuousInputInjectionForPlayerMapping_Parms
		{
			FName MappingName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappingName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MappingName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForPlayerMapping_Statics::NewProp_MappingName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForPlayerMapping_Statics::NewProp_MappingName = { "MappingName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventStopContinuousInputInjectionForPlayerMapping_Parms, MappingName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForPlayerMapping_Statics::NewProp_MappingName_MetaData), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForPlayerMapping_Statics::NewProp_MappingName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForPlayerMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForPlayerMapping_Statics::NewProp_MappingName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForPlayerMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Stops continuous input injection for the given player mapping name.\n\x09 *\n\x09 * @param MappingName\x09\x09The name of the player mapping that can be used for look up an associated UInputAction object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Stops continuous input injection for the given player mapping name.\n\n@param MappingName           The name of the player mapping that can be used for look up an associated UInputAction object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForPlayerMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "StopContinuousInputInjectionForPlayerMapping", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForPlayerMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForPlayerMapping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForPlayerMapping_Statics::EnhancedInputSubsystemInterface_eventStopContinuousInputInjectionForPlayerMapping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForPlayerMapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForPlayerMapping_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForPlayerMapping_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForPlayerMapping_Statics::EnhancedInputSubsystemInterface_eventStopContinuousInputInjectionForPlayerMapping_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForPlayerMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForPlayerMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnhancedInputSubsystemInterface);
	UClass* Z_Construct_UClass_UEnhancedInputSubsystemInterface_NoRegister()
	{
		return UEnhancedInputSubsystemInterface::StaticClass();
	}
	struct Z_Construct_UClass_UEnhancedInputSubsystemInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnhancedInputSubsystemInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputSubsystemInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnhancedInputSubsystemInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext, "AddMappingContext" }, // 3513085863
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig, "AddPlayerMappableConfig" }, // 1134554235
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_ClearAllMappings, "ClearAllMappings" }, // 394955767
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings, "GetAllPlayerMappableActionKeyMappings" }, // 3443966710
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys, "GetAllPlayerMappedKeys" }, // 1751699550
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetUserSettings, "GetUserSettings" }, // 1111194022
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext, "HasMappingContext" }, // 1905849354
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction, "InjectInputForAction" }, // 521870008
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping, "InjectInputForPlayerMapping" }, // 31317865
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction, "InjectInputVectorForAction" }, // 2201543078
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping, "InjectInputVectorForPlayerMapping" }, // 839334946
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot, "K2_AddPlayerMappedKeyInSlot" }, // 2259839906
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot, "K2_GetPlayerMappedKeyInSlot" }, // 3402180796
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot, "K2_RemovePlayerMappedKeyInSlot" }, // 115185991
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserKeyProfileChanged, "OnUserKeyProfileChanged" }, // 911519566
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserSettingsChanged, "OnUserSettingsChanged" }, // 946664810
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction, "QueryKeysMappedToAction" }, // 2847063030
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet, "QueryMapKeyInActiveContextSet" }, // 4231880905
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet, "QueryMapKeyInContextSet" }, // 2506449351
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys, "RemoveAllPlayerMappedKeys" }, // 374816269
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping, "RemoveAllPlayerMappedKeysForMapping" }, // 2141219876
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext, "RemoveMappingContext" }, // 2800112429
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig, "RemovePlayerMappableConfig" }, // 974334935
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings, "RequestRebuildControlMappings" }, // 1344459560
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction, "StartContinuousInputInjectionForAction" }, // 1073145562
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping, "StartContinuousInputInjectionForPlayerMapping" }, // 1824352164
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForAction, "StopContinuousInputInjectionForAction" }, // 49335942
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForPlayerMapping, "StopContinuousInputInjectionForPlayerMapping" }, // 2959895700
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputSubsystemInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedInputSubsystemInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnhancedInputSubsystemInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEnhancedInputSubsystemInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnhancedInputSubsystemInterface_Statics::ClassParams = {
		&UEnhancedInputSubsystemInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputSubsystemInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnhancedInputSubsystemInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UEnhancedInputSubsystemInterface()
	{
		if (!Z_Registration_Info_UClass_UEnhancedInputSubsystemInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnhancedInputSubsystemInterface.OuterSingleton, Z_Construct_UClass_UEnhancedInputSubsystemInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnhancedInputSubsystemInterface.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UClass* StaticClass<UEnhancedInputSubsystemInterface>()
	{
		return UEnhancedInputSubsystemInterface::StaticClass();
	}
	UEnhancedInputSubsystemInterface::UEnhancedInputSubsystemInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnhancedInputSubsystemInterface);
	UEnhancedInputSubsystemInterface::~UEnhancedInputSubsystemInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_Statics::EnumInfo[] = {
		{ EInputMappingRebuildType_StaticEnum, TEXT("EInputMappingRebuildType"), &Z_Registration_Info_UEnum_EInputMappingRebuildType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2864446305U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_Statics::ScriptStructInfo[] = {
		{ FModifyContextOptions::StaticStruct, Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewStructOps, TEXT("ModifyContextOptions"), &Z_Registration_Info_UScriptStruct_ModifyContextOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModifyContextOptions), 3570464288U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnhancedInputSubsystemInterface, UEnhancedInputSubsystemInterface::StaticClass, TEXT("UEnhancedInputSubsystemInterface"), &Z_Registration_Info_UClass_UEnhancedInputSubsystemInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnhancedInputSubsystemInterface), 3138112689U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_1633548056(TEXT("/Script/EnhancedInput"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
