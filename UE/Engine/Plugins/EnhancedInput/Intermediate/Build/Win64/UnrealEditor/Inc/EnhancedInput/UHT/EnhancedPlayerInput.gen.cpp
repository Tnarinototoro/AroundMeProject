// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnhancedPlayerInput.h"
#include "EnhancedActionKeyMapping.h"
#include "InputAction.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnhancedPlayerInput() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPlayerInput();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedPlayerInput();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedPlayerInput_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FEnhancedActionKeyMapping();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInjectedInputArray();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionInstance();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FKeyConsumptionOptions();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UPackage* Z_Construct_UPackage__Script_EnhancedInput();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KeyConsumptionOptions;
class UScriptStruct* FKeyConsumptionOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KeyConsumptionOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KeyConsumptionOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyConsumptionOptions, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("KeyConsumptionOptions"));
	}
	return Z_Registration_Info_UScriptStruct_KeyConsumptionOptions.OuterSingleton;
}
template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<FKeyConsumptionOptions>()
{
	return FKeyConsumptionOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKeyConsumptionOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyConsumptionOptions_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnhancedPlayerInput.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKeyConsumptionOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyConsumptionOptions>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeyConsumptionOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
		nullptr,
		&NewStructOps,
		"KeyConsumptionOptions",
		nullptr,
		0,
		sizeof(FKeyConsumptionOptions),
		alignof(FKeyConsumptionOptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyConsumptionOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKeyConsumptionOptions_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKeyConsumptionOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_KeyConsumptionOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KeyConsumptionOptions.InnerSingleton, Z_Construct_UScriptStruct_FKeyConsumptionOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KeyConsumptionOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InjectedInputArray;
class UScriptStruct* FInjectedInputArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InjectedInputArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InjectedInputArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInjectedInputArray, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("InjectedInputArray"));
	}
	return Z_Registration_Info_UScriptStruct_InjectedInputArray.OuterSingleton;
}
template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<FInjectedInputArray>()
{
	return FInjectedInputArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInjectedInputArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInjectedInputArray_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnhancedPlayerInput.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInjectedInputArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInjectedInputArray>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInjectedInputArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
		nullptr,
		&NewStructOps,
		"InjectedInputArray",
		nullptr,
		0,
		sizeof(FInjectedInputArray),
		alignof(FInjectedInputArray),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInjectedInputArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInjectedInputArray_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInjectedInputArray()
	{
		if (!Z_Registration_Info_UScriptStruct_InjectedInputArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InjectedInputArray.InnerSingleton, Z_Construct_UScriptStruct_FInjectedInputArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InjectedInputArray.InnerSingleton;
	}
	void UEnhancedPlayerInput::StaticRegisterNativesUEnhancedPlayerInput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnhancedPlayerInput);
	UClass* Z_Construct_UClass_UEnhancedPlayerInput_NoRegister()
	{
		return UEnhancedPlayerInput::StaticClass();
	}
	struct Z_Construct_UClass_UEnhancedPlayerInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyConsumptionData_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_KeyConsumptionData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyConsumptionData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_KeyConsumptionData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppliedInputContexts_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AppliedInputContexts_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppliedInputContexts_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AppliedInputContexts;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EnhancedActionMappings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnhancedActionMappings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EnhancedActionMappings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionInstanceData_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActionInstanceData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionInstanceData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ActionInstanceData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeysPressedThisTick_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeysPressedThisTick_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeysPressedThisTick_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_KeysPressedThisTick;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputsInjectedThisTick_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputsInjectedThisTick_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputsInjectedThisTick_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InputsInjectedThisTick;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LastInjectedActions_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastInjectedActions_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_LastInjectedActions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnhancedPlayerInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlayerInput,
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedPlayerInput_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedPlayerInput_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* UEnhancedPlayerInput : UPlayerInput extensions for enhanced player input system\n*/" },
		{ "IncludePath", "EnhancedPlayerInput.h" },
		{ "ModuleRelativePath", "Public/EnhancedPlayerInput.h" },
		{ "ToolTip", "UEnhancedPlayerInput : UPlayerInput extensions for enhanced player input system" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_KeyConsumptionData_ValueProp = { "KeyConsumptionData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FKeyConsumptionOptions, METADATA_PARAMS(0, nullptr) }; // 1227832343
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_KeyConsumptionData_Key_KeyProp = { "KeyConsumptionData_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_KeyConsumptionData_MetaData[] = {
		{ "Comment", "/** Array of data that represents what keys should be consumed if an enhanced input action is in a specific triggered state */" },
		{ "ModuleRelativePath", "Public/EnhancedPlayerInput.h" },
		{ "ToolTip", "Array of data that represents what keys should be consumed if an enhanced input action is in a specific triggered state" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_KeyConsumptionData = { "KeyConsumptionData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedPlayerInput, KeyConsumptionData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_KeyConsumptionData_MetaData), Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_KeyConsumptionData_MetaData) }; // 1227832343
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_AppliedInputContexts_ValueProp = { "AppliedInputContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_AppliedInputContexts_Key_KeyProp = { "AppliedInputContexts_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_AppliedInputContexts_MetaData[] = {
		{ "Comment", "/** Currently applied key mappings\n\x09 * Note: Source reference only. Use EnhancedActionMappings for the actual mappings (with properly instanced triggers/modifiers)\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedPlayerInput.h" },
		{ "ToolTip", "Currently applied key mappings\nNote: Source reference only. Use EnhancedActionMappings for the actual mappings (with properly instanced triggers/modifiers)" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_AppliedInputContexts = { "AppliedInputContexts", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedPlayerInput, AppliedInputContexts), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_AppliedInputContexts_MetaData), Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_AppliedInputContexts_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_EnhancedActionMappings_Inner = { "EnhancedActionMappings", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEnhancedActionKeyMapping, METADATA_PARAMS(0, nullptr) }; // 2568609385
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_EnhancedActionMappings_MetaData[] = {
		{ "Comment", "/** This player's version of the Action Mappings */" },
		{ "ModuleRelativePath", "Public/EnhancedPlayerInput.h" },
		{ "ToolTip", "This player's version of the Action Mappings" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_EnhancedActionMappings = { "EnhancedActionMappings", nullptr, (EPropertyFlags)0x0040008000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedPlayerInput, EnhancedActionMappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_EnhancedActionMappings_MetaData), Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_EnhancedActionMappings_MetaData) }; // 2568609385
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_ActionInstanceData_ValueProp = { "ActionInstanceData", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FInputActionInstance, METADATA_PARAMS(0, nullptr) }; // 2153033866
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_ActionInstanceData_Key_KeyProp = { "ActionInstanceData_Key", nullptr, (EPropertyFlags)0x0004008000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_ActionInstanceData_MetaData[] = {
		{ "Comment", "/** Tracked action values. Queryable. */" },
		{ "ModuleRelativePath", "Public/EnhancedPlayerInput.h" },
		{ "ToolTip", "Tracked action values. Queryable." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_ActionInstanceData = { "ActionInstanceData", nullptr, (EPropertyFlags)0x0040008000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedPlayerInput, ActionInstanceData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_ActionInstanceData_MetaData), Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_ActionInstanceData_MetaData) }; // 2153033866
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_KeysPressedThisTick_ValueProp = { "KeysPressedThisTick", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_KeysPressedThisTick_Key_KeyProp = { "KeysPressedThisTick_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 46000949
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_KeysPressedThisTick_MetaData[] = {
		{ "Comment", "/**\n\x09 * A map of Keys to the amount they were depressed this frame. This is reset with each call to ProcessInputStack\n\x09 * and is populated within UEnhancedPlayerInput::InputKey.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedPlayerInput.h" },
		{ "ToolTip", "A map of Keys to the amount they were depressed this frame. This is reset with each call to ProcessInputStack\nand is populated within UEnhancedPlayerInput::InputKey." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_KeysPressedThisTick = { "KeysPressedThisTick", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedPlayerInput, KeysPressedThisTick), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_KeysPressedThisTick_MetaData), Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_KeysPressedThisTick_MetaData) }; // 46000949
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_InputsInjectedThisTick_ValueProp = { "InputsInjectedThisTick", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FInjectedInputArray, METADATA_PARAMS(0, nullptr) }; // 2536720343
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_InputsInjectedThisTick_Key_KeyProp = { "InputsInjectedThisTick_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_InputsInjectedThisTick_MetaData[] = {
		{ "Comment", "/** Inputs injected since the last call to ProcessInputStack */" },
		{ "ModuleRelativePath", "Public/EnhancedPlayerInput.h" },
		{ "ToolTip", "Inputs injected since the last call to ProcessInputStack" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_InputsInjectedThisTick = { "InputsInjectedThisTick", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedPlayerInput, InputsInjectedThisTick), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_InputsInjectedThisTick_MetaData), Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_InputsInjectedThisTick_MetaData) }; // 2536720343
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_LastInjectedActions_ElementProp = { "LastInjectedActions", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_LastInjectedActions_MetaData[] = {
		{ "Comment", "/** Last frame's injected inputs */" },
		{ "ModuleRelativePath", "Public/EnhancedPlayerInput.h" },
		{ "ToolTip", "Last frame's injected inputs" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_LastInjectedActions = { "LastInjectedActions", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedPlayerInput, LastInjectedActions), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_LastInjectedActions_MetaData), Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_LastInjectedActions_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnhancedPlayerInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_KeyConsumptionData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_KeyConsumptionData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_KeyConsumptionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_AppliedInputContexts_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_AppliedInputContexts_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_AppliedInputContexts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_EnhancedActionMappings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_EnhancedActionMappings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_ActionInstanceData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_ActionInstanceData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_ActionInstanceData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_KeysPressedThisTick_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_KeysPressedThisTick_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_KeysPressedThisTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_InputsInjectedThisTick_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_InputsInjectedThisTick_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_InputsInjectedThisTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_LastInjectedActions_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_LastInjectedActions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnhancedPlayerInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnhancedPlayerInput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::ClassParams = {
		&UEnhancedPlayerInput::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnhancedPlayerInput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedPlayerInput_Statics::PropPointers),
		0,
		0x009000ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedPlayerInput_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnhancedPlayerInput_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedPlayerInput_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UEnhancedPlayerInput()
	{
		if (!Z_Registration_Info_UClass_UEnhancedPlayerInput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnhancedPlayerInput.OuterSingleton, Z_Construct_UClass_UEnhancedPlayerInput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnhancedPlayerInput.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UClass* StaticClass<UEnhancedPlayerInput>()
	{
		return UEnhancedPlayerInput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnhancedPlayerInput);
	UEnhancedPlayerInput::~UEnhancedPlayerInput() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedPlayerInput_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedPlayerInput_h_Statics::ScriptStructInfo[] = {
		{ FKeyConsumptionOptions::StaticStruct, Z_Construct_UScriptStruct_FKeyConsumptionOptions_Statics::NewStructOps, TEXT("KeyConsumptionOptions"), &Z_Registration_Info_UScriptStruct_KeyConsumptionOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKeyConsumptionOptions), 1227832343U) },
		{ FInjectedInputArray::StaticStruct, Z_Construct_UScriptStruct_FInjectedInputArray_Statics::NewStructOps, TEXT("InjectedInputArray"), &Z_Registration_Info_UScriptStruct_InjectedInputArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInjectedInputArray), 2536720343U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedPlayerInput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnhancedPlayerInput, UEnhancedPlayerInput::StaticClass, TEXT("UEnhancedPlayerInput"), &Z_Registration_Info_UClass_UEnhancedPlayerInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnhancedPlayerInput), 1133808474U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedPlayerInput_h_2507545906(TEXT("/Script/EnhancedInput"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedPlayerInput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedPlayerInput_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedPlayerInput_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedPlayerInput_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
