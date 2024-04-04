// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Utils/RenderGridRemoteControlUtils.h"
#include "InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRenderGridRemoteControlUtils() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	RENDERGRID_API UClass* Z_Construct_UClass_URenderGridRemoteControlUtils();
	RENDERGRID_API UClass* Z_Construct_UClass_URenderGridRemoteControlUtils_NoRegister();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
	UPackage* Z_Construct_UPackage__Script_RenderGrid();
// End Cross Module References
	DEFINE_FUNCTION(URenderGridRemoteControlUtils::execLinearColorToJson)
	{
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Value);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Json);
		P_FINISH;
		P_NATIVE_BEGIN;
		URenderGridRemoteControlUtils::LinearColorToJson(Z_Param_Out_Value,Z_Param_Out_Json);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridRemoteControlUtils::execColorToJson)
	{
		P_GET_STRUCT_REF(FColor,Z_Param_Out_Value);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Json);
		P_FINISH;
		P_NATIVE_BEGIN;
		URenderGridRemoteControlUtils::ColorToJson(Z_Param_Out_Value,Z_Param_Out_Json);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridRemoteControlUtils::execTransformToJson)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Value);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Json);
		P_FINISH;
		P_NATIVE_BEGIN;
		URenderGridRemoteControlUtils::TransformToJson(Z_Param_Out_Value,Z_Param_Out_Json);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridRemoteControlUtils::execRotatorToJson)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Value);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Json);
		P_FINISH;
		P_NATIVE_BEGIN;
		URenderGridRemoteControlUtils::RotatorToJson(Z_Param_Out_Value,Z_Param_Out_Json);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridRemoteControlUtils::execVectorToJson)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Value);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Json);
		P_FINISH;
		P_NATIVE_BEGIN;
		URenderGridRemoteControlUtils::VectorToJson(Z_Param_Out_Value,Z_Param_Out_Json);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridRemoteControlUtils::execStructToJson)
	{
		P_GET_STRUCT_REF(FInstancedStruct,Z_Param_Out_Value);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Json);
		P_FINISH;
		P_NATIVE_BEGIN;
		URenderGridRemoteControlUtils::StructToJson(Z_Param_Out_Value,Z_Param_Out_Json);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridRemoteControlUtils::execClassReferenceToJson)
	{
		P_GET_OBJECT(UClass,Z_Param_Value);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Json);
		P_FINISH;
		P_NATIVE_BEGIN;
		URenderGridRemoteControlUtils::ClassReferenceToJson(Z_Param_Value,Z_Param_Out_Json);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridRemoteControlUtils::execObjectReferenceToJson)
	{
		P_GET_OBJECT(UObject,Z_Param_Value);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Json);
		P_FINISH;
		P_NATIVE_BEGIN;
		URenderGridRemoteControlUtils::ObjectReferenceToJson(Z_Param_Value,Z_Param_Out_Json);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridRemoteControlUtils::execTextToJson)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Value);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Json);
		P_FINISH;
		P_NATIVE_BEGIN;
		URenderGridRemoteControlUtils::TextToJson(Z_Param_Out_Value,Z_Param_Out_Json);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridRemoteControlUtils::execNameToJson)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Value);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Json);
		P_FINISH;
		P_NATIVE_BEGIN;
		URenderGridRemoteControlUtils::NameToJson(Z_Param_Out_Value,Z_Param_Out_Json);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridRemoteControlUtils::execStringToJson)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Json);
		P_FINISH;
		P_NATIVE_BEGIN;
		URenderGridRemoteControlUtils::StringToJson(Z_Param_Value,Z_Param_Out_Json);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridRemoteControlUtils::execBooleanToJson)
	{
		P_GET_UBOOL(Z_Param_Value);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Json);
		P_FINISH;
		P_NATIVE_BEGIN;
		URenderGridRemoteControlUtils::BooleanToJson(Z_Param_Value,Z_Param_Out_Json);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridRemoteControlUtils::execFloatToJson)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Value);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Json);
		P_FINISH;
		P_NATIVE_BEGIN;
		URenderGridRemoteControlUtils::FloatToJson(Z_Param_Value,Z_Param_Out_Json);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridRemoteControlUtils::execInt64ToJson)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_Value);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Json);
		P_FINISH;
		P_NATIVE_BEGIN;
		URenderGridRemoteControlUtils::Int64ToJson(Z_Param_Value,Z_Param_Out_Json);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridRemoteControlUtils::execInt32ToJson)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Json);
		P_FINISH;
		P_NATIVE_BEGIN;
		URenderGridRemoteControlUtils::Int32ToJson(Z_Param_Value,Z_Param_Out_Json);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridRemoteControlUtils::execByteToJson)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Value);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Json);
		P_FINISH;
		P_NATIVE_BEGIN;
		URenderGridRemoteControlUtils::ByteToJson(Z_Param_Value,Z_Param_Out_Json);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridRemoteControlUtils::execParseJsonAsLinearColor)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Json);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_DefaultValue);
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		URenderGridRemoteControlUtils::ParseJsonAsLinearColor(Z_Param_Json,Z_Param_Out_DefaultValue,Z_Param_Out_bSuccess,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridRemoteControlUtils::execParseJsonAsColor)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Json);
		P_GET_STRUCT_REF(FColor,Z_Param_Out_DefaultValue);
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
		P_GET_STRUCT_REF(FColor,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		URenderGridRemoteControlUtils::ParseJsonAsColor(Z_Param_Json,Z_Param_Out_DefaultValue,Z_Param_Out_bSuccess,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridRemoteControlUtils::execParseJsonAsTransform)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Json);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_DefaultValue);
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		URenderGridRemoteControlUtils::ParseJsonAsTransform(Z_Param_Json,Z_Param_Out_DefaultValue,Z_Param_Out_bSuccess,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridRemoteControlUtils::execParseJsonAsRotator)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Json);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_DefaultValue);
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		URenderGridRemoteControlUtils::ParseJsonAsRotator(Z_Param_Json,Z_Param_Out_DefaultValue,Z_Param_Out_bSuccess,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridRemoteControlUtils::execParseJsonAsVector)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Json);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_DefaultValue);
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		URenderGridRemoteControlUtils::ParseJsonAsVector(Z_Param_Json,Z_Param_Out_DefaultValue,Z_Param_Out_bSuccess,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridRemoteControlUtils::execParseJsonAsStruct)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Json);
		P_GET_STRUCT_REF(FInstancedStruct,Z_Param_Out_DefaultValue);
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
		P_GET_STRUCT_REF(FInstancedStruct,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		URenderGridRemoteControlUtils::ParseJsonAsStruct(Z_Param_Json,Z_Param_Out_DefaultValue,Z_Param_Out_bSuccess,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridRemoteControlUtils::execParseJsonAsClassReference)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Json);
		P_GET_OBJECT(UClass,Z_Param_DefaultValue);
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
		P_GET_OBJECT_REF(UClass,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		URenderGridRemoteControlUtils::ParseJsonAsClassReference(Z_Param_Json,Z_Param_DefaultValue,Z_Param_Out_bSuccess,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridRemoteControlUtils::execParseJsonAsObjectReference)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Json);
		P_GET_OBJECT(UObject,Z_Param_DefaultValue);
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
		P_GET_OBJECT_REF(UObject,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		URenderGridRemoteControlUtils::ParseJsonAsObjectReference(Z_Param_Json,Z_Param_DefaultValue,Z_Param_Out_bSuccess,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridRemoteControlUtils::execParseJsonAsText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Json);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_DefaultValue);
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		URenderGridRemoteControlUtils::ParseJsonAsText(Z_Param_Json,Z_Param_Out_DefaultValue,Z_Param_Out_bSuccess,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridRemoteControlUtils::execParseJsonAsName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Json);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_DefaultValue);
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		URenderGridRemoteControlUtils::ParseJsonAsName(Z_Param_Json,Z_Param_Out_DefaultValue,Z_Param_Out_bSuccess,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridRemoteControlUtils::execParseJsonAsString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Json);
		P_GET_PROPERTY(FStrProperty,Z_Param_DefaultValue);
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		URenderGridRemoteControlUtils::ParseJsonAsString(Z_Param_Json,Z_Param_DefaultValue,Z_Param_Out_bSuccess,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridRemoteControlUtils::execParseJsonAsBoolean)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Json);
		P_GET_UBOOL(Z_Param_DefaultValue);
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
		P_GET_UBOOL_REF(Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		URenderGridRemoteControlUtils::ParseJsonAsBoolean(Z_Param_Json,Z_Param_DefaultValue,Z_Param_Out_bSuccess,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridRemoteControlUtils::execParseJsonAsFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Json);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_DefaultValue);
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		URenderGridRemoteControlUtils::ParseJsonAsFloat(Z_Param_Json,Z_Param_DefaultValue,Z_Param_Out_bSuccess,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridRemoteControlUtils::execParseJsonAsInt64)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Json);
		P_GET_PROPERTY(FInt64Property,Z_Param_DefaultValue);
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		URenderGridRemoteControlUtils::ParseJsonAsInt64(Z_Param_Json,Z_Param_DefaultValue,Z_Param_Out_bSuccess,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridRemoteControlUtils::execParseJsonAsInt32)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Json);
		P_GET_PROPERTY(FIntProperty,Z_Param_DefaultValue);
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		URenderGridRemoteControlUtils::ParseJsonAsInt32(Z_Param_Json,Z_Param_DefaultValue,Z_Param_Out_bSuccess,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridRemoteControlUtils::execParseJsonAsByte)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Json);
		P_GET_PROPERTY(FByteProperty,Z_Param_DefaultValue);
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		URenderGridRemoteControlUtils::ParseJsonAsByte(Z_Param_Json,Z_Param_DefaultValue,Z_Param_Out_bSuccess,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	void URenderGridRemoteControlUtils::StaticRegisterNativesURenderGridRemoteControlUtils()
	{
		UClass* Class = URenderGridRemoteControlUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BooleanToJson", &URenderGridRemoteControlUtils::execBooleanToJson },
			{ "ByteToJson", &URenderGridRemoteControlUtils::execByteToJson },
			{ "ClassReferenceToJson", &URenderGridRemoteControlUtils::execClassReferenceToJson },
			{ "ColorToJson", &URenderGridRemoteControlUtils::execColorToJson },
			{ "FloatToJson", &URenderGridRemoteControlUtils::execFloatToJson },
			{ "Int32ToJson", &URenderGridRemoteControlUtils::execInt32ToJson },
			{ "Int64ToJson", &URenderGridRemoteControlUtils::execInt64ToJson },
			{ "LinearColorToJson", &URenderGridRemoteControlUtils::execLinearColorToJson },
			{ "NameToJson", &URenderGridRemoteControlUtils::execNameToJson },
			{ "ObjectReferenceToJson", &URenderGridRemoteControlUtils::execObjectReferenceToJson },
			{ "ParseJsonAsBoolean", &URenderGridRemoteControlUtils::execParseJsonAsBoolean },
			{ "ParseJsonAsByte", &URenderGridRemoteControlUtils::execParseJsonAsByte },
			{ "ParseJsonAsClassReference", &URenderGridRemoteControlUtils::execParseJsonAsClassReference },
			{ "ParseJsonAsColor", &URenderGridRemoteControlUtils::execParseJsonAsColor },
			{ "ParseJsonAsFloat", &URenderGridRemoteControlUtils::execParseJsonAsFloat },
			{ "ParseJsonAsInt32", &URenderGridRemoteControlUtils::execParseJsonAsInt32 },
			{ "ParseJsonAsInt64", &URenderGridRemoteControlUtils::execParseJsonAsInt64 },
			{ "ParseJsonAsLinearColor", &URenderGridRemoteControlUtils::execParseJsonAsLinearColor },
			{ "ParseJsonAsName", &URenderGridRemoteControlUtils::execParseJsonAsName },
			{ "ParseJsonAsObjectReference", &URenderGridRemoteControlUtils::execParseJsonAsObjectReference },
			{ "ParseJsonAsRotator", &URenderGridRemoteControlUtils::execParseJsonAsRotator },
			{ "ParseJsonAsString", &URenderGridRemoteControlUtils::execParseJsonAsString },
			{ "ParseJsonAsStruct", &URenderGridRemoteControlUtils::execParseJsonAsStruct },
			{ "ParseJsonAsText", &URenderGridRemoteControlUtils::execParseJsonAsText },
			{ "ParseJsonAsTransform", &URenderGridRemoteControlUtils::execParseJsonAsTransform },
			{ "ParseJsonAsVector", &URenderGridRemoteControlUtils::execParseJsonAsVector },
			{ "RotatorToJson", &URenderGridRemoteControlUtils::execRotatorToJson },
			{ "StringToJson", &URenderGridRemoteControlUtils::execStringToJson },
			{ "StructToJson", &URenderGridRemoteControlUtils::execStructToJson },
			{ "TextToJson", &URenderGridRemoteControlUtils::execTextToJson },
			{ "TransformToJson", &URenderGridRemoteControlUtils::execTransformToJson },
			{ "VectorToJson", &URenderGridRemoteControlUtils::execVectorToJson },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URenderGridRemoteControlUtils_BooleanToJson_Statics
	{
		struct RenderGridRemoteControlUtils_eventBooleanToJson_Parms
		{
			bool Value;
			FString Json;
		};
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Json;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URenderGridRemoteControlUtils_BooleanToJson_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((RenderGridRemoteControlUtils_eventBooleanToJson_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_BooleanToJson_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RenderGridRemoteControlUtils_eventBooleanToJson_Parms), &Z_Construct_UFunction_URenderGridRemoteControlUtils_BooleanToJson_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_BooleanToJson_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventBooleanToJson_Parms, Json), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridRemoteControlUtils_BooleanToJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_BooleanToJson_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_BooleanToJson_Statics::NewProp_Json,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_BooleanToJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Utils" },
		{ "Keywords", "remote control" },
		{ "ModuleRelativePath", "Public/Utils/RenderGridRemoteControlUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridRemoteControlUtils_BooleanToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridRemoteControlUtils, nullptr, "BooleanToJson", nullptr, nullptr, Z_Construct_UFunction_URenderGridRemoteControlUtils_BooleanToJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_BooleanToJson_Statics::PropPointers), sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_BooleanToJson_Statics::RenderGridRemoteControlUtils_eventBooleanToJson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_BooleanToJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_URenderGridRemoteControlUtils_BooleanToJson_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_BooleanToJson_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_BooleanToJson_Statics::RenderGridRemoteControlUtils_eventBooleanToJson_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URenderGridRemoteControlUtils_BooleanToJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridRemoteControlUtils_BooleanToJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridRemoteControlUtils_ByteToJson_Statics
	{
		struct RenderGridRemoteControlUtils_eventByteToJson_Parms
		{
			uint8 Value;
			FString Json;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Json;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ByteToJson_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventByteToJson_Parms, Value), nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ByteToJson_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventByteToJson_Parms, Json), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridRemoteControlUtils_ByteToJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ByteToJson_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ByteToJson_Statics::NewProp_Json,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ByteToJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Utils" },
		{ "Keywords", "remote control" },
		{ "ModuleRelativePath", "Public/Utils/RenderGridRemoteControlUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ByteToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridRemoteControlUtils, nullptr, "ByteToJson", nullptr, nullptr, Z_Construct_UFunction_URenderGridRemoteControlUtils_ByteToJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ByteToJson_Statics::PropPointers), sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_ByteToJson_Statics::RenderGridRemoteControlUtils_eventByteToJson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ByteToJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_URenderGridRemoteControlUtils_ByteToJson_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ByteToJson_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_ByteToJson_Statics::RenderGridRemoteControlUtils_eventByteToJson_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URenderGridRemoteControlUtils_ByteToJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridRemoteControlUtils_ByteToJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridRemoteControlUtils_ClassReferenceToJson_Statics
	{
		struct RenderGridRemoteControlUtils_eventClassReferenceToJson_Parms
		{
			UClass* Value;
			FString Json;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Json;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ClassReferenceToJson_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventClassReferenceToJson_Parms, Value), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ClassReferenceToJson_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventClassReferenceToJson_Parms, Json), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridRemoteControlUtils_ClassReferenceToJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ClassReferenceToJson_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ClassReferenceToJson_Statics::NewProp_Json,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ClassReferenceToJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Utils" },
		{ "Keywords", "remote control" },
		{ "ModuleRelativePath", "Public/Utils/RenderGridRemoteControlUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ClassReferenceToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridRemoteControlUtils, nullptr, "ClassReferenceToJson", nullptr, nullptr, Z_Construct_UFunction_URenderGridRemoteControlUtils_ClassReferenceToJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ClassReferenceToJson_Statics::PropPointers), sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_ClassReferenceToJson_Statics::RenderGridRemoteControlUtils_eventClassReferenceToJson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ClassReferenceToJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_URenderGridRemoteControlUtils_ClassReferenceToJson_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ClassReferenceToJson_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_ClassReferenceToJson_Statics::RenderGridRemoteControlUtils_eventClassReferenceToJson_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URenderGridRemoteControlUtils_ClassReferenceToJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridRemoteControlUtils_ClassReferenceToJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridRemoteControlUtils_ColorToJson_Statics
	{
		struct RenderGridRemoteControlUtils_eventColorToJson_Parms
		{
			FColor Value;
			FString Json;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Json;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ColorToJson_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ColorToJson_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventColorToJson_Parms, Value), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ColorToJson_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_URenderGridRemoteControlUtils_ColorToJson_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ColorToJson_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventColorToJson_Parms, Json), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridRemoteControlUtils_ColorToJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ColorToJson_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ColorToJson_Statics::NewProp_Json,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ColorToJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Utils" },
		{ "Keywords", "remote control" },
		{ "ModuleRelativePath", "Public/Utils/RenderGridRemoteControlUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ColorToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridRemoteControlUtils, nullptr, "ColorToJson", nullptr, nullptr, Z_Construct_UFunction_URenderGridRemoteControlUtils_ColorToJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ColorToJson_Statics::PropPointers), sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_ColorToJson_Statics::RenderGridRemoteControlUtils_eventColorToJson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ColorToJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_URenderGridRemoteControlUtils_ColorToJson_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ColorToJson_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_ColorToJson_Statics::RenderGridRemoteControlUtils_eventColorToJson_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URenderGridRemoteControlUtils_ColorToJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridRemoteControlUtils_ColorToJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridRemoteControlUtils_FloatToJson_Statics
	{
		struct RenderGridRemoteControlUtils_eventFloatToJson_Parms
		{
			double Value;
			FString Json;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Json;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_FloatToJson_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventFloatToJson_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_FloatToJson_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventFloatToJson_Parms, Json), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridRemoteControlUtils_FloatToJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_FloatToJson_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_FloatToJson_Statics::NewProp_Json,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_FloatToJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Utils" },
		{ "Keywords", "remote control double" },
		{ "ModuleRelativePath", "Public/Utils/RenderGridRemoteControlUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridRemoteControlUtils_FloatToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridRemoteControlUtils, nullptr, "FloatToJson", nullptr, nullptr, Z_Construct_UFunction_URenderGridRemoteControlUtils_FloatToJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_FloatToJson_Statics::PropPointers), sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_FloatToJson_Statics::RenderGridRemoteControlUtils_eventFloatToJson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_FloatToJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_URenderGridRemoteControlUtils_FloatToJson_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_FloatToJson_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_FloatToJson_Statics::RenderGridRemoteControlUtils_eventFloatToJson_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URenderGridRemoteControlUtils_FloatToJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridRemoteControlUtils_FloatToJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridRemoteControlUtils_Int32ToJson_Statics
	{
		struct RenderGridRemoteControlUtils_eventInt32ToJson_Parms
		{
			int32 Value;
			FString Json;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Json;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_Int32ToJson_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventInt32ToJson_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_Int32ToJson_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventInt32ToJson_Parms, Json), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridRemoteControlUtils_Int32ToJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_Int32ToJson_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_Int32ToJson_Statics::NewProp_Json,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_Int32ToJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Utils" },
		{ "Keywords", "remote control" },
		{ "ModuleRelativePath", "Public/Utils/RenderGridRemoteControlUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridRemoteControlUtils_Int32ToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridRemoteControlUtils, nullptr, "Int32ToJson", nullptr, nullptr, Z_Construct_UFunction_URenderGridRemoteControlUtils_Int32ToJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_Int32ToJson_Statics::PropPointers), sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_Int32ToJson_Statics::RenderGridRemoteControlUtils_eventInt32ToJson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_Int32ToJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_URenderGridRemoteControlUtils_Int32ToJson_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_Int32ToJson_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_Int32ToJson_Statics::RenderGridRemoteControlUtils_eventInt32ToJson_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URenderGridRemoteControlUtils_Int32ToJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridRemoteControlUtils_Int32ToJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridRemoteControlUtils_Int64ToJson_Statics
	{
		struct RenderGridRemoteControlUtils_eventInt64ToJson_Parms
		{
			int64 Value;
			FString Json;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Value;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Json;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_Int64ToJson_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventInt64ToJson_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_Int64ToJson_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventInt64ToJson_Parms, Json), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridRemoteControlUtils_Int64ToJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_Int64ToJson_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_Int64ToJson_Statics::NewProp_Json,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_Int64ToJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Utils" },
		{ "Keywords", "remote control" },
		{ "ModuleRelativePath", "Public/Utils/RenderGridRemoteControlUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridRemoteControlUtils_Int64ToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridRemoteControlUtils, nullptr, "Int64ToJson", nullptr, nullptr, Z_Construct_UFunction_URenderGridRemoteControlUtils_Int64ToJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_Int64ToJson_Statics::PropPointers), sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_Int64ToJson_Statics::RenderGridRemoteControlUtils_eventInt64ToJson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_Int64ToJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_URenderGridRemoteControlUtils_Int64ToJson_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_Int64ToJson_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_Int64ToJson_Statics::RenderGridRemoteControlUtils_eventInt64ToJson_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URenderGridRemoteControlUtils_Int64ToJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridRemoteControlUtils_Int64ToJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridRemoteControlUtils_LinearColorToJson_Statics
	{
		struct RenderGridRemoteControlUtils_eventLinearColorToJson_Parms
		{
			FLinearColor Value;
			FString Json;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Json;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_LinearColorToJson_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_LinearColorToJson_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventLinearColorToJson_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_LinearColorToJson_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_URenderGridRemoteControlUtils_LinearColorToJson_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_LinearColorToJson_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventLinearColorToJson_Parms, Json), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridRemoteControlUtils_LinearColorToJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_LinearColorToJson_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_LinearColorToJson_Statics::NewProp_Json,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_LinearColorToJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Utils" },
		{ "Keywords", "remote control" },
		{ "ModuleRelativePath", "Public/Utils/RenderGridRemoteControlUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridRemoteControlUtils_LinearColorToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridRemoteControlUtils, nullptr, "LinearColorToJson", nullptr, nullptr, Z_Construct_UFunction_URenderGridRemoteControlUtils_LinearColorToJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_LinearColorToJson_Statics::PropPointers), sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_LinearColorToJson_Statics::RenderGridRemoteControlUtils_eventLinearColorToJson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_LinearColorToJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_URenderGridRemoteControlUtils_LinearColorToJson_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_LinearColorToJson_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_LinearColorToJson_Statics::RenderGridRemoteControlUtils_eventLinearColorToJson_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URenderGridRemoteControlUtils_LinearColorToJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridRemoteControlUtils_LinearColorToJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridRemoteControlUtils_NameToJson_Statics
	{
		struct RenderGridRemoteControlUtils_eventNameToJson_Parms
		{
			FName Value;
			FString Json;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Value;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Json;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_NameToJson_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_NameToJson_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventNameToJson_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_NameToJson_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_URenderGridRemoteControlUtils_NameToJson_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_NameToJson_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventNameToJson_Parms, Json), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridRemoteControlUtils_NameToJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_NameToJson_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_NameToJson_Statics::NewProp_Json,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_NameToJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Utils" },
		{ "Keywords", "remote control" },
		{ "ModuleRelativePath", "Public/Utils/RenderGridRemoteControlUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridRemoteControlUtils_NameToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridRemoteControlUtils, nullptr, "NameToJson", nullptr, nullptr, Z_Construct_UFunction_URenderGridRemoteControlUtils_NameToJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_NameToJson_Statics::PropPointers), sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_NameToJson_Statics::RenderGridRemoteControlUtils_eventNameToJson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_NameToJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_URenderGridRemoteControlUtils_NameToJson_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_NameToJson_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_NameToJson_Statics::RenderGridRemoteControlUtils_eventNameToJson_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URenderGridRemoteControlUtils_NameToJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridRemoteControlUtils_NameToJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridRemoteControlUtils_ObjectReferenceToJson_Statics
	{
		struct RenderGridRemoteControlUtils_eventObjectReferenceToJson_Parms
		{
			UObject* Value;
			FString Json;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Json;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ObjectReferenceToJson_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventObjectReferenceToJson_Parms, Value), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ObjectReferenceToJson_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventObjectReferenceToJson_Parms, Json), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridRemoteControlUtils_ObjectReferenceToJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ObjectReferenceToJson_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ObjectReferenceToJson_Statics::NewProp_Json,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ObjectReferenceToJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Utils" },
		{ "Keywords", "remote control" },
		{ "ModuleRelativePath", "Public/Utils/RenderGridRemoteControlUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ObjectReferenceToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridRemoteControlUtils, nullptr, "ObjectReferenceToJson", nullptr, nullptr, Z_Construct_UFunction_URenderGridRemoteControlUtils_ObjectReferenceToJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ObjectReferenceToJson_Statics::PropPointers), sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_ObjectReferenceToJson_Statics::RenderGridRemoteControlUtils_eventObjectReferenceToJson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ObjectReferenceToJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_URenderGridRemoteControlUtils_ObjectReferenceToJson_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ObjectReferenceToJson_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_ObjectReferenceToJson_Statics::RenderGridRemoteControlUtils_eventObjectReferenceToJson_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URenderGridRemoteControlUtils_ObjectReferenceToJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridRemoteControlUtils_ObjectReferenceToJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsBoolean_Statics
	{
		struct RenderGridRemoteControlUtils_eventParseJsonAsBoolean_Parms
		{
			FString Json;
			bool DefaultValue;
			bool bSuccess;
			bool Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Json_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Json;
		static void NewProp_DefaultValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DefaultValue;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsBoolean_Statics::NewProp_Json_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsBoolean_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsBoolean_Parms, Json), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsBoolean_Statics::NewProp_Json_MetaData), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsBoolean_Statics::NewProp_Json_MetaData) };
	void Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsBoolean_Statics::NewProp_DefaultValue_SetBit(void* Obj)
	{
		((RenderGridRemoteControlUtils_eventParseJsonAsBoolean_Parms*)Obj)->DefaultValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsBoolean_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RenderGridRemoteControlUtils_eventParseJsonAsBoolean_Parms), &Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsBoolean_Statics::NewProp_DefaultValue_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsBoolean_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((RenderGridRemoteControlUtils_eventParseJsonAsBoolean_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsBoolean_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RenderGridRemoteControlUtils_eventParseJsonAsBoolean_Parms), &Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsBoolean_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsBoolean_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((RenderGridRemoteControlUtils_eventParseJsonAsBoolean_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsBoolean_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RenderGridRemoteControlUtils_eventParseJsonAsBoolean_Parms), &Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsBoolean_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsBoolean_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsBoolean_Statics::NewProp_Json,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsBoolean_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsBoolean_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsBoolean_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsBoolean_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Utils" },
		{ "Keywords", "remote control" },
		{ "ModuleRelativePath", "Public/Utils/RenderGridRemoteControlUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsBoolean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridRemoteControlUtils, nullptr, "ParseJsonAsBoolean", nullptr, nullptr, Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsBoolean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsBoolean_Statics::PropPointers), sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsBoolean_Statics::RenderGridRemoteControlUtils_eventParseJsonAsBoolean_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsBoolean_Statics::Function_MetaDataParams), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsBoolean_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsBoolean_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsBoolean_Statics::RenderGridRemoteControlUtils_eventParseJsonAsBoolean_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsBoolean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsBoolean_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsByte_Statics
	{
		struct RenderGridRemoteControlUtils_eventParseJsonAsByte_Parms
		{
			FString Json;
			uint8 DefaultValue;
			bool bSuccess;
			uint8 Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Json_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Json;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultValue;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsByte_Statics::NewProp_Json_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsByte_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsByte_Parms, Json), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsByte_Statics::NewProp_Json_MetaData), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsByte_Statics::NewProp_Json_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsByte_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsByte_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsByte_Parms, DefaultValue), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsByte_Statics::NewProp_DefaultValue_MetaData), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsByte_Statics::NewProp_DefaultValue_MetaData) };
	void Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsByte_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((RenderGridRemoteControlUtils_eventParseJsonAsByte_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsByte_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RenderGridRemoteControlUtils_eventParseJsonAsByte_Parms), &Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsByte_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsByte_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsByte_Parms, Value), nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsByte_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsByte_Statics::NewProp_Json,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsByte_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsByte_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsByte_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsByte_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Utils" },
		{ "Keywords", "remote control" },
		{ "ModuleRelativePath", "Public/Utils/RenderGridRemoteControlUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsByte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridRemoteControlUtils, nullptr, "ParseJsonAsByte", nullptr, nullptr, Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsByte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsByte_Statics::PropPointers), sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsByte_Statics::RenderGridRemoteControlUtils_eventParseJsonAsByte_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsByte_Statics::Function_MetaDataParams), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsByte_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsByte_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsByte_Statics::RenderGridRemoteControlUtils_eventParseJsonAsByte_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsByte()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsByte_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsClassReference_Statics
	{
		struct RenderGridRemoteControlUtils_eventParseJsonAsClassReference_Parms
		{
			FString Json;
			UClass* DefaultValue;
			bool bSuccess;
			UClass* Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Json_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Json;
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultValue;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FClassPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsClassReference_Statics::NewProp_Json_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsClassReference_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsClassReference_Parms, Json), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsClassReference_Statics::NewProp_Json_MetaData), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsClassReference_Statics::NewProp_Json_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsClassReference_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsClassReference_Parms, DefaultValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsClassReference_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((RenderGridRemoteControlUtils_eventParseJsonAsClassReference_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsClassReference_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RenderGridRemoteControlUtils_eventParseJsonAsClassReference_Parms), &Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsClassReference_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsClassReference_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsClassReference_Parms, Value), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsClassReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsClassReference_Statics::NewProp_Json,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsClassReference_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsClassReference_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsClassReference_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsClassReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Utils" },
		{ "Keywords", "remote control" },
		{ "ModuleRelativePath", "Public/Utils/RenderGridRemoteControlUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsClassReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridRemoteControlUtils, nullptr, "ParseJsonAsClassReference", nullptr, nullptr, Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsClassReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsClassReference_Statics::PropPointers), sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsClassReference_Statics::RenderGridRemoteControlUtils_eventParseJsonAsClassReference_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsClassReference_Statics::Function_MetaDataParams), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsClassReference_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsClassReference_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsClassReference_Statics::RenderGridRemoteControlUtils_eventParseJsonAsClassReference_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsClassReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsClassReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsColor_Statics
	{
		struct RenderGridRemoteControlUtils_eventParseJsonAsColor_Parms
		{
			FString Json;
			FColor DefaultValue;
			bool bSuccess;
			FColor Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Json_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Json;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsColor_Statics::NewProp_Json_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsColor_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsColor_Parms, Json), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsColor_Statics::NewProp_Json_MetaData), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsColor_Statics::NewProp_Json_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsColor_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsColor_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsColor_Parms, DefaultValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsColor_Statics::NewProp_DefaultValue_MetaData), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsColor_Statics::NewProp_DefaultValue_MetaData) };
	void Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsColor_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((RenderGridRemoteControlUtils_eventParseJsonAsColor_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsColor_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RenderGridRemoteControlUtils_eventParseJsonAsColor_Parms), &Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsColor_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsColor_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsColor_Parms, Value), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsColor_Statics::NewProp_Json,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsColor_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsColor_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsColor_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Utils" },
		{ "Keywords", "remote control" },
		{ "ModuleRelativePath", "Public/Utils/RenderGridRemoteControlUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridRemoteControlUtils, nullptr, "ParseJsonAsColor", nullptr, nullptr, Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsColor_Statics::RenderGridRemoteControlUtils_eventParseJsonAsColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsColor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsColor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsColor_Statics::RenderGridRemoteControlUtils_eventParseJsonAsColor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsFloat_Statics
	{
		struct RenderGridRemoteControlUtils_eventParseJsonAsFloat_Parms
		{
			FString Json;
			double DefaultValue;
			bool bSuccess;
			double Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Json_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Json;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_DefaultValue;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsFloat_Statics::NewProp_Json_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsFloat_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsFloat_Parms, Json), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsFloat_Statics::NewProp_Json_MetaData), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsFloat_Statics::NewProp_Json_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsFloat_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsFloat_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsFloat_Parms, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsFloat_Statics::NewProp_DefaultValue_MetaData), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsFloat_Statics::NewProp_DefaultValue_MetaData) };
	void Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsFloat_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((RenderGridRemoteControlUtils_eventParseJsonAsFloat_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsFloat_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RenderGridRemoteControlUtils_eventParseJsonAsFloat_Parms), &Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsFloat_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsFloat_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsFloat_Statics::NewProp_Json,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsFloat_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsFloat_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsFloat_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Utils" },
		{ "Keywords", "remote control double" },
		{ "ModuleRelativePath", "Public/Utils/RenderGridRemoteControlUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridRemoteControlUtils, nullptr, "ParseJsonAsFloat", nullptr, nullptr, Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsFloat_Statics::RenderGridRemoteControlUtils_eventParseJsonAsFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsFloat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsFloat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsFloat_Statics::RenderGridRemoteControlUtils_eventParseJsonAsFloat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt32_Statics
	{
		struct RenderGridRemoteControlUtils_eventParseJsonAsInt32_Parms
		{
			FString Json;
			int32 DefaultValue;
			bool bSuccess;
			int32 Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Json_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Json;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultValue;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt32_Statics::NewProp_Json_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt32_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsInt32_Parms, Json), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt32_Statics::NewProp_Json_MetaData), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt32_Statics::NewProp_Json_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt32_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt32_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsInt32_Parms, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt32_Statics::NewProp_DefaultValue_MetaData), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt32_Statics::NewProp_DefaultValue_MetaData) };
	void Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt32_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((RenderGridRemoteControlUtils_eventParseJsonAsInt32_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt32_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RenderGridRemoteControlUtils_eventParseJsonAsInt32_Parms), &Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt32_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt32_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsInt32_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt32_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt32_Statics::NewProp_Json,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt32_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt32_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt32_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt32_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Utils" },
		{ "Keywords", "remote control" },
		{ "ModuleRelativePath", "Public/Utils/RenderGridRemoteControlUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt32_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridRemoteControlUtils, nullptr, "ParseJsonAsInt32", nullptr, nullptr, Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt32_Statics::PropPointers), sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt32_Statics::RenderGridRemoteControlUtils_eventParseJsonAsInt32_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt32_Statics::Function_MetaDataParams), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt32_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt32_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt32_Statics::RenderGridRemoteControlUtils_eventParseJsonAsInt32_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt32()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt32_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt64_Statics
	{
		struct RenderGridRemoteControlUtils_eventParseJsonAsInt64_Parms
		{
			FString Json;
			int64 DefaultValue;
			bool bSuccess;
			int64 Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Json_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Json;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_DefaultValue;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt64_Statics::NewProp_Json_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt64_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsInt64_Parms, Json), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt64_Statics::NewProp_Json_MetaData), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt64_Statics::NewProp_Json_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt64_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt64_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsInt64_Parms, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt64_Statics::NewProp_DefaultValue_MetaData), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt64_Statics::NewProp_DefaultValue_MetaData) };
	void Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt64_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((RenderGridRemoteControlUtils_eventParseJsonAsInt64_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt64_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RenderGridRemoteControlUtils_eventParseJsonAsInt64_Parms), &Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt64_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt64_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsInt64_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt64_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt64_Statics::NewProp_Json,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt64_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt64_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt64_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt64_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Utils" },
		{ "Keywords", "remote control" },
		{ "ModuleRelativePath", "Public/Utils/RenderGridRemoteControlUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridRemoteControlUtils, nullptr, "ParseJsonAsInt64", nullptr, nullptr, Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt64_Statics::PropPointers), sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt64_Statics::RenderGridRemoteControlUtils_eventParseJsonAsInt64_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt64_Statics::Function_MetaDataParams), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt64_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt64_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt64_Statics::RenderGridRemoteControlUtils_eventParseJsonAsInt64_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsLinearColor_Statics
	{
		struct RenderGridRemoteControlUtils_eventParseJsonAsLinearColor_Parms
		{
			FString Json;
			FLinearColor DefaultValue;
			bool bSuccess;
			FLinearColor Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Json_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Json;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsLinearColor_Statics::NewProp_Json_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsLinearColor_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsLinearColor_Parms, Json), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsLinearColor_Statics::NewProp_Json_MetaData), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsLinearColor_Statics::NewProp_Json_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsLinearColor_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsLinearColor_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsLinearColor_Parms, DefaultValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsLinearColor_Statics::NewProp_DefaultValue_MetaData), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsLinearColor_Statics::NewProp_DefaultValue_MetaData) };
	void Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsLinearColor_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((RenderGridRemoteControlUtils_eventParseJsonAsLinearColor_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsLinearColor_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RenderGridRemoteControlUtils_eventParseJsonAsLinearColor_Parms), &Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsLinearColor_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsLinearColor_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsLinearColor_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsLinearColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsLinearColor_Statics::NewProp_Json,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsLinearColor_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsLinearColor_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsLinearColor_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsLinearColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Utils" },
		{ "Keywords", "remote control" },
		{ "ModuleRelativePath", "Public/Utils/RenderGridRemoteControlUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsLinearColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridRemoteControlUtils, nullptr, "ParseJsonAsLinearColor", nullptr, nullptr, Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsLinearColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsLinearColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsLinearColor_Statics::RenderGridRemoteControlUtils_eventParseJsonAsLinearColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsLinearColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsLinearColor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsLinearColor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsLinearColor_Statics::RenderGridRemoteControlUtils_eventParseJsonAsLinearColor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsLinearColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsLinearColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsName_Statics
	{
		struct RenderGridRemoteControlUtils_eventParseJsonAsName_Parms
		{
			FString Json;
			FName DefaultValue;
			bool bSuccess;
			FName Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Json_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Json;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultValue;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsName_Statics::NewProp_Json_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsName_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsName_Parms, Json), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsName_Statics::NewProp_Json_MetaData), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsName_Statics::NewProp_Json_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsName_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsName_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsName_Parms, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsName_Statics::NewProp_DefaultValue_MetaData), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsName_Statics::NewProp_DefaultValue_MetaData) };
	void Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsName_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((RenderGridRemoteControlUtils_eventParseJsonAsName_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsName_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RenderGridRemoteControlUtils_eventParseJsonAsName_Parms), &Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsName_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsName_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsName_Statics::NewProp_Json,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsName_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsName_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsName_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Utils" },
		{ "Keywords", "remote control" },
		{ "ModuleRelativePath", "Public/Utils/RenderGridRemoteControlUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridRemoteControlUtils, nullptr, "ParseJsonAsName", nullptr, nullptr, Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsName_Statics::PropPointers), sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsName_Statics::RenderGridRemoteControlUtils_eventParseJsonAsName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsName_Statics::Function_MetaDataParams), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsName_Statics::RenderGridRemoteControlUtils_eventParseJsonAsName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsObjectReference_Statics
	{
		struct RenderGridRemoteControlUtils_eventParseJsonAsObjectReference_Parms
		{
			FString Json;
			UObject* DefaultValue;
			bool bSuccess;
			UObject* Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Json_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Json;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultValue;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsObjectReference_Statics::NewProp_Json_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsObjectReference_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsObjectReference_Parms, Json), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsObjectReference_Statics::NewProp_Json_MetaData), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsObjectReference_Statics::NewProp_Json_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsObjectReference_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsObjectReference_Parms, DefaultValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsObjectReference_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((RenderGridRemoteControlUtils_eventParseJsonAsObjectReference_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsObjectReference_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RenderGridRemoteControlUtils_eventParseJsonAsObjectReference_Parms), &Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsObjectReference_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsObjectReference_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsObjectReference_Parms, Value), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsObjectReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsObjectReference_Statics::NewProp_Json,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsObjectReference_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsObjectReference_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsObjectReference_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsObjectReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Utils" },
		{ "Keywords", "remote control" },
		{ "ModuleRelativePath", "Public/Utils/RenderGridRemoteControlUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsObjectReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridRemoteControlUtils, nullptr, "ParseJsonAsObjectReference", nullptr, nullptr, Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsObjectReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsObjectReference_Statics::PropPointers), sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsObjectReference_Statics::RenderGridRemoteControlUtils_eventParseJsonAsObjectReference_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsObjectReference_Statics::Function_MetaDataParams), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsObjectReference_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsObjectReference_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsObjectReference_Statics::RenderGridRemoteControlUtils_eventParseJsonAsObjectReference_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsObjectReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsObjectReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsRotator_Statics
	{
		struct RenderGridRemoteControlUtils_eventParseJsonAsRotator_Parms
		{
			FString Json;
			FRotator DefaultValue;
			bool bSuccess;
			FRotator Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Json_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Json;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsRotator_Statics::NewProp_Json_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsRotator_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsRotator_Parms, Json), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsRotator_Statics::NewProp_Json_MetaData), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsRotator_Statics::NewProp_Json_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsRotator_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsRotator_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsRotator_Parms, DefaultValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsRotator_Statics::NewProp_DefaultValue_MetaData), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsRotator_Statics::NewProp_DefaultValue_MetaData) };
	void Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsRotator_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((RenderGridRemoteControlUtils_eventParseJsonAsRotator_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsRotator_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RenderGridRemoteControlUtils_eventParseJsonAsRotator_Parms), &Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsRotator_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsRotator_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsRotator_Parms, Value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsRotator_Statics::NewProp_Json,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsRotator_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsRotator_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsRotator_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Utils" },
		{ "Keywords", "remote control" },
		{ "ModuleRelativePath", "Public/Utils/RenderGridRemoteControlUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridRemoteControlUtils, nullptr, "ParseJsonAsRotator", nullptr, nullptr, Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsRotator_Statics::PropPointers), sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsRotator_Statics::RenderGridRemoteControlUtils_eventParseJsonAsRotator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsRotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsRotator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsRotator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsRotator_Statics::RenderGridRemoteControlUtils_eventParseJsonAsRotator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsString_Statics
	{
		struct RenderGridRemoteControlUtils_eventParseJsonAsString_Parms
		{
			FString Json;
			FString DefaultValue;
			bool bSuccess;
			FString Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Json_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Json;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsString_Statics::NewProp_Json_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsString_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsString_Parms, Json), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsString_Statics::NewProp_Json_MetaData), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsString_Statics::NewProp_Json_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsString_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsString_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsString_Parms, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsString_Statics::NewProp_DefaultValue_MetaData), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsString_Statics::NewProp_DefaultValue_MetaData) };
	void Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsString_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((RenderGridRemoteControlUtils_eventParseJsonAsString_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsString_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RenderGridRemoteControlUtils_eventParseJsonAsString_Parms), &Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsString_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsString_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsString_Statics::NewProp_Json,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsString_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsString_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsString_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Utils" },
		{ "Keywords", "remote control" },
		{ "ModuleRelativePath", "Public/Utils/RenderGridRemoteControlUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridRemoteControlUtils, nullptr, "ParseJsonAsString", nullptr, nullptr, Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsString_Statics::PropPointers), sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsString_Statics::RenderGridRemoteControlUtils_eventParseJsonAsString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsString_Statics::Function_MetaDataParams), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsString_Statics::RenderGridRemoteControlUtils_eventParseJsonAsString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsStruct_Statics
	{
		struct RenderGridRemoteControlUtils_eventParseJsonAsStruct_Parms
		{
			FString Json;
			FInstancedStruct DefaultValue;
			bool bSuccess;
			FInstancedStruct Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Json_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Json;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsStruct_Statics::NewProp_Json_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsStruct_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsStruct_Parms, Json), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsStruct_Statics::NewProp_Json_MetaData), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsStruct_Statics::NewProp_Json_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsStruct_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsStruct_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsStruct_Parms, DefaultValue), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsStruct_Statics::NewProp_DefaultValue_MetaData), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsStruct_Statics::NewProp_DefaultValue_MetaData) }; // 2114042832
	void Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsStruct_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((RenderGridRemoteControlUtils_eventParseJsonAsStruct_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsStruct_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RenderGridRemoteControlUtils_eventParseJsonAsStruct_Parms), &Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsStruct_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsStruct_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsStruct_Parms, Value), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 2114042832
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsStruct_Statics::NewProp_Json,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsStruct_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsStruct_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsStruct_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsStruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Utils" },
		{ "Keywords", "remote control" },
		{ "ModuleRelativePath", "Public/Utils/RenderGridRemoteControlUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridRemoteControlUtils, nullptr, "ParseJsonAsStruct", nullptr, nullptr, Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsStruct_Statics::PropPointers), sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsStruct_Statics::RenderGridRemoteControlUtils_eventParseJsonAsStruct_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsStruct_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsStruct_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsStruct_Statics::RenderGridRemoteControlUtils_eventParseJsonAsStruct_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsText_Statics
	{
		struct RenderGridRemoteControlUtils_eventParseJsonAsText_Parms
		{
			FString Json;
			FText DefaultValue;
			bool bSuccess;
			FText Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Json_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Json;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DefaultValue;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FTextPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsText_Statics::NewProp_Json_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsText_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsText_Parms, Json), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsText_Statics::NewProp_Json_MetaData), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsText_Statics::NewProp_Json_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsText_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsText_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsText_Parms, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsText_Statics::NewProp_DefaultValue_MetaData), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsText_Statics::NewProp_DefaultValue_MetaData) };
	void Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsText_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((RenderGridRemoteControlUtils_eventParseJsonAsText_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsText_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RenderGridRemoteControlUtils_eventParseJsonAsText_Parms), &Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsText_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsText_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsText_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsText_Statics::NewProp_Json,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsText_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsText_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsText_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Utils" },
		{ "Keywords", "remote control" },
		{ "ModuleRelativePath", "Public/Utils/RenderGridRemoteControlUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridRemoteControlUtils, nullptr, "ParseJsonAsText", nullptr, nullptr, Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsText_Statics::PropPointers), sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsText_Statics::RenderGridRemoteControlUtils_eventParseJsonAsText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsText_Statics::Function_MetaDataParams), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsText_Statics::RenderGridRemoteControlUtils_eventParseJsonAsText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsTransform_Statics
	{
		struct RenderGridRemoteControlUtils_eventParseJsonAsTransform_Parms
		{
			FString Json;
			FTransform DefaultValue;
			bool bSuccess;
			FTransform Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Json_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Json;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsTransform_Statics::NewProp_Json_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsTransform_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsTransform_Parms, Json), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsTransform_Statics::NewProp_Json_MetaData), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsTransform_Statics::NewProp_Json_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsTransform_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsTransform_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsTransform_Parms, DefaultValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsTransform_Statics::NewProp_DefaultValue_MetaData), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsTransform_Statics::NewProp_DefaultValue_MetaData) };
	void Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsTransform_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((RenderGridRemoteControlUtils_eventParseJsonAsTransform_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsTransform_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RenderGridRemoteControlUtils_eventParseJsonAsTransform_Parms), &Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsTransform_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsTransform_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsTransform_Parms, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsTransform_Statics::NewProp_Json,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsTransform_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsTransform_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsTransform_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Utils" },
		{ "Keywords", "remote control" },
		{ "ModuleRelativePath", "Public/Utils/RenderGridRemoteControlUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridRemoteControlUtils, nullptr, "ParseJsonAsTransform", nullptr, nullptr, Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsTransform_Statics::RenderGridRemoteControlUtils_eventParseJsonAsTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsTransform_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsTransform_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsTransform_Statics::RenderGridRemoteControlUtils_eventParseJsonAsTransform_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsVector_Statics
	{
		struct RenderGridRemoteControlUtils_eventParseJsonAsVector_Parms
		{
			FString Json;
			FVector DefaultValue;
			bool bSuccess;
			FVector Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Json_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Json;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsVector_Statics::NewProp_Json_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsVector_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsVector_Parms, Json), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsVector_Statics::NewProp_Json_MetaData), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsVector_Statics::NewProp_Json_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsVector_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsVector_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsVector_Parms, DefaultValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsVector_Statics::NewProp_DefaultValue_MetaData), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsVector_Statics::NewProp_DefaultValue_MetaData) };
	void Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsVector_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((RenderGridRemoteControlUtils_eventParseJsonAsVector_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsVector_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RenderGridRemoteControlUtils_eventParseJsonAsVector_Parms), &Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsVector_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsVector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventParseJsonAsVector_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsVector_Statics::NewProp_Json,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsVector_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsVector_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsVector_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Utils" },
		{ "Keywords", "remote control" },
		{ "ModuleRelativePath", "Public/Utils/RenderGridRemoteControlUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridRemoteControlUtils, nullptr, "ParseJsonAsVector", nullptr, nullptr, Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsVector_Statics::RenderGridRemoteControlUtils_eventParseJsonAsVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsVector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsVector_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsVector_Statics::RenderGridRemoteControlUtils_eventParseJsonAsVector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridRemoteControlUtils_RotatorToJson_Statics
	{
		struct RenderGridRemoteControlUtils_eventRotatorToJson_Parms
		{
			FRotator Value;
			FString Json;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Json;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_RotatorToJson_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_RotatorToJson_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventRotatorToJson_Parms, Value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_RotatorToJson_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_URenderGridRemoteControlUtils_RotatorToJson_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_RotatorToJson_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventRotatorToJson_Parms, Json), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridRemoteControlUtils_RotatorToJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_RotatorToJson_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_RotatorToJson_Statics::NewProp_Json,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_RotatorToJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Utils" },
		{ "Keywords", "remote control" },
		{ "ModuleRelativePath", "Public/Utils/RenderGridRemoteControlUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridRemoteControlUtils_RotatorToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridRemoteControlUtils, nullptr, "RotatorToJson", nullptr, nullptr, Z_Construct_UFunction_URenderGridRemoteControlUtils_RotatorToJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_RotatorToJson_Statics::PropPointers), sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_RotatorToJson_Statics::RenderGridRemoteControlUtils_eventRotatorToJson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_RotatorToJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_URenderGridRemoteControlUtils_RotatorToJson_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_RotatorToJson_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_RotatorToJson_Statics::RenderGridRemoteControlUtils_eventRotatorToJson_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URenderGridRemoteControlUtils_RotatorToJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridRemoteControlUtils_RotatorToJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridRemoteControlUtils_StringToJson_Statics
	{
		struct RenderGridRemoteControlUtils_eventStringToJson_Parms
		{
			FString Value;
			FString Json;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Json;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_StringToJson_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_StringToJson_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventStringToJson_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_StringToJson_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_URenderGridRemoteControlUtils_StringToJson_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_StringToJson_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventStringToJson_Parms, Json), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridRemoteControlUtils_StringToJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_StringToJson_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_StringToJson_Statics::NewProp_Json,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_StringToJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Utils" },
		{ "Keywords", "remote control" },
		{ "ModuleRelativePath", "Public/Utils/RenderGridRemoteControlUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridRemoteControlUtils_StringToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridRemoteControlUtils, nullptr, "StringToJson", nullptr, nullptr, Z_Construct_UFunction_URenderGridRemoteControlUtils_StringToJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_StringToJson_Statics::PropPointers), sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_StringToJson_Statics::RenderGridRemoteControlUtils_eventStringToJson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_StringToJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_URenderGridRemoteControlUtils_StringToJson_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_StringToJson_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_StringToJson_Statics::RenderGridRemoteControlUtils_eventStringToJson_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URenderGridRemoteControlUtils_StringToJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridRemoteControlUtils_StringToJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridRemoteControlUtils_StructToJson_Statics
	{
		struct RenderGridRemoteControlUtils_eventStructToJson_Parms
		{
			FInstancedStruct Value;
			FString Json;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Json;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_StructToJson_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_StructToJson_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventStructToJson_Parms, Value), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_StructToJson_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_URenderGridRemoteControlUtils_StructToJson_Statics::NewProp_Value_MetaData) }; // 2114042832
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_StructToJson_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventStructToJson_Parms, Json), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridRemoteControlUtils_StructToJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_StructToJson_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_StructToJson_Statics::NewProp_Json,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_StructToJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Utils" },
		{ "Keywords", "remote control" },
		{ "ModuleRelativePath", "Public/Utils/RenderGridRemoteControlUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridRemoteControlUtils_StructToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridRemoteControlUtils, nullptr, "StructToJson", nullptr, nullptr, Z_Construct_UFunction_URenderGridRemoteControlUtils_StructToJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_StructToJson_Statics::PropPointers), sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_StructToJson_Statics::RenderGridRemoteControlUtils_eventStructToJson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_StructToJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_URenderGridRemoteControlUtils_StructToJson_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_StructToJson_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_StructToJson_Statics::RenderGridRemoteControlUtils_eventStructToJson_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URenderGridRemoteControlUtils_StructToJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridRemoteControlUtils_StructToJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridRemoteControlUtils_TextToJson_Statics
	{
		struct RenderGridRemoteControlUtils_eventTextToJson_Parms
		{
			FText Value;
			FString Json;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Json;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_TextToJson_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_TextToJson_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventTextToJson_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_TextToJson_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_URenderGridRemoteControlUtils_TextToJson_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_TextToJson_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventTextToJson_Parms, Json), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridRemoteControlUtils_TextToJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_TextToJson_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_TextToJson_Statics::NewProp_Json,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_TextToJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Utils" },
		{ "Keywords", "remote control" },
		{ "ModuleRelativePath", "Public/Utils/RenderGridRemoteControlUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridRemoteControlUtils_TextToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridRemoteControlUtils, nullptr, "TextToJson", nullptr, nullptr, Z_Construct_UFunction_URenderGridRemoteControlUtils_TextToJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_TextToJson_Statics::PropPointers), sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_TextToJson_Statics::RenderGridRemoteControlUtils_eventTextToJson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_TextToJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_URenderGridRemoteControlUtils_TextToJson_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_TextToJson_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_TextToJson_Statics::RenderGridRemoteControlUtils_eventTextToJson_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URenderGridRemoteControlUtils_TextToJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridRemoteControlUtils_TextToJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridRemoteControlUtils_TransformToJson_Statics
	{
		struct RenderGridRemoteControlUtils_eventTransformToJson_Parms
		{
			FTransform Value;
			FString Json;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Json;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_TransformToJson_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_TransformToJson_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventTransformToJson_Parms, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_TransformToJson_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_URenderGridRemoteControlUtils_TransformToJson_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_TransformToJson_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventTransformToJson_Parms, Json), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridRemoteControlUtils_TransformToJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_TransformToJson_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_TransformToJson_Statics::NewProp_Json,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_TransformToJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Utils" },
		{ "Keywords", "remote control" },
		{ "ModuleRelativePath", "Public/Utils/RenderGridRemoteControlUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridRemoteControlUtils_TransformToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridRemoteControlUtils, nullptr, "TransformToJson", nullptr, nullptr, Z_Construct_UFunction_URenderGridRemoteControlUtils_TransformToJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_TransformToJson_Statics::PropPointers), sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_TransformToJson_Statics::RenderGridRemoteControlUtils_eventTransformToJson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_TransformToJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_URenderGridRemoteControlUtils_TransformToJson_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_TransformToJson_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_TransformToJson_Statics::RenderGridRemoteControlUtils_eventTransformToJson_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URenderGridRemoteControlUtils_TransformToJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridRemoteControlUtils_TransformToJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridRemoteControlUtils_VectorToJson_Statics
	{
		struct RenderGridRemoteControlUtils_eventVectorToJson_Parms
		{
			FVector Value;
			FString Json;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Json;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_VectorToJson_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_VectorToJson_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventVectorToJson_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_VectorToJson_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_URenderGridRemoteControlUtils_VectorToJson_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridRemoteControlUtils_VectorToJson_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderGridRemoteControlUtils_eventVectorToJson_Parms, Json), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridRemoteControlUtils_VectorToJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_VectorToJson_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridRemoteControlUtils_VectorToJson_Statics::NewProp_Json,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridRemoteControlUtils_VectorToJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Utils" },
		{ "Keywords", "remote control" },
		{ "ModuleRelativePath", "Public/Utils/RenderGridRemoteControlUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridRemoteControlUtils_VectorToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridRemoteControlUtils, nullptr, "VectorToJson", nullptr, nullptr, Z_Construct_UFunction_URenderGridRemoteControlUtils_VectorToJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_VectorToJson_Statics::PropPointers), sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_VectorToJson_Statics::RenderGridRemoteControlUtils_eventVectorToJson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_VectorToJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_URenderGridRemoteControlUtils_VectorToJson_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridRemoteControlUtils_VectorToJson_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URenderGridRemoteControlUtils_VectorToJson_Statics::RenderGridRemoteControlUtils_eventVectorToJson_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URenderGridRemoteControlUtils_VectorToJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridRemoteControlUtils_VectorToJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URenderGridRemoteControlUtils);
	UClass* Z_Construct_UClass_URenderGridRemoteControlUtils_NoRegister()
	{
		return URenderGridRemoteControlUtils::StaticClass();
	}
	struct Z_Construct_UClass_URenderGridRemoteControlUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URenderGridRemoteControlUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RenderGrid,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridRemoteControlUtils_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_URenderGridRemoteControlUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URenderGridRemoteControlUtils_BooleanToJson, "BooleanToJson" }, // 2157089476
		{ &Z_Construct_UFunction_URenderGridRemoteControlUtils_ByteToJson, "ByteToJson" }, // 512077006
		{ &Z_Construct_UFunction_URenderGridRemoteControlUtils_ClassReferenceToJson, "ClassReferenceToJson" }, // 327316034
		{ &Z_Construct_UFunction_URenderGridRemoteControlUtils_ColorToJson, "ColorToJson" }, // 1312078437
		{ &Z_Construct_UFunction_URenderGridRemoteControlUtils_FloatToJson, "FloatToJson" }, // 4113575962
		{ &Z_Construct_UFunction_URenderGridRemoteControlUtils_Int32ToJson, "Int32ToJson" }, // 3567735774
		{ &Z_Construct_UFunction_URenderGridRemoteControlUtils_Int64ToJson, "Int64ToJson" }, // 3697120674
		{ &Z_Construct_UFunction_URenderGridRemoteControlUtils_LinearColorToJson, "LinearColorToJson" }, // 2023003372
		{ &Z_Construct_UFunction_URenderGridRemoteControlUtils_NameToJson, "NameToJson" }, // 608493909
		{ &Z_Construct_UFunction_URenderGridRemoteControlUtils_ObjectReferenceToJson, "ObjectReferenceToJson" }, // 32245998
		{ &Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsBoolean, "ParseJsonAsBoolean" }, // 2404991402
		{ &Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsByte, "ParseJsonAsByte" }, // 3690276298
		{ &Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsClassReference, "ParseJsonAsClassReference" }, // 669490101
		{ &Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsColor, "ParseJsonAsColor" }, // 3734235359
		{ &Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsFloat, "ParseJsonAsFloat" }, // 1893250691
		{ &Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt32, "ParseJsonAsInt32" }, // 3505179775
		{ &Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsInt64, "ParseJsonAsInt64" }, // 107660123
		{ &Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsLinearColor, "ParseJsonAsLinearColor" }, // 3818015144
		{ &Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsName, "ParseJsonAsName" }, // 3114881
		{ &Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsObjectReference, "ParseJsonAsObjectReference" }, // 2008091809
		{ &Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsRotator, "ParseJsonAsRotator" }, // 4076681499
		{ &Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsString, "ParseJsonAsString" }, // 404985820
		{ &Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsStruct, "ParseJsonAsStruct" }, // 1515798184
		{ &Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsText, "ParseJsonAsText" }, // 2960001547
		{ &Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsTransform, "ParseJsonAsTransform" }, // 1457135705
		{ &Z_Construct_UFunction_URenderGridRemoteControlUtils_ParseJsonAsVector, "ParseJsonAsVector" }, // 283008253
		{ &Z_Construct_UFunction_URenderGridRemoteControlUtils_RotatorToJson, "RotatorToJson" }, // 2549984147
		{ &Z_Construct_UFunction_URenderGridRemoteControlUtils_StringToJson, "StringToJson" }, // 840349208
		{ &Z_Construct_UFunction_URenderGridRemoteControlUtils_StructToJson, "StructToJson" }, // 668280825
		{ &Z_Construct_UFunction_URenderGridRemoteControlUtils_TextToJson, "TextToJson" }, // 587622259
		{ &Z_Construct_UFunction_URenderGridRemoteControlUtils_TransformToJson, "TransformToJson" }, // 1823557554
		{ &Z_Construct_UFunction_URenderGridRemoteControlUtils_VectorToJson, "VectorToJson" }, // 3724128206
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridRemoteControlUtils_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridRemoteControlUtils_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utils/RenderGridRemoteControlUtils.h" },
		{ "ModuleRelativePath", "Public/Utils/RenderGridRemoteControlUtils.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URenderGridRemoteControlUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenderGridRemoteControlUtils>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URenderGridRemoteControlUtils_Statics::ClassParams = {
		&URenderGridRemoteControlUtils::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridRemoteControlUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_URenderGridRemoteControlUtils_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_URenderGridRemoteControlUtils()
	{
		if (!Z_Registration_Info_UClass_URenderGridRemoteControlUtils.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenderGridRemoteControlUtils.OuterSingleton, Z_Construct_UClass_URenderGridRemoteControlUtils_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URenderGridRemoteControlUtils.OuterSingleton;
	}
	template<> RENDERGRID_API UClass* StaticClass<URenderGridRemoteControlUtils>()
	{
		return URenderGridRemoteControlUtils::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URenderGridRemoteControlUtils);
	URenderGridRemoteControlUtils::~URenderGridRemoteControlUtils() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_Utils_RenderGridRemoteControlUtils_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_Utils_RenderGridRemoteControlUtils_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URenderGridRemoteControlUtils, URenderGridRemoteControlUtils::StaticClass, TEXT("URenderGridRemoteControlUtils"), &Z_Registration_Info_UClass_URenderGridRemoteControlUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenderGridRemoteControlUtils), 1279371896U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_Utils_RenderGridRemoteControlUtils_h_3260770053(TEXT("/Script/RenderGrid"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_Utils_RenderGridRemoteControlUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_Utils_RenderGridRemoteControlUtils_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
