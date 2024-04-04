// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UpgradeNiagaraScriptResults.h"
#include "NiagaraEmitter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUpgradeNiagaraScriptResults() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEmitter_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraClipboardFunctionInput_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraPythonEmitter();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraPythonEmitter_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraPythonModule();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraPythonModule_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraPythonScriptModuleInput();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraPythonScriptModuleInput_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackModuleItem_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UUpgradeNiagaraEmitterContext();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UUpgradeNiagaraEmitterContext_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UUpgradeNiagaraScriptResults();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UUpgradeNiagaraScriptResults_NoRegister();
	NIAGARAEDITOR_API UEnum* Z_Construct_UEnum_NiagaraEditor_ENiagaraPythonScriptInputSource();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraPythonScriptInputSource;
	static UEnum* ENiagaraPythonScriptInputSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraPythonScriptInputSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraPythonScriptInputSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NiagaraEditor_ENiagaraPythonScriptInputSource, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("ENiagaraPythonScriptInputSource"));
		}
		return Z_Registration_Info_UEnum_ENiagaraPythonScriptInputSource.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UEnum* StaticEnum<ENiagaraPythonScriptInputSource>()
	{
		return ENiagaraPythonScriptInputSource_StaticEnum();
	}
	struct Z_Construct_UEnum_NiagaraEditor_ENiagaraPythonScriptInputSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NiagaraEditor_ENiagaraPythonScriptInputSource_Statics::Enumerators[] = {
		{ "ENiagaraPythonScriptInputSource::Input", (int64)ENiagaraPythonScriptInputSource::Input },
		{ "ENiagaraPythonScriptInputSource::Output", (int64)ENiagaraPythonScriptInputSource::Output },
		{ "ENiagaraPythonScriptInputSource::Local", (int64)ENiagaraPythonScriptInputSource::Local },
		{ "ENiagaraPythonScriptInputSource::InputOutput", (int64)ENiagaraPythonScriptInputSource::InputOutput },
		{ "ENiagaraPythonScriptInputSource::InitialValueInput", (int64)ENiagaraPythonScriptInputSource::InitialValueInput },
		{ "ENiagaraPythonScriptInputSource::None", (int64)ENiagaraPythonScriptInputSource::None },
		{ "ENiagaraPythonScriptInputSource::Num", (int64)ENiagaraPythonScriptInputSource::Num },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NiagaraEditor_ENiagaraPythonScriptInputSource_Statics::Enum_MetaDataParams[] = {
		{ "InitialValueInput.Name", "ENiagaraPythonScriptInputSource::InitialValueInput" },
		{ "Input.Name", "ENiagaraPythonScriptInputSource::Input" },
		{ "InputOutput.Name", "ENiagaraPythonScriptInputSource::InputOutput" },
		{ "Local.Name", "ENiagaraPythonScriptInputSource::Local" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
		{ "None.Comment", "// insert new script parameter usages before\n" },
		{ "None.Hidden", "" },
		{ "None.Name", "ENiagaraPythonScriptInputSource::None" },
		{ "None.ToolTip", "insert new script parameter usages before" },
		{ "Num.Hidden", "" },
		{ "Num.Name", "ENiagaraPythonScriptInputSource::Num" },
		{ "Output.Name", "ENiagaraPythonScriptInputSource::Output" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NiagaraEditor_ENiagaraPythonScriptInputSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		"ENiagaraPythonScriptInputSource",
		"ENiagaraPythonScriptInputSource",
		Z_Construct_UEnum_NiagaraEditor_ENiagaraPythonScriptInputSource_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraEditor_ENiagaraPythonScriptInputSource_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraEditor_ENiagaraPythonScriptInputSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NiagaraEditor_ENiagaraPythonScriptInputSource_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_NiagaraEditor_ENiagaraPythonScriptInputSource()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraPythonScriptInputSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraPythonScriptInputSource.InnerSingleton, Z_Construct_UEnum_NiagaraEditor_ENiagaraPythonScriptInputSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraPythonScriptInputSource.InnerSingleton;
	}
	DEFINE_FUNCTION(UNiagaraPythonScriptModuleInput::execAsLinkedValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->AsLinkedValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraPythonScriptModuleInput::execAsEnum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->AsEnum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraPythonScriptModuleInput::execAsQuat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=P_THIS->AsQuat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraPythonScriptModuleInput::execAsColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->AsColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraPythonScriptModuleInput::execAsVec4)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector4*)Z_Param__Result=P_THIS->AsVec4();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraPythonScriptModuleInput::execAsVec3)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->AsVec3();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraPythonScriptModuleInput::execAsVec2)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->AsVec2();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraPythonScriptModuleInput::execAsBool)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AsBool();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraPythonScriptModuleInput::execAsInt)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AsInt();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraPythonScriptModuleInput::execAsFloat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->AsFloat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraPythonScriptModuleInput::execIsLinkedValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLinkedValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraPythonScriptModuleInput::execIsLocalValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLocalValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraPythonScriptModuleInput::execIsSet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSet();
		P_NATIVE_END;
	}
	void UNiagaraPythonScriptModuleInput::StaticRegisterNativesUNiagaraPythonScriptModuleInput()
	{
		UClass* Class = UNiagaraPythonScriptModuleInput::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsBool", &UNiagaraPythonScriptModuleInput::execAsBool },
			{ "AsColor", &UNiagaraPythonScriptModuleInput::execAsColor },
			{ "AsEnum", &UNiagaraPythonScriptModuleInput::execAsEnum },
			{ "AsFloat", &UNiagaraPythonScriptModuleInput::execAsFloat },
			{ "AsInt", &UNiagaraPythonScriptModuleInput::execAsInt },
			{ "AsLinkedValue", &UNiagaraPythonScriptModuleInput::execAsLinkedValue },
			{ "AsQuat", &UNiagaraPythonScriptModuleInput::execAsQuat },
			{ "AsVec2", &UNiagaraPythonScriptModuleInput::execAsVec2 },
			{ "AsVec3", &UNiagaraPythonScriptModuleInput::execAsVec3 },
			{ "AsVec4", &UNiagaraPythonScriptModuleInput::execAsVec4 },
			{ "IsLinkedValue", &UNiagaraPythonScriptModuleInput::execIsLinkedValue },
			{ "IsLocalValue", &UNiagaraPythonScriptModuleInput::execIsLocalValue },
			{ "IsSet", &UNiagaraPythonScriptModuleInput::execIsSet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsBool_Statics
	{
		struct NiagaraPythonScriptModuleInput_eventAsBool_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NiagaraPythonScriptModuleInput_eventAsBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraPythonScriptModuleInput_eventAsBool_Parms), &Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scripting" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraPythonScriptModuleInput, nullptr, "AsBool", nullptr, nullptr, Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsBool_Statics::NiagaraPythonScriptModuleInput_eventAsBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsBool_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsBool_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsBool_Statics::NiagaraPythonScriptModuleInput_eventAsBool_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsColor_Statics
	{
		struct NiagaraPythonScriptModuleInput_eventAsColor_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraPythonScriptModuleInput_eventAsColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scripting" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraPythonScriptModuleInput, nullptr, "AsColor", nullptr, nullptr, Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsColor_Statics::NiagaraPythonScriptModuleInput_eventAsColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsColor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsColor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsColor_Statics::NiagaraPythonScriptModuleInput_eventAsColor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsEnum_Statics
	{
		struct NiagaraPythonScriptModuleInput_eventAsEnum_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsEnum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraPythonScriptModuleInput_eventAsEnum_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsEnum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsEnum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsEnum_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scripting" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraPythonScriptModuleInput, nullptr, "AsEnum", nullptr, nullptr, Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsEnum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsEnum_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsEnum_Statics::NiagaraPythonScriptModuleInput_eventAsEnum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsEnum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsEnum_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsEnum_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsEnum_Statics::NiagaraPythonScriptModuleInput_eventAsEnum_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsEnum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsEnum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsFloat_Statics
	{
		struct NiagaraPythonScriptModuleInput_eventAsFloat_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraPythonScriptModuleInput_eventAsFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scripting" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraPythonScriptModuleInput, nullptr, "AsFloat", nullptr, nullptr, Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsFloat_Statics::NiagaraPythonScriptModuleInput_eventAsFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsFloat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsFloat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsFloat_Statics::NiagaraPythonScriptModuleInput_eventAsFloat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsInt_Statics
	{
		struct NiagaraPythonScriptModuleInput_eventAsInt_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraPythonScriptModuleInput_eventAsInt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scripting" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraPythonScriptModuleInput, nullptr, "AsInt", nullptr, nullptr, Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsInt_Statics::NiagaraPythonScriptModuleInput_eventAsInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsInt_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsInt_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsInt_Statics::NiagaraPythonScriptModuleInput_eventAsInt_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsLinkedValue_Statics
	{
		struct NiagaraPythonScriptModuleInput_eventAsLinkedValue_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsLinkedValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraPythonScriptModuleInput_eventAsLinkedValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsLinkedValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsLinkedValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsLinkedValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scripting" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsLinkedValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraPythonScriptModuleInput, nullptr, "AsLinkedValue", nullptr, nullptr, Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsLinkedValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsLinkedValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsLinkedValue_Statics::NiagaraPythonScriptModuleInput_eventAsLinkedValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsLinkedValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsLinkedValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsLinkedValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsLinkedValue_Statics::NiagaraPythonScriptModuleInput_eventAsLinkedValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsLinkedValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsLinkedValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsQuat_Statics
	{
		struct NiagaraPythonScriptModuleInput_eventAsQuat_Parms
		{
			FQuat ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsQuat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraPythonScriptModuleInput_eventAsQuat_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsQuat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsQuat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scripting" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraPythonScriptModuleInput, nullptr, "AsQuat", nullptr, nullptr, Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsQuat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsQuat_Statics::NiagaraPythonScriptModuleInput_eventAsQuat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsQuat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsQuat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsQuat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsQuat_Statics::NiagaraPythonScriptModuleInput_eventAsQuat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec2_Statics
	{
		struct NiagaraPythonScriptModuleInput_eventAsVec2_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraPythonScriptModuleInput_eventAsVec2_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec2_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec2_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scripting" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraPythonScriptModuleInput, nullptr, "AsVec2", nullptr, nullptr, Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec2_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec2_Statics::NiagaraPythonScriptModuleInput_eventAsVec2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec2_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec2_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec2_Statics::NiagaraPythonScriptModuleInput_eventAsVec2_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec3_Statics
	{
		struct NiagaraPythonScriptModuleInput_eventAsVec3_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec3_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraPythonScriptModuleInput_eventAsVec3_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec3_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec3_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec3_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scripting" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraPythonScriptModuleInput, nullptr, "AsVec3", nullptr, nullptr, Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec3_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec3_Statics::NiagaraPythonScriptModuleInput_eventAsVec3_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec3_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec3_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec3_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec3_Statics::NiagaraPythonScriptModuleInput_eventAsVec3_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec4_Statics
	{
		struct NiagaraPythonScriptModuleInput_eventAsVec4_Parms
		{
			FVector4 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec4_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraPythonScriptModuleInput_eventAsVec4_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec4_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec4_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec4_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scripting" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraPythonScriptModuleInput, nullptr, "AsVec4", nullptr, nullptr, Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec4_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec4_Statics::NiagaraPythonScriptModuleInput_eventAsVec4_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec4_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec4_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec4_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec4_Statics::NiagaraPythonScriptModuleInput_eventAsVec4_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsLinkedValue_Statics
	{
		struct NiagaraPythonScriptModuleInput_eventIsLinkedValue_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsLinkedValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NiagaraPythonScriptModuleInput_eventIsLinkedValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsLinkedValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraPythonScriptModuleInput_eventIsLinkedValue_Parms), &Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsLinkedValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsLinkedValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsLinkedValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsLinkedValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scripting" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsLinkedValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraPythonScriptModuleInput, nullptr, "IsLinkedValue", nullptr, nullptr, Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsLinkedValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsLinkedValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsLinkedValue_Statics::NiagaraPythonScriptModuleInput_eventIsLinkedValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsLinkedValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsLinkedValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsLinkedValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsLinkedValue_Statics::NiagaraPythonScriptModuleInput_eventIsLinkedValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsLinkedValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsLinkedValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsLocalValue_Statics
	{
		struct NiagaraPythonScriptModuleInput_eventIsLocalValue_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsLocalValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NiagaraPythonScriptModuleInput_eventIsLocalValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsLocalValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraPythonScriptModuleInput_eventIsLocalValue_Parms), &Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsLocalValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsLocalValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsLocalValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsLocalValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scripting" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsLocalValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraPythonScriptModuleInput, nullptr, "IsLocalValue", nullptr, nullptr, Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsLocalValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsLocalValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsLocalValue_Statics::NiagaraPythonScriptModuleInput_eventIsLocalValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsLocalValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsLocalValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsLocalValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsLocalValue_Statics::NiagaraPythonScriptModuleInput_eventIsLocalValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsLocalValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsLocalValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsSet_Statics
	{
		struct NiagaraPythonScriptModuleInput_eventIsSet_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsSet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NiagaraPythonScriptModuleInput_eventIsSet_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraPythonScriptModuleInput_eventIsSet_Parms), &Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsSet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scripting" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraPythonScriptModuleInput, nullptr, "IsSet", nullptr, nullptr, Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsSet_Statics::NiagaraPythonScriptModuleInput_eventIsSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsSet_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsSet_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsSet_Statics::NiagaraPythonScriptModuleInput_eventIsSet_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraPythonScriptModuleInput);
	UClass* Z_Construct_UClass_UNiagaraPythonScriptModuleInput_NoRegister()
	{
		return UNiagaraPythonScriptModuleInput::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraPythonScriptModuleInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Input;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraPythonScriptModuleInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPythonScriptModuleInput_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UNiagaraPythonScriptModuleInput_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsBool, "AsBool" }, // 907115155
		{ &Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsColor, "AsColor" }, // 1257816304
		{ &Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsEnum, "AsEnum" }, // 3164837416
		{ &Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsFloat, "AsFloat" }, // 3195383872
		{ &Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsInt, "AsInt" }, // 2460953495
		{ &Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsLinkedValue, "AsLinkedValue" }, // 3242945063
		{ &Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsQuat, "AsQuat" }, // 167087650
		{ &Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec2, "AsVec2" }, // 4072336084
		{ &Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec3, "AsVec3" }, // 535546297
		{ &Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_AsVec4, "AsVec4" }, // 1903804703
		{ &Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsLinkedValue, "IsLinkedValue" }, // 100807436
		{ &Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsLocalValue, "IsLocalValue" }, // 1475327730
		{ &Z_Construct_UFunction_UNiagaraPythonScriptModuleInput_IsSet, "IsSet" }, // 4272756583
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPythonScriptModuleInput_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraPythonScriptModuleInput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Wrapper for setting the value on a parameter of a UNiagaraScript, applied through a UUpgradeNiagaraScriptResults. */" },
		{ "IncludePath", "UpgradeNiagaraScriptResults.h" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
		{ "ToolTip", "Wrapper for setting the value on a parameter of a UNiagaraScript, applied through a UUpgradeNiagaraScriptResults." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraPythonScriptModuleInput_Statics::NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraPythonScriptModuleInput_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraPythonScriptModuleInput, Input), Z_Construct_UClass_UNiagaraClipboardFunctionInput_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPythonScriptModuleInput_Statics::NewProp_Input_MetaData), Z_Construct_UClass_UNiagaraPythonScriptModuleInput_Statics::NewProp_Input_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraPythonScriptModuleInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraPythonScriptModuleInput_Statics::NewProp_Input,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraPythonScriptModuleInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraPythonScriptModuleInput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraPythonScriptModuleInput_Statics::ClassParams = {
		&UNiagaraPythonScriptModuleInput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNiagaraPythonScriptModuleInput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPythonScriptModuleInput_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPythonScriptModuleInput_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraPythonScriptModuleInput_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPythonScriptModuleInput_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNiagaraPythonScriptModuleInput()
	{
		if (!Z_Registration_Info_UClass_UNiagaraPythonScriptModuleInput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraPythonScriptModuleInput.OuterSingleton, Z_Construct_UClass_UNiagaraPythonScriptModuleInput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraPythonScriptModuleInput.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraPythonScriptModuleInput>()
	{
		return UNiagaraPythonScriptModuleInput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraPythonScriptModuleInput);
	UNiagaraPythonScriptModuleInput::~UNiagaraPythonScriptModuleInput() {}
	DEFINE_FUNCTION(UUpgradeNiagaraScriptResults::execResetToDefault)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InputName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetToDefault(Z_Param_InputName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUpgradeNiagaraScriptResults::execSetNewInput)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InputName);
		P_GET_OBJECT(UNiagaraPythonScriptModuleInput,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNewInput(Z_Param_InputName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUpgradeNiagaraScriptResults::execSetLinkedInput)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InputName);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLinkedInput(Z_Param_InputName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUpgradeNiagaraScriptResults::execSetEnumInput)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InputName);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnumInput(Z_Param_InputName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUpgradeNiagaraScriptResults::execSetQuatInput)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InputName);
		P_GET_STRUCT(FQuat,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetQuatInput(Z_Param_InputName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUpgradeNiagaraScriptResults::execSetColorInput)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InputName);
		P_GET_STRUCT(FLinearColor,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColorInput(Z_Param_InputName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUpgradeNiagaraScriptResults::execSetVec4Input)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InputName);
		P_GET_STRUCT(FVector4,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVec4Input(Z_Param_InputName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUpgradeNiagaraScriptResults::execSetVec3Input)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InputName);
		P_GET_STRUCT(FVector,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVec3Input(Z_Param_InputName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUpgradeNiagaraScriptResults::execSetVec2Input)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InputName);
		P_GET_STRUCT(FVector2D,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVec2Input(Z_Param_InputName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUpgradeNiagaraScriptResults::execSetBoolInput)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InputName);
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoolInput(Z_Param_InputName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUpgradeNiagaraScriptResults::execSetIntInput)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InputName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIntInput(Z_Param_InputName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUpgradeNiagaraScriptResults::execSetFloatInput)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InputName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFloatInput(Z_Param_InputName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUpgradeNiagaraScriptResults::execGetOldInput)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InputName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraPythonScriptModuleInput**)Z_Param__Result=P_THIS->GetOldInput(Z_Param_InputName);
		P_NATIVE_END;
	}
	void UUpgradeNiagaraScriptResults::StaticRegisterNativesUUpgradeNiagaraScriptResults()
	{
		UClass* Class = UUpgradeNiagaraScriptResults::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOldInput", &UUpgradeNiagaraScriptResults::execGetOldInput },
			{ "ResetToDefault", &UUpgradeNiagaraScriptResults::execResetToDefault },
			{ "SetBoolInput", &UUpgradeNiagaraScriptResults::execSetBoolInput },
			{ "SetColorInput", &UUpgradeNiagaraScriptResults::execSetColorInput },
			{ "SetEnumInput", &UUpgradeNiagaraScriptResults::execSetEnumInput },
			{ "SetFloatInput", &UUpgradeNiagaraScriptResults::execSetFloatInput },
			{ "SetIntInput", &UUpgradeNiagaraScriptResults::execSetIntInput },
			{ "SetLinkedInput", &UUpgradeNiagaraScriptResults::execSetLinkedInput },
			{ "SetNewInput", &UUpgradeNiagaraScriptResults::execSetNewInput },
			{ "SetQuatInput", &UUpgradeNiagaraScriptResults::execSetQuatInput },
			{ "SetVec2Input", &UUpgradeNiagaraScriptResults::execSetVec2Input },
			{ "SetVec3Input", &UUpgradeNiagaraScriptResults::execSetVec3Input },
			{ "SetVec4Input", &UUpgradeNiagaraScriptResults::execSetVec4Input },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUpgradeNiagaraScriptResults_GetOldInput_Statics
	{
		struct UpgradeNiagaraScriptResults_eventGetOldInput_Parms
		{
			FString InputName;
			UNiagaraPythonScriptModuleInput* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InputName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpgradeNiagaraScriptResults_GetOldInput_Statics::NewProp_InputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUpgradeNiagaraScriptResults_GetOldInput_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpgradeNiagaraScriptResults_eventGetOldInput_Parms, InputName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_GetOldInput_Statics::NewProp_InputName_MetaData), Z_Construct_UFunction_UUpgradeNiagaraScriptResults_GetOldInput_Statics::NewProp_InputName_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpgradeNiagaraScriptResults_GetOldInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpgradeNiagaraScriptResults_eventGetOldInput_Parms, ReturnValue), Z_Construct_UClass_UNiagaraPythonScriptModuleInput_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpgradeNiagaraScriptResults_GetOldInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpgradeNiagaraScriptResults_GetOldInput_Statics::NewProp_InputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpgradeNiagaraScriptResults_GetOldInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpgradeNiagaraScriptResults_GetOldInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scripting" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpgradeNiagaraScriptResults_GetOldInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpgradeNiagaraScriptResults, nullptr, "GetOldInput", nullptr, nullptr, Z_Construct_UFunction_UUpgradeNiagaraScriptResults_GetOldInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_GetOldInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_GetOldInput_Statics::UpgradeNiagaraScriptResults_eventGetOldInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_GetOldInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpgradeNiagaraScriptResults_GetOldInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_GetOldInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_GetOldInput_Statics::UpgradeNiagaraScriptResults_eventGetOldInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUpgradeNiagaraScriptResults_GetOldInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpgradeNiagaraScriptResults_GetOldInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUpgradeNiagaraScriptResults_ResetToDefault_Statics
	{
		struct UpgradeNiagaraScriptResults_eventResetToDefault_Parms
		{
			FString InputName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InputName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpgradeNiagaraScriptResults_ResetToDefault_Statics::NewProp_InputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUpgradeNiagaraScriptResults_ResetToDefault_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpgradeNiagaraScriptResults_eventResetToDefault_Parms, InputName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_ResetToDefault_Statics::NewProp_InputName_MetaData), Z_Construct_UFunction_UUpgradeNiagaraScriptResults_ResetToDefault_Statics::NewProp_InputName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpgradeNiagaraScriptResults_ResetToDefault_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpgradeNiagaraScriptResults_ResetToDefault_Statics::NewProp_InputName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpgradeNiagaraScriptResults_ResetToDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scripting" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpgradeNiagaraScriptResults_ResetToDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpgradeNiagaraScriptResults, nullptr, "ResetToDefault", nullptr, nullptr, Z_Construct_UFunction_UUpgradeNiagaraScriptResults_ResetToDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_ResetToDefault_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_ResetToDefault_Statics::UpgradeNiagaraScriptResults_eventResetToDefault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_ResetToDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpgradeNiagaraScriptResults_ResetToDefault_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_ResetToDefault_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_ResetToDefault_Statics::UpgradeNiagaraScriptResults_eventResetToDefault_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUpgradeNiagaraScriptResults_ResetToDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpgradeNiagaraScriptResults_ResetToDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetBoolInput_Statics
	{
		struct UpgradeNiagaraScriptResults_eventSetBoolInput_Parms
		{
			FString InputName;
			bool Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InputName;
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetBoolInput_Statics::NewProp_InputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetBoolInput_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpgradeNiagaraScriptResults_eventSetBoolInput_Parms, InputName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetBoolInput_Statics::NewProp_InputName_MetaData), Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetBoolInput_Statics::NewProp_InputName_MetaData) };
	void Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetBoolInput_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((UpgradeNiagaraScriptResults_eventSetBoolInput_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetBoolInput_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UpgradeNiagaraScriptResults_eventSetBoolInput_Parms), &Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetBoolInput_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetBoolInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetBoolInput_Statics::NewProp_InputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetBoolInput_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetBoolInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scripting" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetBoolInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpgradeNiagaraScriptResults, nullptr, "SetBoolInput", nullptr, nullptr, Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetBoolInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetBoolInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetBoolInput_Statics::UpgradeNiagaraScriptResults_eventSetBoolInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetBoolInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetBoolInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetBoolInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetBoolInput_Statics::UpgradeNiagaraScriptResults_eventSetBoolInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetBoolInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetBoolInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetColorInput_Statics
	{
		struct UpgradeNiagaraScriptResults_eventSetColorInput_Parms
		{
			FString InputName;
			FLinearColor Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InputName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetColorInput_Statics::NewProp_InputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetColorInput_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpgradeNiagaraScriptResults_eventSetColorInput_Parms, InputName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetColorInput_Statics::NewProp_InputName_MetaData), Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetColorInput_Statics::NewProp_InputName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetColorInput_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpgradeNiagaraScriptResults_eventSetColorInput_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetColorInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetColorInput_Statics::NewProp_InputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetColorInput_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetColorInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scripting" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetColorInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpgradeNiagaraScriptResults, nullptr, "SetColorInput", nullptr, nullptr, Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetColorInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetColorInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetColorInput_Statics::UpgradeNiagaraScriptResults_eventSetColorInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetColorInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetColorInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetColorInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetColorInput_Statics::UpgradeNiagaraScriptResults_eventSetColorInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetColorInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetColorInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetEnumInput_Statics
	{
		struct UpgradeNiagaraScriptResults_eventSetEnumInput_Parms
		{
			FString InputName;
			FString Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InputName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetEnumInput_Statics::NewProp_InputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetEnumInput_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpgradeNiagaraScriptResults_eventSetEnumInput_Parms, InputName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetEnumInput_Statics::NewProp_InputName_MetaData), Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetEnumInput_Statics::NewProp_InputName_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetEnumInput_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpgradeNiagaraScriptResults_eventSetEnumInput_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetEnumInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetEnumInput_Statics::NewProp_InputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetEnumInput_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetEnumInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scripting" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetEnumInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpgradeNiagaraScriptResults, nullptr, "SetEnumInput", nullptr, nullptr, Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetEnumInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetEnumInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetEnumInput_Statics::UpgradeNiagaraScriptResults_eventSetEnumInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetEnumInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetEnumInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetEnumInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetEnumInput_Statics::UpgradeNiagaraScriptResults_eventSetEnumInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetEnumInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetEnumInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetFloatInput_Statics
	{
		struct UpgradeNiagaraScriptResults_eventSetFloatInput_Parms
		{
			FString InputName;
			float Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InputName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetFloatInput_Statics::NewProp_InputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetFloatInput_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpgradeNiagaraScriptResults_eventSetFloatInput_Parms, InputName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetFloatInput_Statics::NewProp_InputName_MetaData), Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetFloatInput_Statics::NewProp_InputName_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetFloatInput_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpgradeNiagaraScriptResults_eventSetFloatInput_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetFloatInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetFloatInput_Statics::NewProp_InputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetFloatInput_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetFloatInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scripting" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetFloatInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpgradeNiagaraScriptResults, nullptr, "SetFloatInput", nullptr, nullptr, Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetFloatInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetFloatInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetFloatInput_Statics::UpgradeNiagaraScriptResults_eventSetFloatInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetFloatInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetFloatInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetFloatInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetFloatInput_Statics::UpgradeNiagaraScriptResults_eventSetFloatInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetFloatInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetFloatInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetIntInput_Statics
	{
		struct UpgradeNiagaraScriptResults_eventSetIntInput_Parms
		{
			FString InputName;
			int32 Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InputName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetIntInput_Statics::NewProp_InputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetIntInput_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpgradeNiagaraScriptResults_eventSetIntInput_Parms, InputName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetIntInput_Statics::NewProp_InputName_MetaData), Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetIntInput_Statics::NewProp_InputName_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetIntInput_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpgradeNiagaraScriptResults_eventSetIntInput_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetIntInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetIntInput_Statics::NewProp_InputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetIntInput_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetIntInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scripting" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetIntInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpgradeNiagaraScriptResults, nullptr, "SetIntInput", nullptr, nullptr, Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetIntInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetIntInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetIntInput_Statics::UpgradeNiagaraScriptResults_eventSetIntInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetIntInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetIntInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetIntInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetIntInput_Statics::UpgradeNiagaraScriptResults_eventSetIntInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetIntInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetIntInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetLinkedInput_Statics
	{
		struct UpgradeNiagaraScriptResults_eventSetLinkedInput_Parms
		{
			FString InputName;
			FString Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InputName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetLinkedInput_Statics::NewProp_InputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetLinkedInput_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpgradeNiagaraScriptResults_eventSetLinkedInput_Parms, InputName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetLinkedInput_Statics::NewProp_InputName_MetaData), Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetLinkedInput_Statics::NewProp_InputName_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetLinkedInput_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpgradeNiagaraScriptResults_eventSetLinkedInput_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetLinkedInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetLinkedInput_Statics::NewProp_InputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetLinkedInput_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetLinkedInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scripting" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetLinkedInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpgradeNiagaraScriptResults, nullptr, "SetLinkedInput", nullptr, nullptr, Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetLinkedInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetLinkedInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetLinkedInput_Statics::UpgradeNiagaraScriptResults_eventSetLinkedInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetLinkedInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetLinkedInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetLinkedInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetLinkedInput_Statics::UpgradeNiagaraScriptResults_eventSetLinkedInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetLinkedInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetLinkedInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetNewInput_Statics
	{
		struct UpgradeNiagaraScriptResults_eventSetNewInput_Parms
		{
			FString InputName;
			UNiagaraPythonScriptModuleInput* Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InputName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetNewInput_Statics::NewProp_InputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetNewInput_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpgradeNiagaraScriptResults_eventSetNewInput_Parms, InputName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetNewInput_Statics::NewProp_InputName_MetaData), Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetNewInput_Statics::NewProp_InputName_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetNewInput_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpgradeNiagaraScriptResults_eventSetNewInput_Parms, Value), Z_Construct_UClass_UNiagaraPythonScriptModuleInput_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetNewInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetNewInput_Statics::NewProp_InputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetNewInput_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetNewInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scripting" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetNewInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpgradeNiagaraScriptResults, nullptr, "SetNewInput", nullptr, nullptr, Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetNewInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetNewInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetNewInput_Statics::UpgradeNiagaraScriptResults_eventSetNewInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetNewInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetNewInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetNewInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetNewInput_Statics::UpgradeNiagaraScriptResults_eventSetNewInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetNewInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetNewInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetQuatInput_Statics
	{
		struct UpgradeNiagaraScriptResults_eventSetQuatInput_Parms
		{
			FString InputName;
			FQuat Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InputName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetQuatInput_Statics::NewProp_InputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetQuatInput_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpgradeNiagaraScriptResults_eventSetQuatInput_Parms, InputName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetQuatInput_Statics::NewProp_InputName_MetaData), Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetQuatInput_Statics::NewProp_InputName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetQuatInput_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpgradeNiagaraScriptResults_eventSetQuatInput_Parms, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetQuatInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetQuatInput_Statics::NewProp_InputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetQuatInput_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetQuatInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scripting" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetQuatInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpgradeNiagaraScriptResults, nullptr, "SetQuatInput", nullptr, nullptr, Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetQuatInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetQuatInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetQuatInput_Statics::UpgradeNiagaraScriptResults_eventSetQuatInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetQuatInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetQuatInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetQuatInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetQuatInput_Statics::UpgradeNiagaraScriptResults_eventSetQuatInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetQuatInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetQuatInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec2Input_Statics
	{
		struct UpgradeNiagaraScriptResults_eventSetVec2Input_Parms
		{
			FString InputName;
			FVector2D Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InputName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec2Input_Statics::NewProp_InputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec2Input_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpgradeNiagaraScriptResults_eventSetVec2Input_Parms, InputName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec2Input_Statics::NewProp_InputName_MetaData), Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec2Input_Statics::NewProp_InputName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec2Input_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpgradeNiagaraScriptResults_eventSetVec2Input_Parms, Value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec2Input_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec2Input_Statics::NewProp_InputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec2Input_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec2Input_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scripting" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec2Input_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpgradeNiagaraScriptResults, nullptr, "SetVec2Input", nullptr, nullptr, Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec2Input_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec2Input_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec2Input_Statics::UpgradeNiagaraScriptResults_eventSetVec2Input_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec2Input_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec2Input_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec2Input_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec2Input_Statics::UpgradeNiagaraScriptResults_eventSetVec2Input_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec2Input()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec2Input_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec3Input_Statics
	{
		struct UpgradeNiagaraScriptResults_eventSetVec3Input_Parms
		{
			FString InputName;
			FVector Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InputName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec3Input_Statics::NewProp_InputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec3Input_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpgradeNiagaraScriptResults_eventSetVec3Input_Parms, InputName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec3Input_Statics::NewProp_InputName_MetaData), Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec3Input_Statics::NewProp_InputName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec3Input_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpgradeNiagaraScriptResults_eventSetVec3Input_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec3Input_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec3Input_Statics::NewProp_InputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec3Input_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec3Input_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scripting" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec3Input_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpgradeNiagaraScriptResults, nullptr, "SetVec3Input", nullptr, nullptr, Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec3Input_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec3Input_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec3Input_Statics::UpgradeNiagaraScriptResults_eventSetVec3Input_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec3Input_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec3Input_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec3Input_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec3Input_Statics::UpgradeNiagaraScriptResults_eventSetVec3Input_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec3Input()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec3Input_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec4Input_Statics
	{
		struct UpgradeNiagaraScriptResults_eventSetVec4Input_Parms
		{
			FString InputName;
			FVector4 Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InputName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec4Input_Statics::NewProp_InputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec4Input_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpgradeNiagaraScriptResults_eventSetVec4Input_Parms, InputName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec4Input_Statics::NewProp_InputName_MetaData), Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec4Input_Statics::NewProp_InputName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec4Input_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpgradeNiagaraScriptResults_eventSetVec4Input_Parms, Value), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec4Input_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec4Input_Statics::NewProp_InputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec4Input_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec4Input_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scripting" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec4Input_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpgradeNiagaraScriptResults, nullptr, "SetVec4Input", nullptr, nullptr, Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec4Input_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec4Input_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec4Input_Statics::UpgradeNiagaraScriptResults_eventSetVec4Input_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec4Input_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec4Input_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec4Input_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec4Input_Statics::UpgradeNiagaraScriptResults_eventSetVec4Input_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec4Input()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec4Input_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUpgradeNiagaraScriptResults);
	UClass* Z_Construct_UClass_UUpgradeNiagaraScriptResults_NoRegister()
	{
		return UUpgradeNiagaraScriptResults::StaticClass();
	}
	struct Z_Construct_UClass_UUpgradeNiagaraScriptResults_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCancelledByPythonError_MetaData[];
#endif
		static void NewProp_bCancelledByPythonError_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCancelledByPythonError;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OldInputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldInputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OldInputs;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NewInputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewInputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NewInputs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DummyInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DummyInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUpgradeNiagaraScriptResults_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUpgradeNiagaraScriptResults_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UUpgradeNiagaraScriptResults_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUpgradeNiagaraScriptResults_GetOldInput, "GetOldInput" }, // 2519869669
		{ &Z_Construct_UFunction_UUpgradeNiagaraScriptResults_ResetToDefault, "ResetToDefault" }, // 4004933089
		{ &Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetBoolInput, "SetBoolInput" }, // 1390682805
		{ &Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetColorInput, "SetColorInput" }, // 89140848
		{ &Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetEnumInput, "SetEnumInput" }, // 920629952
		{ &Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetFloatInput, "SetFloatInput" }, // 2268865954
		{ &Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetIntInput, "SetIntInput" }, // 1838094761
		{ &Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetLinkedInput, "SetLinkedInput" }, // 864393819
		{ &Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetNewInput, "SetNewInput" }, // 3584363217
		{ &Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetQuatInput, "SetQuatInput" }, // 3744575781
		{ &Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec2Input, "SetVec2Input" }, // 1670973429
		{ &Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec3Input, "SetVec3Input" }, // 2323777081
		{ &Z_Construct_UFunction_UUpgradeNiagaraScriptResults_SetVec4Input, "SetVec4Input" }, // 3837572014
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUpgradeNiagaraScriptResults_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpgradeNiagaraScriptResults_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Wrapper class for passing results back from the version upgrade python script.\n */" },
		{ "IncludePath", "UpgradeNiagaraScriptResults.h" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
		{ "ToolTip", "Wrapper class for passing results back from the version upgrade python script." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpgradeNiagaraScriptResults_Statics::NewProp_bCancelledByPythonError_MetaData[] = {
		{ "Category", "Scripting" },
		{ "Comment", "// Whether the converter process was cancelled due to an unrecoverable error in the python script process.\n" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
		{ "ToolTip", "Whether the converter process was cancelled due to an unrecoverable error in the python script process." },
	};
#endif
	void Z_Construct_UClass_UUpgradeNiagaraScriptResults_Statics::NewProp_bCancelledByPythonError_SetBit(void* Obj)
	{
		((UUpgradeNiagaraScriptResults*)Obj)->bCancelledByPythonError = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUpgradeNiagaraScriptResults_Statics::NewProp_bCancelledByPythonError = { "bCancelledByPythonError", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUpgradeNiagaraScriptResults), &Z_Construct_UClass_UUpgradeNiagaraScriptResults_Statics::NewProp_bCancelledByPythonError_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUpgradeNiagaraScriptResults_Statics::NewProp_bCancelledByPythonError_MetaData), Z_Construct_UClass_UUpgradeNiagaraScriptResults_Statics::NewProp_bCancelledByPythonError_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUpgradeNiagaraScriptResults_Statics::NewProp_OldInputs_Inner = { "OldInputs", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraPythonScriptModuleInput_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpgradeNiagaraScriptResults_Statics::NewProp_OldInputs_MetaData[] = {
		{ "Category", "Scripting" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUpgradeNiagaraScriptResults_Statics::NewProp_OldInputs = { "OldInputs", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUpgradeNiagaraScriptResults, OldInputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUpgradeNiagaraScriptResults_Statics::NewProp_OldInputs_MetaData), Z_Construct_UClass_UUpgradeNiagaraScriptResults_Statics::NewProp_OldInputs_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUpgradeNiagaraScriptResults_Statics::NewProp_NewInputs_Inner = { "NewInputs", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraPythonScriptModuleInput_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpgradeNiagaraScriptResults_Statics::NewProp_NewInputs_MetaData[] = {
		{ "Category", "Scripting" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUpgradeNiagaraScriptResults_Statics::NewProp_NewInputs = { "NewInputs", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUpgradeNiagaraScriptResults, NewInputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUpgradeNiagaraScriptResults_Statics::NewProp_NewInputs_MetaData), Z_Construct_UClass_UUpgradeNiagaraScriptResults_Statics::NewProp_NewInputs_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpgradeNiagaraScriptResults_Statics::NewProp_DummyInput_MetaData[] = {
		{ "Comment", "// This is used as a placeholder object for python to interact with when a module input could not be found. Returning a nullptr instead would crash the script.\n" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
		{ "ToolTip", "This is used as a placeholder object for python to interact with when a module input could not be found. Returning a nullptr instead would crash the script." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUpgradeNiagaraScriptResults_Statics::NewProp_DummyInput = { "DummyInput", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUpgradeNiagaraScriptResults, DummyInput), Z_Construct_UClass_UNiagaraPythonScriptModuleInput_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUpgradeNiagaraScriptResults_Statics::NewProp_DummyInput_MetaData), Z_Construct_UClass_UUpgradeNiagaraScriptResults_Statics::NewProp_DummyInput_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUpgradeNiagaraScriptResults_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpgradeNiagaraScriptResults_Statics::NewProp_bCancelledByPythonError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpgradeNiagaraScriptResults_Statics::NewProp_OldInputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpgradeNiagaraScriptResults_Statics::NewProp_OldInputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpgradeNiagaraScriptResults_Statics::NewProp_NewInputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpgradeNiagaraScriptResults_Statics::NewProp_NewInputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpgradeNiagaraScriptResults_Statics::NewProp_DummyInput,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUpgradeNiagaraScriptResults_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUpgradeNiagaraScriptResults>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUpgradeNiagaraScriptResults_Statics::ClassParams = {
		&UUpgradeNiagaraScriptResults::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUpgradeNiagaraScriptResults_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUpgradeNiagaraScriptResults_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUpgradeNiagaraScriptResults_Statics::Class_MetaDataParams), Z_Construct_UClass_UUpgradeNiagaraScriptResults_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUpgradeNiagaraScriptResults_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UUpgradeNiagaraScriptResults()
	{
		if (!Z_Registration_Info_UClass_UUpgradeNiagaraScriptResults.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUpgradeNiagaraScriptResults.OuterSingleton, Z_Construct_UClass_UUpgradeNiagaraScriptResults_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUpgradeNiagaraScriptResults.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UUpgradeNiagaraScriptResults>()
	{
		return UUpgradeNiagaraScriptResults::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUpgradeNiagaraScriptResults);
	UUpgradeNiagaraScriptResults::~UUpgradeNiagaraScriptResults() {}
	DEFINE_FUNCTION(UNiagaraPythonModule::execGetObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraStackModuleItem**)Z_Param__Result=P_THIS->GetObject();
		P_NATIVE_END;
	}
	void UNiagaraPythonModule::StaticRegisterNativesUNiagaraPythonModule()
	{
		UClass* Class = UNiagaraPythonModule::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetObject", &UNiagaraPythonModule::execGetObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNiagaraPythonModule_GetObject_Statics
	{
		struct NiagaraPythonModule_eventGetObject_Parms
		{
			UNiagaraStackModuleItem* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraPythonModule_GetObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraPythonModule_eventGetObject_Parms, ReturnValue), Z_Construct_UClass_UNiagaraStackModuleItem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraPythonModule_GetObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraPythonModule_GetObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraPythonModule_GetObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scripting" },
		{ "Comment", "// Returns the raw underlying object\n" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
		{ "ToolTip", "Returns the raw underlying object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraPythonModule_GetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraPythonModule, nullptr, "GetObject", nullptr, nullptr, Z_Construct_UFunction_UNiagaraPythonModule_GetObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonModule_GetObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraPythonModule_GetObject_Statics::NiagaraPythonModule_eventGetObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonModule_GetObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraPythonModule_GetObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonModule_GetObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNiagaraPythonModule_GetObject_Statics::NiagaraPythonModule_eventGetObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNiagaraPythonModule_GetObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraPythonModule_GetObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraPythonModule);
	UClass* Z_Construct_UClass_UNiagaraPythonModule_NoRegister()
	{
		return UNiagaraPythonModule::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraPythonModule_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModuleItem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ModuleItem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraPythonModule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPythonModule_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UNiagaraPythonModule_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraPythonModule_GetObject, "GetObject" }, // 4246329394
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPythonModule_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraPythonModule_Statics::Class_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Wrapper for a module from the emitter stack. */" },
		{ "IncludePath", "UpgradeNiagaraScriptResults.h" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
		{ "ToolTip", "Wrapper for a module from the emitter stack." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraPythonModule_Statics::NewProp_ModuleItem_MetaData[] = {
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraPythonModule_Statics::NewProp_ModuleItem = { "ModuleItem", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraPythonModule, ModuleItem), Z_Construct_UClass_UNiagaraStackModuleItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPythonModule_Statics::NewProp_ModuleItem_MetaData), Z_Construct_UClass_UNiagaraPythonModule_Statics::NewProp_ModuleItem_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraPythonModule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraPythonModule_Statics::NewProp_ModuleItem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraPythonModule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraPythonModule>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraPythonModule_Statics::ClassParams = {
		&UNiagaraPythonModule::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNiagaraPythonModule_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPythonModule_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPythonModule_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraPythonModule_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPythonModule_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNiagaraPythonModule()
	{
		if (!Z_Registration_Info_UClass_UNiagaraPythonModule.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraPythonModule.OuterSingleton, Z_Construct_UClass_UNiagaraPythonModule_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraPythonModule.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraPythonModule>()
	{
		return UNiagaraPythonModule::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraPythonModule);
	UNiagaraPythonModule::~UNiagaraPythonModule() {}
	DEFINE_FUNCTION(UNiagaraPythonEmitter::execGetModule)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ModuleName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraPythonModule**)Z_Param__Result=P_THIS->GetModule(Z_Param_ModuleName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraPythonEmitter::execHasModule)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ModuleName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasModule(Z_Param_ModuleName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraPythonEmitter::execGetModules)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UNiagaraPythonModule*>*)Z_Param__Result=P_THIS->GetModules();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraPythonEmitter::execSetProperties)
	{
		P_GET_STRUCT(FVersionedNiagaraEmitterData,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetProperties(Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraPythonEmitter::execGetProperties)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVersionedNiagaraEmitterData*)Z_Param__Result=P_THIS->GetProperties();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraPythonEmitter::execGetObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraEmitter**)Z_Param__Result=P_THIS->GetObject();
		P_NATIVE_END;
	}
	void UNiagaraPythonEmitter::StaticRegisterNativesUNiagaraPythonEmitter()
	{
		UClass* Class = UNiagaraPythonEmitter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetModule", &UNiagaraPythonEmitter::execGetModule },
			{ "GetModules", &UNiagaraPythonEmitter::execGetModules },
			{ "GetObject", &UNiagaraPythonEmitter::execGetObject },
			{ "GetProperties", &UNiagaraPythonEmitter::execGetProperties },
			{ "HasModule", &UNiagaraPythonEmitter::execHasModule },
			{ "SetProperties", &UNiagaraPythonEmitter::execSetProperties },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNiagaraPythonEmitter_GetModule_Statics
	{
		struct NiagaraPythonEmitter_eventGetModule_Parms
		{
			FString ModuleName;
			UNiagaraPythonModule* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModuleName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ModuleName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraPythonEmitter_GetModule_Statics::NewProp_ModuleName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraPythonEmitter_GetModule_Statics::NewProp_ModuleName = { "ModuleName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraPythonEmitter_eventGetModule_Parms, ModuleName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonEmitter_GetModule_Statics::NewProp_ModuleName_MetaData), Z_Construct_UFunction_UNiagaraPythonEmitter_GetModule_Statics::NewProp_ModuleName_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraPythonEmitter_GetModule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraPythonEmitter_eventGetModule_Parms, ReturnValue), Z_Construct_UClass_UNiagaraPythonModule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraPythonEmitter_GetModule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraPythonEmitter_GetModule_Statics::NewProp_ModuleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraPythonEmitter_GetModule_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraPythonEmitter_GetModule_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scripting" },
		{ "Comment", "// returns a module by name\n" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
		{ "ToolTip", "returns a module by name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraPythonEmitter_GetModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraPythonEmitter, nullptr, "GetModule", nullptr, nullptr, Z_Construct_UFunction_UNiagaraPythonEmitter_GetModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonEmitter_GetModule_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraPythonEmitter_GetModule_Statics::NiagaraPythonEmitter_eventGetModule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonEmitter_GetModule_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraPythonEmitter_GetModule_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonEmitter_GetModule_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNiagaraPythonEmitter_GetModule_Statics::NiagaraPythonEmitter_eventGetModule_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNiagaraPythonEmitter_GetModule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraPythonEmitter_GetModule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraPythonEmitter_GetModules_Statics
	{
		struct NiagaraPythonEmitter_eventGetModules_Parms
		{
			TArray<UNiagaraPythonModule*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraPythonEmitter_GetModules_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraPythonModule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraPythonEmitter_GetModules_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraPythonEmitter_eventGetModules_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraPythonEmitter_GetModules_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraPythonEmitter_GetModules_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraPythonEmitter_GetModules_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraPythonEmitter_GetModules_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scripting" },
		{ "Comment", "// returns a list of all modules contained in this emitter\n" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
		{ "ToolTip", "returns a list of all modules contained in this emitter" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraPythonEmitter_GetModules_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraPythonEmitter, nullptr, "GetModules", nullptr, nullptr, Z_Construct_UFunction_UNiagaraPythonEmitter_GetModules_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonEmitter_GetModules_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraPythonEmitter_GetModules_Statics::NiagaraPythonEmitter_eventGetModules_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonEmitter_GetModules_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraPythonEmitter_GetModules_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonEmitter_GetModules_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNiagaraPythonEmitter_GetModules_Statics::NiagaraPythonEmitter_eventGetModules_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNiagaraPythonEmitter_GetModules()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraPythonEmitter_GetModules_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraPythonEmitter_GetObject_Statics
	{
		struct NiagaraPythonEmitter_eventGetObject_Parms
		{
			UNiagaraEmitter* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraPythonEmitter_GetObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraPythonEmitter_eventGetObject_Parms, ReturnValue), Z_Construct_UClass_UNiagaraEmitter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraPythonEmitter_GetObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraPythonEmitter_GetObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraPythonEmitter_GetObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scripting" },
		{ "Comment", "// Returns the raw underlying object\n" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
		{ "ToolTip", "Returns the raw underlying object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraPythonEmitter_GetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraPythonEmitter, nullptr, "GetObject", nullptr, nullptr, Z_Construct_UFunction_UNiagaraPythonEmitter_GetObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonEmitter_GetObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraPythonEmitter_GetObject_Statics::NiagaraPythonEmitter_eventGetObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonEmitter_GetObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraPythonEmitter_GetObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonEmitter_GetObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNiagaraPythonEmitter_GetObject_Statics::NiagaraPythonEmitter_eventGetObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNiagaraPythonEmitter_GetObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraPythonEmitter_GetObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraPythonEmitter_GetProperties_Statics
	{
		struct NiagaraPythonEmitter_eventGetProperties_Parms
		{
			FVersionedNiagaraEmitterData ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraPythonEmitter_GetProperties_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraPythonEmitter_eventGetProperties_Parms, ReturnValue), Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData, METADATA_PARAMS(0, nullptr) }; // 443414409
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraPythonEmitter_GetProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraPythonEmitter_GetProperties_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraPythonEmitter_GetProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scripting" },
		{ "Comment", "// returns the emitter properties, such as determinism or interpolated spawning\n" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
		{ "ToolTip", "returns the emitter properties, such as determinism or interpolated spawning" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraPythonEmitter_GetProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraPythonEmitter, nullptr, "GetProperties", nullptr, nullptr, Z_Construct_UFunction_UNiagaraPythonEmitter_GetProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonEmitter_GetProperties_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraPythonEmitter_GetProperties_Statics::NiagaraPythonEmitter_eventGetProperties_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonEmitter_GetProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraPythonEmitter_GetProperties_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonEmitter_GetProperties_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNiagaraPythonEmitter_GetProperties_Statics::NiagaraPythonEmitter_eventGetProperties_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNiagaraPythonEmitter_GetProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraPythonEmitter_GetProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraPythonEmitter_HasModule_Statics
	{
		struct NiagaraPythonEmitter_eventHasModule_Parms
		{
			FString ModuleName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModuleName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ModuleName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraPythonEmitter_HasModule_Statics::NewProp_ModuleName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraPythonEmitter_HasModule_Statics::NewProp_ModuleName = { "ModuleName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraPythonEmitter_eventHasModule_Parms, ModuleName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonEmitter_HasModule_Statics::NewProp_ModuleName_MetaData), Z_Construct_UFunction_UNiagaraPythonEmitter_HasModule_Statics::NewProp_ModuleName_MetaData) };
	void Z_Construct_UFunction_UNiagaraPythonEmitter_HasModule_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NiagaraPythonEmitter_eventHasModule_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraPythonEmitter_HasModule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraPythonEmitter_eventHasModule_Parms), &Z_Construct_UFunction_UNiagaraPythonEmitter_HasModule_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraPythonEmitter_HasModule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraPythonEmitter_HasModule_Statics::NewProp_ModuleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraPythonEmitter_HasModule_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraPythonEmitter_HasModule_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scripting" },
		{ "Comment", "// returns true if the emitter contains a certain module\n" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
		{ "ToolTip", "returns true if the emitter contains a certain module" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraPythonEmitter_HasModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraPythonEmitter, nullptr, "HasModule", nullptr, nullptr, Z_Construct_UFunction_UNiagaraPythonEmitter_HasModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonEmitter_HasModule_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraPythonEmitter_HasModule_Statics::NiagaraPythonEmitter_eventHasModule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonEmitter_HasModule_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraPythonEmitter_HasModule_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonEmitter_HasModule_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNiagaraPythonEmitter_HasModule_Statics::NiagaraPythonEmitter_eventHasModule_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNiagaraPythonEmitter_HasModule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraPythonEmitter_HasModule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraPythonEmitter_SetProperties_Statics
	{
		struct NiagaraPythonEmitter_eventSetProperties_Parms
		{
			FVersionedNiagaraEmitterData Data;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraPythonEmitter_SetProperties_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraPythonEmitter_eventSetProperties_Parms, Data), Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData, METADATA_PARAMS(0, nullptr) }; // 443414409
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraPythonEmitter_SetProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraPythonEmitter_SetProperties_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraPythonEmitter_SetProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scripting" },
		{ "Comment", "// sets the new emitter properties\n" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
		{ "ToolTip", "sets the new emitter properties" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraPythonEmitter_SetProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraPythonEmitter, nullptr, "SetProperties", nullptr, nullptr, Z_Construct_UFunction_UNiagaraPythonEmitter_SetProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonEmitter_SetProperties_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraPythonEmitter_SetProperties_Statics::NiagaraPythonEmitter_eventSetProperties_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonEmitter_SetProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraPythonEmitter_SetProperties_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPythonEmitter_SetProperties_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNiagaraPythonEmitter_SetProperties_Statics::NiagaraPythonEmitter_eventSetProperties_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNiagaraPythonEmitter_SetProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraPythonEmitter_SetProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraPythonEmitter);
	UClass* Z_Construct_UClass_UNiagaraPythonEmitter_NoRegister()
	{
		return UNiagaraPythonEmitter::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraPythonEmitter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraPythonEmitter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPythonEmitter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UNiagaraPythonEmitter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraPythonEmitter_GetModule, "GetModule" }, // 436676449
		{ &Z_Construct_UFunction_UNiagaraPythonEmitter_GetModules, "GetModules" }, // 2380850515
		{ &Z_Construct_UFunction_UNiagaraPythonEmitter_GetObject, "GetObject" }, // 663617764
		{ &Z_Construct_UFunction_UNiagaraPythonEmitter_GetProperties, "GetProperties" }, // 549703823
		{ &Z_Construct_UFunction_UNiagaraPythonEmitter_HasModule, "HasModule" }, // 3402857954
		{ &Z_Construct_UFunction_UNiagaraPythonEmitter_SetProperties, "SetProperties" }, // 2027705988
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPythonEmitter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraPythonEmitter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Wrapper for an emitter stack. */" },
		{ "IncludePath", "UpgradeNiagaraScriptResults.h" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
		{ "ToolTip", "Wrapper for an emitter stack." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraPythonEmitter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraPythonEmitter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraPythonEmitter_Statics::ClassParams = {
		&UNiagaraPythonEmitter::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPythonEmitter_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraPythonEmitter_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UNiagaraPythonEmitter()
	{
		if (!Z_Registration_Info_UClass_UNiagaraPythonEmitter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraPythonEmitter.OuterSingleton, Z_Construct_UClass_UNiagaraPythonEmitter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraPythonEmitter.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraPythonEmitter>()
	{
		return UNiagaraPythonEmitter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraPythonEmitter);
	UNiagaraPythonEmitter::~UNiagaraPythonEmitter() {}
	void UUpgradeNiagaraEmitterContext::StaticRegisterNativesUUpgradeNiagaraEmitterContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUpgradeNiagaraEmitterContext);
	UClass* Z_Construct_UClass_UUpgradeNiagaraEmitterContext_NoRegister()
	{
		return UUpgradeNiagaraEmitterContext::StaticClass();
	}
	struct Z_Construct_UClass_UUpgradeNiagaraEmitterContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCancelledByPythonError_MetaData[];
#endif
		static void NewProp_bCancelledByPythonError_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCancelledByPythonError;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldEmitter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OldEmitter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewEmitter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NewEmitter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUpgradeNiagaraEmitterContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUpgradeNiagaraEmitterContext_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpgradeNiagaraEmitterContext_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Wrapper class for passing results back from the version upgrade python script.\n */" },
		{ "IncludePath", "UpgradeNiagaraScriptResults.h" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
		{ "ToolTip", "Wrapper class for passing results back from the version upgrade python script." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpgradeNiagaraEmitterContext_Statics::NewProp_bCancelledByPythonError_MetaData[] = {
		{ "Category", "Scripting" },
		{ "Comment", "// Whether the converter process was cancelled due to an unrecoverable error in the python script process.\n" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
		{ "ToolTip", "Whether the converter process was cancelled due to an unrecoverable error in the python script process." },
	};
#endif
	void Z_Construct_UClass_UUpgradeNiagaraEmitterContext_Statics::NewProp_bCancelledByPythonError_SetBit(void* Obj)
	{
		((UUpgradeNiagaraEmitterContext*)Obj)->bCancelledByPythonError = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUpgradeNiagaraEmitterContext_Statics::NewProp_bCancelledByPythonError = { "bCancelledByPythonError", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUpgradeNiagaraEmitterContext), &Z_Construct_UClass_UUpgradeNiagaraEmitterContext_Statics::NewProp_bCancelledByPythonError_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUpgradeNiagaraEmitterContext_Statics::NewProp_bCancelledByPythonError_MetaData), Z_Construct_UClass_UUpgradeNiagaraEmitterContext_Statics::NewProp_bCancelledByPythonError_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpgradeNiagaraEmitterContext_Statics::NewProp_OldEmitter_MetaData[] = {
		{ "Category", "Scripting" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUpgradeNiagaraEmitterContext_Statics::NewProp_OldEmitter = { "OldEmitter", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUpgradeNiagaraEmitterContext, OldEmitter), Z_Construct_UClass_UNiagaraPythonEmitter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUpgradeNiagaraEmitterContext_Statics::NewProp_OldEmitter_MetaData), Z_Construct_UClass_UUpgradeNiagaraEmitterContext_Statics::NewProp_OldEmitter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpgradeNiagaraEmitterContext_Statics::NewProp_NewEmitter_MetaData[] = {
		{ "Category", "Scripting" },
		{ "ModuleRelativePath", "Public/UpgradeNiagaraScriptResults.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUpgradeNiagaraEmitterContext_Statics::NewProp_NewEmitter = { "NewEmitter", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUpgradeNiagaraEmitterContext, NewEmitter), Z_Construct_UClass_UNiagaraPythonEmitter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUpgradeNiagaraEmitterContext_Statics::NewProp_NewEmitter_MetaData), Z_Construct_UClass_UUpgradeNiagaraEmitterContext_Statics::NewProp_NewEmitter_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUpgradeNiagaraEmitterContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpgradeNiagaraEmitterContext_Statics::NewProp_bCancelledByPythonError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpgradeNiagaraEmitterContext_Statics::NewProp_OldEmitter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpgradeNiagaraEmitterContext_Statics::NewProp_NewEmitter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUpgradeNiagaraEmitterContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUpgradeNiagaraEmitterContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUpgradeNiagaraEmitterContext_Statics::ClassParams = {
		&UUpgradeNiagaraEmitterContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUpgradeNiagaraEmitterContext_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUpgradeNiagaraEmitterContext_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUpgradeNiagaraEmitterContext_Statics::Class_MetaDataParams), Z_Construct_UClass_UUpgradeNiagaraEmitterContext_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUpgradeNiagaraEmitterContext_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UUpgradeNiagaraEmitterContext()
	{
		if (!Z_Registration_Info_UClass_UUpgradeNiagaraEmitterContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUpgradeNiagaraEmitterContext.OuterSingleton, Z_Construct_UClass_UUpgradeNiagaraEmitterContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUpgradeNiagaraEmitterContext.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UUpgradeNiagaraEmitterContext>()
	{
		return UUpgradeNiagaraEmitterContext::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUpgradeNiagaraEmitterContext);
	UUpgradeNiagaraEmitterContext::~UUpgradeNiagaraEmitterContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_Statics::EnumInfo[] = {
		{ ENiagaraPythonScriptInputSource_StaticEnum, TEXT("ENiagaraPythonScriptInputSource"), &Z_Registration_Info_UEnum_ENiagaraPythonScriptInputSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2427516373U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraPythonScriptModuleInput, UNiagaraPythonScriptModuleInput::StaticClass, TEXT("UNiagaraPythonScriptModuleInput"), &Z_Registration_Info_UClass_UNiagaraPythonScriptModuleInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraPythonScriptModuleInput), 2734970039U) },
		{ Z_Construct_UClass_UUpgradeNiagaraScriptResults, UUpgradeNiagaraScriptResults::StaticClass, TEXT("UUpgradeNiagaraScriptResults"), &Z_Registration_Info_UClass_UUpgradeNiagaraScriptResults, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUpgradeNiagaraScriptResults), 3682858255U) },
		{ Z_Construct_UClass_UNiagaraPythonModule, UNiagaraPythonModule::StaticClass, TEXT("UNiagaraPythonModule"), &Z_Registration_Info_UClass_UNiagaraPythonModule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraPythonModule), 3189053349U) },
		{ Z_Construct_UClass_UNiagaraPythonEmitter, UNiagaraPythonEmitter::StaticClass, TEXT("UNiagaraPythonEmitter"), &Z_Registration_Info_UClass_UNiagaraPythonEmitter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraPythonEmitter), 383941814U) },
		{ Z_Construct_UClass_UUpgradeNiagaraEmitterContext, UUpgradeNiagaraEmitterContext::StaticClass, TEXT("UUpgradeNiagaraEmitterContext"), &Z_Registration_Info_UClass_UUpgradeNiagaraEmitterContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUpgradeNiagaraEmitterContext), 331582733U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_2452616367(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_UpgradeNiagaraScriptResults_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
