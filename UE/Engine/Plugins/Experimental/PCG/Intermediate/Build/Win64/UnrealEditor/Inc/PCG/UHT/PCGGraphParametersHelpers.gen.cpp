// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Helpers/PCGGraphParametersHelpers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGGraphParametersHelpers() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	PCG_API UClass* Z_Construct_UClass_UPCGGraphInstance_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGGraphParametersHelpers();
	PCG_API UClass* Z_Construct_UClass_UPCGGraphParametersHelpers_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	DEFINE_FUNCTION(UPCGGraphParametersHelpers::execSetTransformParameter)
	{
		P_GET_OBJECT(UPCGGraphInstance,Z_Param_GraphInstance);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGGraphParametersHelpers::SetTransformParameter(Z_Param_GraphInstance,Z_Param_Name,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGGraphParametersHelpers::execSetRotatorParameter)
	{
		P_GET_OBJECT(UPCGGraphInstance,Z_Param_GraphInstance);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGGraphParametersHelpers::SetRotatorParameter(Z_Param_GraphInstance,Z_Param_Name,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGGraphParametersHelpers::execSetVectorParameter)
	{
		P_GET_OBJECT(UPCGGraphInstance,Z_Param_GraphInstance);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGGraphParametersHelpers::SetVectorParameter(Z_Param_GraphInstance,Z_Param_Name,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGGraphParametersHelpers::execSetSoftClassParameter)
	{
		P_GET_OBJECT(UPCGGraphInstance,Z_Param_GraphInstance);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_SOFTCLASS_REF(TSoftClassPtr<UObject> ,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGGraphParametersHelpers::SetSoftClassParameter(Z_Param_GraphInstance,Z_Param_Name,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGGraphParametersHelpers::execSetSoftObjectParameter)
	{
		P_GET_OBJECT(UPCGGraphInstance,Z_Param_GraphInstance);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UObject>,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGGraphParametersHelpers::SetSoftObjectParameter(Z_Param_GraphInstance,Z_Param_Name,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGGraphParametersHelpers::execSetEnumParameter)
	{
		P_GET_OBJECT(UPCGGraphInstance,Z_Param_GraphInstance);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_OBJECT(UEnum,Z_Param_Enum);
		P_GET_PROPERTY(FByteProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGGraphParametersHelpers::SetEnumParameter(Z_Param_GraphInstance,Z_Param_Name,Z_Param_Enum,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGGraphParametersHelpers::execSetStringParameter)
	{
		P_GET_OBJECT(UPCGGraphInstance,Z_Param_GraphInstance);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGGraphParametersHelpers::SetStringParameter(Z_Param_GraphInstance,Z_Param_Name,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGGraphParametersHelpers::execSetNameParameter)
	{
		P_GET_OBJECT(UPCGGraphInstance,Z_Param_GraphInstance);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FNameProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGGraphParametersHelpers::SetNameParameter(Z_Param_GraphInstance,Z_Param_Name,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGGraphParametersHelpers::execSetInt64Parameter)
	{
		P_GET_OBJECT(UPCGGraphInstance,Z_Param_GraphInstance);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FInt64Property,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGGraphParametersHelpers::SetInt64Parameter(Z_Param_GraphInstance,Z_Param_Name,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGGraphParametersHelpers::execSetInt32Parameter)
	{
		P_GET_OBJECT(UPCGGraphInstance,Z_Param_GraphInstance);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGGraphParametersHelpers::SetInt32Parameter(Z_Param_GraphInstance,Z_Param_Name,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGGraphParametersHelpers::execSetByteParameter)
	{
		P_GET_OBJECT(UPCGGraphInstance,Z_Param_GraphInstance);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FByteProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGGraphParametersHelpers::SetByteParameter(Z_Param_GraphInstance,Z_Param_Name,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGGraphParametersHelpers::execSetBoolParameter)
	{
		P_GET_OBJECT(UPCGGraphInstance,Z_Param_GraphInstance);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGGraphParametersHelpers::SetBoolParameter(Z_Param_GraphInstance,Z_Param_Name,Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGGraphParametersHelpers::execSetDoubleParameter)
	{
		P_GET_OBJECT(UPCGGraphInstance,Z_Param_GraphInstance);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGGraphParametersHelpers::SetDoubleParameter(Z_Param_GraphInstance,Z_Param_Name,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGGraphParametersHelpers::execSetFloatParameter)
	{
		P_GET_OBJECT(UPCGGraphInstance,Z_Param_GraphInstance);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGGraphParametersHelpers::SetFloatParameter(Z_Param_GraphInstance,Z_Param_Name,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGGraphParametersHelpers::execGetTransformParameter)
	{
		P_GET_OBJECT(UPCGGraphInstance,Z_Param_GraphInstance);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UPCGGraphParametersHelpers::GetTransformParameter(Z_Param_GraphInstance,Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGGraphParametersHelpers::execGetRotatorParameter)
	{
		P_GET_OBJECT(UPCGGraphInstance,Z_Param_GraphInstance);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UPCGGraphParametersHelpers::GetRotatorParameter(Z_Param_GraphInstance,Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGGraphParametersHelpers::execGetVectorParameter)
	{
		P_GET_OBJECT(UPCGGraphInstance,Z_Param_GraphInstance);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UPCGGraphParametersHelpers::GetVectorParameter(Z_Param_GraphInstance,Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGGraphParametersHelpers::execGetSoftClassParameter)
	{
		P_GET_OBJECT(UPCGGraphInstance,Z_Param_GraphInstance);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSoftClassPtr<UObject> *)Z_Param__Result=UPCGGraphParametersHelpers::GetSoftClassParameter(Z_Param_GraphInstance,Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGGraphParametersHelpers::execGetSoftObjectParameter)
	{
		P_GET_OBJECT(UPCGGraphInstance,Z_Param_GraphInstance);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSoftObjectPtr<UObject>*)Z_Param__Result=UPCGGraphParametersHelpers::GetSoftObjectParameter(Z_Param_GraphInstance,Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGGraphParametersHelpers::execGetStringParameter)
	{
		P_GET_OBJECT(UPCGGraphInstance,Z_Param_GraphInstance);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UPCGGraphParametersHelpers::GetStringParameter(Z_Param_GraphInstance,Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGGraphParametersHelpers::execGetNameParameter)
	{
		P_GET_OBJECT(UPCGGraphInstance,Z_Param_GraphInstance);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UPCGGraphParametersHelpers::GetNameParameter(Z_Param_GraphInstance,Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGGraphParametersHelpers::execGetInt64Parameter)
	{
		P_GET_OBJECT(UPCGGraphInstance,Z_Param_GraphInstance);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=UPCGGraphParametersHelpers::GetInt64Parameter(Z_Param_GraphInstance,Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGGraphParametersHelpers::execGetInt32Parameter)
	{
		P_GET_OBJECT(UPCGGraphInstance,Z_Param_GraphInstance);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPCGGraphParametersHelpers::GetInt32Parameter(Z_Param_GraphInstance,Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGGraphParametersHelpers::execGetByteParameter)
	{
		P_GET_OBJECT(UPCGGraphInstance,Z_Param_GraphInstance);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=UPCGGraphParametersHelpers::GetByteParameter(Z_Param_GraphInstance,Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGGraphParametersHelpers::execGetBoolParameter)
	{
		P_GET_OBJECT(UPCGGraphInstance,Z_Param_GraphInstance);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPCGGraphParametersHelpers::GetBoolParameter(Z_Param_GraphInstance,Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGGraphParametersHelpers::execGetDoubleParameter)
	{
		P_GET_OBJECT(UPCGGraphInstance,Z_Param_GraphInstance);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=UPCGGraphParametersHelpers::GetDoubleParameter(Z_Param_GraphInstance,Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGGraphParametersHelpers::execGetFloatParameter)
	{
		P_GET_OBJECT(UPCGGraphInstance,Z_Param_GraphInstance);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPCGGraphParametersHelpers::GetFloatParameter(Z_Param_GraphInstance,Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGGraphParametersHelpers::execIsOverridden)
	{
		P_GET_OBJECT(UPCGGraphInstance,Z_Param_GraphInstance);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPCGGraphParametersHelpers::IsOverridden(Z_Param_GraphInstance,Z_Param_Name);
		P_NATIVE_END;
	}
	void UPCGGraphParametersHelpers::StaticRegisterNativesUPCGGraphParametersHelpers()
	{
		UClass* Class = UPCGGraphParametersHelpers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBoolParameter", &UPCGGraphParametersHelpers::execGetBoolParameter },
			{ "GetByteParameter", &UPCGGraphParametersHelpers::execGetByteParameter },
			{ "GetDoubleParameter", &UPCGGraphParametersHelpers::execGetDoubleParameter },
			{ "GetFloatParameter", &UPCGGraphParametersHelpers::execGetFloatParameter },
			{ "GetInt32Parameter", &UPCGGraphParametersHelpers::execGetInt32Parameter },
			{ "GetInt64Parameter", &UPCGGraphParametersHelpers::execGetInt64Parameter },
			{ "GetNameParameter", &UPCGGraphParametersHelpers::execGetNameParameter },
			{ "GetRotatorParameter", &UPCGGraphParametersHelpers::execGetRotatorParameter },
			{ "GetSoftClassParameter", &UPCGGraphParametersHelpers::execGetSoftClassParameter },
			{ "GetSoftObjectParameter", &UPCGGraphParametersHelpers::execGetSoftObjectParameter },
			{ "GetStringParameter", &UPCGGraphParametersHelpers::execGetStringParameter },
			{ "GetTransformParameter", &UPCGGraphParametersHelpers::execGetTransformParameter },
			{ "GetVectorParameter", &UPCGGraphParametersHelpers::execGetVectorParameter },
			{ "IsOverridden", &UPCGGraphParametersHelpers::execIsOverridden },
			{ "SetBoolParameter", &UPCGGraphParametersHelpers::execSetBoolParameter },
			{ "SetByteParameter", &UPCGGraphParametersHelpers::execSetByteParameter },
			{ "SetDoubleParameter", &UPCGGraphParametersHelpers::execSetDoubleParameter },
			{ "SetEnumParameter", &UPCGGraphParametersHelpers::execSetEnumParameter },
			{ "SetFloatParameter", &UPCGGraphParametersHelpers::execSetFloatParameter },
			{ "SetInt32Parameter", &UPCGGraphParametersHelpers::execSetInt32Parameter },
			{ "SetInt64Parameter", &UPCGGraphParametersHelpers::execSetInt64Parameter },
			{ "SetNameParameter", &UPCGGraphParametersHelpers::execSetNameParameter },
			{ "SetRotatorParameter", &UPCGGraphParametersHelpers::execSetRotatorParameter },
			{ "SetSoftClassParameter", &UPCGGraphParametersHelpers::execSetSoftClassParameter },
			{ "SetSoftObjectParameter", &UPCGGraphParametersHelpers::execSetSoftObjectParameter },
			{ "SetStringParameter", &UPCGGraphParametersHelpers::execSetStringParameter },
			{ "SetTransformParameter", &UPCGGraphParametersHelpers::execSetTransformParameter },
			{ "SetVectorParameter", &UPCGGraphParametersHelpers::execSetVectorParameter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPCGGraphParametersHelpers_GetBoolParameter_Statics
	{
		struct PCGGraphParametersHelpers_eventGetBoolParameter_Parms
		{
			UPCGGraphInstance* GraphInstance;
			FName Name;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetBoolParameter_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventGetBoolParameter_Parms, GraphInstance), Z_Construct_UClass_UPCGGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_GetBoolParameter_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetBoolParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventGetBoolParameter_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetBoolParameter_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_GetBoolParameter_Statics::NewProp_Name_MetaData) };
	void Z_Construct_UFunction_UPCGGraphParametersHelpers_GetBoolParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PCGGraphParametersHelpers_eventGetBoolParameter_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetBoolParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGGraphParametersHelpers_eventGetBoolParameter_Parms), &Z_Construct_UFunction_UPCGGraphParametersHelpers_GetBoolParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGGraphParametersHelpers_GetBoolParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_GetBoolParameter_Statics::NewProp_GraphInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_GetBoolParameter_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_GetBoolParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_GetBoolParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Graph Parameters" },
		{ "ModuleRelativePath", "Public/Helpers/PCGGraphParametersHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetBoolParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGGraphParametersHelpers, nullptr, "GetBoolParameter", nullptr, nullptr, Z_Construct_UFunction_UPCGGraphParametersHelpers_GetBoolParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetBoolParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetBoolParameter_Statics::PCGGraphParametersHelpers_eventGetBoolParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetBoolParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGGraphParametersHelpers_GetBoolParameter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetBoolParameter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetBoolParameter_Statics::PCGGraphParametersHelpers_eventGetBoolParameter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGGraphParametersHelpers_GetBoolParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGGraphParametersHelpers_GetBoolParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGGraphParametersHelpers_GetByteParameter_Statics
	{
		struct PCGGraphParametersHelpers_eventGetByteParameter_Parms
		{
			UPCGGraphInstance* GraphInstance;
			FName Name;
			uint8 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetByteParameter_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventGetByteParameter_Parms, GraphInstance), Z_Construct_UClass_UPCGGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_GetByteParameter_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetByteParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventGetByteParameter_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetByteParameter_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_GetByteParameter_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetByteParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventGetByteParameter_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGGraphParametersHelpers_GetByteParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_GetByteParameter_Statics::NewProp_GraphInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_GetByteParameter_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_GetByteParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_GetByteParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Graph Parameters" },
		{ "ModuleRelativePath", "Public/Helpers/PCGGraphParametersHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetByteParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGGraphParametersHelpers, nullptr, "GetByteParameter", nullptr, nullptr, Z_Construct_UFunction_UPCGGraphParametersHelpers_GetByteParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetByteParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetByteParameter_Statics::PCGGraphParametersHelpers_eventGetByteParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetByteParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGGraphParametersHelpers_GetByteParameter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetByteParameter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetByteParameter_Statics::PCGGraphParametersHelpers_eventGetByteParameter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGGraphParametersHelpers_GetByteParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGGraphParametersHelpers_GetByteParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGGraphParametersHelpers_GetDoubleParameter_Statics
	{
		struct PCGGraphParametersHelpers_eventGetDoubleParameter_Parms
		{
			UPCGGraphInstance* GraphInstance;
			FName Name;
			double ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetDoubleParameter_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventGetDoubleParameter_Parms, GraphInstance), Z_Construct_UClass_UPCGGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_GetDoubleParameter_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetDoubleParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventGetDoubleParameter_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetDoubleParameter_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_GetDoubleParameter_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetDoubleParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventGetDoubleParameter_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGGraphParametersHelpers_GetDoubleParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_GetDoubleParameter_Statics::NewProp_GraphInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_GetDoubleParameter_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_GetDoubleParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_GetDoubleParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Graph Parameters" },
		{ "ModuleRelativePath", "Public/Helpers/PCGGraphParametersHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetDoubleParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGGraphParametersHelpers, nullptr, "GetDoubleParameter", nullptr, nullptr, Z_Construct_UFunction_UPCGGraphParametersHelpers_GetDoubleParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetDoubleParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetDoubleParameter_Statics::PCGGraphParametersHelpers_eventGetDoubleParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetDoubleParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGGraphParametersHelpers_GetDoubleParameter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetDoubleParameter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetDoubleParameter_Statics::PCGGraphParametersHelpers_eventGetDoubleParameter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGGraphParametersHelpers_GetDoubleParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGGraphParametersHelpers_GetDoubleParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGGraphParametersHelpers_GetFloatParameter_Statics
	{
		struct PCGGraphParametersHelpers_eventGetFloatParameter_Parms
		{
			UPCGGraphInstance* GraphInstance;
			FName Name;
			float ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetFloatParameter_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventGetFloatParameter_Parms, GraphInstance), Z_Construct_UClass_UPCGGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_GetFloatParameter_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetFloatParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventGetFloatParameter_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetFloatParameter_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_GetFloatParameter_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetFloatParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventGetFloatParameter_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGGraphParametersHelpers_GetFloatParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_GetFloatParameter_Statics::NewProp_GraphInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_GetFloatParameter_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_GetFloatParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_GetFloatParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Graph Parameters" },
		{ "Comment", "////////////\n// Getters\n////////////\n" },
		{ "ModuleRelativePath", "Public/Helpers/PCGGraphParametersHelpers.h" },
		{ "ToolTip", "Getters" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetFloatParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGGraphParametersHelpers, nullptr, "GetFloatParameter", nullptr, nullptr, Z_Construct_UFunction_UPCGGraphParametersHelpers_GetFloatParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetFloatParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetFloatParameter_Statics::PCGGraphParametersHelpers_eventGetFloatParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetFloatParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGGraphParametersHelpers_GetFloatParameter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetFloatParameter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetFloatParameter_Statics::PCGGraphParametersHelpers_eventGetFloatParameter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGGraphParametersHelpers_GetFloatParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGGraphParametersHelpers_GetFloatParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt32Parameter_Statics
	{
		struct PCGGraphParametersHelpers_eventGetInt32Parameter_Parms
		{
			UPCGGraphInstance* GraphInstance;
			FName Name;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt32Parameter_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventGetInt32Parameter_Parms, GraphInstance), Z_Construct_UClass_UPCGGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt32Parameter_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt32Parameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventGetInt32Parameter_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt32Parameter_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt32Parameter_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt32Parameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventGetInt32Parameter_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt32Parameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt32Parameter_Statics::NewProp_GraphInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt32Parameter_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt32Parameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt32Parameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Graph Parameters" },
		{ "ModuleRelativePath", "Public/Helpers/PCGGraphParametersHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt32Parameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGGraphParametersHelpers, nullptr, "GetInt32Parameter", nullptr, nullptr, Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt32Parameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt32Parameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt32Parameter_Statics::PCGGraphParametersHelpers_eventGetInt32Parameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt32Parameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt32Parameter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt32Parameter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt32Parameter_Statics::PCGGraphParametersHelpers_eventGetInt32Parameter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt32Parameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt32Parameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt64Parameter_Statics
	{
		struct PCGGraphParametersHelpers_eventGetInt64Parameter_Parms
		{
			UPCGGraphInstance* GraphInstance;
			FName Name;
			int64 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt64Parameter_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventGetInt64Parameter_Parms, GraphInstance), Z_Construct_UClass_UPCGGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt64Parameter_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt64Parameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventGetInt64Parameter_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt64Parameter_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt64Parameter_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt64Parameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventGetInt64Parameter_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt64Parameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt64Parameter_Statics::NewProp_GraphInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt64Parameter_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt64Parameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt64Parameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Graph Parameters" },
		{ "ModuleRelativePath", "Public/Helpers/PCGGraphParametersHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt64Parameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGGraphParametersHelpers, nullptr, "GetInt64Parameter", nullptr, nullptr, Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt64Parameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt64Parameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt64Parameter_Statics::PCGGraphParametersHelpers_eventGetInt64Parameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt64Parameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt64Parameter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt64Parameter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt64Parameter_Statics::PCGGraphParametersHelpers_eventGetInt64Parameter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt64Parameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt64Parameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGGraphParametersHelpers_GetNameParameter_Statics
	{
		struct PCGGraphParametersHelpers_eventGetNameParameter_Parms
		{
			UPCGGraphInstance* GraphInstance;
			FName Name;
			FName ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetNameParameter_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventGetNameParameter_Parms, GraphInstance), Z_Construct_UClass_UPCGGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_GetNameParameter_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetNameParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventGetNameParameter_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetNameParameter_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_GetNameParameter_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetNameParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventGetNameParameter_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGGraphParametersHelpers_GetNameParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_GetNameParameter_Statics::NewProp_GraphInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_GetNameParameter_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_GetNameParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_GetNameParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Graph Parameters" },
		{ "ModuleRelativePath", "Public/Helpers/PCGGraphParametersHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetNameParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGGraphParametersHelpers, nullptr, "GetNameParameter", nullptr, nullptr, Z_Construct_UFunction_UPCGGraphParametersHelpers_GetNameParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetNameParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetNameParameter_Statics::PCGGraphParametersHelpers_eventGetNameParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetNameParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGGraphParametersHelpers_GetNameParameter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetNameParameter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetNameParameter_Statics::PCGGraphParametersHelpers_eventGetNameParameter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGGraphParametersHelpers_GetNameParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGGraphParametersHelpers_GetNameParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGGraphParametersHelpers_GetRotatorParameter_Statics
	{
		struct PCGGraphParametersHelpers_eventGetRotatorParameter_Parms
		{
			UPCGGraphInstance* GraphInstance;
			FName Name;
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetRotatorParameter_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventGetRotatorParameter_Parms, GraphInstance), Z_Construct_UClass_UPCGGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_GetRotatorParameter_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetRotatorParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventGetRotatorParameter_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetRotatorParameter_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_GetRotatorParameter_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetRotatorParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventGetRotatorParameter_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGGraphParametersHelpers_GetRotatorParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_GetRotatorParameter_Statics::NewProp_GraphInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_GetRotatorParameter_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_GetRotatorParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_GetRotatorParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Graph Parameters" },
		{ "ModuleRelativePath", "Public/Helpers/PCGGraphParametersHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetRotatorParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGGraphParametersHelpers, nullptr, "GetRotatorParameter", nullptr, nullptr, Z_Construct_UFunction_UPCGGraphParametersHelpers_GetRotatorParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetRotatorParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetRotatorParameter_Statics::PCGGraphParametersHelpers_eventGetRotatorParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetRotatorParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGGraphParametersHelpers_GetRotatorParameter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetRotatorParameter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetRotatorParameter_Statics::PCGGraphParametersHelpers_eventGetRotatorParameter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGGraphParametersHelpers_GetRotatorParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGGraphParametersHelpers_GetRotatorParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftClassParameter_Statics
	{
		struct PCGGraphParametersHelpers_eventGetSoftClassParameter_Parms
		{
			UPCGGraphInstance* GraphInstance;
			FName Name;
			TSoftClassPtr<UObject>  ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftClassParameter_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventGetSoftClassParameter_Parms, GraphInstance), Z_Construct_UClass_UPCGGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftClassParameter_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftClassParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventGetSoftClassParameter_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftClassParameter_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftClassParameter_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftClassParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventGetSoftClassParameter_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftClassParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftClassParameter_Statics::NewProp_GraphInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftClassParameter_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftClassParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftClassParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Graph Parameters" },
		{ "ModuleRelativePath", "Public/Helpers/PCGGraphParametersHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftClassParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGGraphParametersHelpers, nullptr, "GetSoftClassParameter", nullptr, nullptr, Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftClassParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftClassParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftClassParameter_Statics::PCGGraphParametersHelpers_eventGetSoftClassParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftClassParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftClassParameter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftClassParameter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftClassParameter_Statics::PCGGraphParametersHelpers_eventGetSoftClassParameter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftClassParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftClassParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftObjectParameter_Statics
	{
		struct PCGGraphParametersHelpers_eventGetSoftObjectParameter_Parms
		{
			UPCGGraphInstance* GraphInstance;
			FName Name;
			TSoftObjectPtr<UObject> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftObjectParameter_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventGetSoftObjectParameter_Parms, GraphInstance), Z_Construct_UClass_UPCGGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftObjectParameter_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftObjectParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventGetSoftObjectParameter_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftObjectParameter_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftObjectParameter_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftObjectParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventGetSoftObjectParameter_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftObjectParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftObjectParameter_Statics::NewProp_GraphInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftObjectParameter_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftObjectParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftObjectParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Graph Parameters" },
		{ "ModuleRelativePath", "Public/Helpers/PCGGraphParametersHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftObjectParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGGraphParametersHelpers, nullptr, "GetSoftObjectParameter", nullptr, nullptr, Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftObjectParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftObjectParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftObjectParameter_Statics::PCGGraphParametersHelpers_eventGetSoftObjectParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftObjectParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftObjectParameter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftObjectParameter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftObjectParameter_Statics::PCGGraphParametersHelpers_eventGetSoftObjectParameter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftObjectParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftObjectParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGGraphParametersHelpers_GetStringParameter_Statics
	{
		struct PCGGraphParametersHelpers_eventGetStringParameter_Parms
		{
			UPCGGraphInstance* GraphInstance;
			FName Name;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetStringParameter_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventGetStringParameter_Parms, GraphInstance), Z_Construct_UClass_UPCGGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_GetStringParameter_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetStringParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventGetStringParameter_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetStringParameter_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_GetStringParameter_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetStringParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventGetStringParameter_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGGraphParametersHelpers_GetStringParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_GetStringParameter_Statics::NewProp_GraphInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_GetStringParameter_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_GetStringParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_GetStringParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Graph Parameters" },
		{ "ModuleRelativePath", "Public/Helpers/PCGGraphParametersHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetStringParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGGraphParametersHelpers, nullptr, "GetStringParameter", nullptr, nullptr, Z_Construct_UFunction_UPCGGraphParametersHelpers_GetStringParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetStringParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetStringParameter_Statics::PCGGraphParametersHelpers_eventGetStringParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetStringParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGGraphParametersHelpers_GetStringParameter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetStringParameter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetStringParameter_Statics::PCGGraphParametersHelpers_eventGetStringParameter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGGraphParametersHelpers_GetStringParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGGraphParametersHelpers_GetStringParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGGraphParametersHelpers_GetTransformParameter_Statics
	{
		struct PCGGraphParametersHelpers_eventGetTransformParameter_Parms
		{
			UPCGGraphInstance* GraphInstance;
			FName Name;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetTransformParameter_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventGetTransformParameter_Parms, GraphInstance), Z_Construct_UClass_UPCGGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_GetTransformParameter_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetTransformParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventGetTransformParameter_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetTransformParameter_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_GetTransformParameter_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetTransformParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventGetTransformParameter_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGGraphParametersHelpers_GetTransformParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_GetTransformParameter_Statics::NewProp_GraphInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_GetTransformParameter_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_GetTransformParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_GetTransformParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Graph Parameters" },
		{ "ModuleRelativePath", "Public/Helpers/PCGGraphParametersHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetTransformParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGGraphParametersHelpers, nullptr, "GetTransformParameter", nullptr, nullptr, Z_Construct_UFunction_UPCGGraphParametersHelpers_GetTransformParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetTransformParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetTransformParameter_Statics::PCGGraphParametersHelpers_eventGetTransformParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetTransformParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGGraphParametersHelpers_GetTransformParameter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetTransformParameter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetTransformParameter_Statics::PCGGraphParametersHelpers_eventGetTransformParameter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGGraphParametersHelpers_GetTransformParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGGraphParametersHelpers_GetTransformParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGGraphParametersHelpers_GetVectorParameter_Statics
	{
		struct PCGGraphParametersHelpers_eventGetVectorParameter_Parms
		{
			UPCGGraphInstance* GraphInstance;
			FName Name;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetVectorParameter_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventGetVectorParameter_Parms, GraphInstance), Z_Construct_UClass_UPCGGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_GetVectorParameter_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetVectorParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventGetVectorParameter_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetVectorParameter_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_GetVectorParameter_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetVectorParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventGetVectorParameter_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGGraphParametersHelpers_GetVectorParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_GetVectorParameter_Statics::NewProp_GraphInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_GetVectorParameter_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_GetVectorParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_GetVectorParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Graph Parameters" },
		{ "ModuleRelativePath", "Public/Helpers/PCGGraphParametersHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGGraphParametersHelpers_GetVectorParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGGraphParametersHelpers, nullptr, "GetVectorParameter", nullptr, nullptr, Z_Construct_UFunction_UPCGGraphParametersHelpers_GetVectorParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetVectorParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetVectorParameter_Statics::PCGGraphParametersHelpers_eventGetVectorParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetVectorParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGGraphParametersHelpers_GetVectorParameter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetVectorParameter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_GetVectorParameter_Statics::PCGGraphParametersHelpers_eventGetVectorParameter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGGraphParametersHelpers_GetVectorParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGGraphParametersHelpers_GetVectorParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGGraphParametersHelpers_IsOverridden_Statics
	{
		struct PCGGraphParametersHelpers_eventIsOverridden_Parms
		{
			UPCGGraphInstance* GraphInstance;
			FName Name;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_IsOverridden_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventIsOverridden_Parms, GraphInstance), Z_Construct_UClass_UPCGGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_IsOverridden_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_IsOverridden_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventIsOverridden_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_IsOverridden_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_IsOverridden_Statics::NewProp_Name_MetaData) };
	void Z_Construct_UFunction_UPCGGraphParametersHelpers_IsOverridden_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PCGGraphParametersHelpers_eventIsOverridden_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_IsOverridden_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGGraphParametersHelpers_eventIsOverridden_Parms), &Z_Construct_UFunction_UPCGGraphParametersHelpers_IsOverridden_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGGraphParametersHelpers_IsOverridden_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_IsOverridden_Statics::NewProp_GraphInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_IsOverridden_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_IsOverridden_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_IsOverridden_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Graph Parameters" },
		{ "ModuleRelativePath", "Public/Helpers/PCGGraphParametersHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGGraphParametersHelpers_IsOverridden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGGraphParametersHelpers, nullptr, "IsOverridden", nullptr, nullptr, Z_Construct_UFunction_UPCGGraphParametersHelpers_IsOverridden_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_IsOverridden_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_IsOverridden_Statics::PCGGraphParametersHelpers_eventIsOverridden_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_IsOverridden_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGGraphParametersHelpers_IsOverridden_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_IsOverridden_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_IsOverridden_Statics::PCGGraphParametersHelpers_eventIsOverridden_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGGraphParametersHelpers_IsOverridden()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGGraphParametersHelpers_IsOverridden_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGGraphParametersHelpers_SetBoolParameter_Statics
	{
		struct PCGGraphParametersHelpers_eventSetBoolParameter_Parms
		{
			UPCGGraphInstance* GraphInstance;
			FName Name;
			bool bValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bValue_MetaData[];
#endif
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetBoolParameter_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventSetBoolParameter_Parms, GraphInstance), Z_Construct_UClass_UPCGGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetBoolParameter_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetBoolParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventSetBoolParameter_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetBoolParameter_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetBoolParameter_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetBoolParameter_Statics::NewProp_bValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPCGGraphParametersHelpers_SetBoolParameter_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((PCGGraphParametersHelpers_eventSetBoolParameter_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetBoolParameter_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGGraphParametersHelpers_eventSetBoolParameter_Parms), &Z_Construct_UFunction_UPCGGraphParametersHelpers_SetBoolParameter_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetBoolParameter_Statics::NewProp_bValue_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetBoolParameter_Statics::NewProp_bValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGGraphParametersHelpers_SetBoolParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetBoolParameter_Statics::NewProp_GraphInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetBoolParameter_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetBoolParameter_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetBoolParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Graph Parameters" },
		{ "ModuleRelativePath", "Public/Helpers/PCGGraphParametersHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetBoolParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGGraphParametersHelpers, nullptr, "SetBoolParameter", nullptr, nullptr, Z_Construct_UFunction_UPCGGraphParametersHelpers_SetBoolParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetBoolParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetBoolParameter_Statics::PCGGraphParametersHelpers_eventSetBoolParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetBoolParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetBoolParameter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetBoolParameter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetBoolParameter_Statics::PCGGraphParametersHelpers_eventSetBoolParameter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGGraphParametersHelpers_SetBoolParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGGraphParametersHelpers_SetBoolParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGGraphParametersHelpers_SetByteParameter_Statics
	{
		struct PCGGraphParametersHelpers_eventSetByteParameter_Parms
		{
			UPCGGraphInstance* GraphInstance;
			FName Name;
			uint8 Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetByteParameter_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventSetByteParameter_Parms, GraphInstance), Z_Construct_UClass_UPCGGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetByteParameter_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetByteParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventSetByteParameter_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetByteParameter_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetByteParameter_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetByteParameter_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetByteParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventSetByteParameter_Parms, Value), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetByteParameter_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetByteParameter_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGGraphParametersHelpers_SetByteParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetByteParameter_Statics::NewProp_GraphInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetByteParameter_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetByteParameter_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetByteParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Graph Parameters" },
		{ "ModuleRelativePath", "Public/Helpers/PCGGraphParametersHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetByteParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGGraphParametersHelpers, nullptr, "SetByteParameter", nullptr, nullptr, Z_Construct_UFunction_UPCGGraphParametersHelpers_SetByteParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetByteParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetByteParameter_Statics::PCGGraphParametersHelpers_eventSetByteParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetByteParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetByteParameter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetByteParameter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetByteParameter_Statics::PCGGraphParametersHelpers_eventSetByteParameter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGGraphParametersHelpers_SetByteParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGGraphParametersHelpers_SetByteParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGGraphParametersHelpers_SetDoubleParameter_Statics
	{
		struct PCGGraphParametersHelpers_eventSetDoubleParameter_Parms
		{
			UPCGGraphInstance* GraphInstance;
			FName Name;
			double Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetDoubleParameter_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventSetDoubleParameter_Parms, GraphInstance), Z_Construct_UClass_UPCGGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetDoubleParameter_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetDoubleParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventSetDoubleParameter_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetDoubleParameter_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetDoubleParameter_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetDoubleParameter_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetDoubleParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventSetDoubleParameter_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetDoubleParameter_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetDoubleParameter_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGGraphParametersHelpers_SetDoubleParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetDoubleParameter_Statics::NewProp_GraphInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetDoubleParameter_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetDoubleParameter_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetDoubleParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Graph Parameters" },
		{ "ModuleRelativePath", "Public/Helpers/PCGGraphParametersHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetDoubleParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGGraphParametersHelpers, nullptr, "SetDoubleParameter", nullptr, nullptr, Z_Construct_UFunction_UPCGGraphParametersHelpers_SetDoubleParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetDoubleParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetDoubleParameter_Statics::PCGGraphParametersHelpers_eventSetDoubleParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetDoubleParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetDoubleParameter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetDoubleParameter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetDoubleParameter_Statics::PCGGraphParametersHelpers_eventSetDoubleParameter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGGraphParametersHelpers_SetDoubleParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGGraphParametersHelpers_SetDoubleParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGGraphParametersHelpers_SetEnumParameter_Statics
	{
		struct PCGGraphParametersHelpers_eventSetEnumParameter_Parms
		{
			UPCGGraphInstance* GraphInstance;
			FName Name;
			const UEnum* Enum;
			uint8 Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Enum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetEnumParameter_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventSetEnumParameter_Parms, GraphInstance), Z_Construct_UClass_UPCGGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetEnumParameter_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetEnumParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventSetEnumParameter_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetEnumParameter_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetEnumParameter_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetEnumParameter_Statics::NewProp_Enum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetEnumParameter_Statics::NewProp_Enum = { "Enum", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventSetEnumParameter_Parms, Enum), Z_Construct_UClass_UEnum, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetEnumParameter_Statics::NewProp_Enum_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetEnumParameter_Statics::NewProp_Enum_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetEnumParameter_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetEnumParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventSetEnumParameter_Parms, Value), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetEnumParameter_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetEnumParameter_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGGraphParametersHelpers_SetEnumParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetEnumParameter_Statics::NewProp_GraphInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetEnumParameter_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetEnumParameter_Statics::NewProp_Enum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetEnumParameter_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetEnumParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Graph Parameters" },
		{ "ModuleRelativePath", "Public/Helpers/PCGGraphParametersHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetEnumParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGGraphParametersHelpers, nullptr, "SetEnumParameter", nullptr, nullptr, Z_Construct_UFunction_UPCGGraphParametersHelpers_SetEnumParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetEnumParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetEnumParameter_Statics::PCGGraphParametersHelpers_eventSetEnumParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetEnumParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetEnumParameter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetEnumParameter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetEnumParameter_Statics::PCGGraphParametersHelpers_eventSetEnumParameter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGGraphParametersHelpers_SetEnumParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGGraphParametersHelpers_SetEnumParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGGraphParametersHelpers_SetFloatParameter_Statics
	{
		struct PCGGraphParametersHelpers_eventSetFloatParameter_Parms
		{
			UPCGGraphInstance* GraphInstance;
			FName Name;
			float Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetFloatParameter_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventSetFloatParameter_Parms, GraphInstance), Z_Construct_UClass_UPCGGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetFloatParameter_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetFloatParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventSetFloatParameter_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetFloatParameter_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetFloatParameter_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetFloatParameter_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetFloatParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventSetFloatParameter_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetFloatParameter_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetFloatParameter_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGGraphParametersHelpers_SetFloatParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetFloatParameter_Statics::NewProp_GraphInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetFloatParameter_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetFloatParameter_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetFloatParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Graph Parameters" },
		{ "Comment", "////////////\n// Setters\n////////////\n" },
		{ "ModuleRelativePath", "Public/Helpers/PCGGraphParametersHelpers.h" },
		{ "ToolTip", "Setters" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetFloatParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGGraphParametersHelpers, nullptr, "SetFloatParameter", nullptr, nullptr, Z_Construct_UFunction_UPCGGraphParametersHelpers_SetFloatParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetFloatParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetFloatParameter_Statics::PCGGraphParametersHelpers_eventSetFloatParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetFloatParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetFloatParameter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetFloatParameter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetFloatParameter_Statics::PCGGraphParametersHelpers_eventSetFloatParameter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGGraphParametersHelpers_SetFloatParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGGraphParametersHelpers_SetFloatParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt32Parameter_Statics
	{
		struct PCGGraphParametersHelpers_eventSetInt32Parameter_Parms
		{
			UPCGGraphInstance* GraphInstance;
			FName Name;
			int32 Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt32Parameter_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventSetInt32Parameter_Parms, GraphInstance), Z_Construct_UClass_UPCGGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt32Parameter_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt32Parameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventSetInt32Parameter_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt32Parameter_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt32Parameter_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt32Parameter_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt32Parameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventSetInt32Parameter_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt32Parameter_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt32Parameter_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt32Parameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt32Parameter_Statics::NewProp_GraphInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt32Parameter_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt32Parameter_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt32Parameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Graph Parameters" },
		{ "ModuleRelativePath", "Public/Helpers/PCGGraphParametersHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt32Parameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGGraphParametersHelpers, nullptr, "SetInt32Parameter", nullptr, nullptr, Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt32Parameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt32Parameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt32Parameter_Statics::PCGGraphParametersHelpers_eventSetInt32Parameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt32Parameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt32Parameter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt32Parameter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt32Parameter_Statics::PCGGraphParametersHelpers_eventSetInt32Parameter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt32Parameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt32Parameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt64Parameter_Statics
	{
		struct PCGGraphParametersHelpers_eventSetInt64Parameter_Parms
		{
			UPCGGraphInstance* GraphInstance;
			FName Name;
			int64 Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt64Parameter_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventSetInt64Parameter_Parms, GraphInstance), Z_Construct_UClass_UPCGGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt64Parameter_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt64Parameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventSetInt64Parameter_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt64Parameter_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt64Parameter_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt64Parameter_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt64Parameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventSetInt64Parameter_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt64Parameter_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt64Parameter_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt64Parameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt64Parameter_Statics::NewProp_GraphInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt64Parameter_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt64Parameter_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt64Parameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Graph Parameters" },
		{ "ModuleRelativePath", "Public/Helpers/PCGGraphParametersHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt64Parameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGGraphParametersHelpers, nullptr, "SetInt64Parameter", nullptr, nullptr, Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt64Parameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt64Parameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt64Parameter_Statics::PCGGraphParametersHelpers_eventSetInt64Parameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt64Parameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt64Parameter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt64Parameter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt64Parameter_Statics::PCGGraphParametersHelpers_eventSetInt64Parameter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt64Parameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt64Parameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGGraphParametersHelpers_SetNameParameter_Statics
	{
		struct PCGGraphParametersHelpers_eventSetNameParameter_Parms
		{
			UPCGGraphInstance* GraphInstance;
			FName Name;
			FName Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetNameParameter_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventSetNameParameter_Parms, GraphInstance), Z_Construct_UClass_UPCGGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetNameParameter_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetNameParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventSetNameParameter_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetNameParameter_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetNameParameter_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetNameParameter_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetNameParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventSetNameParameter_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetNameParameter_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetNameParameter_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGGraphParametersHelpers_SetNameParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetNameParameter_Statics::NewProp_GraphInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetNameParameter_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetNameParameter_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetNameParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Graph Parameters" },
		{ "ModuleRelativePath", "Public/Helpers/PCGGraphParametersHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetNameParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGGraphParametersHelpers, nullptr, "SetNameParameter", nullptr, nullptr, Z_Construct_UFunction_UPCGGraphParametersHelpers_SetNameParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetNameParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetNameParameter_Statics::PCGGraphParametersHelpers_eventSetNameParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetNameParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetNameParameter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetNameParameter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetNameParameter_Statics::PCGGraphParametersHelpers_eventSetNameParameter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGGraphParametersHelpers_SetNameParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGGraphParametersHelpers_SetNameParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGGraphParametersHelpers_SetRotatorParameter_Statics
	{
		struct PCGGraphParametersHelpers_eventSetRotatorParameter_Parms
		{
			UPCGGraphInstance* GraphInstance;
			FName Name;
			FRotator Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetRotatorParameter_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventSetRotatorParameter_Parms, GraphInstance), Z_Construct_UClass_UPCGGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetRotatorParameter_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetRotatorParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventSetRotatorParameter_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetRotatorParameter_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetRotatorParameter_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetRotatorParameter_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetRotatorParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventSetRotatorParameter_Parms, Value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetRotatorParameter_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetRotatorParameter_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGGraphParametersHelpers_SetRotatorParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetRotatorParameter_Statics::NewProp_GraphInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetRotatorParameter_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetRotatorParameter_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetRotatorParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Graph Parameters" },
		{ "ModuleRelativePath", "Public/Helpers/PCGGraphParametersHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetRotatorParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGGraphParametersHelpers, nullptr, "SetRotatorParameter", nullptr, nullptr, Z_Construct_UFunction_UPCGGraphParametersHelpers_SetRotatorParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetRotatorParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetRotatorParameter_Statics::PCGGraphParametersHelpers_eventSetRotatorParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetRotatorParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetRotatorParameter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetRotatorParameter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetRotatorParameter_Statics::PCGGraphParametersHelpers_eventSetRotatorParameter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGGraphParametersHelpers_SetRotatorParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGGraphParametersHelpers_SetRotatorParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftClassParameter_Statics
	{
		struct PCGGraphParametersHelpers_eventSetSoftClassParameter_Parms
		{
			UPCGGraphInstance* GraphInstance;
			FName Name;
			TSoftClassPtr<UObject>  Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftClassParameter_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventSetSoftClassParameter_Parms, GraphInstance), Z_Construct_UClass_UPCGGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftClassParameter_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftClassParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventSetSoftClassParameter_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftClassParameter_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftClassParameter_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftClassParameter_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftClassParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventSetSoftClassParameter_Parms, Value), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftClassParameter_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftClassParameter_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftClassParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftClassParameter_Statics::NewProp_GraphInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftClassParameter_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftClassParameter_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftClassParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Graph Parameters" },
		{ "ModuleRelativePath", "Public/Helpers/PCGGraphParametersHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftClassParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGGraphParametersHelpers, nullptr, "SetSoftClassParameter", nullptr, nullptr, Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftClassParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftClassParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftClassParameter_Statics::PCGGraphParametersHelpers_eventSetSoftClassParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftClassParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftClassParameter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftClassParameter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftClassParameter_Statics::PCGGraphParametersHelpers_eventSetSoftClassParameter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftClassParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftClassParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftObjectParameter_Statics
	{
		struct PCGGraphParametersHelpers_eventSetSoftObjectParameter_Parms
		{
			UPCGGraphInstance* GraphInstance;
			FName Name;
			TSoftObjectPtr<UObject> Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftObjectParameter_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventSetSoftObjectParameter_Parms, GraphInstance), Z_Construct_UClass_UPCGGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftObjectParameter_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftObjectParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventSetSoftObjectParameter_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftObjectParameter_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftObjectParameter_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftObjectParameter_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftObjectParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventSetSoftObjectParameter_Parms, Value), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftObjectParameter_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftObjectParameter_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftObjectParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftObjectParameter_Statics::NewProp_GraphInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftObjectParameter_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftObjectParameter_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftObjectParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Graph Parameters" },
		{ "ModuleRelativePath", "Public/Helpers/PCGGraphParametersHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftObjectParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGGraphParametersHelpers, nullptr, "SetSoftObjectParameter", nullptr, nullptr, Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftObjectParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftObjectParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftObjectParameter_Statics::PCGGraphParametersHelpers_eventSetSoftObjectParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftObjectParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftObjectParameter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftObjectParameter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftObjectParameter_Statics::PCGGraphParametersHelpers_eventSetSoftObjectParameter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftObjectParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftObjectParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGGraphParametersHelpers_SetStringParameter_Statics
	{
		struct PCGGraphParametersHelpers_eventSetStringParameter_Parms
		{
			UPCGGraphInstance* GraphInstance;
			FName Name;
			FString Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetStringParameter_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventSetStringParameter_Parms, GraphInstance), Z_Construct_UClass_UPCGGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetStringParameter_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetStringParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventSetStringParameter_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetStringParameter_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetStringParameter_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetStringParameter_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetStringParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventSetStringParameter_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetStringParameter_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetStringParameter_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGGraphParametersHelpers_SetStringParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetStringParameter_Statics::NewProp_GraphInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetStringParameter_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetStringParameter_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetStringParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Graph Parameters" },
		{ "ModuleRelativePath", "Public/Helpers/PCGGraphParametersHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetStringParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGGraphParametersHelpers, nullptr, "SetStringParameter", nullptr, nullptr, Z_Construct_UFunction_UPCGGraphParametersHelpers_SetStringParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetStringParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetStringParameter_Statics::PCGGraphParametersHelpers_eventSetStringParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetStringParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetStringParameter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetStringParameter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetStringParameter_Statics::PCGGraphParametersHelpers_eventSetStringParameter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGGraphParametersHelpers_SetStringParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGGraphParametersHelpers_SetStringParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGGraphParametersHelpers_SetTransformParameter_Statics
	{
		struct PCGGraphParametersHelpers_eventSetTransformParameter_Parms
		{
			UPCGGraphInstance* GraphInstance;
			FName Name;
			FTransform Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetTransformParameter_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventSetTransformParameter_Parms, GraphInstance), Z_Construct_UClass_UPCGGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetTransformParameter_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetTransformParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventSetTransformParameter_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetTransformParameter_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetTransformParameter_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetTransformParameter_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetTransformParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventSetTransformParameter_Parms, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetTransformParameter_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetTransformParameter_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGGraphParametersHelpers_SetTransformParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetTransformParameter_Statics::NewProp_GraphInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetTransformParameter_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetTransformParameter_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetTransformParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Graph Parameters" },
		{ "ModuleRelativePath", "Public/Helpers/PCGGraphParametersHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetTransformParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGGraphParametersHelpers, nullptr, "SetTransformParameter", nullptr, nullptr, Z_Construct_UFunction_UPCGGraphParametersHelpers_SetTransformParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetTransformParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetTransformParameter_Statics::PCGGraphParametersHelpers_eventSetTransformParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetTransformParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetTransformParameter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetTransformParameter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetTransformParameter_Statics::PCGGraphParametersHelpers_eventSetTransformParameter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGGraphParametersHelpers_SetTransformParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGGraphParametersHelpers_SetTransformParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGGraphParametersHelpers_SetVectorParameter_Statics
	{
		struct PCGGraphParametersHelpers_eventSetVectorParameter_Parms
		{
			UPCGGraphInstance* GraphInstance;
			FName Name;
			FVector Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetVectorParameter_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventSetVectorParameter_Parms, GraphInstance), Z_Construct_UClass_UPCGGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetVectorParameter_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetVectorParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventSetVectorParameter_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetVectorParameter_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetVectorParameter_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetVectorParameter_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetVectorParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGGraphParametersHelpers_eventSetVectorParameter_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetVectorParameter_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetVectorParameter_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGGraphParametersHelpers_SetVectorParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetVectorParameter_Statics::NewProp_GraphInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetVectorParameter_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGGraphParametersHelpers_SetVectorParameter_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGGraphParametersHelpers_SetVectorParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Graph Parameters" },
		{ "ModuleRelativePath", "Public/Helpers/PCGGraphParametersHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGGraphParametersHelpers_SetVectorParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGGraphParametersHelpers, nullptr, "SetVectorParameter", nullptr, nullptr, Z_Construct_UFunction_UPCGGraphParametersHelpers_SetVectorParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetVectorParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetVectorParameter_Statics::PCGGraphParametersHelpers_eventSetVectorParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetVectorParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGGraphParametersHelpers_SetVectorParameter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetVectorParameter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGGraphParametersHelpers_SetVectorParameter_Statics::PCGGraphParametersHelpers_eventSetVectorParameter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGGraphParametersHelpers_SetVectorParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGGraphParametersHelpers_SetVectorParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGGraphParametersHelpers);
	UClass* Z_Construct_UClass_UPCGGraphParametersHelpers_NoRegister()
	{
		return UPCGGraphParametersHelpers::StaticClass();
	}
	struct Z_Construct_UClass_UPCGGraphParametersHelpers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGGraphParametersHelpers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGGraphParametersHelpers_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPCGGraphParametersHelpers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGGraphParametersHelpers_GetBoolParameter, "GetBoolParameter" }, // 2980263694
		{ &Z_Construct_UFunction_UPCGGraphParametersHelpers_GetByteParameter, "GetByteParameter" }, // 1489595543
		{ &Z_Construct_UFunction_UPCGGraphParametersHelpers_GetDoubleParameter, "GetDoubleParameter" }, // 2673765485
		{ &Z_Construct_UFunction_UPCGGraphParametersHelpers_GetFloatParameter, "GetFloatParameter" }, // 4277670790
		{ &Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt32Parameter, "GetInt32Parameter" }, // 1815835978
		{ &Z_Construct_UFunction_UPCGGraphParametersHelpers_GetInt64Parameter, "GetInt64Parameter" }, // 726719015
		{ &Z_Construct_UFunction_UPCGGraphParametersHelpers_GetNameParameter, "GetNameParameter" }, // 2904601036
		{ &Z_Construct_UFunction_UPCGGraphParametersHelpers_GetRotatorParameter, "GetRotatorParameter" }, // 65130558
		{ &Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftClassParameter, "GetSoftClassParameter" }, // 2868227492
		{ &Z_Construct_UFunction_UPCGGraphParametersHelpers_GetSoftObjectParameter, "GetSoftObjectParameter" }, // 4014759500
		{ &Z_Construct_UFunction_UPCGGraphParametersHelpers_GetStringParameter, "GetStringParameter" }, // 4219594195
		{ &Z_Construct_UFunction_UPCGGraphParametersHelpers_GetTransformParameter, "GetTransformParameter" }, // 706195970
		{ &Z_Construct_UFunction_UPCGGraphParametersHelpers_GetVectorParameter, "GetVectorParameter" }, // 674130508
		{ &Z_Construct_UFunction_UPCGGraphParametersHelpers_IsOverridden, "IsOverridden" }, // 2805849024
		{ &Z_Construct_UFunction_UPCGGraphParametersHelpers_SetBoolParameter, "SetBoolParameter" }, // 2429991187
		{ &Z_Construct_UFunction_UPCGGraphParametersHelpers_SetByteParameter, "SetByteParameter" }, // 477269976
		{ &Z_Construct_UFunction_UPCGGraphParametersHelpers_SetDoubleParameter, "SetDoubleParameter" }, // 1173626517
		{ &Z_Construct_UFunction_UPCGGraphParametersHelpers_SetEnumParameter, "SetEnumParameter" }, // 3478529885
		{ &Z_Construct_UFunction_UPCGGraphParametersHelpers_SetFloatParameter, "SetFloatParameter" }, // 1550444786
		{ &Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt32Parameter, "SetInt32Parameter" }, // 2930412746
		{ &Z_Construct_UFunction_UPCGGraphParametersHelpers_SetInt64Parameter, "SetInt64Parameter" }, // 2066200433
		{ &Z_Construct_UFunction_UPCGGraphParametersHelpers_SetNameParameter, "SetNameParameter" }, // 3987890640
		{ &Z_Construct_UFunction_UPCGGraphParametersHelpers_SetRotatorParameter, "SetRotatorParameter" }, // 1052764355
		{ &Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftClassParameter, "SetSoftClassParameter" }, // 2258086084
		{ &Z_Construct_UFunction_UPCGGraphParametersHelpers_SetSoftObjectParameter, "SetSoftObjectParameter" }, // 3718527234
		{ &Z_Construct_UFunction_UPCGGraphParametersHelpers_SetStringParameter, "SetStringParameter" }, // 803463609
		{ &Z_Construct_UFunction_UPCGGraphParametersHelpers_SetTransformParameter, "SetTransformParameter" }, // 2870765628
		{ &Z_Construct_UFunction_UPCGGraphParametersHelpers_SetVectorParameter, "SetVectorParameter" }, // 2102272381
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGGraphParametersHelpers_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGGraphParametersHelpers_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Helpers to dynamically set parameters on graph instances.\n*/" },
		{ "IncludePath", "Helpers/PCGGraphParametersHelpers.h" },
		{ "ModuleRelativePath", "Public/Helpers/PCGGraphParametersHelpers.h" },
		{ "ToolTip", "Helpers to dynamically set parameters on graph instances." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGGraphParametersHelpers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGGraphParametersHelpers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGGraphParametersHelpers_Statics::ClassParams = {
		&UPCGGraphParametersHelpers::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGGraphParametersHelpers_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGGraphParametersHelpers_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPCGGraphParametersHelpers()
	{
		if (!Z_Registration_Info_UClass_UPCGGraphParametersHelpers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGGraphParametersHelpers.OuterSingleton, Z_Construct_UClass_UPCGGraphParametersHelpers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGGraphParametersHelpers.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGGraphParametersHelpers>()
	{
		return UPCGGraphParametersHelpers::StaticClass();
	}
	UPCGGraphParametersHelpers::UPCGGraphParametersHelpers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGGraphParametersHelpers);
	UPCGGraphParametersHelpers::~UPCGGraphParametersHelpers() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Helpers_PCGGraphParametersHelpers_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Helpers_PCGGraphParametersHelpers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGGraphParametersHelpers, UPCGGraphParametersHelpers::StaticClass, TEXT("UPCGGraphParametersHelpers"), &Z_Registration_Info_UClass_UPCGGraphParametersHelpers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGGraphParametersHelpers), 248545556U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Helpers_PCGGraphParametersHelpers_h_775048545(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Helpers_PCGGraphParametersHelpers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Helpers_PCGGraphParametersHelpers_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
