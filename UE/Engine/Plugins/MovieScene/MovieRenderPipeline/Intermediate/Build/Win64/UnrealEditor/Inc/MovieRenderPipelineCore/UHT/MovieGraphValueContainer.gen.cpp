// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/MovieGraphValueContainer.h"
#include "PropertyBag.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieGraphValueContainer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphValueContainer();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphValueContainer_NoRegister();
	MOVIERENDERPIPELINECORE_API UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphContainerType();
	MOVIERENDERPIPELINECORE_API UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphValueType();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedPropertyBag();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	DEFINE_FUNCTION(UMovieGraphValueContainer::execSetValueContainerType)
	{
		P_GET_ENUM(EMovieGraphContainerType,Z_Param_ContainerType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValueContainerType(EMovieGraphContainerType(Z_Param_ContainerType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieGraphValueContainer::execGetValueContainerType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMovieGraphContainerType*)Z_Param__Result=P_THIS->GetValueContainerType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieGraphValueContainer::execSetValueTypeObject)
	{
		P_GET_OBJECT(UObject,Z_Param_ValueTypeObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValueTypeObject(Z_Param_ValueTypeObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieGraphValueContainer::execGetValueTypeObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const UObject**)Z_Param__Result=P_THIS->GetValueTypeObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieGraphValueContainer::execSetValueType)
	{
		P_GET_ENUM(EMovieGraphValueType,Z_Param_ValueType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValueType(EMovieGraphValueType(Z_Param_ValueType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieGraphValueContainer::execGetValueType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMovieGraphValueType*)Z_Param__Result=P_THIS->GetValueType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieGraphValueContainer::execSetValueSerializedString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueSerializedString(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieGraphValueContainer::execSetValueClass)
	{
		P_GET_OBJECT(UClass,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueClass(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieGraphValueContainer::execSetValueObject)
	{
		P_GET_OBJECT(UObject,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueObject(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieGraphValueContainer::execSetValueEnum)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InValue);
		P_GET_OBJECT(UEnum,Z_Param_Enum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueEnum(Z_Param_InValue,Z_Param_Enum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieGraphValueContainer::execSetValueText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueText(Z_Param_Out_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieGraphValueContainer::execSetValueString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueString(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieGraphValueContainer::execSetValueName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueName(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieGraphValueContainer::execSetValueDouble)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueDouble(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieGraphValueContainer::execSetValueFloat)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueFloat(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieGraphValueContainer::execSetValueInt64)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueInt64(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieGraphValueContainer::execSetValueInt32)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueInt32(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieGraphValueContainer::execSetValueByte)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueByte(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieGraphValueContainer::execSetValueBool)
	{
		P_GET_UBOOL(Z_Param_bInValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueBool(Z_Param_bInValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieGraphValueContainer::execGetValueSerializedString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetValueSerializedString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieGraphValueContainer::execGetValueClass)
	{
		P_GET_OBJECT(UClass,Z_Param_OutValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueClass(Z_Param_OutValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieGraphValueContainer::execGetValueObject)
	{
		P_GET_OBJECT(UObject,Z_Param_OutValue);
		P_GET_OBJECT(UClass,Z_Param_RequestedClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueObject(Z_Param_OutValue,Z_Param_RequestedClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieGraphValueContainer::execGetValueEnum)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_OutValue);
		P_GET_OBJECT(UEnum,Z_Param_RequestedEnum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueEnum(Z_Param_Out_OutValue,Z_Param_RequestedEnum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieGraphValueContainer::execGetValueText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueText(Z_Param_Out_OutValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieGraphValueContainer::execGetValueString)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueString(Z_Param_Out_OutValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieGraphValueContainer::execGetValueName)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_OutValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueName(Z_Param_Out_OutValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieGraphValueContainer::execGetValueDouble)
	{
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_OutValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueDouble(Z_Param_Out_OutValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieGraphValueContainer::execGetValueFloat)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueFloat(Z_Param_Out_OutValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieGraphValueContainer::execGetValueInt64)
	{
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_OutValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueInt64(Z_Param_Out_OutValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieGraphValueContainer::execGetValueInt32)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueInt32(Z_Param_Out_OutValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieGraphValueContainer::execGetValueByte)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_OutValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueByte(Z_Param_Out_OutValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieGraphValueContainer::execGetValueBool)
	{
		P_GET_UBOOL_REF(Z_Param_Out_bOutValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueBool(Z_Param_Out_bOutValue);
		P_NATIVE_END;
	}
	void UMovieGraphValueContainer::StaticRegisterNativesUMovieGraphValueContainer()
	{
		UClass* Class = UMovieGraphValueContainer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetValueBool", &UMovieGraphValueContainer::execGetValueBool },
			{ "GetValueByte", &UMovieGraphValueContainer::execGetValueByte },
			{ "GetValueClass", &UMovieGraphValueContainer::execGetValueClass },
			{ "GetValueContainerType", &UMovieGraphValueContainer::execGetValueContainerType },
			{ "GetValueDouble", &UMovieGraphValueContainer::execGetValueDouble },
			{ "GetValueEnum", &UMovieGraphValueContainer::execGetValueEnum },
			{ "GetValueFloat", &UMovieGraphValueContainer::execGetValueFloat },
			{ "GetValueInt32", &UMovieGraphValueContainer::execGetValueInt32 },
			{ "GetValueInt64", &UMovieGraphValueContainer::execGetValueInt64 },
			{ "GetValueName", &UMovieGraphValueContainer::execGetValueName },
			{ "GetValueObject", &UMovieGraphValueContainer::execGetValueObject },
			{ "GetValueSerializedString", &UMovieGraphValueContainer::execGetValueSerializedString },
			{ "GetValueString", &UMovieGraphValueContainer::execGetValueString },
			{ "GetValueText", &UMovieGraphValueContainer::execGetValueText },
			{ "GetValueType", &UMovieGraphValueContainer::execGetValueType },
			{ "GetValueTypeObject", &UMovieGraphValueContainer::execGetValueTypeObject },
			{ "SetValueBool", &UMovieGraphValueContainer::execSetValueBool },
			{ "SetValueByte", &UMovieGraphValueContainer::execSetValueByte },
			{ "SetValueClass", &UMovieGraphValueContainer::execSetValueClass },
			{ "SetValueContainerType", &UMovieGraphValueContainer::execSetValueContainerType },
			{ "SetValueDouble", &UMovieGraphValueContainer::execSetValueDouble },
			{ "SetValueEnum", &UMovieGraphValueContainer::execSetValueEnum },
			{ "SetValueFloat", &UMovieGraphValueContainer::execSetValueFloat },
			{ "SetValueInt32", &UMovieGraphValueContainer::execSetValueInt32 },
			{ "SetValueInt64", &UMovieGraphValueContainer::execSetValueInt64 },
			{ "SetValueName", &UMovieGraphValueContainer::execSetValueName },
			{ "SetValueObject", &UMovieGraphValueContainer::execSetValueObject },
			{ "SetValueSerializedString", &UMovieGraphValueContainer::execSetValueSerializedString },
			{ "SetValueString", &UMovieGraphValueContainer::execSetValueString },
			{ "SetValueText", &UMovieGraphValueContainer::execSetValueText },
			{ "SetValueType", &UMovieGraphValueContainer::execSetValueType },
			{ "SetValueTypeObject", &UMovieGraphValueContainer::execSetValueTypeObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieGraphValueContainer_GetValueBool_Statics
	{
		struct MovieGraphValueContainer_eventGetValueBool_Parms
		{
			bool bOutValue;
			bool ReturnValue;
		};
		static void NewProp_bOutValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMovieGraphValueContainer_GetValueBool_Statics::NewProp_bOutValue_SetBit(void* Obj)
	{
		((MovieGraphValueContainer_eventGetValueBool_Parms*)Obj)->bOutValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueBool_Statics::NewProp_bOutValue = { "bOutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieGraphValueContainer_eventGetValueBool_Parms), &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueBool_Statics::NewProp_bOutValue_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UMovieGraphValueContainer_GetValueBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieGraphValueContainer_eventGetValueBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieGraphValueContainer_eventGetValueBool_Parms), &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphValueContainer_GetValueBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_GetValueBool_Statics::NewProp_bOutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_GetValueBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_GetValueBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Gets the bool value of the held data. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphValueContainer.h" },
		{ "ToolTip", "Gets the bool value of the held data. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphValueContainer, nullptr, "GetValueBool", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphValueContainer_GetValueBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueBool_Statics::MovieGraphValueContainer_eventGetValueBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphValueContainer_GetValueBool_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueBool_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueBool_Statics::MovieGraphValueContainer_eventGetValueBool_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphValueContainer_GetValueBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphValueContainer_GetValueBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieGraphValueContainer_GetValueByte_Statics
	{
		struct MovieGraphValueContainer_eventGetValueByte_Parms
		{
			uint8 OutValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueByte_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphValueContainer_eventGetValueByte_Parms, OutValue), nullptr, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UMovieGraphValueContainer_GetValueByte_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieGraphValueContainer_eventGetValueByte_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueByte_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieGraphValueContainer_eventGetValueByte_Parms), &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueByte_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphValueContainer_GetValueByte_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_GetValueByte_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_GetValueByte_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_GetValueByte_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Gets the byte value of the held data. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphValueContainer.h" },
		{ "ToolTip", "Gets the byte value of the held data. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueByte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphValueContainer, nullptr, "GetValueByte", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphValueContainer_GetValueByte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueByte_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueByte_Statics::MovieGraphValueContainer_eventGetValueByte_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueByte_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphValueContainer_GetValueByte_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueByte_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueByte_Statics::MovieGraphValueContainer_eventGetValueByte_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphValueContainer_GetValueByte()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphValueContainer_GetValueByte_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieGraphValueContainer_GetValueClass_Statics
	{
		struct MovieGraphValueContainer_eventGetValueClass_Parms
		{
			UClass* OutValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_OutValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueClass_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphValueContainer_eventGetValueClass_Parms, OutValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UMovieGraphValueContainer_GetValueClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieGraphValueContainer_eventGetValueClass_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieGraphValueContainer_eventGetValueClass_Parms), &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphValueContainer_GetValueClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_GetValueClass_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_GetValueClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_GetValueClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Gets the UClass value of the held data. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphValueContainer.h" },
		{ "ToolTip", "Gets the UClass value of the held data. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphValueContainer, nullptr, "GetValueClass", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphValueContainer_GetValueClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueClass_Statics::MovieGraphValueContainer_eventGetValueClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphValueContainer_GetValueClass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueClass_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueClass_Statics::MovieGraphValueContainer_eventGetValueClass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphValueContainer_GetValueClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphValueContainer_GetValueClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieGraphValueContainer_GetValueContainerType_Statics
	{
		struct MovieGraphValueContainer_eventGetValueContainerType_Parms
		{
			EMovieGraphContainerType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueContainerType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueContainerType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphValueContainer_eventGetValueContainerType_Parms, ReturnValue), Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphContainerType, METADATA_PARAMS(0, nullptr) }; // 2621360303
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphValueContainer_GetValueContainerType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_GetValueContainerType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_GetValueContainerType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_GetValueContainerType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Gets the container type of the stored value. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphValueContainer.h" },
		{ "ToolTip", "Gets the container type of the stored value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueContainerType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphValueContainer, nullptr, "GetValueContainerType", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphValueContainer_GetValueContainerType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueContainerType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueContainerType_Statics::MovieGraphValueContainer_eventGetValueContainerType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueContainerType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphValueContainer_GetValueContainerType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueContainerType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueContainerType_Statics::MovieGraphValueContainer_eventGetValueContainerType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphValueContainer_GetValueContainerType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphValueContainer_GetValueContainerType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieGraphValueContainer_GetValueDouble_Statics
	{
		struct MovieGraphValueContainer_eventGetValueDouble_Parms
		{
			double OutValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_OutValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueDouble_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphValueContainer_eventGetValueDouble_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UMovieGraphValueContainer_GetValueDouble_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieGraphValueContainer_eventGetValueDouble_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueDouble_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieGraphValueContainer_eventGetValueDouble_Parms), &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueDouble_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphValueContainer_GetValueDouble_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_GetValueDouble_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_GetValueDouble_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_GetValueDouble_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Gets the double value of the held data. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphValueContainer.h" },
		{ "ToolTip", "Gets the double value of the held data. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueDouble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphValueContainer, nullptr, "GetValueDouble", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphValueContainer_GetValueDouble_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueDouble_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueDouble_Statics::MovieGraphValueContainer_eventGetValueDouble_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueDouble_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphValueContainer_GetValueDouble_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueDouble_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueDouble_Statics::MovieGraphValueContainer_eventGetValueDouble_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphValueContainer_GetValueDouble()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphValueContainer_GetValueDouble_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieGraphValueContainer_GetValueEnum_Statics
	{
		struct MovieGraphValueContainer_eventGetValueEnum_Parms
		{
			uint8 OutValue;
			const UEnum* RequestedEnum;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestedEnum_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RequestedEnum;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueEnum_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphValueContainer_eventGetValueEnum_Parms, OutValue), nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_GetValueEnum_Statics::NewProp_RequestedEnum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueEnum_Statics::NewProp_RequestedEnum = { "RequestedEnum", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphValueContainer_eventGetValueEnum_Parms, RequestedEnum), Z_Construct_UClass_UEnum, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueEnum_Statics::NewProp_RequestedEnum_MetaData), Z_Construct_UFunction_UMovieGraphValueContainer_GetValueEnum_Statics::NewProp_RequestedEnum_MetaData) };
	void Z_Construct_UFunction_UMovieGraphValueContainer_GetValueEnum_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieGraphValueContainer_eventGetValueEnum_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueEnum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieGraphValueContainer_eventGetValueEnum_Parms), &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueEnum_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphValueContainer_GetValueEnum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_GetValueEnum_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_GetValueEnum_Statics::NewProp_RequestedEnum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_GetValueEnum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_GetValueEnum_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Gets the enum value (for a specific enum) of the held data. Returns true on success, else false. */" },
		{ "CPP_Default_RequestedEnum", "None" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphValueContainer.h" },
		{ "ToolTip", "Gets the enum value (for a specific enum) of the held data. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphValueContainer, nullptr, "GetValueEnum", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphValueContainer_GetValueEnum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueEnum_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueEnum_Statics::MovieGraphValueContainer_eventGetValueEnum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueEnum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphValueContainer_GetValueEnum_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueEnum_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueEnum_Statics::MovieGraphValueContainer_eventGetValueEnum_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphValueContainer_GetValueEnum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphValueContainer_GetValueEnum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieGraphValueContainer_GetValueFloat_Statics
	{
		struct MovieGraphValueContainer_eventGetValueFloat_Parms
		{
			float OutValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueFloat_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphValueContainer_eventGetValueFloat_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UMovieGraphValueContainer_GetValueFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieGraphValueContainer_eventGetValueFloat_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieGraphValueContainer_eventGetValueFloat_Parms), &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphValueContainer_GetValueFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_GetValueFloat_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_GetValueFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_GetValueFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Gets the float value of the held data. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphValueContainer.h" },
		{ "ToolTip", "Gets the float value of the held data. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphValueContainer, nullptr, "GetValueFloat", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphValueContainer_GetValueFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueFloat_Statics::MovieGraphValueContainer_eventGetValueFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphValueContainer_GetValueFloat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueFloat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueFloat_Statics::MovieGraphValueContainer_eventGetValueFloat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphValueContainer_GetValueFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphValueContainer_GetValueFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt32_Statics
	{
		struct MovieGraphValueContainer_eventGetValueInt32_Parms
		{
			int32 OutValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt32_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphValueContainer_eventGetValueInt32_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt32_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieGraphValueContainer_eventGetValueInt32_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieGraphValueContainer_eventGetValueInt32_Parms), &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt32_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt32_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt32_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt32_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt32_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Gets the int32 value of the held data. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphValueContainer.h" },
		{ "ToolTip", "Gets the int32 value of the held data. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt32_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphValueContainer, nullptr, "GetValueInt32", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt32_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt32_Statics::MovieGraphValueContainer_eventGetValueInt32_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt32_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt32_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt32_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt32_Statics::MovieGraphValueContainer_eventGetValueInt32_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt32()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt32_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt64_Statics
	{
		struct MovieGraphValueContainer_eventGetValueInt64_Parms
		{
			int64 OutValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_OutValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt64_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphValueContainer_eventGetValueInt64_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt64_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieGraphValueContainer_eventGetValueInt64_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieGraphValueContainer_eventGetValueInt64_Parms), &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt64_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt64_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt64_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt64_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt64_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Gets the int64 value of the held data. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphValueContainer.h" },
		{ "ToolTip", "Gets the int64 value of the held data. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphValueContainer, nullptr, "GetValueInt64", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt64_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt64_Statics::MovieGraphValueContainer_eventGetValueInt64_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt64_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt64_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt64_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt64_Statics::MovieGraphValueContainer_eventGetValueInt64_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieGraphValueContainer_GetValueName_Statics
	{
		struct MovieGraphValueContainer_eventGetValueName_Parms
		{
			FName OutValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueName_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphValueContainer_eventGetValueName_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UMovieGraphValueContainer_GetValueName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieGraphValueContainer_eventGetValueName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieGraphValueContainer_eventGetValueName_Parms), &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphValueContainer_GetValueName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_GetValueName_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_GetValueName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_GetValueName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Gets the FName value of the held data. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphValueContainer.h" },
		{ "ToolTip", "Gets the FName value of the held data. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphValueContainer, nullptr, "GetValueName", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphValueContainer_GetValueName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueName_Statics::MovieGraphValueContainer_eventGetValueName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphValueContainer_GetValueName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueName_Statics::MovieGraphValueContainer_eventGetValueName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphValueContainer_GetValueName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphValueContainer_GetValueName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieGraphValueContainer_GetValueObject_Statics
	{
		struct MovieGraphValueContainer_eventGetValueObject_Parms
		{
			UObject* OutValue;
			const UClass* RequestedClass;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestedClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RequestedClass;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueObject_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphValueContainer_eventGetValueObject_Parms, OutValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_GetValueObject_Statics::NewProp_RequestedClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueObject_Statics::NewProp_RequestedClass = { "RequestedClass", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphValueContainer_eventGetValueObject_Parms, RequestedClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueObject_Statics::NewProp_RequestedClass_MetaData), Z_Construct_UFunction_UMovieGraphValueContainer_GetValueObject_Statics::NewProp_RequestedClass_MetaData) };
	void Z_Construct_UFunction_UMovieGraphValueContainer_GetValueObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieGraphValueContainer_eventGetValueObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieGraphValueContainer_eventGetValueObject_Parms), &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphValueContainer_GetValueObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_GetValueObject_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_GetValueObject_Statics::NewProp_RequestedClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_GetValueObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_GetValueObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Gets the object value (for a specific class) of the held data. Returns true on success, else false. */" },
		{ "CPP_Default_RequestedClass", "None" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphValueContainer.h" },
		{ "ToolTip", "Gets the object value (for a specific class) of the held data. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphValueContainer, nullptr, "GetValueObject", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphValueContainer_GetValueObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueObject_Statics::MovieGraphValueContainer_eventGetValueObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphValueContainer_GetValueObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueObject_Statics::MovieGraphValueContainer_eventGetValueObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphValueContainer_GetValueObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphValueContainer_GetValueObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieGraphValueContainer_GetValueSerializedString_Statics
	{
		struct MovieGraphValueContainer_eventGetValueSerializedString_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueSerializedString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphValueContainer_eventGetValueSerializedString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphValueContainer_GetValueSerializedString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_GetValueSerializedString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_GetValueSerializedString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Gets the serialized string value of the held data. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphValueContainer.h" },
		{ "ToolTip", "Gets the serialized string value of the held data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueSerializedString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphValueContainer, nullptr, "GetValueSerializedString", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphValueContainer_GetValueSerializedString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueSerializedString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueSerializedString_Statics::MovieGraphValueContainer_eventGetValueSerializedString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueSerializedString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphValueContainer_GetValueSerializedString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueSerializedString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueSerializedString_Statics::MovieGraphValueContainer_eventGetValueSerializedString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphValueContainer_GetValueSerializedString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphValueContainer_GetValueSerializedString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieGraphValueContainer_GetValueString_Statics
	{
		struct MovieGraphValueContainer_eventGetValueString_Parms
		{
			FString OutValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueString_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphValueContainer_eventGetValueString_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UMovieGraphValueContainer_GetValueString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieGraphValueContainer_eventGetValueString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieGraphValueContainer_eventGetValueString_Parms), &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphValueContainer_GetValueString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_GetValueString_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_GetValueString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_GetValueString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Gets the FString value of the held data. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphValueContainer.h" },
		{ "ToolTip", "Gets the FString value of the held data. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphValueContainer, nullptr, "GetValueString", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphValueContainer_GetValueString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueString_Statics::MovieGraphValueContainer_eventGetValueString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphValueContainer_GetValueString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueString_Statics::MovieGraphValueContainer_eventGetValueString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphValueContainer_GetValueString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphValueContainer_GetValueString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieGraphValueContainer_GetValueText_Statics
	{
		struct MovieGraphValueContainer_eventGetValueText_Parms
		{
			FText OutValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_OutValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueText_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphValueContainer_eventGetValueText_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UMovieGraphValueContainer_GetValueText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieGraphValueContainer_eventGetValueText_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieGraphValueContainer_eventGetValueText_Parms), &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphValueContainer_GetValueText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_GetValueText_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_GetValueText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_GetValueText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Gets the FText value of the held data. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphValueContainer.h" },
		{ "ToolTip", "Gets the FText value of the held data. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphValueContainer, nullptr, "GetValueText", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphValueContainer_GetValueText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueText_Statics::MovieGraphValueContainer_eventGetValueText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphValueContainer_GetValueText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueText_Statics::MovieGraphValueContainer_eventGetValueText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphValueContainer_GetValueText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphValueContainer_GetValueText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieGraphValueContainer_GetValueType_Statics
	{
		struct MovieGraphValueContainer_eventGetValueType_Parms
		{
			EMovieGraphValueType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphValueContainer_eventGetValueType_Parms, ReturnValue), Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphValueType, METADATA_PARAMS(0, nullptr) }; // 101554368
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphValueContainer_GetValueType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_GetValueType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_GetValueType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_GetValueType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Gets the type of the stored data. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphValueContainer.h" },
		{ "ToolTip", "Gets the type of the stored data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphValueContainer, nullptr, "GetValueType", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphValueContainer_GetValueType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueType_Statics::MovieGraphValueContainer_eventGetValueType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphValueContainer_GetValueType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueType_Statics::MovieGraphValueContainer_eventGetValueType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphValueContainer_GetValueType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphValueContainer_GetValueType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieGraphValueContainer_GetValueTypeObject_Statics
	{
		struct MovieGraphValueContainer_eventGetValueTypeObject_Parms
		{
			const UObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_GetValueTypeObject_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueTypeObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphValueContainer_eventGetValueTypeObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueTypeObject_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UMovieGraphValueContainer_GetValueTypeObject_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphValueContainer_GetValueTypeObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_GetValueTypeObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_GetValueTypeObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Gets the object that defines the enum, struct, or class. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphValueContainer.h" },
		{ "ToolTip", "Gets the object that defines the enum, struct, or class." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphValueContainer_GetValueTypeObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphValueContainer, nullptr, "GetValueTypeObject", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphValueContainer_GetValueTypeObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueTypeObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueTypeObject_Statics::MovieGraphValueContainer_eventGetValueTypeObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueTypeObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphValueContainer_GetValueTypeObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueTypeObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_GetValueTypeObject_Statics::MovieGraphValueContainer_eventGetValueTypeObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphValueContainer_GetValueTypeObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphValueContainer_GetValueTypeObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieGraphValueContainer_SetValueBool_Statics
	{
		struct MovieGraphValueContainer_eventSetValueBool_Parms
		{
			bool bInValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInValue_MetaData[];
#endif
		static void NewProp_bInValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_SetValueBool_Statics::NewProp_bInValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMovieGraphValueContainer_SetValueBool_Statics::NewProp_bInValue_SetBit(void* Obj)
	{
		((MovieGraphValueContainer_eventSetValueBool_Parms*)Obj)->bInValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueBool_Statics::NewProp_bInValue = { "bInValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieGraphValueContainer_eventSetValueBool_Parms), &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueBool_Statics::NewProp_bInValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueBool_Statics::NewProp_bInValue_MetaData), Z_Construct_UFunction_UMovieGraphValueContainer_SetValueBool_Statics::NewProp_bInValue_MetaData) };
	void Z_Construct_UFunction_UMovieGraphValueContainer_SetValueBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieGraphValueContainer_eventSetValueBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieGraphValueContainer_eventSetValueBool_Parms), &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphValueContainer_SetValueBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_SetValueBool_Statics::NewProp_bInValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_SetValueBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_SetValueBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Sets the bool value of the held data. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphValueContainer.h" },
		{ "ToolTip", "Sets the bool value of the held data. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphValueContainer, nullptr, "SetValueBool", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphValueContainer_SetValueBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueBool_Statics::MovieGraphValueContainer_eventSetValueBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphValueContainer_SetValueBool_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueBool_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueBool_Statics::MovieGraphValueContainer_eventSetValueBool_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphValueContainer_SetValueBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphValueContainer_SetValueBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieGraphValueContainer_SetValueByte_Statics
	{
		struct MovieGraphValueContainer_eventSetValueByte_Parms
		{
			uint8 InValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_SetValueByte_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueByte_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphValueContainer_eventSetValueByte_Parms, InValue), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueByte_Statics::NewProp_InValue_MetaData), Z_Construct_UFunction_UMovieGraphValueContainer_SetValueByte_Statics::NewProp_InValue_MetaData) };
	void Z_Construct_UFunction_UMovieGraphValueContainer_SetValueByte_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieGraphValueContainer_eventSetValueByte_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueByte_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieGraphValueContainer_eventSetValueByte_Parms), &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueByte_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphValueContainer_SetValueByte_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_SetValueByte_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_SetValueByte_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_SetValueByte_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Sets the byte value of the held data. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphValueContainer.h" },
		{ "ToolTip", "Sets the byte value of the held data. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueByte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphValueContainer, nullptr, "SetValueByte", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphValueContainer_SetValueByte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueByte_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueByte_Statics::MovieGraphValueContainer_eventSetValueByte_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueByte_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphValueContainer_SetValueByte_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueByte_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueByte_Statics::MovieGraphValueContainer_eventSetValueByte_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphValueContainer_SetValueByte()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphValueContainer_SetValueByte_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieGraphValueContainer_SetValueClass_Statics
	{
		struct MovieGraphValueContainer_eventSetValueClass_Parms
		{
			UClass* InValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueClass_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphValueContainer_eventSetValueClass_Parms, InValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UMovieGraphValueContainer_SetValueClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieGraphValueContainer_eventSetValueClass_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieGraphValueContainer_eventSetValueClass_Parms), &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphValueContainer_SetValueClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_SetValueClass_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_SetValueClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_SetValueClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Sets the class value of the held data. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphValueContainer.h" },
		{ "ToolTip", "Sets the class value of the held data. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphValueContainer, nullptr, "SetValueClass", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphValueContainer_SetValueClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueClass_Statics::MovieGraphValueContainer_eventSetValueClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphValueContainer_SetValueClass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueClass_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueClass_Statics::MovieGraphValueContainer_eventSetValueClass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphValueContainer_SetValueClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphValueContainer_SetValueClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieGraphValueContainer_SetValueContainerType_Statics
	{
		struct MovieGraphValueContainer_eventSetValueContainerType_Parms
		{
			EMovieGraphContainerType ContainerType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ContainerType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ContainerType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueContainerType_Statics::NewProp_ContainerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueContainerType_Statics::NewProp_ContainerType = { "ContainerType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphValueContainer_eventSetValueContainerType_Parms, ContainerType), Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphContainerType, METADATA_PARAMS(0, nullptr) }; // 2621360303
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphValueContainer_SetValueContainerType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_SetValueContainerType_Statics::NewProp_ContainerType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_SetValueContainerType_Statics::NewProp_ContainerType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_SetValueContainerType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Sets the container type of the stored value. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphValueContainer.h" },
		{ "ToolTip", "Sets the container type of the stored value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueContainerType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphValueContainer, nullptr, "SetValueContainerType", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphValueContainer_SetValueContainerType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueContainerType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueContainerType_Statics::MovieGraphValueContainer_eventSetValueContainerType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueContainerType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphValueContainer_SetValueContainerType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueContainerType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueContainerType_Statics::MovieGraphValueContainer_eventSetValueContainerType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphValueContainer_SetValueContainerType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphValueContainer_SetValueContainerType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieGraphValueContainer_SetValueDouble_Statics
	{
		struct MovieGraphValueContainer_eventSetValueDouble_Parms
		{
			double InValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_SetValueDouble_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueDouble_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphValueContainer_eventSetValueDouble_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueDouble_Statics::NewProp_InValue_MetaData), Z_Construct_UFunction_UMovieGraphValueContainer_SetValueDouble_Statics::NewProp_InValue_MetaData) };
	void Z_Construct_UFunction_UMovieGraphValueContainer_SetValueDouble_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieGraphValueContainer_eventSetValueDouble_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueDouble_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieGraphValueContainer_eventSetValueDouble_Parms), &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueDouble_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphValueContainer_SetValueDouble_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_SetValueDouble_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_SetValueDouble_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_SetValueDouble_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Sets the double value of the held data. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphValueContainer.h" },
		{ "ToolTip", "Sets the double value of the held data. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueDouble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphValueContainer, nullptr, "SetValueDouble", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphValueContainer_SetValueDouble_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueDouble_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueDouble_Statics::MovieGraphValueContainer_eventSetValueDouble_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueDouble_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphValueContainer_SetValueDouble_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueDouble_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueDouble_Statics::MovieGraphValueContainer_eventSetValueDouble_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphValueContainer_SetValueDouble()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphValueContainer_SetValueDouble_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieGraphValueContainer_SetValueEnum_Statics
	{
		struct MovieGraphValueContainer_eventSetValueEnum_Parms
		{
			uint8 InValue;
			const UEnum* Enum;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Enum;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_SetValueEnum_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueEnum_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphValueContainer_eventSetValueEnum_Parms, InValue), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueEnum_Statics::NewProp_InValue_MetaData), Z_Construct_UFunction_UMovieGraphValueContainer_SetValueEnum_Statics::NewProp_InValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_SetValueEnum_Statics::NewProp_Enum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueEnum_Statics::NewProp_Enum = { "Enum", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphValueContainer_eventSetValueEnum_Parms, Enum), Z_Construct_UClass_UEnum, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueEnum_Statics::NewProp_Enum_MetaData), Z_Construct_UFunction_UMovieGraphValueContainer_SetValueEnum_Statics::NewProp_Enum_MetaData) };
	void Z_Construct_UFunction_UMovieGraphValueContainer_SetValueEnum_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieGraphValueContainer_eventSetValueEnum_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueEnum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieGraphValueContainer_eventSetValueEnum_Parms), &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueEnum_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphValueContainer_SetValueEnum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_SetValueEnum_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_SetValueEnum_Statics::NewProp_Enum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_SetValueEnum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_SetValueEnum_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Sets the enum value of the held data. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphValueContainer.h" },
		{ "ToolTip", "Sets the enum value of the held data. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphValueContainer, nullptr, "SetValueEnum", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphValueContainer_SetValueEnum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueEnum_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueEnum_Statics::MovieGraphValueContainer_eventSetValueEnum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueEnum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphValueContainer_SetValueEnum_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueEnum_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueEnum_Statics::MovieGraphValueContainer_eventSetValueEnum_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphValueContainer_SetValueEnum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphValueContainer_SetValueEnum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieGraphValueContainer_SetValueFloat_Statics
	{
		struct MovieGraphValueContainer_eventSetValueFloat_Parms
		{
			float InValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_SetValueFloat_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueFloat_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphValueContainer_eventSetValueFloat_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueFloat_Statics::NewProp_InValue_MetaData), Z_Construct_UFunction_UMovieGraphValueContainer_SetValueFloat_Statics::NewProp_InValue_MetaData) };
	void Z_Construct_UFunction_UMovieGraphValueContainer_SetValueFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieGraphValueContainer_eventSetValueFloat_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieGraphValueContainer_eventSetValueFloat_Parms), &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphValueContainer_SetValueFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_SetValueFloat_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_SetValueFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_SetValueFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Sets the float value of the held data. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphValueContainer.h" },
		{ "ToolTip", "Sets the float value of the held data. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphValueContainer, nullptr, "SetValueFloat", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphValueContainer_SetValueFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueFloat_Statics::MovieGraphValueContainer_eventSetValueFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphValueContainer_SetValueFloat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueFloat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueFloat_Statics::MovieGraphValueContainer_eventSetValueFloat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphValueContainer_SetValueFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphValueContainer_SetValueFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt32_Statics
	{
		struct MovieGraphValueContainer_eventSetValueInt32_Parms
		{
			int32 InValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt32_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt32_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphValueContainer_eventSetValueInt32_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt32_Statics::NewProp_InValue_MetaData), Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt32_Statics::NewProp_InValue_MetaData) };
	void Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt32_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieGraphValueContainer_eventSetValueInt32_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieGraphValueContainer_eventSetValueInt32_Parms), &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt32_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt32_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt32_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt32_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt32_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Sets the int32 value of the held data. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphValueContainer.h" },
		{ "ToolTip", "Sets the int32 value of the held data. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt32_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphValueContainer, nullptr, "SetValueInt32", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt32_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt32_Statics::MovieGraphValueContainer_eventSetValueInt32_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt32_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt32_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt32_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt32_Statics::MovieGraphValueContainer_eventSetValueInt32_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt32()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt32_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt64_Statics
	{
		struct MovieGraphValueContainer_eventSetValueInt64_Parms
		{
			int64 InValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt64_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt64_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphValueContainer_eventSetValueInt64_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt64_Statics::NewProp_InValue_MetaData), Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt64_Statics::NewProp_InValue_MetaData) };
	void Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt64_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieGraphValueContainer_eventSetValueInt64_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieGraphValueContainer_eventSetValueInt64_Parms), &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt64_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt64_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt64_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt64_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt64_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Sets the int64 value of the held data. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphValueContainer.h" },
		{ "ToolTip", "Sets the int64 value of the held data. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphValueContainer, nullptr, "SetValueInt64", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt64_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt64_Statics::MovieGraphValueContainer_eventSetValueInt64_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt64_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt64_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt64_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt64_Statics::MovieGraphValueContainer_eventSetValueInt64_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieGraphValueContainer_SetValueName_Statics
	{
		struct MovieGraphValueContainer_eventSetValueName_Parms
		{
			FName InValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_SetValueName_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueName_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphValueContainer_eventSetValueName_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueName_Statics::NewProp_InValue_MetaData), Z_Construct_UFunction_UMovieGraphValueContainer_SetValueName_Statics::NewProp_InValue_MetaData) };
	void Z_Construct_UFunction_UMovieGraphValueContainer_SetValueName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieGraphValueContainer_eventSetValueName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieGraphValueContainer_eventSetValueName_Parms), &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphValueContainer_SetValueName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_SetValueName_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_SetValueName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_SetValueName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Sets the FName value of the held data. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphValueContainer.h" },
		{ "ToolTip", "Sets the FName value of the held data. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphValueContainer, nullptr, "SetValueName", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphValueContainer_SetValueName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueName_Statics::MovieGraphValueContainer_eventSetValueName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphValueContainer_SetValueName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueName_Statics::MovieGraphValueContainer_eventSetValueName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphValueContainer_SetValueName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphValueContainer_SetValueName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieGraphValueContainer_SetValueObject_Statics
	{
		struct MovieGraphValueContainer_eventSetValueObject_Parms
		{
			UObject* InValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueObject_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphValueContainer_eventSetValueObject_Parms, InValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UMovieGraphValueContainer_SetValueObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieGraphValueContainer_eventSetValueObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieGraphValueContainer_eventSetValueObject_Parms), &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphValueContainer_SetValueObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_SetValueObject_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_SetValueObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_SetValueObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Sets the object value of the held data. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphValueContainer.h" },
		{ "ToolTip", "Sets the object value of the held data. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphValueContainer, nullptr, "SetValueObject", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphValueContainer_SetValueObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueObject_Statics::MovieGraphValueContainer_eventSetValueObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphValueContainer_SetValueObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueObject_Statics::MovieGraphValueContainer_eventSetValueObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphValueContainer_SetValueObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphValueContainer_SetValueObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieGraphValueContainer_SetValueSerializedString_Statics
	{
		struct MovieGraphValueContainer_eventSetValueSerializedString_Parms
		{
			FString NewValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_SetValueSerializedString_Statics::NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueSerializedString_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphValueContainer_eventSetValueSerializedString_Parms, NewValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueSerializedString_Statics::NewProp_NewValue_MetaData), Z_Construct_UFunction_UMovieGraphValueContainer_SetValueSerializedString_Statics::NewProp_NewValue_MetaData) };
	void Z_Construct_UFunction_UMovieGraphValueContainer_SetValueSerializedString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieGraphValueContainer_eventSetValueSerializedString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueSerializedString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieGraphValueContainer_eventSetValueSerializedString_Parms), &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueSerializedString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphValueContainer_SetValueSerializedString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_SetValueSerializedString_Statics::NewProp_NewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_SetValueSerializedString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_SetValueSerializedString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Sets the serialized value of the held data. The string should be the serialized representation of the value. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphValueContainer.h" },
		{ "ToolTip", "Sets the serialized value of the held data. The string should be the serialized representation of the value. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueSerializedString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphValueContainer, nullptr, "SetValueSerializedString", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphValueContainer_SetValueSerializedString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueSerializedString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueSerializedString_Statics::MovieGraphValueContainer_eventSetValueSerializedString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueSerializedString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphValueContainer_SetValueSerializedString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueSerializedString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueSerializedString_Statics::MovieGraphValueContainer_eventSetValueSerializedString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphValueContainer_SetValueSerializedString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphValueContainer_SetValueSerializedString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieGraphValueContainer_SetValueString_Statics
	{
		struct MovieGraphValueContainer_eventSetValueString_Parms
		{
			FString InValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_SetValueString_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueString_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphValueContainer_eventSetValueString_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueString_Statics::NewProp_InValue_MetaData), Z_Construct_UFunction_UMovieGraphValueContainer_SetValueString_Statics::NewProp_InValue_MetaData) };
	void Z_Construct_UFunction_UMovieGraphValueContainer_SetValueString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieGraphValueContainer_eventSetValueString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieGraphValueContainer_eventSetValueString_Parms), &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphValueContainer_SetValueString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_SetValueString_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_SetValueString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_SetValueString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Sets the FString value of the held data. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphValueContainer.h" },
		{ "ToolTip", "Sets the FString value of the held data. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphValueContainer, nullptr, "SetValueString", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphValueContainer_SetValueString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueString_Statics::MovieGraphValueContainer_eventSetValueString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphValueContainer_SetValueString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueString_Statics::MovieGraphValueContainer_eventSetValueString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphValueContainer_SetValueString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphValueContainer_SetValueString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieGraphValueContainer_SetValueText_Statics
	{
		struct MovieGraphValueContainer_eventSetValueText_Parms
		{
			FText InValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_SetValueText_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueText_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphValueContainer_eventSetValueText_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueText_Statics::NewProp_InValue_MetaData), Z_Construct_UFunction_UMovieGraphValueContainer_SetValueText_Statics::NewProp_InValue_MetaData) };
	void Z_Construct_UFunction_UMovieGraphValueContainer_SetValueText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieGraphValueContainer_eventSetValueText_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieGraphValueContainer_eventSetValueText_Parms), &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphValueContainer_SetValueText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_SetValueText_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_SetValueText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_SetValueText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Sets the FText value of the held data. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphValueContainer.h" },
		{ "ToolTip", "Sets the FText value of the held data. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphValueContainer, nullptr, "SetValueText", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphValueContainer_SetValueText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueText_Statics::MovieGraphValueContainer_eventSetValueText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphValueContainer_SetValueText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueText_Statics::MovieGraphValueContainer_eventSetValueText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphValueContainer_SetValueText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphValueContainer_SetValueText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieGraphValueContainer_SetValueType_Statics
	{
		struct MovieGraphValueContainer_eventSetValueType_Parms
		{
			EMovieGraphValueType ValueType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ValueType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ValueType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueType_Statics::NewProp_ValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueType_Statics::NewProp_ValueType = { "ValueType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphValueContainer_eventSetValueType_Parms, ValueType), Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphValueType, METADATA_PARAMS(0, nullptr) }; // 101554368
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphValueContainer_SetValueType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_SetValueType_Statics::NewProp_ValueType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_SetValueType_Statics::NewProp_ValueType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_SetValueType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Sets the type of the stored data. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphValueContainer.h" },
		{ "ToolTip", "Sets the type of the stored data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphValueContainer, nullptr, "SetValueType", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphValueContainer_SetValueType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueType_Statics::MovieGraphValueContainer_eventSetValueType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphValueContainer_SetValueType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueType_Statics::MovieGraphValueContainer_eventSetValueType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphValueContainer_SetValueType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphValueContainer_SetValueType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieGraphValueContainer_SetValueTypeObject_Statics
	{
		struct MovieGraphValueContainer_eventSetValueTypeObject_Parms
		{
			const UObject* ValueTypeObject;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueTypeObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ValueTypeObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_SetValueTypeObject_Statics::NewProp_ValueTypeObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueTypeObject_Statics::NewProp_ValueTypeObject = { "ValueTypeObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphValueContainer_eventSetValueTypeObject_Parms, ValueTypeObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueTypeObject_Statics::NewProp_ValueTypeObject_MetaData), Z_Construct_UFunction_UMovieGraphValueContainer_SetValueTypeObject_Statics::NewProp_ValueTypeObject_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphValueContainer_SetValueTypeObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphValueContainer_SetValueTypeObject_Statics::NewProp_ValueTypeObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphValueContainer_SetValueTypeObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Sets the object that defines the enum, struct, or class. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphValueContainer.h" },
		{ "ToolTip", "Sets the object that defines the enum, struct, or class." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphValueContainer_SetValueTypeObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphValueContainer, nullptr, "SetValueTypeObject", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphValueContainer_SetValueTypeObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueTypeObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueTypeObject_Statics::MovieGraphValueContainer_eventSetValueTypeObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueTypeObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphValueContainer_SetValueTypeObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueTypeObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphValueContainer_SetValueTypeObject_Statics::MovieGraphValueContainer_eventSetValueTypeObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphValueContainer_SetValueTypeObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphValueContainer_SetValueTypeObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphValueContainer);
	UClass* Z_Construct_UClass_UMovieGraphValueContainer_NoRegister()
	{
		return UMovieGraphValueContainer::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphValueContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphValueContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphValueContainer_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieGraphValueContainer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueBool, "GetValueBool" }, // 1382167558
		{ &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueByte, "GetValueByte" }, // 3894189275
		{ &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueClass, "GetValueClass" }, // 4121954416
		{ &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueContainerType, "GetValueContainerType" }, // 1002820145
		{ &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueDouble, "GetValueDouble" }, // 42145220
		{ &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueEnum, "GetValueEnum" }, // 4251593246
		{ &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueFloat, "GetValueFloat" }, // 2614604454
		{ &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt32, "GetValueInt32" }, // 223700604
		{ &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueInt64, "GetValueInt64" }, // 3930604929
		{ &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueName, "GetValueName" }, // 3625335811
		{ &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueObject, "GetValueObject" }, // 1738592478
		{ &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueSerializedString, "GetValueSerializedString" }, // 1951005319
		{ &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueString, "GetValueString" }, // 1831241688
		{ &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueText, "GetValueText" }, // 363232816
		{ &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueType, "GetValueType" }, // 2085427015
		{ &Z_Construct_UFunction_UMovieGraphValueContainer_GetValueTypeObject, "GetValueTypeObject" }, // 35345163
		{ &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueBool, "SetValueBool" }, // 3669211308
		{ &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueByte, "SetValueByte" }, // 204371315
		{ &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueClass, "SetValueClass" }, // 3649412663
		{ &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueContainerType, "SetValueContainerType" }, // 328660805
		{ &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueDouble, "SetValueDouble" }, // 103933293
		{ &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueEnum, "SetValueEnum" }, // 3922838378
		{ &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueFloat, "SetValueFloat" }, // 3442131403
		{ &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt32, "SetValueInt32" }, // 3405690324
		{ &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueInt64, "SetValueInt64" }, // 2072914074
		{ &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueName, "SetValueName" }, // 58747475
		{ &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueObject, "SetValueObject" }, // 1002404810
		{ &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueSerializedString, "SetValueSerializedString" }, // 2833712126
		{ &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueString, "SetValueString" }, // 829629124
		{ &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueText, "SetValueText" }, // 2032101599
		{ &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueType, "SetValueType" }, // 1771995339
		{ &Z_Construct_UFunction_UMovieGraphValueContainer_SetValueTypeObject, "SetValueTypeObject" }, // 3408829343
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphValueContainer_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphValueContainer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds a generic value, with an API for getting/setting the value, as well as getting/setting its type\n * and container (eg, array).\n */" },
		{ "IncludePath", "Graph/MovieGraphValueContainer.h" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphValueContainer.h" },
		{ "ToolTip", "Holds a generic value, with an API for getting/setting the value, as well as getting/setting its type\nand container (eg, array)." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphValueContainer_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Value" },
		{ "Comment", "/** The value held by this object. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphValueContainer.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The value held by this object." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieGraphValueContainer_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphValueContainer, Value), Z_Construct_UScriptStruct_FInstancedPropertyBag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphValueContainer_Statics::NewProp_Value_MetaData), Z_Construct_UClass_UMovieGraphValueContainer_Statics::NewProp_Value_MetaData) }; // 4097115139
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieGraphValueContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphValueContainer_Statics::NewProp_Value,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphValueContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphValueContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphValueContainer_Statics::ClassParams = {
		&UMovieGraphValueContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMovieGraphValueContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphValueContainer_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphValueContainer_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphValueContainer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphValueContainer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMovieGraphValueContainer()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphValueContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphValueContainer.OuterSingleton, Z_Construct_UClass_UMovieGraphValueContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphValueContainer.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieGraphValueContainer>()
	{
		return UMovieGraphValueContainer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphValueContainer);
	UMovieGraphValueContainer::~UMovieGraphValueContainer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphValueContainer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphValueContainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieGraphValueContainer, UMovieGraphValueContainer::StaticClass, TEXT("UMovieGraphValueContainer"), &Z_Registration_Info_UClass_UMovieGraphValueContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphValueContainer), 2135992185U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphValueContainer_h_1241732646(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphValueContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphValueContainer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
