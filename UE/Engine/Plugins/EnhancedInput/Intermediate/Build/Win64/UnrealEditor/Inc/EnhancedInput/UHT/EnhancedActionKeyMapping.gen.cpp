// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnhancedActionKeyMapping.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnhancedActionKeyMapping() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifier_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTrigger_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UPlayerMappableKeySettings_NoRegister();
	ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_EPlayerMappableKeySettingBehaviors();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FEnhancedActionKeyMapping();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerMappableKeyOptions();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UPackage* Z_Construct_UPackage__Script_EnhancedInput();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayerMappableKeySettingBehaviors;
	static UEnum* EPlayerMappableKeySettingBehaviors_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlayerMappableKeySettingBehaviors.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlayerMappableKeySettingBehaviors.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EnhancedInput_EPlayerMappableKeySettingBehaviors, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("EPlayerMappableKeySettingBehaviors"));
		}
		return Z_Registration_Info_UEnum_EPlayerMappableKeySettingBehaviors.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UEnum* StaticEnum<EPlayerMappableKeySettingBehaviors>()
	{
		return EPlayerMappableKeySettingBehaviors_StaticEnum();
	}
	struct Z_Construct_UEnum_EnhancedInput_EPlayerMappableKeySettingBehaviors_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EnhancedInput_EPlayerMappableKeySettingBehaviors_Statics::Enumerators[] = {
		{ "EPlayerMappableKeySettingBehaviors::InheritSettingsFromAction", (int64)EPlayerMappableKeySettingBehaviors::InheritSettingsFromAction },
		{ "EPlayerMappableKeySettingBehaviors::OverrideSettings", (int64)EPlayerMappableKeySettingBehaviors::OverrideSettings },
		{ "EPlayerMappableKeySettingBehaviors::IgnoreSettings", (int64)EPlayerMappableKeySettingBehaviors::IgnoreSettings },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EnhancedInput_EPlayerMappableKeySettingBehaviors_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Defines which Player Mappable Key Setting to use for a Action Key Mapping.\n*/" },
		{ "IgnoreSettings.Comment", "//Don't use any Settings even if one is specified in the Input Action.\n" },
		{ "IgnoreSettings.Name", "EPlayerMappableKeySettingBehaviors::IgnoreSettings" },
		{ "IgnoreSettings.ToolTip", "Don't use any Settings even if one is specified in the Input Action." },
		{ "InheritSettingsFromAction.Comment", "//Use the Settings specified in the Input Action.\n" },
		{ "InheritSettingsFromAction.Name", "EPlayerMappableKeySettingBehaviors::InheritSettingsFromAction" },
		{ "InheritSettingsFromAction.ToolTip", "Use the Settings specified in the Input Action." },
		{ "ModuleRelativePath", "Public/EnhancedActionKeyMapping.h" },
		{ "OverrideSettings.Comment", "//Use the Settings specified in the Action Key Mapping overriding the ones specified in the Input action.\n" },
		{ "OverrideSettings.Name", "EPlayerMappableKeySettingBehaviors::OverrideSettings" },
		{ "OverrideSettings.ToolTip", "Use the Settings specified in the Action Key Mapping overriding the ones specified in the Input action." },
		{ "ToolTip", "Defines which Player Mappable Key Setting to use for a Action Key Mapping." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EnhancedInput_EPlayerMappableKeySettingBehaviors_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EnhancedInput,
		nullptr,
		"EPlayerMappableKeySettingBehaviors",
		"EPlayerMappableKeySettingBehaviors",
		Z_Construct_UEnum_EnhancedInput_EPlayerMappableKeySettingBehaviors_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_EPlayerMappableKeySettingBehaviors_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_EPlayerMappableKeySettingBehaviors_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EnhancedInput_EPlayerMappableKeySettingBehaviors_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_EnhancedInput_EPlayerMappableKeySettingBehaviors()
	{
		if (!Z_Registration_Info_UEnum_EPlayerMappableKeySettingBehaviors.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayerMappableKeySettingBehaviors.InnerSingleton, Z_Construct_UEnum_EnhancedInput_EPlayerMappableKeySettingBehaviors_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlayerMappableKeySettingBehaviors.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerMappableKeyOptions;
class UScriptStruct* FPlayerMappableKeyOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerMappableKeyOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerMappableKeyOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerMappableKeyOptions, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("PlayerMappableKeyOptions"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerMappableKeyOptions.OuterSingleton;
}
template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<FPlayerMappableKeyOptions>()
{
	return FPlayerMappableKeyOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Metadata;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayCategory_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayCategory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A struct that represents player facing mapping options for an action key mapping.\n * Use this to set a unique FName for the mapping option to save it, as well as some FText options\n * for use in UI.\n */" },
		{ "ModuleRelativePath", "Public/EnhancedActionKeyMapping.h" },
		{ "ToolTip", "A struct that represents player facing mapping options for an action key mapping.\nUse this to set a unique FName for the mapping option to save it, as well as some FText options\nfor use in UI." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerMappableKeyOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::NewProp_Metadata_MetaData[] = {
		{ "Category", "Input|PlayerMappable" },
		{ "Comment", "/** Metadata that can used to store any other related items to this key mapping such as icons, ability assets, etc. */" },
		{ "ModuleRelativePath", "Public/EnhancedActionKeyMapping.h" },
		{ "ToolTip", "Metadata that can used to store any other related items to this key mapping such as icons, ability assets, etc." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerMappableKeyOptions, Metadata), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::NewProp_Metadata_MetaData), Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::NewProp_Metadata_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Input|PlayerMappable" },
		{ "Comment", "/** A unique name for this player mapping to be saved with. */" },
		{ "ModuleRelativePath", "Public/EnhancedActionKeyMapping.h" },
		{ "ToolTip", "A unique name for this player mapping to be saved with." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerMappableKeyOptions, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Input|PlayerMappable" },
		{ "Comment", "/** The localized display name of this key mapping. Use this when displaying the mappings to a user. */" },
		{ "ModuleRelativePath", "Public/EnhancedActionKeyMapping.h" },
		{ "ToolTip", "The localized display name of this key mapping. Use this when displaying the mappings to a user." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerMappableKeyOptions, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::NewProp_DisplayName_MetaData), Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::NewProp_DisplayName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::NewProp_DisplayCategory_MetaData[] = {
		{ "Category", "Input|PlayerMappable" },
		{ "Comment", "/** The category that this player mapping is in */" },
		{ "ModuleRelativePath", "Public/EnhancedActionKeyMapping.h" },
		{ "ToolTip", "The category that this player mapping is in" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::NewProp_DisplayCategory = { "DisplayCategory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerMappableKeyOptions, DisplayCategory), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::NewProp_DisplayCategory_MetaData), Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::NewProp_DisplayCategory_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::NewProp_DisplayCategory,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
		nullptr,
		&NewStructOps,
		"PlayerMappableKeyOptions",
		Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::PropPointers),
		sizeof(FPlayerMappableKeyOptions),
		alignof(FPlayerMappableKeyOptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerMappableKeyOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_PlayerMappableKeyOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerMappableKeyOptions.InnerSingleton, Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlayerMappableKeyOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnhancedActionKeyMapping;
class UScriptStruct* FEnhancedActionKeyMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnhancedActionKeyMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnhancedActionKeyMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnhancedActionKeyMapping, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("EnhancedActionKeyMapping"));
	}
	return Z_Registration_Info_UScriptStruct_EnhancedActionKeyMapping.OuterSingleton;
}
template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<FEnhancedActionKeyMapping>()
{
	return FEnhancedActionKeyMapping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerMappableOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerMappableOptions;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triggers_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Triggers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triggers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triggers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Modifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldBeIgnored_MetaData[];
#endif
		static void NewProp_bShouldBeIgnored_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBeIgnored;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPlayerMappable_MetaData[];
#endif
		static void NewProp_bIsPlayerMappable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlayerMappable;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_SettingBehavior_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SettingBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SettingBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerMappableKeySettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlayerMappableKeySettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Defines a mapping between a key activation and the resulting enhanced action\n * An key could be a button press, joystick axis movement, etc.\n * An enhanced action could be MoveForward, Jump, Fire, etc.\n *\n**/" },
		{ "ModuleRelativePath", "Public/EnhancedActionKeyMapping.h" },
		{ "ToolTip", "Defines a mapping between a key activation and the resulting enhanced action\nAn key could be a button press, joystick axis movement, etc.\nAn enhanced action could be MoveForward, Jump, Fire, etc." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnhancedActionKeyMapping>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_PlayerMappableOptions_MetaData[] = {
		{ "Category", "Input|PlayerMappable" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "PlayerMappableOptions has been deprecated, please use the PlayerMappableKeySettings instead" },
		{ "DisplayAfter", "bIsPlayerMappable" },
		{ "editCondition", "bIsPlayerMappable" },
		{ "ModuleRelativePath", "Public/EnhancedActionKeyMapping.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_PlayerMappableOptions = { "PlayerMappableOptions", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnhancedActionKeyMapping, PlayerMappableOptions), Z_Construct_UScriptStruct_FPlayerMappableKeyOptions, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_PlayerMappableOptions_MetaData), Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_PlayerMappableOptions_MetaData) }; // 2998587680
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Triggers_Inner_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09* Trigger qualifiers. If any trigger qualifiers exist the mapping will not trigger unless:\n\x09* If there are any Explicit triggers in this list at least one of them must be met.\n\x09* All Implicit triggers in this list must be met.\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnhancedActionKeyMapping.h" },
		{ "ToolTip", "Trigger qualifiers. If any trigger qualifiers exist the mapping will not trigger unless:\nIf there are any Explicit triggers in this list at least one of them must be met.\nAll Implicit triggers in this list must be met." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Triggers_Inner = { "Triggers", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputTrigger_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Triggers_Inner_MetaData), Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Triggers_Inner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Triggers_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09* Trigger qualifiers. If any trigger qualifiers exist the mapping will not trigger unless:\n\x09* If there are any Explicit triggers in this list at least one of them must be met.\n\x09* All Implicit triggers in this list must be met.\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnhancedActionKeyMapping.h" },
		{ "ToolTip", "Trigger qualifiers. If any trigger qualifiers exist the mapping will not trigger unless:\nIf there are any Explicit triggers in this list at least one of them must be met.\nAll Implicit triggers in this list must be met." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Triggers = { "Triggers", nullptr, (EPropertyFlags)0x001400800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnhancedActionKeyMapping, Triggers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Triggers_MetaData), Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Triggers_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Modifiers_Inner_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09* Modifiers applied to the raw key value.\n\x09* These are applied sequentially in array order.\n\x09* \n\x09* Note: Modifiers defined in individual key mappings will be applied before those defined in the Input Action asset.\n\x09* Modifiers will not override any that are defined on the Input Action asset, they will be combined together during evaluation.\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnhancedActionKeyMapping.h" },
		{ "ToolTip", "Modifiers applied to the raw key value.\nThese are applied sequentially in array order.\n\nNote: Modifiers defined in individual key mappings will be applied before those defined in the Input Action asset.\nModifiers will not override any that are defined on the Input Action asset, they will be combined together during evaluation." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputModifier_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Modifiers_Inner_MetaData), Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Modifiers_Inner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Modifiers_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09* Modifiers applied to the raw key value.\n\x09* These are applied sequentially in array order.\n\x09* \n\x09* Note: Modifiers defined in individual key mappings will be applied before those defined in the Input Action asset.\n\x09* Modifiers will not override any that are defined on the Input Action asset, they will be combined together during evaluation.\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnhancedActionKeyMapping.h" },
		{ "ToolTip", "Modifiers applied to the raw key value.\nThese are applied sequentially in array order.\n\nNote: Modifiers defined in individual key mappings will be applied before those defined in the Input Action asset.\nModifiers will not override any that are defined on the Input Action asset, they will be combined together during evaluation." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x001400800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnhancedActionKeyMapping, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Modifiers_MetaData), Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Modifiers_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Action_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Action to be affected by the key  */" },
		{ "ModuleRelativePath", "Public/EnhancedActionKeyMapping.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Action to be affected by the key" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnhancedActionKeyMapping, Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Action_MetaData), Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Action_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Key that affect the action. */" },
		{ "ModuleRelativePath", "Public/EnhancedActionKeyMapping.h" },
		{ "ToolTip", "Key that affect the action." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnhancedActionKeyMapping, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Key_MetaData), Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Key_MetaData) }; // 46000949
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_bShouldBeIgnored_MetaData[] = {
		{ "Comment", "/**\n\x09 * If true, then this Key Mapping should be ignored. This is set to true if the key is down\n\x09 * during a rebuild of it's owning PlayerInput ControlMappings.\n\x09 * \n\x09 * @see IEnhancedInputSubsystemInterface::RebuildControlMappings\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedActionKeyMapping.h" },
		{ "ToolTip", "If true, then this Key Mapping should be ignored. This is set to true if the key is down\nduring a rebuild of it's owning PlayerInput ControlMappings.\n\n@see IEnhancedInputSubsystemInterface::RebuildControlMappings" },
	};
#endif
	void Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_bShouldBeIgnored_SetBit(void* Obj)
	{
		((FEnhancedActionKeyMapping*)Obj)->bShouldBeIgnored = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_bShouldBeIgnored = { "bShouldBeIgnored", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FEnhancedActionKeyMapping), &Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_bShouldBeIgnored_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_bShouldBeIgnored_MetaData), Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_bShouldBeIgnored_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_bIsPlayerMappable_MetaData[] = {
		{ "Category", "Input|PlayerMappable" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "bIsPlayerMappable has been deprecated, please use the SettingBehavior instead" },
		{ "ModuleRelativePath", "Public/EnhancedActionKeyMapping.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_bIsPlayerMappable_SetBit(void* Obj)
	{
		((FEnhancedActionKeyMapping*)Obj)->bIsPlayerMappable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_bIsPlayerMappable = { "bIsPlayerMappable", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FEnhancedActionKeyMapping), &Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_bIsPlayerMappable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_bIsPlayerMappable_MetaData), Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_bIsPlayerMappable_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_SettingBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_SettingBehavior_MetaData[] = {
		{ "Category", "Input|Settings" },
		{ "Comment", "/**\n\x09* Defines which Player Mappable Key Setting to use for a Action Key Mapping.\n\x09*/" },
		{ "ModuleRelativePath", "Public/EnhancedActionKeyMapping.h" },
		{ "ToolTip", "Defines which Player Mappable Key Setting to use for a Action Key Mapping." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_SettingBehavior = { "SettingBehavior", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnhancedActionKeyMapping, SettingBehavior), Z_Construct_UEnum_EnhancedInput_EPlayerMappableKeySettingBehaviors, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_SettingBehavior_MetaData), Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_SettingBehavior_MetaData) }; // 693241466
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_PlayerMappableKeySettings_MetaData[] = {
		{ "Category", "Input|Settings" },
		{ "Comment", "/**\n\x09* Used to expose this mapping or to opt-out of settings completely.\n\x09*/" },
		{ "DisplayAfter", "SettingBehavior" },
		{ "EditCondition", "SettingBehavior == EPlayerMappableKeySettingBehaviors::OverrideSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnhancedActionKeyMapping.h" },
		{ "ToolTip", "Used to expose this mapping or to opt-out of settings completely." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_PlayerMappableKeySettings = { "PlayerMappableKeySettings", nullptr, (EPropertyFlags)0x0026080000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnhancedActionKeyMapping, PlayerMappableKeySettings), Z_Construct_UClass_UPlayerMappableKeySettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_PlayerMappableKeySettings_MetaData), Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_PlayerMappableKeySettings_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_PlayerMappableOptions,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Triggers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Triggers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Modifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Modifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_bShouldBeIgnored,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_bIsPlayerMappable,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_SettingBehavior_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_SettingBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_PlayerMappableKeySettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
		nullptr,
		&NewStructOps,
		"EnhancedActionKeyMapping",
		Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::PropPointers),
		sizeof(FEnhancedActionKeyMapping),
		alignof(FEnhancedActionKeyMapping),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FEnhancedActionKeyMapping()
	{
		if (!Z_Registration_Info_UScriptStruct_EnhancedActionKeyMapping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnhancedActionKeyMapping.InnerSingleton, Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EnhancedActionKeyMapping.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedActionKeyMapping_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedActionKeyMapping_h_Statics::EnumInfo[] = {
		{ EPlayerMappableKeySettingBehaviors_StaticEnum, TEXT("EPlayerMappableKeySettingBehaviors"), &Z_Registration_Info_UEnum_EPlayerMappableKeySettingBehaviors, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 693241466U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedActionKeyMapping_h_Statics::ScriptStructInfo[] = {
		{ FPlayerMappableKeyOptions::StaticStruct, Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::NewStructOps, TEXT("PlayerMappableKeyOptions"), &Z_Registration_Info_UScriptStruct_PlayerMappableKeyOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerMappableKeyOptions), 2998587680U) },
		{ FEnhancedActionKeyMapping::StaticStruct, Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewStructOps, TEXT("EnhancedActionKeyMapping"), &Z_Registration_Info_UScriptStruct_EnhancedActionKeyMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnhancedActionKeyMapping), 2568609385U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedActionKeyMapping_h_408130476(TEXT("/Script/EnhancedInput"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedActionKeyMapping_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedActionKeyMapping_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedActionKeyMapping_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedActionKeyMapping_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
