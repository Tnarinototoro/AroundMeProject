// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilityAudit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbilityAudit() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetExecutionPolicy();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetSecurityPolicy();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityReplicationPolicy();
	GAMEPLAYABILITIESEDITOR_API UEnum* Z_Construct_UEnum_GameplayAbilitiesEditor_EGameplayAbilityActivationPath();
	GAMEPLAYABILITIESEDITOR_API UEnum* Z_Construct_UEnum_GameplayAbilitiesEditor_EGameplayAbilityEndInBlueprints();
	GAMEPLAYABILITIESEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityAuditRow();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilitiesEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayAbilityActivationPath;
	static UEnum* EGameplayAbilityActivationPath_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayAbilityActivationPath.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayAbilityActivationPath.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilitiesEditor_EGameplayAbilityActivationPath, (UObject*)Z_Construct_UPackage__Script_GameplayAbilitiesEditor(), TEXT("EGameplayAbilityActivationPath"));
		}
		return Z_Registration_Info_UEnum_EGameplayAbilityActivationPath.OuterSingleton;
	}
	template<> GAMEPLAYABILITIESEDITOR_API UEnum* StaticEnum<EGameplayAbilityActivationPath>()
	{
		return EGameplayAbilityActivationPath_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayAbilitiesEditor_EGameplayAbilityActivationPath_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayAbilitiesEditor_EGameplayAbilityActivationPath_Statics::Enumerators[] = {
		{ "EGameplayAbilityActivationPath::Native", (int64)EGameplayAbilityActivationPath::Native },
		{ "EGameplayAbilityActivationPath::Blueprint", (int64)EGameplayAbilityActivationPath::Blueprint },
		{ "EGameplayAbilityActivationPath::FromEvent", (int64)EGameplayAbilityActivationPath::FromEvent },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayAbilitiesEditor_EGameplayAbilityActivationPath_Statics::Enum_MetaDataParams[] = {
		{ "Blueprint.Comment", "/* Ability has a Native Activate function (and therefore uninspectable by Blueprint analysis) */" },
		{ "Blueprint.Name", "EGameplayAbilityActivationPath::Blueprint" },
		{ "Blueprint.ToolTip", "Ability has a Native Activate function (and therefore uninspectable by Blueprint analysis)" },
		{ "Comment", "/** This enum indicates what flow the Blueprint takes once activated (or native if not Activate is not handled by Blueprints) */" },
		{ "FromEvent.Comment", "/* Ability has an Activate event implemented in Blueprints and is therefore likely not triggered by a GameplayEvent */" },
		{ "FromEvent.Name", "EGameplayAbilityActivationPath::FromEvent" },
		{ "FromEvent.ToolTip", "Ability has an Activate event implemented in Blueprints and is therefore likely not triggered by a GameplayEvent" },
		{ "ModuleRelativePath", "Public/GameplayAbilityAudit.h" },
		{ "Native.Name", "EGameplayAbilityActivationPath::Native" },
		{ "ToolTip", "This enum indicates what flow the Blueprint takes once activated (or native if not Activate is not handled by Blueprints)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilitiesEditor_EGameplayAbilityActivationPath_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilitiesEditor,
		nullptr,
		"EGameplayAbilityActivationPath",
		"EGameplayAbilityActivationPath",
		Z_Construct_UEnum_GameplayAbilitiesEditor_EGameplayAbilityActivationPath_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilitiesEditor_EGameplayAbilityActivationPath_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilitiesEditor_EGameplayAbilityActivationPath_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayAbilitiesEditor_EGameplayAbilityActivationPath_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GameplayAbilitiesEditor_EGameplayAbilityActivationPath()
	{
		if (!Z_Registration_Info_UEnum_EGameplayAbilityActivationPath.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayAbilityActivationPath.InnerSingleton, Z_Construct_UEnum_GameplayAbilitiesEditor_EGameplayAbilityActivationPath_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayAbilityActivationPath.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayAbilityEndInBlueprints;
	static UEnum* EGameplayAbilityEndInBlueprints_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayAbilityEndInBlueprints.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayAbilityEndInBlueprints.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilitiesEditor_EGameplayAbilityEndInBlueprints, (UObject*)Z_Construct_UPackage__Script_GameplayAbilitiesEditor(), TEXT("EGameplayAbilityEndInBlueprints"));
		}
		return Z_Registration_Info_UEnum_EGameplayAbilityEndInBlueprints.OuterSingleton;
	}
	template<> GAMEPLAYABILITIESEDITOR_API UEnum* StaticEnum<EGameplayAbilityEndInBlueprints>()
	{
		return EGameplayAbilityEndInBlueprints_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayAbilitiesEditor_EGameplayAbilityEndInBlueprints_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayAbilitiesEditor_EGameplayAbilityEndInBlueprints_Statics::Enumerators[] = {
		{ "EGameplayAbilityEndInBlueprints::Missing", (int64)EGameplayAbilityEndInBlueprints::Missing },
		{ "EGameplayAbilityEndInBlueprints::EndAbility", (int64)EGameplayAbilityEndInBlueprints::EndAbility },
		{ "EGameplayAbilityEndInBlueprints::EndAbilityLocally", (int64)EGameplayAbilityEndInBlueprints::EndAbilityLocally },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayAbilitiesEditor_EGameplayAbilityEndInBlueprints_Statics::Enum_MetaDataParams[] = {
		{ "EndAbility.Comment", "/* Ability does not have an EndAbility call in Blueprints and therefore must be ended by external Gameplay code */" },
		{ "EndAbility.Name", "EGameplayAbilityEndInBlueprints::EndAbility" },
		{ "EndAbility.ToolTip", "Ability does not have an EndAbility call in Blueprints and therefore must be ended by external Gameplay code" },
		{ "EndAbilityLocally.Comment", "/* EndAbility is called in Blueprints and is an indication the Server can control the flow of the Gameplay Ability */" },
		{ "EndAbilityLocally.Name", "EGameplayAbilityEndInBlueprints::EndAbilityLocally" },
		{ "EndAbilityLocally.ToolTip", "EndAbility is called in Blueprints and is an indication the Server can control the flow of the Gameplay Ability" },
		{ "Missing.Name", "EGameplayAbilityEndInBlueprints::Missing" },
		{ "ModuleRelativePath", "Public/GameplayAbilityAudit.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilitiesEditor_EGameplayAbilityEndInBlueprints_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilitiesEditor,
		nullptr,
		"EGameplayAbilityEndInBlueprints",
		"EGameplayAbilityEndInBlueprints",
		Z_Construct_UEnum_GameplayAbilitiesEditor_EGameplayAbilityEndInBlueprints_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilitiesEditor_EGameplayAbilityEndInBlueprints_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilitiesEditor_EGameplayAbilityEndInBlueprints_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayAbilitiesEditor_EGameplayAbilityEndInBlueprints_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GameplayAbilitiesEditor_EGameplayAbilityEndInBlueprints()
	{
		if (!Z_Registration_Info_UEnum_EGameplayAbilityEndInBlueprints.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayAbilityEndInBlueprints.InnerSingleton, Z_Construct_UEnum_GameplayAbilitiesEditor_EGameplayAbilityEndInBlueprints_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayAbilityEndInBlueprints.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGameplayAbilityAuditRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FGameplayAbilityAuditRow cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayAbilityAuditRow;
class UScriptStruct* FGameplayAbilityAuditRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAbilityAuditRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayAbilityAuditRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilityAuditRow, (UObject*)Z_Construct_UPackage__Script_GameplayAbilitiesEditor(), TEXT("GameplayAbilityAuditRow"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayAbilityAuditRow.OuterSingleton;
}
template<> GAMEPLAYABILITIESEDITOR_API UScriptStruct* StaticStruct<FGameplayAbilityAuditRow>()
{
	return FGameplayAbilityAuditRow::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActivationPath_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationPath_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivationPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetExecutionPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_NetExecutionPolicy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetSecurityPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_NetSecurityPolicy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReplicationPolicy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CostGE_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CostGE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CooldownGE_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CooldownGE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverridesCanActivate_MetaData[];
#endif
		static void NewProp_bOverridesCanActivate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridesCanActivate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverridesShouldAbilityRespondToEvent_MetaData[];
#endif
		static void NewProp_bOverridesShouldAbilityRespondToEvent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridesShouldAbilityRespondToEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bChecksCostManually_MetaData[];
#endif
		static void NewProp_bChecksCostManually_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bChecksCostManually;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCommitAbility_MetaData[];
#endif
		static void NewProp_bCommitAbility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCommitAbility;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EndAbility_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndAbility_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EndAbility;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Functions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Functions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Functions;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AsyncTasks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AsyncTasks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AsyncTasks;
		static const UECodeGen_Private::FNamePropertyParams NewProp_MutatedVariables_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MutatedVariables_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MutatedVariables;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintInternalUseOnlyHierarchical", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** This contains all of the data we gather about a Blueprint during the Audit process */" },
		{ "ModuleRelativePath", "Public/GameplayAbilityAudit.h" },
		{ "ToolTip", "This contains all of the data we gather about a Blueprint during the Audit process" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilityAuditRow>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_ActivationPath_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_ActivationPath_MetaData[] = {
		{ "Comment", "/** Does the Blueprint override Activate, ActivateByEvent, or is it left up to Native code? */" },
		{ "ModuleRelativePath", "Public/GameplayAbilityAudit.h" },
		{ "ToolTip", "Does the Blueprint override Activate, ActivateByEvent, or is it left up to Native code?" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_ActivationPath = { "ActivationPath", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilityAuditRow, ActivationPath), Z_Construct_UEnum_GameplayAbilitiesEditor_EGameplayAbilityActivationPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_ActivationPath_MetaData), Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_ActivationPath_MetaData) }; // 1578470826
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_NetExecutionPolicy_MetaData[] = {
		{ "Comment", "/** The NetExecutionPolicy of the GameplayAbility */" },
		{ "ModuleRelativePath", "Public/GameplayAbilityAudit.h" },
		{ "ToolTip", "The NetExecutionPolicy of the GameplayAbility" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_NetExecutionPolicy = { "NetExecutionPolicy", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilityAuditRow, NetExecutionPolicy), Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetExecutionPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_NetExecutionPolicy_MetaData), Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_NetExecutionPolicy_MetaData) }; // 903666533
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_NetSecurityPolicy_MetaData[] = {
		{ "Comment", "/** The NetSecurityPolicy of the GameplayAbility */" },
		{ "ModuleRelativePath", "Public/GameplayAbilityAudit.h" },
		{ "ToolTip", "The NetSecurityPolicy of the GameplayAbility" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_NetSecurityPolicy = { "NetSecurityPolicy", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilityAuditRow, NetSecurityPolicy), Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetSecurityPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_NetSecurityPolicy_MetaData), Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_NetSecurityPolicy_MetaData) }; // 530128271
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_ReplicationPolicy_MetaData[] = {
		{ "Comment", "/** The Replication Policy which controls if the instance itself is replicated (and therefore controls variable replication) */" },
		{ "ModuleRelativePath", "Public/GameplayAbilityAudit.h" },
		{ "ToolTip", "The Replication Policy which controls if the instance itself is replicated (and therefore controls variable replication)" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_ReplicationPolicy = { "ReplicationPolicy", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilityAuditRow, ReplicationPolicy), Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityReplicationPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_ReplicationPolicy_MetaData), Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_ReplicationPolicy_MetaData) }; // 3663116822
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_CostGE_MetaData[] = {
		{ "Comment", "/** If the GameplayAbility has a Cost GameplayEffect, this field will tell us which one it's using. */" },
		{ "ModuleRelativePath", "Public/GameplayAbilityAudit.h" },
		{ "ToolTip", "If the GameplayAbility has a Cost GameplayEffect, this field will tell us which one it's using." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_CostGE = { "CostGE", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilityAuditRow, CostGE), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_CostGE_MetaData), Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_CostGE_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_CooldownGE_MetaData[] = {
		{ "Comment", "/** If the GameplayAbility has a Cooldown GameplayEffect, this field will tell us which one it's using. */" },
		{ "ModuleRelativePath", "Public/GameplayAbilityAudit.h" },
		{ "ToolTip", "If the GameplayAbility has a Cooldown GameplayEffect, this field will tell us which one it's using." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_CooldownGE = { "CooldownGE", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilityAuditRow, CooldownGE), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_CooldownGE_MetaData), Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_CooldownGE_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_bOverridesCanActivate_MetaData[] = {
		{ "Comment", "/** Does the Blueprint implement CanActivate? It can be an indication that there are complex rules for triggering. */" },
		{ "ModuleRelativePath", "Public/GameplayAbilityAudit.h" },
		{ "ToolTip", "Does the Blueprint implement CanActivate? It can be an indication that there are complex rules for triggering." },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_bOverridesCanActivate_SetBit(void* Obj)
	{
		((FGameplayAbilityAuditRow*)Obj)->bOverridesCanActivate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_bOverridesCanActivate = { "bOverridesCanActivate", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameplayAbilityAuditRow), &Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_bOverridesCanActivate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_bOverridesCanActivate_MetaData), Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_bOverridesCanActivate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_bOverridesShouldAbilityRespondToEvent_MetaData[] = {
		{ "Comment", "/** Does the Blueprint implement ShouldAbilityRespondToEvent? It can be an indication that there are complex rules for triggering. */" },
		{ "ModuleRelativePath", "Public/GameplayAbilityAudit.h" },
		{ "ToolTip", "Does the Blueprint implement ShouldAbilityRespondToEvent? It can be an indication that there are complex rules for triggering." },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_bOverridesShouldAbilityRespondToEvent_SetBit(void* Obj)
	{
		((FGameplayAbilityAuditRow*)Obj)->bOverridesShouldAbilityRespondToEvent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_bOverridesShouldAbilityRespondToEvent = { "bOverridesShouldAbilityRespondToEvent", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameplayAbilityAuditRow), &Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_bOverridesShouldAbilityRespondToEvent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_bOverridesShouldAbilityRespondToEvent_MetaData), Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_bOverridesShouldAbilityRespondToEvent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_bChecksCostManually_MetaData[] = {
		{ "Comment", "/** Does the Blueprint CheckCosts? If so it's an indication that this ability is a multi-step ability. */" },
		{ "ModuleRelativePath", "Public/GameplayAbilityAudit.h" },
		{ "ToolTip", "Does the Blueprint CheckCosts? If so it's an indication that this ability is a multi-step ability." },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_bChecksCostManually_SetBit(void* Obj)
	{
		((FGameplayAbilityAuditRow*)Obj)->bChecksCostManually = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_bChecksCostManually = { "bChecksCostManually", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameplayAbilityAuditRow), &Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_bChecksCostManually_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_bChecksCostManually_MetaData), Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_bChecksCostManually_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_bCommitAbility_MetaData[] = {
		{ "Comment", "/** Does the Blueprint Commit?  If not (and we are a non-native BP), the costs will never apply and we are breaking our expected flow. */" },
		{ "ModuleRelativePath", "Public/GameplayAbilityAudit.h" },
		{ "ToolTip", "Does the Blueprint Commit?  If not (and we are a non-native BP), the costs will never apply and we are breaking our expected flow." },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_bCommitAbility_SetBit(void* Obj)
	{
		((FGameplayAbilityAuditRow*)Obj)->bCommitAbility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_bCommitAbility = { "bCommitAbility", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameplayAbilityAuditRow), &Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_bCommitAbility_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_bCommitAbility_MetaData), Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_bCommitAbility_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_EndAbility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_EndAbility_MetaData[] = {
		{ "Comment", "/** How does the Blueprint call EndAbility?  If missing, this Ability can be assumed to be a persistent one and removed from Gameplay code (e.g. while tags are active) */" },
		{ "ModuleRelativePath", "Public/GameplayAbilityAudit.h" },
		{ "ToolTip", "How does the Blueprint call EndAbility?  If missing, this Ability can be assumed to be a persistent one and removed from Gameplay code (e.g. while tags are active)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_EndAbility = { "EndAbility", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilityAuditRow, EndAbility), Z_Construct_UEnum_GameplayAbilitiesEditor_EGameplayAbilityEndInBlueprints, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_EndAbility_MetaData), Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_EndAbility_MetaData) }; // 3126911586
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_Functions_Inner = { "Functions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_Functions_MetaData[] = {
		{ "Comment", "/** List of functions the Blueprint calls */" },
		{ "ModuleRelativePath", "Public/GameplayAbilityAudit.h" },
		{ "ToolTip", "List of functions the Blueprint calls" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_Functions = { "Functions", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilityAuditRow, Functions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_Functions_MetaData), Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_Functions_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_AsyncTasks_Inner = { "AsyncTasks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_AsyncTasks_MetaData[] = {
		{ "Comment", "/** List of AsyncTasks the Blueprint uses */" },
		{ "ModuleRelativePath", "Public/GameplayAbilityAudit.h" },
		{ "ToolTip", "List of AsyncTasks the Blueprint uses" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_AsyncTasks = { "AsyncTasks", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilityAuditRow, AsyncTasks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_AsyncTasks_MetaData), Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_AsyncTasks_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_MutatedVariables_Inner = { "MutatedVariables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_MutatedVariables_MetaData[] = {
		{ "Comment", "/** List of Variables the Blueprint mutates */" },
		{ "ModuleRelativePath", "Public/GameplayAbilityAudit.h" },
		{ "ToolTip", "List of Variables the Blueprint mutates" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_MutatedVariables = { "MutatedVariables", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilityAuditRow, MutatedVariables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_MutatedVariables_MetaData), Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_MutatedVariables_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_ActivationPath_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_ActivationPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_NetExecutionPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_NetSecurityPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_ReplicationPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_CostGE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_CooldownGE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_bOverridesCanActivate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_bOverridesShouldAbilityRespondToEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_bChecksCostManually,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_bCommitAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_EndAbility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_EndAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_Functions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_Functions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_AsyncTasks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_AsyncTasks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_MutatedVariables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewProp_MutatedVariables,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilitiesEditor,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"GameplayAbilityAuditRow",
		Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::PropPointers),
		sizeof(FGameplayAbilityAuditRow),
		alignof(FGameplayAbilityAuditRow),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityAuditRow()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayAbilityAuditRow.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayAbilityAuditRow.InnerSingleton, Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayAbilityAuditRow.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayAbilityAudit_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayAbilityAudit_h_Statics::EnumInfo[] = {
		{ EGameplayAbilityActivationPath_StaticEnum, TEXT("EGameplayAbilityActivationPath"), &Z_Registration_Info_UEnum_EGameplayAbilityActivationPath, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1578470826U) },
		{ EGameplayAbilityEndInBlueprints_StaticEnum, TEXT("EGameplayAbilityEndInBlueprints"), &Z_Registration_Info_UEnum_EGameplayAbilityEndInBlueprints, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3126911586U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayAbilityAudit_h_Statics::ScriptStructInfo[] = {
		{ FGameplayAbilityAuditRow::StaticStruct, Z_Construct_UScriptStruct_FGameplayAbilityAuditRow_Statics::NewStructOps, TEXT("GameplayAbilityAuditRow"), &Z_Registration_Info_UScriptStruct_GameplayAbilityAuditRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayAbilityAuditRow), 2086021474U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayAbilityAudit_h_2869195888(TEXT("/Script/GameplayAbilitiesEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayAbilityAudit_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayAbilityAudit_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayAbilityAudit_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayAbilityAudit_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
