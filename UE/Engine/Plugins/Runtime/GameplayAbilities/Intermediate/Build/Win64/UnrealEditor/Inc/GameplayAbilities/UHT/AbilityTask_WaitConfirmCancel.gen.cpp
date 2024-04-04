// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/Tasks/AbilityTask_WaitConfirmCancel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_WaitConfirmCancel() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitConfirmCancel();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitConfirmCancel_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_WaitConfirmCancelDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameplayAbilities_WaitConfirmCancelDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameplayAbilities_WaitConfirmCancelDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitConfirmCancel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_WaitConfirmCancelDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "WaitConfirmCancelDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_WaitConfirmCancelDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameplayAbilities_WaitConfirmCancelDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_WaitConfirmCancelDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_WaitConfirmCancelDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FWaitConfirmCancelDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitConfirmCancelDelegate)
{
	WaitConfirmCancelDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UAbilityTask_WaitConfirmCancel::execWaitConfirmCancel)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_WaitConfirmCancel**)Z_Param__Result=UAbilityTask_WaitConfirmCancel::WaitConfirmCancel(Z_Param_OwningAbility);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityTask_WaitConfirmCancel::execOnLocalCancelCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLocalCancelCallback();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityTask_WaitConfirmCancel::execOnLocalConfirmCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLocalConfirmCallback();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityTask_WaitConfirmCancel::execOnCancelCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCancelCallback();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityTask_WaitConfirmCancel::execOnConfirmCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnConfirmCallback();
		P_NATIVE_END;
	}
	void UAbilityTask_WaitConfirmCancel::StaticRegisterNativesUAbilityTask_WaitConfirmCancel()
	{
		UClass* Class = UAbilityTask_WaitConfirmCancel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCancelCallback", &UAbilityTask_WaitConfirmCancel::execOnCancelCallback },
			{ "OnConfirmCallback", &UAbilityTask_WaitConfirmCancel::execOnConfirmCallback },
			{ "OnLocalCancelCallback", &UAbilityTask_WaitConfirmCancel::execOnLocalCancelCallback },
			{ "OnLocalConfirmCallback", &UAbilityTask_WaitConfirmCancel::execOnLocalConfirmCallback },
			{ "WaitConfirmCancel", &UAbilityTask_WaitConfirmCancel::execWaitConfirmCancel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_OnCancelCallback_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_OnCancelCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitConfirmCancel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_OnCancelCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitConfirmCancel, nullptr, "OnCancelCallback", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_OnCancelCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_OnCancelCallback_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_OnCancelCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_OnCancelCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_OnConfirmCallback_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_OnConfirmCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitConfirmCancel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_OnConfirmCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitConfirmCancel, nullptr, "OnConfirmCallback", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_OnConfirmCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_OnConfirmCallback_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_OnConfirmCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_OnConfirmCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_OnLocalCancelCallback_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_OnLocalCancelCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitConfirmCancel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_OnLocalCancelCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitConfirmCancel, nullptr, "OnLocalCancelCallback", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_OnLocalCancelCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_OnLocalCancelCallback_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_OnLocalCancelCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_OnLocalCancelCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_OnLocalConfirmCallback_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_OnLocalConfirmCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitConfirmCancel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_OnLocalConfirmCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitConfirmCancel, nullptr, "OnLocalConfirmCallback", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_OnLocalConfirmCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_OnLocalConfirmCallback_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_OnLocalConfirmCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_OnLocalConfirmCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_WaitConfirmCancel_Statics
	{
		struct AbilityTask_WaitConfirmCancel_eventWaitConfirmCancel_Parms
		{
			UGameplayAbility* OwningAbility;
			UAbilityTask_WaitConfirmCancel* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_WaitConfirmCancel_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitConfirmCancel_eventWaitConfirmCancel_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_WaitConfirmCancel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitConfirmCancel_eventWaitConfirmCancel_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_WaitConfirmCancel_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_WaitConfirmCancel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_WaitConfirmCancel_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_WaitConfirmCancel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_WaitConfirmCancel_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Ability|Tasks" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "DisplayName", "Wait for Confirm Input" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitConfirmCancel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_WaitConfirmCancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitConfirmCancel, nullptr, "WaitConfirmCancel", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_WaitConfirmCancel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_WaitConfirmCancel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_WaitConfirmCancel_Statics::AbilityTask_WaitConfirmCancel_eventWaitConfirmCancel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_WaitConfirmCancel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_WaitConfirmCancel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_WaitConfirmCancel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_WaitConfirmCancel_Statics::AbilityTask_WaitConfirmCancel_eventWaitConfirmCancel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_WaitConfirmCancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_WaitConfirmCancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_WaitConfirmCancel);
	UClass* Z_Construct_UClass_UAbilityTask_WaitConfirmCancel_NoRegister()
	{
		return UAbilityTask_WaitConfirmCancel::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityTask_WaitConfirmCancel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnConfirm_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConfirm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCancel_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCancel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityTask_WaitConfirmCancel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitConfirmCancel_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityTask_WaitConfirmCancel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_OnCancelCallback, "OnCancelCallback" }, // 4135393484
		{ &Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_OnConfirmCallback, "OnConfirmCallback" }, // 2626206538
		{ &Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_OnLocalCancelCallback, "OnLocalCancelCallback" }, // 3422434836
		{ &Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_OnLocalConfirmCallback, "OnLocalConfirmCallback" }, // 582958382
		{ &Z_Construct_UFunction_UAbilityTask_WaitConfirmCancel_WaitConfirmCancel, "WaitConfirmCancel" }, // 3566362986
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitConfirmCancel_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitConfirmCancel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Fixme: this name is conflicting with AbilityTask_WaitConfirm\n// UAbilityTask_WaitConfirmCancel = Wait for Targeting confirm/cancel\n// UAbilityTask_WaitConfirm = Wait for server to confirm ability activation\n" },
		{ "IncludePath", "Abilities/Tasks/AbilityTask_WaitConfirmCancel.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitConfirmCancel.h" },
		{ "ToolTip", "Fixme: this name is conflicting with AbilityTask_WaitConfirm\nUAbilityTask_WaitConfirmCancel = Wait for Targeting confirm/cancel\nUAbilityTask_WaitConfirm = Wait for server to confirm ability activation" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitConfirmCancel_Statics::NewProp_OnConfirm_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitConfirmCancel.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_WaitConfirmCancel_Statics::NewProp_OnConfirm = { "OnConfirm", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_WaitConfirmCancel, OnConfirm), Z_Construct_UDelegateFunction_GameplayAbilities_WaitConfirmCancelDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitConfirmCancel_Statics::NewProp_OnConfirm_MetaData), Z_Construct_UClass_UAbilityTask_WaitConfirmCancel_Statics::NewProp_OnConfirm_MetaData) }; // 3416943817
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitConfirmCancel_Statics::NewProp_OnCancel_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitConfirmCancel.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_WaitConfirmCancel_Statics::NewProp_OnCancel = { "OnCancel", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_WaitConfirmCancel, OnCancel), Z_Construct_UDelegateFunction_GameplayAbilities_WaitConfirmCancelDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitConfirmCancel_Statics::NewProp_OnCancel_MetaData), Z_Construct_UClass_UAbilityTask_WaitConfirmCancel_Statics::NewProp_OnCancel_MetaData) }; // 3416943817
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_WaitConfirmCancel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitConfirmCancel_Statics::NewProp_OnConfirm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitConfirmCancel_Statics::NewProp_OnCancel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityTask_WaitConfirmCancel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_WaitConfirmCancel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_WaitConfirmCancel_Statics::ClassParams = {
		&UAbilityTask_WaitConfirmCancel::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityTask_WaitConfirmCancel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitConfirmCancel_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitConfirmCancel_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_WaitConfirmCancel_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitConfirmCancel_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAbilityTask_WaitConfirmCancel()
	{
		if (!Z_Registration_Info_UClass_UAbilityTask_WaitConfirmCancel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_WaitConfirmCancel.OuterSingleton, Z_Construct_UClass_UAbilityTask_WaitConfirmCancel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityTask_WaitConfirmCancel.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_WaitConfirmCancel>()
	{
		return UAbilityTask_WaitConfirmCancel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_WaitConfirmCancel);
	UAbilityTask_WaitConfirmCancel::~UAbilityTask_WaitConfirmCancel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirmCancel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirmCancel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_WaitConfirmCancel, UAbilityTask_WaitConfirmCancel::StaticClass, TEXT("UAbilityTask_WaitConfirmCancel"), &Z_Registration_Info_UClass_UAbilityTask_WaitConfirmCancel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_WaitConfirmCancel), 3501030403U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirmCancel_h_880911601(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirmCancel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirmCancel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
