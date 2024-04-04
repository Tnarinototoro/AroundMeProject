// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieJobVariableAssignmentContainer.h"
#include "PropertyBag.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieJobVariableAssignmentContainer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphConfig_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphVariable_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieJobVariableAssignmentContainer();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieJobVariableAssignmentContainer_NoRegister();
	MOVIERENDERPIPELINECORE_API UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphContainerType();
	MOVIERENDERPIPELINECORE_API UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphValueType();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedPropertyBag();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	DEFINE_FUNCTION(UMovieJobVariableAssignmentContainer::execGetVariableAssignmentEnableState)
	{
		P_GET_OBJECT(UMovieGraphVariable,Z_Param_InGraphVariable);
		P_GET_UBOOL_REF(Z_Param_Out_bOutIsEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetVariableAssignmentEnableState(Z_Param_InGraphVariable,Z_Param_Out_bOutIsEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieJobVariableAssignmentContainer::execSetVariableAssignmentEnableState)
	{
		P_GET_OBJECT(UMovieGraphVariable,Z_Param_InGraphVariable);
		P_GET_UBOOL(Z_Param_bIsEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetVariableAssignmentEnableState(Z_Param_InGraphVariable,Z_Param_bIsEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieJobVariableAssignmentContainer::execGetValueContainerType)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PropertyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMovieGraphContainerType*)Z_Param__Result=P_THIS->GetValueContainerType(Z_Param_Out_PropertyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieJobVariableAssignmentContainer::execGetValueTypeObject)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PropertyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const UObject**)Z_Param__Result=P_THIS->GetValueTypeObject(Z_Param_Out_PropertyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieJobVariableAssignmentContainer::execGetValueType)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PropertyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMovieGraphValueType*)Z_Param__Result=P_THIS->GetValueType(Z_Param_Out_PropertyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieJobVariableAssignmentContainer::execSetValueSerializedString)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PropertyName);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueSerializedString(Z_Param_Out_PropertyName,Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieJobVariableAssignmentContainer::execSetValueClass)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PropertyName);
		P_GET_OBJECT(UClass,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueClass(Z_Param_Out_PropertyName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieJobVariableAssignmentContainer::execSetValueObject)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PropertyName);
		P_GET_OBJECT(UObject,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueObject(Z_Param_Out_PropertyName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieJobVariableAssignmentContainer::execSetValueEnum)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PropertyName);
		P_GET_PROPERTY(FByteProperty,Z_Param_InValue);
		P_GET_OBJECT(UEnum,Z_Param_Enum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueEnum(Z_Param_Out_PropertyName,Z_Param_InValue,Z_Param_Enum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieJobVariableAssignmentContainer::execSetValueText)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PropertyName);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueText(Z_Param_Out_PropertyName,Z_Param_Out_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieJobVariableAssignmentContainer::execSetValueString)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PropertyName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueString(Z_Param_Out_PropertyName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieJobVariableAssignmentContainer::execSetValueName)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PropertyName);
		P_GET_PROPERTY(FNameProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueName(Z_Param_Out_PropertyName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieJobVariableAssignmentContainer::execSetValueDouble)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PropertyName);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueDouble(Z_Param_Out_PropertyName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieJobVariableAssignmentContainer::execSetValueFloat)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PropertyName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueFloat(Z_Param_Out_PropertyName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieJobVariableAssignmentContainer::execSetValueInt64)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PropertyName);
		P_GET_PROPERTY(FInt64Property,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueInt64(Z_Param_Out_PropertyName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieJobVariableAssignmentContainer::execSetValueInt32)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PropertyName);
		P_GET_PROPERTY(FIntProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueInt32(Z_Param_Out_PropertyName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieJobVariableAssignmentContainer::execSetValueByte)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PropertyName);
		P_GET_PROPERTY(FByteProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueByte(Z_Param_Out_PropertyName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieJobVariableAssignmentContainer::execSetValueBool)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PropertyName);
		P_GET_UBOOL(Z_Param_bInValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueBool(Z_Param_Out_PropertyName,Z_Param_bInValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieJobVariableAssignmentContainer::execGetValueSerializedString)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PropertyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetValueSerializedString(Z_Param_Out_PropertyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieJobVariableAssignmentContainer::execGetValueClass)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PropertyName);
		P_GET_OBJECT(UClass,Z_Param_OutValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueClass(Z_Param_Out_PropertyName,Z_Param_OutValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieJobVariableAssignmentContainer::execGetValueObject)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PropertyName);
		P_GET_OBJECT(UObject,Z_Param_OutValue);
		P_GET_OBJECT(UClass,Z_Param_RequestedClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueObject(Z_Param_Out_PropertyName,Z_Param_OutValue,Z_Param_RequestedClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieJobVariableAssignmentContainer::execGetValueEnum)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PropertyName);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_OutValue);
		P_GET_OBJECT(UEnum,Z_Param_RequestedEnum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueEnum(Z_Param_Out_PropertyName,Z_Param_Out_OutValue,Z_Param_RequestedEnum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieJobVariableAssignmentContainer::execGetValueText)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PropertyName);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueText(Z_Param_Out_PropertyName,Z_Param_Out_OutValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieJobVariableAssignmentContainer::execGetValueString)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PropertyName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueString(Z_Param_Out_PropertyName,Z_Param_Out_OutValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieJobVariableAssignmentContainer::execGetValueName)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PropertyName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_OutValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueName(Z_Param_Out_PropertyName,Z_Param_Out_OutValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieJobVariableAssignmentContainer::execGetValueDouble)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PropertyName);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_OutValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueDouble(Z_Param_Out_PropertyName,Z_Param_Out_OutValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieJobVariableAssignmentContainer::execGetValueFloat)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PropertyName);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueFloat(Z_Param_Out_PropertyName,Z_Param_Out_OutValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieJobVariableAssignmentContainer::execGetValueInt64)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PropertyName);
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_OutValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueInt64(Z_Param_Out_PropertyName,Z_Param_Out_OutValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieJobVariableAssignmentContainer::execGetValueInt32)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PropertyName);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueInt32(Z_Param_Out_PropertyName,Z_Param_Out_OutValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieJobVariableAssignmentContainer::execGetValueByte)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PropertyName);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_OutValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueByte(Z_Param_Out_PropertyName,Z_Param_Out_OutValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieJobVariableAssignmentContainer::execGetValueBool)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PropertyName);
		P_GET_UBOOL_REF(Z_Param_Out_bOutValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueBool(Z_Param_Out_PropertyName,Z_Param_Out_bOutValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieJobVariableAssignmentContainer::execSetGraphConfig)
	{
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UMovieGraphConfig>,Z_Param_Out_InGraphConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGraphConfig(Z_Param_Out_InGraphConfig);
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UMovieJobVariableAssignmentContainer::execUpdateGraphVariableOverrides)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateGraphVariableOverrides();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UMovieJobVariableAssignmentContainer::StaticRegisterNativesUMovieJobVariableAssignmentContainer()
	{
		UClass* Class = UMovieJobVariableAssignmentContainer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetValueBool", &UMovieJobVariableAssignmentContainer::execGetValueBool },
			{ "GetValueByte", &UMovieJobVariableAssignmentContainer::execGetValueByte },
			{ "GetValueClass", &UMovieJobVariableAssignmentContainer::execGetValueClass },
			{ "GetValueContainerType", &UMovieJobVariableAssignmentContainer::execGetValueContainerType },
			{ "GetValueDouble", &UMovieJobVariableAssignmentContainer::execGetValueDouble },
			{ "GetValueEnum", &UMovieJobVariableAssignmentContainer::execGetValueEnum },
			{ "GetValueFloat", &UMovieJobVariableAssignmentContainer::execGetValueFloat },
			{ "GetValueInt32", &UMovieJobVariableAssignmentContainer::execGetValueInt32 },
			{ "GetValueInt64", &UMovieJobVariableAssignmentContainer::execGetValueInt64 },
			{ "GetValueName", &UMovieJobVariableAssignmentContainer::execGetValueName },
			{ "GetValueObject", &UMovieJobVariableAssignmentContainer::execGetValueObject },
			{ "GetValueSerializedString", &UMovieJobVariableAssignmentContainer::execGetValueSerializedString },
			{ "GetValueString", &UMovieJobVariableAssignmentContainer::execGetValueString },
			{ "GetValueText", &UMovieJobVariableAssignmentContainer::execGetValueText },
			{ "GetValueType", &UMovieJobVariableAssignmentContainer::execGetValueType },
			{ "GetValueTypeObject", &UMovieJobVariableAssignmentContainer::execGetValueTypeObject },
			{ "GetVariableAssignmentEnableState", &UMovieJobVariableAssignmentContainer::execGetVariableAssignmentEnableState },
			{ "SetGraphConfig", &UMovieJobVariableAssignmentContainer::execSetGraphConfig },
			{ "SetValueBool", &UMovieJobVariableAssignmentContainer::execSetValueBool },
			{ "SetValueByte", &UMovieJobVariableAssignmentContainer::execSetValueByte },
			{ "SetValueClass", &UMovieJobVariableAssignmentContainer::execSetValueClass },
			{ "SetValueDouble", &UMovieJobVariableAssignmentContainer::execSetValueDouble },
			{ "SetValueEnum", &UMovieJobVariableAssignmentContainer::execSetValueEnum },
			{ "SetValueFloat", &UMovieJobVariableAssignmentContainer::execSetValueFloat },
			{ "SetValueInt32", &UMovieJobVariableAssignmentContainer::execSetValueInt32 },
			{ "SetValueInt64", &UMovieJobVariableAssignmentContainer::execSetValueInt64 },
			{ "SetValueName", &UMovieJobVariableAssignmentContainer::execSetValueName },
			{ "SetValueObject", &UMovieJobVariableAssignmentContainer::execSetValueObject },
			{ "SetValueSerializedString", &UMovieJobVariableAssignmentContainer::execSetValueSerializedString },
			{ "SetValueString", &UMovieJobVariableAssignmentContainer::execSetValueString },
			{ "SetValueText", &UMovieJobVariableAssignmentContainer::execSetValueText },
			{ "SetVariableAssignmentEnableState", &UMovieJobVariableAssignmentContainer::execSetVariableAssignmentEnableState },
#if WITH_EDITOR
			{ "UpdateGraphVariableOverrides", &UMovieJobVariableAssignmentContainer::execUpdateGraphVariableOverrides },
#endif // WITH_EDITOR
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueBool_Statics
	{
		struct MovieJobVariableAssignmentContainer_eventGetValueBool_Parms
		{
			FName PropertyName;
			bool bOutValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueBool_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueBool_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventGetValueBool_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueBool_Statics::NewProp_PropertyName_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueBool_Statics::NewProp_PropertyName_MetaData) };
	void Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueBool_Statics::NewProp_bOutValue_SetBit(void* Obj)
	{
		((MovieJobVariableAssignmentContainer_eventGetValueBool_Parms*)Obj)->bOutValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueBool_Statics::NewProp_bOutValue = { "bOutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieJobVariableAssignmentContainer_eventGetValueBool_Parms), &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueBool_Statics::NewProp_bOutValue_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieJobVariableAssignmentContainer_eventGetValueBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieJobVariableAssignmentContainer_eventGetValueBool_Parms), &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueBool_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueBool_Statics::NewProp_bOutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/** Gets the bool value of the specified property. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/MovieJobVariableAssignmentContainer.h" },
		{ "ToolTip", "Gets the bool value of the specified property. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieJobVariableAssignmentContainer, nullptr, "GetValueBool", nullptr, nullptr, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueBool_Statics::MovieJobVariableAssignmentContainer_eventGetValueBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueBool_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueBool_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueBool_Statics::MovieJobVariableAssignmentContainer_eventGetValueBool_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueByte_Statics
	{
		struct MovieJobVariableAssignmentContainer_eventGetValueByte_Parms
		{
			FName PropertyName;
			uint8 OutValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueByte_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueByte_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventGetValueByte_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueByte_Statics::NewProp_PropertyName_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueByte_Statics::NewProp_PropertyName_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueByte_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventGetValueByte_Parms, OutValue), nullptr, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueByte_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieJobVariableAssignmentContainer_eventGetValueByte_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueByte_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieJobVariableAssignmentContainer_eventGetValueByte_Parms), &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueByte_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueByte_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueByte_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueByte_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueByte_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueByte_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/** Gets the byte value of the specified property. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/MovieJobVariableAssignmentContainer.h" },
		{ "ToolTip", "Gets the byte value of the specified property. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueByte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieJobVariableAssignmentContainer, nullptr, "GetValueByte", nullptr, nullptr, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueByte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueByte_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueByte_Statics::MovieJobVariableAssignmentContainer_eventGetValueByte_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueByte_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueByte_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueByte_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueByte_Statics::MovieJobVariableAssignmentContainer_eventGetValueByte_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueByte()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueByte_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueClass_Statics
	{
		struct MovieJobVariableAssignmentContainer_eventGetValueClass_Parms
		{
			FName PropertyName;
			UClass* OutValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FClassPropertyParams NewProp_OutValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueClass_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueClass_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventGetValueClass_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueClass_Statics::NewProp_PropertyName_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueClass_Statics::NewProp_PropertyName_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueClass_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventGetValueClass_Parms, OutValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieJobVariableAssignmentContainer_eventGetValueClass_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieJobVariableAssignmentContainer_eventGetValueClass_Parms), &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueClass_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueClass_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/** Gets the UClass value of the specified property. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/MovieJobVariableAssignmentContainer.h" },
		{ "ToolTip", "Gets the UClass value of the specified property. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieJobVariableAssignmentContainer, nullptr, "GetValueClass", nullptr, nullptr, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueClass_Statics::MovieJobVariableAssignmentContainer_eventGetValueClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueClass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueClass_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueClass_Statics::MovieJobVariableAssignmentContainer_eventGetValueClass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueContainerType_Statics
	{
		struct MovieJobVariableAssignmentContainer_eventGetValueContainerType_Parms
		{
			FName PropertyName;
			EMovieGraphContainerType ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueContainerType_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueContainerType_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventGetValueContainerType_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueContainerType_Statics::NewProp_PropertyName_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueContainerType_Statics::NewProp_PropertyName_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueContainerType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueContainerType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventGetValueContainerType_Parms, ReturnValue), Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphContainerType, METADATA_PARAMS(0, nullptr) }; // 2621360303
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueContainerType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueContainerType_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueContainerType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueContainerType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueContainerType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/** Gets the container type of the stored value in the specified property. */" },
		{ "ModuleRelativePath", "Public/MovieJobVariableAssignmentContainer.h" },
		{ "ToolTip", "Gets the container type of the stored value in the specified property." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueContainerType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieJobVariableAssignmentContainer, nullptr, "GetValueContainerType", nullptr, nullptr, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueContainerType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueContainerType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueContainerType_Statics::MovieJobVariableAssignmentContainer_eventGetValueContainerType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueContainerType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueContainerType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueContainerType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueContainerType_Statics::MovieJobVariableAssignmentContainer_eventGetValueContainerType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueContainerType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueContainerType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueDouble_Statics
	{
		struct MovieJobVariableAssignmentContainer_eventGetValueDouble_Parms
		{
			FName PropertyName;
			double OutValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_OutValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueDouble_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueDouble_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventGetValueDouble_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueDouble_Statics::NewProp_PropertyName_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueDouble_Statics::NewProp_PropertyName_MetaData) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueDouble_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventGetValueDouble_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueDouble_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieJobVariableAssignmentContainer_eventGetValueDouble_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueDouble_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieJobVariableAssignmentContainer_eventGetValueDouble_Parms), &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueDouble_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueDouble_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueDouble_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueDouble_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueDouble_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueDouble_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/** Gets the double value of the specified property. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/MovieJobVariableAssignmentContainer.h" },
		{ "ToolTip", "Gets the double value of the specified property. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueDouble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieJobVariableAssignmentContainer, nullptr, "GetValueDouble", nullptr, nullptr, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueDouble_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueDouble_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueDouble_Statics::MovieJobVariableAssignmentContainer_eventGetValueDouble_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueDouble_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueDouble_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueDouble_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueDouble_Statics::MovieJobVariableAssignmentContainer_eventGetValueDouble_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueDouble()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueDouble_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueEnum_Statics
	{
		struct MovieJobVariableAssignmentContainer_eventGetValueEnum_Parms
		{
			FName PropertyName;
			uint8 OutValue;
			const UEnum* RequestedEnum;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueEnum_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueEnum_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventGetValueEnum_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueEnum_Statics::NewProp_PropertyName_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueEnum_Statics::NewProp_PropertyName_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueEnum_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventGetValueEnum_Parms, OutValue), nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueEnum_Statics::NewProp_RequestedEnum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueEnum_Statics::NewProp_RequestedEnum = { "RequestedEnum", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventGetValueEnum_Parms, RequestedEnum), Z_Construct_UClass_UEnum, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueEnum_Statics::NewProp_RequestedEnum_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueEnum_Statics::NewProp_RequestedEnum_MetaData) };
	void Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueEnum_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieJobVariableAssignmentContainer_eventGetValueEnum_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueEnum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieJobVariableAssignmentContainer_eventGetValueEnum_Parms), &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueEnum_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueEnum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueEnum_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueEnum_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueEnum_Statics::NewProp_RequestedEnum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueEnum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueEnum_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/** Gets the enum value (for a specific enum) of the specified property. Returns true on success, else false. */" },
		{ "CPP_Default_RequestedEnum", "None" },
		{ "ModuleRelativePath", "Public/MovieJobVariableAssignmentContainer.h" },
		{ "ToolTip", "Gets the enum value (for a specific enum) of the specified property. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieJobVariableAssignmentContainer, nullptr, "GetValueEnum", nullptr, nullptr, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueEnum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueEnum_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueEnum_Statics::MovieJobVariableAssignmentContainer_eventGetValueEnum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueEnum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueEnum_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueEnum_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueEnum_Statics::MovieJobVariableAssignmentContainer_eventGetValueEnum_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueEnum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueEnum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueFloat_Statics
	{
		struct MovieJobVariableAssignmentContainer_eventGetValueFloat_Parms
		{
			FName PropertyName;
			float OutValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueFloat_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueFloat_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventGetValueFloat_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueFloat_Statics::NewProp_PropertyName_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueFloat_Statics::NewProp_PropertyName_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueFloat_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventGetValueFloat_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieJobVariableAssignmentContainer_eventGetValueFloat_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieJobVariableAssignmentContainer_eventGetValueFloat_Parms), &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueFloat_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueFloat_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/** Gets the float value of the specified property. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/MovieJobVariableAssignmentContainer.h" },
		{ "ToolTip", "Gets the float value of the specified property. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieJobVariableAssignmentContainer, nullptr, "GetValueFloat", nullptr, nullptr, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueFloat_Statics::MovieJobVariableAssignmentContainer_eventGetValueFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueFloat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueFloat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueFloat_Statics::MovieJobVariableAssignmentContainer_eventGetValueFloat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt32_Statics
	{
		struct MovieJobVariableAssignmentContainer_eventGetValueInt32_Parms
		{
			FName PropertyName;
			int32 OutValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt32_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt32_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventGetValueInt32_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt32_Statics::NewProp_PropertyName_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt32_Statics::NewProp_PropertyName_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt32_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventGetValueInt32_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt32_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieJobVariableAssignmentContainer_eventGetValueInt32_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieJobVariableAssignmentContainer_eventGetValueInt32_Parms), &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt32_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt32_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt32_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt32_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt32_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt32_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/** Gets the int32 value of the specified property. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/MovieJobVariableAssignmentContainer.h" },
		{ "ToolTip", "Gets the int32 value of the specified property. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt32_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieJobVariableAssignmentContainer, nullptr, "GetValueInt32", nullptr, nullptr, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt32_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt32_Statics::MovieJobVariableAssignmentContainer_eventGetValueInt32_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt32_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt32_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt32_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt32_Statics::MovieJobVariableAssignmentContainer_eventGetValueInt32_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt32()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt32_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt64_Statics
	{
		struct MovieJobVariableAssignmentContainer_eventGetValueInt64_Parms
		{
			FName PropertyName;
			int64 OutValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_OutValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt64_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt64_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventGetValueInt64_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt64_Statics::NewProp_PropertyName_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt64_Statics::NewProp_PropertyName_MetaData) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt64_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventGetValueInt64_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt64_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieJobVariableAssignmentContainer_eventGetValueInt64_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieJobVariableAssignmentContainer_eventGetValueInt64_Parms), &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt64_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt64_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt64_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt64_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt64_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt64_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/** Gets the int64 value of the specified property. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/MovieJobVariableAssignmentContainer.h" },
		{ "ToolTip", "Gets the int64 value of the specified property. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieJobVariableAssignmentContainer, nullptr, "GetValueInt64", nullptr, nullptr, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt64_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt64_Statics::MovieJobVariableAssignmentContainer_eventGetValueInt64_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt64_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt64_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt64_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt64_Statics::MovieJobVariableAssignmentContainer_eventGetValueInt64_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueName_Statics
	{
		struct MovieJobVariableAssignmentContainer_eventGetValueName_Parms
		{
			FName PropertyName;
			FName OutValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueName_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueName_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventGetValueName_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueName_Statics::NewProp_PropertyName_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueName_Statics::NewProp_PropertyName_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueName_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventGetValueName_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieJobVariableAssignmentContainer_eventGetValueName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieJobVariableAssignmentContainer_eventGetValueName_Parms), &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueName_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueName_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/** Gets the FName value of the specified property. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/MovieJobVariableAssignmentContainer.h" },
		{ "ToolTip", "Gets the FName value of the specified property. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieJobVariableAssignmentContainer, nullptr, "GetValueName", nullptr, nullptr, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueName_Statics::MovieJobVariableAssignmentContainer_eventGetValueName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueName_Statics::MovieJobVariableAssignmentContainer_eventGetValueName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueObject_Statics
	{
		struct MovieJobVariableAssignmentContainer_eventGetValueObject_Parms
		{
			FName PropertyName;
			UObject* OutValue;
			const UClass* RequestedClass;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueObject_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueObject_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventGetValueObject_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueObject_Statics::NewProp_PropertyName_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueObject_Statics::NewProp_PropertyName_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueObject_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventGetValueObject_Parms, OutValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueObject_Statics::NewProp_RequestedClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueObject_Statics::NewProp_RequestedClass = { "RequestedClass", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventGetValueObject_Parms, RequestedClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueObject_Statics::NewProp_RequestedClass_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueObject_Statics::NewProp_RequestedClass_MetaData) };
	void Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieJobVariableAssignmentContainer_eventGetValueObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieJobVariableAssignmentContainer_eventGetValueObject_Parms), &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueObject_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueObject_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueObject_Statics::NewProp_RequestedClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/** Gets the object value (for a specific class) of the specified property. Returns true on success, else false. */" },
		{ "CPP_Default_RequestedClass", "None" },
		{ "ModuleRelativePath", "Public/MovieJobVariableAssignmentContainer.h" },
		{ "ToolTip", "Gets the object value (for a specific class) of the specified property. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieJobVariableAssignmentContainer, nullptr, "GetValueObject", nullptr, nullptr, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueObject_Statics::MovieJobVariableAssignmentContainer_eventGetValueObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueObject_Statics::MovieJobVariableAssignmentContainer_eventGetValueObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueSerializedString_Statics
	{
		struct MovieJobVariableAssignmentContainer_eventGetValueSerializedString_Parms
		{
			FName PropertyName;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueSerializedString_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueSerializedString_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventGetValueSerializedString_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueSerializedString_Statics::NewProp_PropertyName_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueSerializedString_Statics::NewProp_PropertyName_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueSerializedString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventGetValueSerializedString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueSerializedString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueSerializedString_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueSerializedString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueSerializedString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/** Gets the serialized string value of the specified property. */" },
		{ "ModuleRelativePath", "Public/MovieJobVariableAssignmentContainer.h" },
		{ "ToolTip", "Gets the serialized string value of the specified property." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueSerializedString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieJobVariableAssignmentContainer, nullptr, "GetValueSerializedString", nullptr, nullptr, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueSerializedString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueSerializedString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueSerializedString_Statics::MovieJobVariableAssignmentContainer_eventGetValueSerializedString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueSerializedString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueSerializedString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueSerializedString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueSerializedString_Statics::MovieJobVariableAssignmentContainer_eventGetValueSerializedString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueSerializedString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueSerializedString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueString_Statics
	{
		struct MovieJobVariableAssignmentContainer_eventGetValueString_Parms
		{
			FName PropertyName;
			FString OutValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueString_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueString_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventGetValueString_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueString_Statics::NewProp_PropertyName_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueString_Statics::NewProp_PropertyName_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueString_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventGetValueString_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieJobVariableAssignmentContainer_eventGetValueString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieJobVariableAssignmentContainer_eventGetValueString_Parms), &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueString_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueString_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/** Gets the FString value of the specified property. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/MovieJobVariableAssignmentContainer.h" },
		{ "ToolTip", "Gets the FString value of the specified property. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieJobVariableAssignmentContainer, nullptr, "GetValueString", nullptr, nullptr, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueString_Statics::MovieJobVariableAssignmentContainer_eventGetValueString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueString_Statics::MovieJobVariableAssignmentContainer_eventGetValueString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueText_Statics
	{
		struct MovieJobVariableAssignmentContainer_eventGetValueText_Parms
		{
			FName PropertyName;
			FText OutValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FTextPropertyParams NewProp_OutValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueText_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueText_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventGetValueText_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueText_Statics::NewProp_PropertyName_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueText_Statics::NewProp_PropertyName_MetaData) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueText_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventGetValueText_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieJobVariableAssignmentContainer_eventGetValueText_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieJobVariableAssignmentContainer_eventGetValueText_Parms), &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueText_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueText_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/** Gets the FText value of the specified property. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/MovieJobVariableAssignmentContainer.h" },
		{ "ToolTip", "Gets the FText value of the specified property. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieJobVariableAssignmentContainer, nullptr, "GetValueText", nullptr, nullptr, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueText_Statics::MovieJobVariableAssignmentContainer_eventGetValueText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueText_Statics::MovieJobVariableAssignmentContainer_eventGetValueText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueType_Statics
	{
		struct MovieJobVariableAssignmentContainer_eventGetValueType_Parms
		{
			FName PropertyName;
			EMovieGraphValueType ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueType_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueType_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventGetValueType_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueType_Statics::NewProp_PropertyName_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueType_Statics::NewProp_PropertyName_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventGetValueType_Parms, ReturnValue), Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphValueType, METADATA_PARAMS(0, nullptr) }; // 101554368
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueType_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/** Gets the type of the value stored in the specified property. */" },
		{ "ModuleRelativePath", "Public/MovieJobVariableAssignmentContainer.h" },
		{ "ToolTip", "Gets the type of the value stored in the specified property." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieJobVariableAssignmentContainer, nullptr, "GetValueType", nullptr, nullptr, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueType_Statics::MovieJobVariableAssignmentContainer_eventGetValueType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueType_Statics::MovieJobVariableAssignmentContainer_eventGetValueType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueTypeObject_Statics
	{
		struct MovieJobVariableAssignmentContainer_eventGetValueTypeObject_Parms
		{
			FName PropertyName;
			const UObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueTypeObject_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueTypeObject_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventGetValueTypeObject_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueTypeObject_Statics::NewProp_PropertyName_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueTypeObject_Statics::NewProp_PropertyName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueTypeObject_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueTypeObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventGetValueTypeObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueTypeObject_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueTypeObject_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueTypeObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueTypeObject_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueTypeObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueTypeObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/** Gets the object that defines the enum, struct, or class stored in the specified property. */" },
		{ "ModuleRelativePath", "Public/MovieJobVariableAssignmentContainer.h" },
		{ "ToolTip", "Gets the object that defines the enum, struct, or class stored in the specified property." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueTypeObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieJobVariableAssignmentContainer, nullptr, "GetValueTypeObject", nullptr, nullptr, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueTypeObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueTypeObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueTypeObject_Statics::MovieJobVariableAssignmentContainer_eventGetValueTypeObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueTypeObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueTypeObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueTypeObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueTypeObject_Statics::MovieJobVariableAssignmentContainer_eventGetValueTypeObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueTypeObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueTypeObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetVariableAssignmentEnableState_Statics
	{
		struct MovieJobVariableAssignmentContainer_eventGetVariableAssignmentEnableState_Parms
		{
			const UMovieGraphVariable* InGraphVariable;
			bool bOutIsEnabled;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InGraphVariable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InGraphVariable;
		static void NewProp_bOutIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutIsEnabled;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetVariableAssignmentEnableState_Statics::NewProp_InGraphVariable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetVariableAssignmentEnableState_Statics::NewProp_InGraphVariable = { "InGraphVariable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventGetVariableAssignmentEnableState_Parms, InGraphVariable), Z_Construct_UClass_UMovieGraphVariable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetVariableAssignmentEnableState_Statics::NewProp_InGraphVariable_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetVariableAssignmentEnableState_Statics::NewProp_InGraphVariable_MetaData) };
	void Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetVariableAssignmentEnableState_Statics::NewProp_bOutIsEnabled_SetBit(void* Obj)
	{
		((MovieJobVariableAssignmentContainer_eventGetVariableAssignmentEnableState_Parms*)Obj)->bOutIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetVariableAssignmentEnableState_Statics::NewProp_bOutIsEnabled = { "bOutIsEnabled", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieJobVariableAssignmentContainer_eventGetVariableAssignmentEnableState_Parms), &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetVariableAssignmentEnableState_Statics::NewProp_bOutIsEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetVariableAssignmentEnableState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieJobVariableAssignmentContainer_eventGetVariableAssignmentEnableState_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetVariableAssignmentEnableState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieJobVariableAssignmentContainer_eventGetVariableAssignmentEnableState_Parms), &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetVariableAssignmentEnableState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetVariableAssignmentEnableState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetVariableAssignmentEnableState_Statics::NewProp_InGraphVariable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetVariableAssignmentEnableState_Statics::NewProp_bOutIsEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetVariableAssignmentEnableState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetVariableAssignmentEnableState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/**\n\x09 * Gets the enable state of the variable assignment for the provided graph variable. The enable state is provided\n\x09 * via bOutIsEnabled. Returns true if an enable state was set on the variable and bOutIsEnabled was changed, else false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieJobVariableAssignmentContainer.h" },
		{ "ToolTip", "Gets the enable state of the variable assignment for the provided graph variable. The enable state is provided\nvia bOutIsEnabled. Returns true if an enable state was set on the variable and bOutIsEnabled was changed, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetVariableAssignmentEnableState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieJobVariableAssignmentContainer, nullptr, "GetVariableAssignmentEnableState", nullptr, nullptr, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetVariableAssignmentEnableState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetVariableAssignmentEnableState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetVariableAssignmentEnableState_Statics::MovieJobVariableAssignmentContainer_eventGetVariableAssignmentEnableState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetVariableAssignmentEnableState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetVariableAssignmentEnableState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetVariableAssignmentEnableState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetVariableAssignmentEnableState_Statics::MovieJobVariableAssignmentContainer_eventGetVariableAssignmentEnableState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetVariableAssignmentEnableState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetVariableAssignmentEnableState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetGraphConfig_Statics
	{
		struct MovieJobVariableAssignmentContainer_eventSetGraphConfig_Parms
		{
			TSoftObjectPtr<UMovieGraphConfig> InGraphConfig;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InGraphConfig_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InGraphConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetGraphConfig_Statics::NewProp_InGraphConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetGraphConfig_Statics::NewProp_InGraphConfig = { "InGraphConfig", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventSetGraphConfig_Parms, InGraphConfig), Z_Construct_UClass_UMovieGraphConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetGraphConfig_Statics::NewProp_InGraphConfig_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetGraphConfig_Statics::NewProp_InGraphConfig_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetGraphConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetGraphConfig_Statics::NewProp_InGraphConfig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetGraphConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/**\n\x09 * Sets the graph config associated with the variable assignments. Calls UpdateGraphVariableOverrides() to ensure\n\x09 * that the overrides reflect the specified graph config.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieJobVariableAssignmentContainer.h" },
		{ "ToolTip", "Sets the graph config associated with the variable assignments. Calls UpdateGraphVariableOverrides() to ensure\nthat the overrides reflect the specified graph config." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetGraphConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieJobVariableAssignmentContainer, nullptr, "SetGraphConfig", nullptr, nullptr, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetGraphConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetGraphConfig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetGraphConfig_Statics::MovieJobVariableAssignmentContainer_eventSetGraphConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetGraphConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetGraphConfig_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetGraphConfig_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetGraphConfig_Statics::MovieJobVariableAssignmentContainer_eventSetGraphConfig_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetGraphConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetGraphConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueBool_Statics
	{
		struct MovieJobVariableAssignmentContainer_eventSetValueBool_Parms
		{
			FName PropertyName;
			bool bInValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueBool_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueBool_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventSetValueBool_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueBool_Statics::NewProp_PropertyName_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueBool_Statics::NewProp_PropertyName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueBool_Statics::NewProp_bInValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueBool_Statics::NewProp_bInValue_SetBit(void* Obj)
	{
		((MovieJobVariableAssignmentContainer_eventSetValueBool_Parms*)Obj)->bInValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueBool_Statics::NewProp_bInValue = { "bInValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieJobVariableAssignmentContainer_eventSetValueBool_Parms), &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueBool_Statics::NewProp_bInValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueBool_Statics::NewProp_bInValue_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueBool_Statics::NewProp_bInValue_MetaData) };
	void Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieJobVariableAssignmentContainer_eventSetValueBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieJobVariableAssignmentContainer_eventSetValueBool_Parms), &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueBool_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueBool_Statics::NewProp_bInValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/** Sets the bool value of the specified property. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/MovieJobVariableAssignmentContainer.h" },
		{ "ToolTip", "Sets the bool value of the specified property. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieJobVariableAssignmentContainer, nullptr, "SetValueBool", nullptr, nullptr, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueBool_Statics::MovieJobVariableAssignmentContainer_eventSetValueBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueBool_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueBool_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueBool_Statics::MovieJobVariableAssignmentContainer_eventSetValueBool_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueByte_Statics
	{
		struct MovieJobVariableAssignmentContainer_eventSetValueByte_Parms
		{
			FName PropertyName;
			uint8 InValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueByte_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueByte_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventSetValueByte_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueByte_Statics::NewProp_PropertyName_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueByte_Statics::NewProp_PropertyName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueByte_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueByte_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventSetValueByte_Parms, InValue), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueByte_Statics::NewProp_InValue_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueByte_Statics::NewProp_InValue_MetaData) };
	void Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueByte_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieJobVariableAssignmentContainer_eventSetValueByte_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueByte_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieJobVariableAssignmentContainer_eventSetValueByte_Parms), &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueByte_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueByte_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueByte_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueByte_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueByte_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueByte_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/** Sets the byte value of the specified property. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/MovieJobVariableAssignmentContainer.h" },
		{ "ToolTip", "Sets the byte value of the specified property. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueByte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieJobVariableAssignmentContainer, nullptr, "SetValueByte", nullptr, nullptr, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueByte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueByte_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueByte_Statics::MovieJobVariableAssignmentContainer_eventSetValueByte_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueByte_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueByte_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueByte_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueByte_Statics::MovieJobVariableAssignmentContainer_eventSetValueByte_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueByte()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueByte_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueClass_Statics
	{
		struct MovieJobVariableAssignmentContainer_eventSetValueClass_Parms
		{
			FName PropertyName;
			UClass* InValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FClassPropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueClass_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueClass_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventSetValueClass_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueClass_Statics::NewProp_PropertyName_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueClass_Statics::NewProp_PropertyName_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueClass_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventSetValueClass_Parms, InValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieJobVariableAssignmentContainer_eventSetValueClass_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieJobVariableAssignmentContainer_eventSetValueClass_Parms), &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueClass_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueClass_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/** Sets the class value of the specified property. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/MovieJobVariableAssignmentContainer.h" },
		{ "ToolTip", "Sets the class value of the specified property. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieJobVariableAssignmentContainer, nullptr, "SetValueClass", nullptr, nullptr, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueClass_Statics::MovieJobVariableAssignmentContainer_eventSetValueClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueClass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueClass_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueClass_Statics::MovieJobVariableAssignmentContainer_eventSetValueClass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueDouble_Statics
	{
		struct MovieJobVariableAssignmentContainer_eventSetValueDouble_Parms
		{
			FName PropertyName;
			double InValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueDouble_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueDouble_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventSetValueDouble_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueDouble_Statics::NewProp_PropertyName_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueDouble_Statics::NewProp_PropertyName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueDouble_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueDouble_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventSetValueDouble_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueDouble_Statics::NewProp_InValue_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueDouble_Statics::NewProp_InValue_MetaData) };
	void Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueDouble_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieJobVariableAssignmentContainer_eventSetValueDouble_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueDouble_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieJobVariableAssignmentContainer_eventSetValueDouble_Parms), &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueDouble_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueDouble_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueDouble_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueDouble_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueDouble_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueDouble_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/** Sets the double value of the specified property. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/MovieJobVariableAssignmentContainer.h" },
		{ "ToolTip", "Sets the double value of the specified property. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueDouble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieJobVariableAssignmentContainer, nullptr, "SetValueDouble", nullptr, nullptr, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueDouble_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueDouble_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueDouble_Statics::MovieJobVariableAssignmentContainer_eventSetValueDouble_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueDouble_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueDouble_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueDouble_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueDouble_Statics::MovieJobVariableAssignmentContainer_eventSetValueDouble_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueDouble()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueDouble_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueEnum_Statics
	{
		struct MovieJobVariableAssignmentContainer_eventSetValueEnum_Parms
		{
			FName PropertyName;
			uint8 InValue;
			const UEnum* Enum;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueEnum_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueEnum_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventSetValueEnum_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueEnum_Statics::NewProp_PropertyName_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueEnum_Statics::NewProp_PropertyName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueEnum_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueEnum_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventSetValueEnum_Parms, InValue), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueEnum_Statics::NewProp_InValue_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueEnum_Statics::NewProp_InValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueEnum_Statics::NewProp_Enum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueEnum_Statics::NewProp_Enum = { "Enum", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventSetValueEnum_Parms, Enum), Z_Construct_UClass_UEnum, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueEnum_Statics::NewProp_Enum_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueEnum_Statics::NewProp_Enum_MetaData) };
	void Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueEnum_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieJobVariableAssignmentContainer_eventSetValueEnum_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueEnum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieJobVariableAssignmentContainer_eventSetValueEnum_Parms), &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueEnum_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueEnum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueEnum_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueEnum_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueEnum_Statics::NewProp_Enum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueEnum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueEnum_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/** Sets the enum value of the specified property. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/MovieJobVariableAssignmentContainer.h" },
		{ "ToolTip", "Sets the enum value of the specified property. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieJobVariableAssignmentContainer, nullptr, "SetValueEnum", nullptr, nullptr, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueEnum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueEnum_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueEnum_Statics::MovieJobVariableAssignmentContainer_eventSetValueEnum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueEnum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueEnum_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueEnum_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueEnum_Statics::MovieJobVariableAssignmentContainer_eventSetValueEnum_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueEnum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueEnum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueFloat_Statics
	{
		struct MovieJobVariableAssignmentContainer_eventSetValueFloat_Parms
		{
			FName PropertyName;
			float InValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueFloat_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueFloat_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventSetValueFloat_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueFloat_Statics::NewProp_PropertyName_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueFloat_Statics::NewProp_PropertyName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueFloat_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueFloat_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventSetValueFloat_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueFloat_Statics::NewProp_InValue_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueFloat_Statics::NewProp_InValue_MetaData) };
	void Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieJobVariableAssignmentContainer_eventSetValueFloat_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieJobVariableAssignmentContainer_eventSetValueFloat_Parms), &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueFloat_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueFloat_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/** Sets the float value of the specified property. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/MovieJobVariableAssignmentContainer.h" },
		{ "ToolTip", "Sets the float value of the specified property. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieJobVariableAssignmentContainer, nullptr, "SetValueFloat", nullptr, nullptr, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueFloat_Statics::MovieJobVariableAssignmentContainer_eventSetValueFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueFloat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueFloat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueFloat_Statics::MovieJobVariableAssignmentContainer_eventSetValueFloat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt32_Statics
	{
		struct MovieJobVariableAssignmentContainer_eventSetValueInt32_Parms
		{
			FName PropertyName;
			int32 InValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt32_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt32_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventSetValueInt32_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt32_Statics::NewProp_PropertyName_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt32_Statics::NewProp_PropertyName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt32_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt32_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventSetValueInt32_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt32_Statics::NewProp_InValue_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt32_Statics::NewProp_InValue_MetaData) };
	void Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt32_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieJobVariableAssignmentContainer_eventSetValueInt32_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieJobVariableAssignmentContainer_eventSetValueInt32_Parms), &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt32_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt32_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt32_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt32_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt32_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt32_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/** Sets the int32 value of the specified property. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/MovieJobVariableAssignmentContainer.h" },
		{ "ToolTip", "Sets the int32 value of the specified property. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt32_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieJobVariableAssignmentContainer, nullptr, "SetValueInt32", nullptr, nullptr, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt32_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt32_Statics::MovieJobVariableAssignmentContainer_eventSetValueInt32_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt32_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt32_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt32_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt32_Statics::MovieJobVariableAssignmentContainer_eventSetValueInt32_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt32()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt32_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt64_Statics
	{
		struct MovieJobVariableAssignmentContainer_eventSetValueInt64_Parms
		{
			FName PropertyName;
			int64 InValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt64_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt64_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventSetValueInt64_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt64_Statics::NewProp_PropertyName_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt64_Statics::NewProp_PropertyName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt64_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt64_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventSetValueInt64_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt64_Statics::NewProp_InValue_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt64_Statics::NewProp_InValue_MetaData) };
	void Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt64_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieJobVariableAssignmentContainer_eventSetValueInt64_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieJobVariableAssignmentContainer_eventSetValueInt64_Parms), &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt64_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt64_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt64_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt64_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt64_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt64_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/** Sets the int64 value of the specified property. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/MovieJobVariableAssignmentContainer.h" },
		{ "ToolTip", "Sets the int64 value of the specified property. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieJobVariableAssignmentContainer, nullptr, "SetValueInt64", nullptr, nullptr, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt64_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt64_Statics::MovieJobVariableAssignmentContainer_eventSetValueInt64_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt64_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt64_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt64_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt64_Statics::MovieJobVariableAssignmentContainer_eventSetValueInt64_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueName_Statics
	{
		struct MovieJobVariableAssignmentContainer_eventSetValueName_Parms
		{
			FName PropertyName;
			FName InValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueName_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueName_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventSetValueName_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueName_Statics::NewProp_PropertyName_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueName_Statics::NewProp_PropertyName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueName_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueName_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventSetValueName_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueName_Statics::NewProp_InValue_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueName_Statics::NewProp_InValue_MetaData) };
	void Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieJobVariableAssignmentContainer_eventSetValueName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieJobVariableAssignmentContainer_eventSetValueName_Parms), &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueName_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueName_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/** Sets the FName value of the specified property. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/MovieJobVariableAssignmentContainer.h" },
		{ "ToolTip", "Sets the FName value of the specified property. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieJobVariableAssignmentContainer, nullptr, "SetValueName", nullptr, nullptr, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueName_Statics::MovieJobVariableAssignmentContainer_eventSetValueName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueName_Statics::MovieJobVariableAssignmentContainer_eventSetValueName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueObject_Statics
	{
		struct MovieJobVariableAssignmentContainer_eventSetValueObject_Parms
		{
			FName PropertyName;
			UObject* InValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueObject_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueObject_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventSetValueObject_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueObject_Statics::NewProp_PropertyName_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueObject_Statics::NewProp_PropertyName_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueObject_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventSetValueObject_Parms, InValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieJobVariableAssignmentContainer_eventSetValueObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieJobVariableAssignmentContainer_eventSetValueObject_Parms), &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueObject_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueObject_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/** Sets the object value of the specified property. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/MovieJobVariableAssignmentContainer.h" },
		{ "ToolTip", "Sets the object value of the specified property. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieJobVariableAssignmentContainer, nullptr, "SetValueObject", nullptr, nullptr, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueObject_Statics::MovieJobVariableAssignmentContainer_eventSetValueObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueObject_Statics::MovieJobVariableAssignmentContainer_eventSetValueObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueSerializedString_Statics
	{
		struct MovieJobVariableAssignmentContainer_eventSetValueSerializedString_Parms
		{
			FName PropertyName;
			FString NewValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueSerializedString_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueSerializedString_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventSetValueSerializedString_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueSerializedString_Statics::NewProp_PropertyName_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueSerializedString_Statics::NewProp_PropertyName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueSerializedString_Statics::NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueSerializedString_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventSetValueSerializedString_Parms, NewValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueSerializedString_Statics::NewProp_NewValue_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueSerializedString_Statics::NewProp_NewValue_MetaData) };
	void Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueSerializedString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieJobVariableAssignmentContainer_eventSetValueSerializedString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueSerializedString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieJobVariableAssignmentContainer_eventSetValueSerializedString_Parms), &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueSerializedString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueSerializedString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueSerializedString_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueSerializedString_Statics::NewProp_NewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueSerializedString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueSerializedString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/** Sets the serialized value of this member. The string should be the serialized representation of the value. Returns true on success, else false.*/" },
		{ "ModuleRelativePath", "Public/MovieJobVariableAssignmentContainer.h" },
		{ "ToolTip", "Sets the serialized value of this member. The string should be the serialized representation of the value. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueSerializedString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieJobVariableAssignmentContainer, nullptr, "SetValueSerializedString", nullptr, nullptr, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueSerializedString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueSerializedString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueSerializedString_Statics::MovieJobVariableAssignmentContainer_eventSetValueSerializedString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueSerializedString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueSerializedString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueSerializedString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueSerializedString_Statics::MovieJobVariableAssignmentContainer_eventSetValueSerializedString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueSerializedString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueSerializedString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueString_Statics
	{
		struct MovieJobVariableAssignmentContainer_eventSetValueString_Parms
		{
			FName PropertyName;
			FString InValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueString_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueString_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventSetValueString_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueString_Statics::NewProp_PropertyName_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueString_Statics::NewProp_PropertyName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueString_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueString_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventSetValueString_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueString_Statics::NewProp_InValue_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueString_Statics::NewProp_InValue_MetaData) };
	void Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieJobVariableAssignmentContainer_eventSetValueString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieJobVariableAssignmentContainer_eventSetValueString_Parms), &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueString_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueString_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/** Sets the FString value of the specified property. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/MovieJobVariableAssignmentContainer.h" },
		{ "ToolTip", "Sets the FString value of the specified property. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieJobVariableAssignmentContainer, nullptr, "SetValueString", nullptr, nullptr, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueString_Statics::MovieJobVariableAssignmentContainer_eventSetValueString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueString_Statics::MovieJobVariableAssignmentContainer_eventSetValueString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueText_Statics
	{
		struct MovieJobVariableAssignmentContainer_eventSetValueText_Parms
		{
			FName PropertyName;
			FText InValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueText_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueText_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventSetValueText_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueText_Statics::NewProp_PropertyName_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueText_Statics::NewProp_PropertyName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueText_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueText_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventSetValueText_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueText_Statics::NewProp_InValue_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueText_Statics::NewProp_InValue_MetaData) };
	void Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieJobVariableAssignmentContainer_eventSetValueText_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieJobVariableAssignmentContainer_eventSetValueText_Parms), &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueText_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueText_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/** Sets the FText value of the specified property. Returns true on success, else false. */" },
		{ "ModuleRelativePath", "Public/MovieJobVariableAssignmentContainer.h" },
		{ "ToolTip", "Sets the FText value of the specified property. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieJobVariableAssignmentContainer, nullptr, "SetValueText", nullptr, nullptr, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueText_Statics::MovieJobVariableAssignmentContainer_eventSetValueText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueText_Statics::MovieJobVariableAssignmentContainer_eventSetValueText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetVariableAssignmentEnableState_Statics
	{
		struct MovieJobVariableAssignmentContainer_eventSetVariableAssignmentEnableState_Parms
		{
			const UMovieGraphVariable* InGraphVariable;
			bool bIsEnabled;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InGraphVariable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InGraphVariable;
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetVariableAssignmentEnableState_Statics::NewProp_InGraphVariable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetVariableAssignmentEnableState_Statics::NewProp_InGraphVariable = { "InGraphVariable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieJobVariableAssignmentContainer_eventSetVariableAssignmentEnableState_Parms, InGraphVariable), Z_Construct_UClass_UMovieGraphVariable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetVariableAssignmentEnableState_Statics::NewProp_InGraphVariable_MetaData), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetVariableAssignmentEnableState_Statics::NewProp_InGraphVariable_MetaData) };
	void Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetVariableAssignmentEnableState_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((MovieJobVariableAssignmentContainer_eventSetVariableAssignmentEnableState_Parms*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetVariableAssignmentEnableState_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieJobVariableAssignmentContainer_eventSetVariableAssignmentEnableState_Parms), &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetVariableAssignmentEnableState_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetVariableAssignmentEnableState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieJobVariableAssignmentContainer_eventSetVariableAssignmentEnableState_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetVariableAssignmentEnableState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieJobVariableAssignmentContainer_eventSetVariableAssignmentEnableState_Parms), &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetVariableAssignmentEnableState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetVariableAssignmentEnableState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetVariableAssignmentEnableState_Statics::NewProp_InGraphVariable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetVariableAssignmentEnableState_Statics::NewProp_bIsEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetVariableAssignmentEnableState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetVariableAssignmentEnableState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/**\n\x09 * Updates an existing variable assignment for the provided graph variable to a new enable state, or adds a new\n\x09 * assignment and updates its enable state. Returns true on success, else false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieJobVariableAssignmentContainer.h" },
		{ "ToolTip", "Updates an existing variable assignment for the provided graph variable to a new enable state, or adds a new\nassignment and updates its enable state. Returns true on success, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetVariableAssignmentEnableState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieJobVariableAssignmentContainer, nullptr, "SetVariableAssignmentEnableState", nullptr, nullptr, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetVariableAssignmentEnableState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetVariableAssignmentEnableState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetVariableAssignmentEnableState_Statics::MovieJobVariableAssignmentContainer_eventSetVariableAssignmentEnableState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetVariableAssignmentEnableState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetVariableAssignmentEnableState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetVariableAssignmentEnableState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetVariableAssignmentEnableState_Statics::MovieJobVariableAssignmentContainer_eventSetVariableAssignmentEnableState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetVariableAssignmentEnableState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetVariableAssignmentEnableState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_UpdateGraphVariableOverrides_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_UpdateGraphVariableOverrides_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experimental" },
		{ "ModuleRelativePath", "Public/MovieJobVariableAssignmentContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_UpdateGraphVariableOverrides_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieJobVariableAssignmentContainer, nullptr, "UpdateGraphVariableOverrides", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_UpdateGraphVariableOverrides_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_UpdateGraphVariableOverrides_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_UpdateGraphVariableOverrides()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_UpdateGraphVariableOverrides_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieJobVariableAssignmentContainer);
	UClass* Z_Construct_UClass_UMovieJobVariableAssignmentContainer_NoRegister()
	{
		return UMovieJobVariableAssignmentContainer::StaticClass();
	}
	struct Z_Construct_UClass_UMovieJobVariableAssignmentContainer_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphPreset_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_GraphPreset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieJobVariableAssignmentContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieJobVariableAssignmentContainer_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieJobVariableAssignmentContainer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueBool, "GetValueBool" }, // 1130146342
		{ &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueByte, "GetValueByte" }, // 1220129416
		{ &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueClass, "GetValueClass" }, // 1349457109
		{ &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueContainerType, "GetValueContainerType" }, // 4148791369
		{ &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueDouble, "GetValueDouble" }, // 2283895798
		{ &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueEnum, "GetValueEnum" }, // 3310478479
		{ &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueFloat, "GetValueFloat" }, // 2998498945
		{ &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt32, "GetValueInt32" }, // 1302394771
		{ &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueInt64, "GetValueInt64" }, // 1791968417
		{ &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueName, "GetValueName" }, // 3971748724
		{ &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueObject, "GetValueObject" }, // 310736518
		{ &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueSerializedString, "GetValueSerializedString" }, // 3012433948
		{ &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueString, "GetValueString" }, // 111461564
		{ &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueText, "GetValueText" }, // 1461845405
		{ &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueType, "GetValueType" }, // 4097970826
		{ &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetValueTypeObject, "GetValueTypeObject" }, // 3143927166
		{ &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_GetVariableAssignmentEnableState, "GetVariableAssignmentEnableState" }, // 654136053
		{ &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetGraphConfig, "SetGraphConfig" }, // 3354151359
		{ &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueBool, "SetValueBool" }, // 3307504081
		{ &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueByte, "SetValueByte" }, // 3204682478
		{ &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueClass, "SetValueClass" }, // 1093617634
		{ &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueDouble, "SetValueDouble" }, // 1256615846
		{ &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueEnum, "SetValueEnum" }, // 3609799817
		{ &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueFloat, "SetValueFloat" }, // 2980121336
		{ &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt32, "SetValueInt32" }, // 3011524148
		{ &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueInt64, "SetValueInt64" }, // 2880040632
		{ &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueName, "SetValueName" }, // 1301138363
		{ &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueObject, "SetValueObject" }, // 3694993494
		{ &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueSerializedString, "SetValueSerializedString" }, // 236933792
		{ &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueString, "SetValueString" }, // 2141484701
		{ &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetValueText, "SetValueText" }, // 4024998414
		{ &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_SetVariableAssignmentEnableState, "SetVariableAssignmentEnableState" }, // 2853584178
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UMovieJobVariableAssignmentContainer_UpdateGraphVariableOverrides, "UpdateGraphVariableOverrides" }, // 716032568
#endif //WITH_EDITOR
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieJobVariableAssignmentContainer_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieJobVariableAssignmentContainer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Holds a group of properties which override variable values on the job's associated graph (if any). Overrides are not\n * added manually. Instead, UpdateGraphVariableOverrides() should be called which will update, add, or remove overrides\n * as appropriate. After the update, overrides can have their values retrieved and set.\n */" },
		{ "IncludePath", "MovieJobVariableAssignmentContainer.h" },
		{ "ModuleRelativePath", "Public/MovieJobVariableAssignmentContainer.h" },
		{ "ToolTip", "Holds a group of properties which override variable values on the job's associated graph (if any). Overrides are not\nadded manually. Instead, UpdateGraphVariableOverrides() should be called which will update, add, or remove overrides\nas appropriate. After the update, overrides can have their values retrieved and set." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieJobVariableAssignmentContainer_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Value" },
		{ "Comment", "/** The properties managed by this object. */" },
		{ "FixedLayout", "" },
		{ "ModuleRelativePath", "Public/MovieJobVariableAssignmentContainer.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The properties managed by this object." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieJobVariableAssignmentContainer_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieJobVariableAssignmentContainer, Value), Z_Construct_UScriptStruct_FInstancedPropertyBag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieJobVariableAssignmentContainer_Statics::NewProp_Value_MetaData), Z_Construct_UClass_UMovieJobVariableAssignmentContainer_Statics::NewProp_Value_MetaData) }; // 4097115139
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieJobVariableAssignmentContainer_Statics::NewProp_GraphPreset_MetaData[] = {
		{ "Comment", "/** The graph preset associated with the variable overrides. */" },
		{ "ModuleRelativePath", "Public/MovieJobVariableAssignmentContainer.h" },
		{ "ToolTip", "The graph preset associated with the variable overrides." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMovieJobVariableAssignmentContainer_Statics::NewProp_GraphPreset = { "GraphPreset", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieJobVariableAssignmentContainer, GraphPreset), Z_Construct_UClass_UMovieGraphConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieJobVariableAssignmentContainer_Statics::NewProp_GraphPreset_MetaData), Z_Construct_UClass_UMovieJobVariableAssignmentContainer_Statics::NewProp_GraphPreset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieJobVariableAssignmentContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieJobVariableAssignmentContainer_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieJobVariableAssignmentContainer_Statics::NewProp_GraphPreset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieJobVariableAssignmentContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieJobVariableAssignmentContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieJobVariableAssignmentContainer_Statics::ClassParams = {
		&UMovieJobVariableAssignmentContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMovieJobVariableAssignmentContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieJobVariableAssignmentContainer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieJobVariableAssignmentContainer_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieJobVariableAssignmentContainer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieJobVariableAssignmentContainer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMovieJobVariableAssignmentContainer()
	{
		if (!Z_Registration_Info_UClass_UMovieJobVariableAssignmentContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieJobVariableAssignmentContainer.OuterSingleton, Z_Construct_UClass_UMovieJobVariableAssignmentContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieJobVariableAssignmentContainer.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieJobVariableAssignmentContainer>()
	{
		return UMovieJobVariableAssignmentContainer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieJobVariableAssignmentContainer);
	UMovieJobVariableAssignmentContainer::~UMovieJobVariableAssignmentContainer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieJobVariableAssignmentContainer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieJobVariableAssignmentContainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieJobVariableAssignmentContainer, UMovieJobVariableAssignmentContainer::StaticClass, TEXT("UMovieJobVariableAssignmentContainer"), &Z_Registration_Info_UClass_UMovieJobVariableAssignmentContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieJobVariableAssignmentContainer), 1764418453U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieJobVariableAssignmentContainer_h_3436245110(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieJobVariableAssignmentContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieJobVariableAssignmentContainer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
