// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Tests/RemoteControlDeltaAPITestData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteControlDeltaAPITestData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URemoteControlDeltaAPITestObject();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URemoteControlDeltaAPITestObject_NoRegister();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlDeltaAPITestStruct();
	UPackage* Z_Construct_UPackage__Script_RemoteControl();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteControlDeltaAPITestStruct;
class UScriptStruct* FRemoteControlDeltaAPITestStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteControlDeltaAPITestStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteControlDeltaAPITestStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteControlDeltaAPITestStruct, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RemoteControlDeltaAPITestStruct"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteControlDeltaAPITestStruct.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRemoteControlDeltaAPITestStruct>()
{
	return FRemoteControlDeltaAPITestStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemoteControlDeltaAPITestStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlDeltaAPITestStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/RemoteControlDeltaAPITestData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteControlDeltaAPITestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteControlDeltaAPITestStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlDeltaAPITestStruct_Statics::NewProp_ColorValue_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlDeltaAPITestData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteControlDeltaAPITestStruct_Statics::NewProp_ColorValue = { "ColorValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemoteControlDeltaAPITestStruct, ColorValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlDeltaAPITestStruct_Statics::NewProp_ColorValue_MetaData), Z_Construct_UScriptStruct_FRemoteControlDeltaAPITestStruct_Statics::NewProp_ColorValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteControlDeltaAPITestStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlDeltaAPITestStruct_Statics::NewProp_ColorValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteControlDeltaAPITestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		nullptr,
		&NewStructOps,
		"RemoteControlDeltaAPITestStruct",
		Z_Construct_UScriptStruct_FRemoteControlDeltaAPITestStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlDeltaAPITestStruct_Statics::PropPointers),
		sizeof(FRemoteControlDeltaAPITestStruct),
		alignof(FRemoteControlDeltaAPITestStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlDeltaAPITestStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRemoteControlDeltaAPITestStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlDeltaAPITestStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlDeltaAPITestStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_RemoteControlDeltaAPITestStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteControlDeltaAPITestStruct.InnerSingleton, Z_Construct_UScriptStruct_FRemoteControlDeltaAPITestStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemoteControlDeltaAPITestStruct.InnerSingleton;
	}
	DEFINE_FUNCTION(URemoteControlDeltaAPITestObject::execSetInt32WithSetterValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInt32WithSetterValue(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteControlDeltaAPITestObject::execGetInt32WithSetterValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetInt32WithSetterValue();
		P_NATIVE_END;
	}
	void URemoteControlDeltaAPITestObject::SetFloatWithSetterValue_WrapperImpl(void* Object, const void* InValue)
	{
		URemoteControlDeltaAPITestObject* Obj = (URemoteControlDeltaAPITestObject*)Object;
		float& Value = *(float*)InValue;
		Obj->SetFloatWithSetterValue(Value);
	}
	void URemoteControlDeltaAPITestObject::StaticRegisterNativesURemoteControlDeltaAPITestObject()
	{
		UClass* Class = URemoteControlDeltaAPITestObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInt32WithSetterValue", &URemoteControlDeltaAPITestObject::execGetInt32WithSetterValue },
			{ "SetInt32WithSetterValue", &URemoteControlDeltaAPITestObject::execSetInt32WithSetterValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URemoteControlDeltaAPITestObject_GetInt32WithSetterValue_Statics
	{
		struct RemoteControlDeltaAPITestObject_eventGetInt32WithSetterValue_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteControlDeltaAPITestObject_GetInt32WithSetterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RemoteControlDeltaAPITestObject_eventGetInt32WithSetterValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteControlDeltaAPITestObject_GetInt32WithSetterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteControlDeltaAPITestObject_GetInt32WithSetterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteControlDeltaAPITestObject_GetInt32WithSetterValue_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlDeltaAPITestData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteControlDeltaAPITestObject_GetInt32WithSetterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteControlDeltaAPITestObject, nullptr, "GetInt32WithSetterValue", nullptr, nullptr, Z_Construct_UFunction_URemoteControlDeltaAPITestObject_GetInt32WithSetterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteControlDeltaAPITestObject_GetInt32WithSetterValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_URemoteControlDeltaAPITestObject_GetInt32WithSetterValue_Statics::RemoteControlDeltaAPITestObject_eventGetInt32WithSetterValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteControlDeltaAPITestObject_GetInt32WithSetterValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_URemoteControlDeltaAPITestObject_GetInt32WithSetterValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteControlDeltaAPITestObject_GetInt32WithSetterValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URemoteControlDeltaAPITestObject_GetInt32WithSetterValue_Statics::RemoteControlDeltaAPITestObject_eventGetInt32WithSetterValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URemoteControlDeltaAPITestObject_GetInt32WithSetterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteControlDeltaAPITestObject_GetInt32WithSetterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteControlDeltaAPITestObject_SetInt32WithSetterValue_Statics
	{
		struct RemoteControlDeltaAPITestObject_eventSetInt32WithSetterValue_Parms
		{
			int32 NewValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteControlDeltaAPITestObject_SetInt32WithSetterValue_Statics::NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteControlDeltaAPITestObject_SetInt32WithSetterValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RemoteControlDeltaAPITestObject_eventSetInt32WithSetterValue_Parms, NewValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteControlDeltaAPITestObject_SetInt32WithSetterValue_Statics::NewProp_NewValue_MetaData), Z_Construct_UFunction_URemoteControlDeltaAPITestObject_SetInt32WithSetterValue_Statics::NewProp_NewValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteControlDeltaAPITestObject_SetInt32WithSetterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteControlDeltaAPITestObject_SetInt32WithSetterValue_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteControlDeltaAPITestObject_SetInt32WithSetterValue_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlDeltaAPITestData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteControlDeltaAPITestObject_SetInt32WithSetterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteControlDeltaAPITestObject, nullptr, "SetInt32WithSetterValue", nullptr, nullptr, Z_Construct_UFunction_URemoteControlDeltaAPITestObject_SetInt32WithSetterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteControlDeltaAPITestObject_SetInt32WithSetterValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_URemoteControlDeltaAPITestObject_SetInt32WithSetterValue_Statics::RemoteControlDeltaAPITestObject_eventSetInt32WithSetterValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteControlDeltaAPITestObject_SetInt32WithSetterValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_URemoteControlDeltaAPITestObject_SetInt32WithSetterValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteControlDeltaAPITestObject_SetInt32WithSetterValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URemoteControlDeltaAPITestObject_SetInt32WithSetterValue_Statics::RemoteControlDeltaAPITestObject_eventSetInt32WithSetterValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URemoteControlDeltaAPITestObject_SetInt32WithSetterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteControlDeltaAPITestObject_SetInt32WithSetterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemoteControlDeltaAPITestObject);
	UClass* Z_Construct_UClass_URemoteControlDeltaAPITestObject_NoRegister()
	{
		return URemoteControlDeltaAPITestObject::StaticClass();
	}
	struct Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int32Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Int32Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StructValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int32WithSetterValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Int32WithSetterValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatWithSetterValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatWithSetterValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URemoteControlDeltaAPITestObject_GetInt32WithSetterValue, "GetInt32WithSetterValue" }, // 2779875779
		{ &Z_Construct_UFunction_URemoteControlDeltaAPITestObject_SetInt32WithSetterValue, "SetInt32WithSetterValue" }, // 3661324746
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/RemoteControlDeltaAPITestData.h" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlDeltaAPITestData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::NewProp_Int32Value_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlDeltaAPITestData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::NewProp_Int32Value = { "Int32Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URemoteControlDeltaAPITestObject, Int32Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::NewProp_Int32Value_MetaData), Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::NewProp_Int32Value_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::NewProp_FloatValue_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlDeltaAPITestData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URemoteControlDeltaAPITestObject, FloatValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::NewProp_FloatValue_MetaData), Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::NewProp_FloatValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::NewProp_VectorValue_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlDeltaAPITestData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::NewProp_VectorValue = { "VectorValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URemoteControlDeltaAPITestObject, VectorValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::NewProp_VectorValue_MetaData), Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::NewProp_VectorValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::NewProp_ColorValue_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlDeltaAPITestData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::NewProp_ColorValue = { "ColorValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URemoteControlDeltaAPITestObject, ColorValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::NewProp_ColorValue_MetaData), Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::NewProp_ColorValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::NewProp_StructValue_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlDeltaAPITestData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::NewProp_StructValue = { "StructValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URemoteControlDeltaAPITestObject, StructValue), Z_Construct_UScriptStruct_FRemoteControlDeltaAPITestStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::NewProp_StructValue_MetaData), Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::NewProp_StructValue_MetaData) }; // 4077308243
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::NewProp_Int32WithSetterValue_MetaData[] = {
		{ "BlueprintGetter", "GetInt32WithSetterValue" },
		{ "BlueprintSetter", "SetInt32WithSetterValue" },
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlDeltaAPITestData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::NewProp_Int32WithSetterValue = { "Int32WithSetterValue", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URemoteControlDeltaAPITestObject, Int32WithSetterValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::NewProp_Int32WithSetterValue_MetaData), Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::NewProp_Int32WithSetterValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::NewProp_FloatWithSetterValue_MetaData[] = {
		{ "Category", "RC" },
		{ "Comment", "/** Uses Setter - not BlueprintSetter */" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlDeltaAPITestData.h" },
		{ "ToolTip", "Uses Setter - not BlueprintSetter" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::NewProp_FloatWithSetterValue = { "FloatWithSetterValue", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &URemoteControlDeltaAPITestObject::SetFloatWithSetterValue_WrapperImpl, nullptr, 1, STRUCT_OFFSET(URemoteControlDeltaAPITestObject, FloatWithSetterValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::NewProp_FloatWithSetterValue_MetaData), Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::NewProp_FloatWithSetterValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::NewProp_Int32Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::NewProp_FloatValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::NewProp_VectorValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::NewProp_ColorValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::NewProp_StructValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::NewProp_Int32WithSetterValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::NewProp_FloatWithSetterValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoteControlDeltaAPITestObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::ClassParams = {
		&URemoteControlDeltaAPITestObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::Class_MetaDataParams), Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_URemoteControlDeltaAPITestObject()
	{
		if (!Z_Registration_Info_UClass_URemoteControlDeltaAPITestObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemoteControlDeltaAPITestObject.OuterSingleton, Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URemoteControlDeltaAPITestObject.OuterSingleton;
	}
	template<> REMOTECONTROL_API UClass* StaticClass<URemoteControlDeltaAPITestObject>()
	{
		return URemoteControlDeltaAPITestObject::StaticClass();
	}
	URemoteControlDeltaAPITestObject::URemoteControlDeltaAPITestObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemoteControlDeltaAPITestObject);
	URemoteControlDeltaAPITestObject::~URemoteControlDeltaAPITestObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlDeltaAPITestData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlDeltaAPITestData_h_Statics::ScriptStructInfo[] = {
		{ FRemoteControlDeltaAPITestStruct::StaticStruct, Z_Construct_UScriptStruct_FRemoteControlDeltaAPITestStruct_Statics::NewStructOps, TEXT("RemoteControlDeltaAPITestStruct"), &Z_Registration_Info_UScriptStruct_RemoteControlDeltaAPITestStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteControlDeltaAPITestStruct), 4077308243U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlDeltaAPITestData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URemoteControlDeltaAPITestObject, URemoteControlDeltaAPITestObject::StaticClass, TEXT("URemoteControlDeltaAPITestObject"), &Z_Registration_Info_UClass_URemoteControlDeltaAPITestObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemoteControlDeltaAPITestObject), 2580026733U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlDeltaAPITestData_h_1084184085(TEXT("/Script/RemoteControl"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlDeltaAPITestData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlDeltaAPITestData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlDeltaAPITestData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlDeltaAPITestData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
