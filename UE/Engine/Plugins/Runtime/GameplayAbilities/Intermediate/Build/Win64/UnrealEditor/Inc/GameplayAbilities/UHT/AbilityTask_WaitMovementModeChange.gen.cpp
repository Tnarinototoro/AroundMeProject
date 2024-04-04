// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/Tasks/AbilityTask_WaitMovementModeChange.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_WaitMovementModeChange() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMovementMode();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitMovementModeChange();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitMovementModeChange_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_MovementModeChangedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameplayAbilities_MovementModeChangedDelegate__DelegateSignature_Statics
	{
		struct _Script_GameplayAbilities_eventMovementModeChangedDelegate_Parms
		{
			TEnumAsByte<EMovementMode> NewMovementMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewMovementMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_MovementModeChangedDelegate__DelegateSignature_Statics::NewProp_NewMovementMode = { "NewMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GameplayAbilities_eventMovementModeChangedDelegate_Parms, NewMovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(0, nullptr) }; // 613518137
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameplayAbilities_MovementModeChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_MovementModeChangedDelegate__DelegateSignature_Statics::NewProp_NewMovementMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameplayAbilities_MovementModeChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitMovementModeChange.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_MovementModeChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "MovementModeChangedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GameplayAbilities_MovementModeChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_MovementModeChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GameplayAbilities_MovementModeChangedDelegate__DelegateSignature_Statics::_Script_GameplayAbilities_eventMovementModeChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_MovementModeChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameplayAbilities_MovementModeChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_MovementModeChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_GameplayAbilities_MovementModeChangedDelegate__DelegateSignature_Statics::_Script_GameplayAbilities_eventMovementModeChangedDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_MovementModeChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_MovementModeChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMovementModeChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& MovementModeChangedDelegate, EMovementMode NewMovementMode)
{
	struct _Script_GameplayAbilities_eventMovementModeChangedDelegate_Parms
	{
		TEnumAsByte<EMovementMode> NewMovementMode;
	};
	_Script_GameplayAbilities_eventMovementModeChangedDelegate_Parms Parms;
	Parms.NewMovementMode=NewMovementMode;
	MovementModeChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAbilityTask_WaitMovementModeChange::execCreateWaitMovementModeChange)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_PROPERTY(FByteProperty,Z_Param_NewMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_WaitMovementModeChange**)Z_Param__Result=UAbilityTask_WaitMovementModeChange::CreateWaitMovementModeChange(Z_Param_OwningAbility,EMovementMode(Z_Param_NewMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityTask_WaitMovementModeChange::execOnMovementModeChange)
	{
		P_GET_OBJECT(ACharacter,Z_Param_Character);
		P_GET_PROPERTY(FByteProperty,Z_Param_PrevMovementMode);
		P_GET_PROPERTY(FByteProperty,Z_Param_PreviousCustomMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMovementModeChange(Z_Param_Character,EMovementMode(Z_Param_PrevMovementMode),Z_Param_PreviousCustomMode);
		P_NATIVE_END;
	}
	void UAbilityTask_WaitMovementModeChange::StaticRegisterNativesUAbilityTask_WaitMovementModeChange()
	{
		UClass* Class = UAbilityTask_WaitMovementModeChange::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateWaitMovementModeChange", &UAbilityTask_WaitMovementModeChange::execCreateWaitMovementModeChange },
			{ "OnMovementModeChange", &UAbilityTask_WaitMovementModeChange::execOnMovementModeChange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityTask_WaitMovementModeChange_CreateWaitMovementModeChange_Statics
	{
		struct AbilityTask_WaitMovementModeChange_eventCreateWaitMovementModeChange_Parms
		{
			UGameplayAbility* OwningAbility;
			TEnumAsByte<EMovementMode> NewMode;
			UAbilityTask_WaitMovementModeChange* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewMode;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitMovementModeChange_CreateWaitMovementModeChange_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitMovementModeChange_eventCreateWaitMovementModeChange_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAbilityTask_WaitMovementModeChange_CreateWaitMovementModeChange_Statics::NewProp_NewMode = { "NewMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitMovementModeChange_eventCreateWaitMovementModeChange_Parms, NewMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(0, nullptr) }; // 613518137
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitMovementModeChange_CreateWaitMovementModeChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitMovementModeChange_eventCreateWaitMovementModeChange_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_WaitMovementModeChange_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitMovementModeChange_CreateWaitMovementModeChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitMovementModeChange_CreateWaitMovementModeChange_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitMovementModeChange_CreateWaitMovementModeChange_Statics::NewProp_NewMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitMovementModeChange_CreateWaitMovementModeChange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitMovementModeChange_CreateWaitMovementModeChange_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/** Wait until movement mode changes (E.g., landing) */" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "DisplayName", "WaitMovementModeChange" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitMovementModeChange.h" },
		{ "ToolTip", "Wait until movement mode changes (E.g., landing)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitMovementModeChange_CreateWaitMovementModeChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitMovementModeChange, nullptr, "CreateWaitMovementModeChange", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_WaitMovementModeChange_CreateWaitMovementModeChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitMovementModeChange_CreateWaitMovementModeChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_WaitMovementModeChange_CreateWaitMovementModeChange_Statics::AbilityTask_WaitMovementModeChange_eventCreateWaitMovementModeChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitMovementModeChange_CreateWaitMovementModeChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_WaitMovementModeChange_CreateWaitMovementModeChange_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitMovementModeChange_CreateWaitMovementModeChange_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_WaitMovementModeChange_CreateWaitMovementModeChange_Statics::AbilityTask_WaitMovementModeChange_eventCreateWaitMovementModeChange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAbilityTask_WaitMovementModeChange_CreateWaitMovementModeChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitMovementModeChange_CreateWaitMovementModeChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityTask_WaitMovementModeChange_OnMovementModeChange_Statics
	{
		struct AbilityTask_WaitMovementModeChange_eventOnMovementModeChange_Parms
		{
			ACharacter* Character;
			TEnumAsByte<EMovementMode> PrevMovementMode;
			uint8 PreviousCustomMode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PrevMovementMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PreviousCustomMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitMovementModeChange_OnMovementModeChange_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitMovementModeChange_eventOnMovementModeChange_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAbilityTask_WaitMovementModeChange_OnMovementModeChange_Statics::NewProp_PrevMovementMode = { "PrevMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitMovementModeChange_eventOnMovementModeChange_Parms, PrevMovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(0, nullptr) }; // 613518137
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAbilityTask_WaitMovementModeChange_OnMovementModeChange_Statics::NewProp_PreviousCustomMode = { "PreviousCustomMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitMovementModeChange_eventOnMovementModeChange_Parms, PreviousCustomMode), nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitMovementModeChange_OnMovementModeChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitMovementModeChange_OnMovementModeChange_Statics::NewProp_Character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitMovementModeChange_OnMovementModeChange_Statics::NewProp_PrevMovementMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitMovementModeChange_OnMovementModeChange_Statics::NewProp_PreviousCustomMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitMovementModeChange_OnMovementModeChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitMovementModeChange.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitMovementModeChange_OnMovementModeChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitMovementModeChange, nullptr, "OnMovementModeChange", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_WaitMovementModeChange_OnMovementModeChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitMovementModeChange_OnMovementModeChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_WaitMovementModeChange_OnMovementModeChange_Statics::AbilityTask_WaitMovementModeChange_eventOnMovementModeChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitMovementModeChange_OnMovementModeChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_WaitMovementModeChange_OnMovementModeChange_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitMovementModeChange_OnMovementModeChange_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_WaitMovementModeChange_OnMovementModeChange_Statics::AbilityTask_WaitMovementModeChange_eventOnMovementModeChange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAbilityTask_WaitMovementModeChange_OnMovementModeChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitMovementModeChange_OnMovementModeChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_WaitMovementModeChange);
	UClass* Z_Construct_UClass_UAbilityTask_WaitMovementModeChange_NoRegister()
	{
		return UAbilityTask_WaitMovementModeChange::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityTask_WaitMovementModeChange_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityTask_WaitMovementModeChange_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitMovementModeChange_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityTask_WaitMovementModeChange_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_WaitMovementModeChange_CreateWaitMovementModeChange, "CreateWaitMovementModeChange" }, // 179590017
		{ &Z_Construct_UFunction_UAbilityTask_WaitMovementModeChange_OnMovementModeChange, "OnMovementModeChange" }, // 950223563
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitMovementModeChange_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitMovementModeChange_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Abilities/Tasks/AbilityTask_WaitMovementModeChange.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitMovementModeChange.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitMovementModeChange_Statics::NewProp_OnChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitMovementModeChange.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_WaitMovementModeChange_Statics::NewProp_OnChange = { "OnChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_WaitMovementModeChange, OnChange), Z_Construct_UDelegateFunction_GameplayAbilities_MovementModeChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitMovementModeChange_Statics::NewProp_OnChange_MetaData), Z_Construct_UClass_UAbilityTask_WaitMovementModeChange_Statics::NewProp_OnChange_MetaData) }; // 131328394
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_WaitMovementModeChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitMovementModeChange_Statics::NewProp_OnChange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityTask_WaitMovementModeChange_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_WaitMovementModeChange>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_WaitMovementModeChange_Statics::ClassParams = {
		&UAbilityTask_WaitMovementModeChange::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityTask_WaitMovementModeChange_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitMovementModeChange_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitMovementModeChange_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_WaitMovementModeChange_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitMovementModeChange_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAbilityTask_WaitMovementModeChange()
	{
		if (!Z_Registration_Info_UClass_UAbilityTask_WaitMovementModeChange.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_WaitMovementModeChange.OuterSingleton, Z_Construct_UClass_UAbilityTask_WaitMovementModeChange_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityTask_WaitMovementModeChange.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_WaitMovementModeChange>()
	{
		return UAbilityTask_WaitMovementModeChange::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_WaitMovementModeChange);
	UAbilityTask_WaitMovementModeChange::~UAbilityTask_WaitMovementModeChange() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitMovementModeChange_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitMovementModeChange_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_WaitMovementModeChange, UAbilityTask_WaitMovementModeChange::StaticClass, TEXT("UAbilityTask_WaitMovementModeChange"), &Z_Registration_Info_UClass_UAbilityTask_WaitMovementModeChange, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_WaitMovementModeChange), 413693814U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitMovementModeChange_h_1115187994(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitMovementModeChange_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitMovementModeChange_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
