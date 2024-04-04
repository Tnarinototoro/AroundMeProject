// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CineSplineComponent.h"
#include "CineSplineMetadata.h"
#include "CineSplinePointData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCineSplineComponent() {}
// Cross Module References
	CINECAMERARIGS_API UClass* Z_Construct_UClass_UCineSplineComponent();
	CINECAMERARIGS_API UClass* Z_Construct_UClass_UCineSplineComponent_NoRegister();
	CINECAMERARIGS_API UClass* Z_Construct_UClass_UCineSplineMetadata_NoRegister();
	CINECAMERARIGS_API UFunction* Z_Construct_UDelegateFunction_UCineSplineComponent_OnSplineEdited_BP__DelegateSignature();
	CINECAMERARIGS_API UScriptStruct* Z_Construct_UScriptStruct_FCineSplineCurveDefaults();
	CINECAMERARIGS_API UScriptStruct* Z_Construct_UScriptStruct_FCineSplineInstanceData();
	CINECAMERARIGS_API UScriptStruct* Z_Construct_UScriptStruct_FCineSplinePointData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSplineInstanceData();
	UPackage* Z_Construct_UPackage__Script_CineCameraRigs();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UCineSplineComponent_OnSplineEdited_BP__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCineSplineComponent_OnSplineEdited_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CineSplineComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCineSplineComponent_OnSplineEdited_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineSplineComponent, nullptr, "OnSplineEdited_BP__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCineSplineComponent_OnSplineEdited_BP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UCineSplineComponent_OnSplineEdited_BP__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_UCineSplineComponent_OnSplineEdited_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UCineSplineComponent_OnSplineEdited_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UCineSplineComponent::FOnSplineEdited_BP_DelegateWrapper(const FMulticastScriptDelegate& OnSplineEdited_BP)
{
	OnSplineEdited_BP.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UCineSplineComponent::execGetPointRotationAtSplineInputKey)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=P_THIS->GetPointRotationAtSplineInputKey(Z_Param_InKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineSplineComponent::execGetPointRotationAtSplinePoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=P_THIS->GetPointRotationAtSplinePoint(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineSplineComponent::execGetPositionAtInputKey)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPositionAtInputKey(Z_Param_InKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineSplineComponent::execGetInputKeyAtPosition)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInputKeyAtPosition(Z_Param_InPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineSplineComponent::execGetSplineDataAtPosition)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCineSplinePointData*)Z_Param__Result=P_THIS->GetSplineDataAtPosition(Z_Param_InPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineSplineComponent::execAddSplineDataAtPosition)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPosition);
		P_GET_STRUCT_REF(FCineSplinePointData,Z_Param_Out_InPointData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddSplineDataAtPosition(Z_Param_InPosition,Z_Param_Out_InPointData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineSplineComponent::execUpdateSplineDataAtIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
		P_GET_STRUCT_REF(FCineSplinePointData,Z_Param_Out_InPointData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSplineDataAtIndex(Z_Param_InIndex,Z_Param_Out_InPointData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineSplineComponent::execFindSplineDataAtPosition)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPosition);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Tolerance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindSplineDataAtPosition(Z_Param_InPosition,Z_Param_Out_OutIndex,Z_Param_Tolerance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineSplineComponent::execSetPointRotationAtSplinePoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointIndex);
		P_GET_STRUCT(FQuat,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPointRotationAtSplinePoint(Z_Param_PointIndex,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineSplineComponent::execSetAbsolutePositionAtSplinePoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAbsolutePositionAtSplinePoint(Z_Param_PointIndex,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineSplineComponent::execSetFocusDistanceAtSplinePoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFocusDistanceAtSplinePoint(Z_Param_PointIndex,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineSplineComponent::execSetApertureAtSplinePoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetApertureAtSplinePoint(Z_Param_PointIndex,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineSplineComponent::execSetFocalLengthAtSplinePoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFocalLengthAtSplinePoint(Z_Param_PointIndex,Z_Param_Value);
		P_NATIVE_END;
	}
	void UCineSplineComponent::StaticRegisterNativesUCineSplineComponent()
	{
		UClass* Class = UCineSplineComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSplineDataAtPosition", &UCineSplineComponent::execAddSplineDataAtPosition },
			{ "FindSplineDataAtPosition", &UCineSplineComponent::execFindSplineDataAtPosition },
			{ "GetInputKeyAtPosition", &UCineSplineComponent::execGetInputKeyAtPosition },
			{ "GetPointRotationAtSplineInputKey", &UCineSplineComponent::execGetPointRotationAtSplineInputKey },
			{ "GetPointRotationAtSplinePoint", &UCineSplineComponent::execGetPointRotationAtSplinePoint },
			{ "GetPositionAtInputKey", &UCineSplineComponent::execGetPositionAtInputKey },
			{ "GetSplineDataAtPosition", &UCineSplineComponent::execGetSplineDataAtPosition },
			{ "SetAbsolutePositionAtSplinePoint", &UCineSplineComponent::execSetAbsolutePositionAtSplinePoint },
			{ "SetApertureAtSplinePoint", &UCineSplineComponent::execSetApertureAtSplinePoint },
			{ "SetFocalLengthAtSplinePoint", &UCineSplineComponent::execSetFocalLengthAtSplinePoint },
			{ "SetFocusDistanceAtSplinePoint", &UCineSplineComponent::execSetFocusDistanceAtSplinePoint },
			{ "SetPointRotationAtSplinePoint", &UCineSplineComponent::execSetPointRotationAtSplinePoint },
			{ "UpdateSplineDataAtIndex", &UCineSplineComponent::execUpdateSplineDataAtIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCineSplineComponent_AddSplineDataAtPosition_Statics
	{
		struct CineSplineComponent_eventAddSplineDataAtPosition_Parms
		{
			float InPosition;
			FCineSplinePointData InPointData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPointData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPointData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineSplineComponent_AddSplineDataAtPosition_Statics::NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCineSplineComponent_AddSplineDataAtPosition_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineSplineComponent_eventAddSplineDataAtPosition_Parms, InPosition), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_AddSplineDataAtPosition_Statics::NewProp_InPosition_MetaData), Z_Construct_UFunction_UCineSplineComponent_AddSplineDataAtPosition_Statics::NewProp_InPosition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineSplineComponent_AddSplineDataAtPosition_Statics::NewProp_InPointData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCineSplineComponent_AddSplineDataAtPosition_Statics::NewProp_InPointData = { "InPointData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineSplineComponent_eventAddSplineDataAtPosition_Parms, InPointData), Z_Construct_UScriptStruct_FCineSplinePointData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_AddSplineDataAtPosition_Statics::NewProp_InPointData_MetaData), Z_Construct_UFunction_UCineSplineComponent_AddSplineDataAtPosition_Statics::NewProp_InPointData_MetaData) }; // 323724766
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineSplineComponent_AddSplineDataAtPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineSplineComponent_AddSplineDataAtPosition_Statics::NewProp_InPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineSplineComponent_AddSplineDataAtPosition_Statics::NewProp_InPointData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineSplineComponent_AddSplineDataAtPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "CineSpline" },
		{ "Comment", "/* Add a new spline point data at the given custom position*/" },
		{ "ModuleRelativePath", "Public/CineSplineComponent.h" },
		{ "ToolTip", "Add a new spline point data at the given custom position" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineSplineComponent_AddSplineDataAtPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineSplineComponent, nullptr, "AddSplineDataAtPosition", nullptr, nullptr, Z_Construct_UFunction_UCineSplineComponent_AddSplineDataAtPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_AddSplineDataAtPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCineSplineComponent_AddSplineDataAtPosition_Statics::CineSplineComponent_eventAddSplineDataAtPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_AddSplineDataAtPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCineSplineComponent_AddSplineDataAtPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_AddSplineDataAtPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCineSplineComponent_AddSplineDataAtPosition_Statics::CineSplineComponent_eventAddSplineDataAtPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCineSplineComponent_AddSplineDataAtPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineSplineComponent_AddSplineDataAtPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineSplineComponent_FindSplineDataAtPosition_Statics
	{
		struct CineSplineComponent_eventFindSplineDataAtPosition_Parms
		{
			float InPosition;
			int32 OutIndex;
			float Tolerance;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPosition;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineSplineComponent_FindSplineDataAtPosition_Statics::NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCineSplineComponent_FindSplineDataAtPosition_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineSplineComponent_eventFindSplineDataAtPosition_Parms, InPosition), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_FindSplineDataAtPosition_Statics::NewProp_InPosition_MetaData), Z_Construct_UFunction_UCineSplineComponent_FindSplineDataAtPosition_Statics::NewProp_InPosition_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCineSplineComponent_FindSplineDataAtPosition_Statics::NewProp_OutIndex = { "OutIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineSplineComponent_eventFindSplineDataAtPosition_Parms, OutIndex), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineSplineComponent_FindSplineDataAtPosition_Statics::NewProp_Tolerance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCineSplineComponent_FindSplineDataAtPosition_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineSplineComponent_eventFindSplineDataAtPosition_Parms, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_FindSplineDataAtPosition_Statics::NewProp_Tolerance_MetaData), Z_Construct_UFunction_UCineSplineComponent_FindSplineDataAtPosition_Statics::NewProp_Tolerance_MetaData) };
	void Z_Construct_UFunction_UCineSplineComponent_FindSplineDataAtPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CineSplineComponent_eventFindSplineDataAtPosition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCineSplineComponent_FindSplineDataAtPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CineSplineComponent_eventFindSplineDataAtPosition_Parms), &Z_Construct_UFunction_UCineSplineComponent_FindSplineDataAtPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineSplineComponent_FindSplineDataAtPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineSplineComponent_FindSplineDataAtPosition_Statics::NewProp_InPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineSplineComponent_FindSplineDataAtPosition_Statics::NewProp_OutIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineSplineComponent_FindSplineDataAtPosition_Statics::NewProp_Tolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineSplineComponent_FindSplineDataAtPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineSplineComponent_FindSplineDataAtPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "CineSpline" },
		{ "Comment", "/** Returns true if there is a spline point at given custom position*/" },
		{ "CPP_Default_Tolerance", "0.001000" },
		{ "ModuleRelativePath", "Public/CineSplineComponent.h" },
		{ "ToolTip", "Returns true if there is a spline point at given custom position" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineSplineComponent_FindSplineDataAtPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineSplineComponent, nullptr, "FindSplineDataAtPosition", nullptr, nullptr, Z_Construct_UFunction_UCineSplineComponent_FindSplineDataAtPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_FindSplineDataAtPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCineSplineComponent_FindSplineDataAtPosition_Statics::CineSplineComponent_eventFindSplineDataAtPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_FindSplineDataAtPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCineSplineComponent_FindSplineDataAtPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_FindSplineDataAtPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCineSplineComponent_FindSplineDataAtPosition_Statics::CineSplineComponent_eventFindSplineDataAtPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCineSplineComponent_FindSplineDataAtPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineSplineComponent_FindSplineDataAtPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineSplineComponent_GetInputKeyAtPosition_Statics
	{
		struct CineSplineComponent_eventGetInputKeyAtPosition_Parms
		{
			float InPosition;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPosition;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineSplineComponent_GetInputKeyAtPosition_Statics::NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCineSplineComponent_GetInputKeyAtPosition_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineSplineComponent_eventGetInputKeyAtPosition_Parms, InPosition), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_GetInputKeyAtPosition_Statics::NewProp_InPosition_MetaData), Z_Construct_UFunction_UCineSplineComponent_GetInputKeyAtPosition_Statics::NewProp_InPosition_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCineSplineComponent_GetInputKeyAtPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineSplineComponent_eventGetInputKeyAtPosition_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineSplineComponent_GetInputKeyAtPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineSplineComponent_GetInputKeyAtPosition_Statics::NewProp_InPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineSplineComponent_GetInputKeyAtPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineSplineComponent_GetInputKeyAtPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "CineSpline" },
		{ "Comment", "/* Get input key value from custom position */" },
		{ "ModuleRelativePath", "Public/CineSplineComponent.h" },
		{ "ToolTip", "Get input key value from custom position" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineSplineComponent_GetInputKeyAtPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineSplineComponent, nullptr, "GetInputKeyAtPosition", nullptr, nullptr, Z_Construct_UFunction_UCineSplineComponent_GetInputKeyAtPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_GetInputKeyAtPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCineSplineComponent_GetInputKeyAtPosition_Statics::CineSplineComponent_eventGetInputKeyAtPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_GetInputKeyAtPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCineSplineComponent_GetInputKeyAtPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_GetInputKeyAtPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCineSplineComponent_GetInputKeyAtPosition_Statics::CineSplineComponent_eventGetInputKeyAtPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCineSplineComponent_GetInputKeyAtPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineSplineComponent_GetInputKeyAtPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineSplineComponent_GetPointRotationAtSplineInputKey_Statics
	{
		struct CineSplineComponent_eventGetPointRotationAtSplineInputKey_Parms
		{
			float InKey;
			FQuat ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InKey;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCineSplineComponent_GetPointRotationAtSplineInputKey_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineSplineComponent_eventGetPointRotationAtSplineInputKey_Parms, InKey), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCineSplineComponent_GetPointRotationAtSplineInputKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineSplineComponent_eventGetPointRotationAtSplineInputKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineSplineComponent_GetPointRotationAtSplineInputKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineSplineComponent_GetPointRotationAtSplineInputKey_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineSplineComponent_GetPointRotationAtSplineInputKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineSplineComponent_GetPointRotationAtSplineInputKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "CineSpline" },
		{ "Comment", "/* Get camera rotation metadata value along the spline at spline input key*/" },
		{ "ModuleRelativePath", "Public/CineSplineComponent.h" },
		{ "ToolTip", "Get camera rotation metadata value along the spline at spline input key" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineSplineComponent_GetPointRotationAtSplineInputKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineSplineComponent, nullptr, "GetPointRotationAtSplineInputKey", nullptr, nullptr, Z_Construct_UFunction_UCineSplineComponent_GetPointRotationAtSplineInputKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_GetPointRotationAtSplineInputKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCineSplineComponent_GetPointRotationAtSplineInputKey_Statics::CineSplineComponent_eventGetPointRotationAtSplineInputKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_GetPointRotationAtSplineInputKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCineSplineComponent_GetPointRotationAtSplineInputKey_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_GetPointRotationAtSplineInputKey_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCineSplineComponent_GetPointRotationAtSplineInputKey_Statics::CineSplineComponent_eventGetPointRotationAtSplineInputKey_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCineSplineComponent_GetPointRotationAtSplineInputKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineSplineComponent_GetPointRotationAtSplineInputKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineSplineComponent_GetPointRotationAtSplinePoint_Statics
	{
		struct CineSplineComponent_eventGetPointRotationAtSplinePoint_Parms
		{
			int32 Index;
			FQuat ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCineSplineComponent_GetPointRotationAtSplinePoint_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineSplineComponent_eventGetPointRotationAtSplinePoint_Parms, Index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCineSplineComponent_GetPointRotationAtSplinePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineSplineComponent_eventGetPointRotationAtSplinePoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineSplineComponent_GetPointRotationAtSplinePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineSplineComponent_GetPointRotationAtSplinePoint_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineSplineComponent_GetPointRotationAtSplinePoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineSplineComponent_GetPointRotationAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "CineSpline" },
		{ "Comment", "/* Get camera rotation metadata property value along the spline at spline point */" },
		{ "ModuleRelativePath", "Public/CineSplineComponent.h" },
		{ "ToolTip", "Get camera rotation metadata property value along the spline at spline point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineSplineComponent_GetPointRotationAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineSplineComponent, nullptr, "GetPointRotationAtSplinePoint", nullptr, nullptr, Z_Construct_UFunction_UCineSplineComponent_GetPointRotationAtSplinePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_GetPointRotationAtSplinePoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCineSplineComponent_GetPointRotationAtSplinePoint_Statics::CineSplineComponent_eventGetPointRotationAtSplinePoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_GetPointRotationAtSplinePoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCineSplineComponent_GetPointRotationAtSplinePoint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_GetPointRotationAtSplinePoint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCineSplineComponent_GetPointRotationAtSplinePoint_Statics::CineSplineComponent_eventGetPointRotationAtSplinePoint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCineSplineComponent_GetPointRotationAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineSplineComponent_GetPointRotationAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineSplineComponent_GetPositionAtInputKey_Statics
	{
		struct CineSplineComponent_eventGetPositionAtInputKey_Parms
		{
			float InKey;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InKey_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InKey;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineSplineComponent_GetPositionAtInputKey_Statics::NewProp_InKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCineSplineComponent_GetPositionAtInputKey_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineSplineComponent_eventGetPositionAtInputKey_Parms, InKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_GetPositionAtInputKey_Statics::NewProp_InKey_MetaData), Z_Construct_UFunction_UCineSplineComponent_GetPositionAtInputKey_Statics::NewProp_InKey_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCineSplineComponent_GetPositionAtInputKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineSplineComponent_eventGetPositionAtInputKey_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineSplineComponent_GetPositionAtInputKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineSplineComponent_GetPositionAtInputKey_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineSplineComponent_GetPositionAtInputKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineSplineComponent_GetPositionAtInputKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "CineSpline" },
		{ "Comment", "/* Get custom position value at spline input key */" },
		{ "ModuleRelativePath", "Public/CineSplineComponent.h" },
		{ "ToolTip", "Get custom position value at spline input key" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineSplineComponent_GetPositionAtInputKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineSplineComponent, nullptr, "GetPositionAtInputKey", nullptr, nullptr, Z_Construct_UFunction_UCineSplineComponent_GetPositionAtInputKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_GetPositionAtInputKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCineSplineComponent_GetPositionAtInputKey_Statics::CineSplineComponent_eventGetPositionAtInputKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_GetPositionAtInputKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCineSplineComponent_GetPositionAtInputKey_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_GetPositionAtInputKey_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCineSplineComponent_GetPositionAtInputKey_Statics::CineSplineComponent_eventGetPositionAtInputKey_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCineSplineComponent_GetPositionAtInputKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineSplineComponent_GetPositionAtInputKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineSplineComponent_GetSplineDataAtPosition_Statics
	{
		struct CineSplineComponent_eventGetSplineDataAtPosition_Parms
		{
			float InPosition;
			FCineSplinePointData ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineSplineComponent_GetSplineDataAtPosition_Statics::NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCineSplineComponent_GetSplineDataAtPosition_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineSplineComponent_eventGetSplineDataAtPosition_Parms, InPosition), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_GetSplineDataAtPosition_Statics::NewProp_InPosition_MetaData), Z_Construct_UFunction_UCineSplineComponent_GetSplineDataAtPosition_Statics::NewProp_InPosition_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCineSplineComponent_GetSplineDataAtPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineSplineComponent_eventGetSplineDataAtPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FCineSplinePointData, METADATA_PARAMS(0, nullptr) }; // 323724766
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineSplineComponent_GetSplineDataAtPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineSplineComponent_GetSplineDataAtPosition_Statics::NewProp_InPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineSplineComponent_GetSplineDataAtPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineSplineComponent_GetSplineDataAtPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "CineSpline" },
		{ "Comment", "/* Get a spline point data at the given custom position*/" },
		{ "ModuleRelativePath", "Public/CineSplineComponent.h" },
		{ "ToolTip", "Get a spline point data at the given custom position" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineSplineComponent_GetSplineDataAtPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineSplineComponent, nullptr, "GetSplineDataAtPosition", nullptr, nullptr, Z_Construct_UFunction_UCineSplineComponent_GetSplineDataAtPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_GetSplineDataAtPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCineSplineComponent_GetSplineDataAtPosition_Statics::CineSplineComponent_eventGetSplineDataAtPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_GetSplineDataAtPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCineSplineComponent_GetSplineDataAtPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_GetSplineDataAtPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCineSplineComponent_GetSplineDataAtPosition_Statics::CineSplineComponent_eventGetSplineDataAtPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCineSplineComponent_GetSplineDataAtPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineSplineComponent_GetSplineDataAtPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineSplineComponent_SetAbsolutePositionAtSplinePoint_Statics
	{
		struct CineSplineComponent_eventSetAbsolutePositionAtSplinePoint_Parms
		{
			int32 PointIndex;
			float value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineSplineComponent_SetAbsolutePositionAtSplinePoint_Statics::NewProp_PointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCineSplineComponent_SetAbsolutePositionAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineSplineComponent_eventSetAbsolutePositionAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_SetAbsolutePositionAtSplinePoint_Statics::NewProp_PointIndex_MetaData), Z_Construct_UFunction_UCineSplineComponent_SetAbsolutePositionAtSplinePoint_Statics::NewProp_PointIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineSplineComponent_SetAbsolutePositionAtSplinePoint_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCineSplineComponent_SetAbsolutePositionAtSplinePoint_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineSplineComponent_eventSetAbsolutePositionAtSplinePoint_Parms, value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_SetAbsolutePositionAtSplinePoint_Statics::NewProp_value_MetaData), Z_Construct_UFunction_UCineSplineComponent_SetAbsolutePositionAtSplinePoint_Statics::NewProp_value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineSplineComponent_SetAbsolutePositionAtSplinePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineSplineComponent_SetAbsolutePositionAtSplinePoint_Statics::NewProp_PointIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineSplineComponent_SetAbsolutePositionAtSplinePoint_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineSplineComponent_SetAbsolutePositionAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "CineSpline" },
		{ "Comment", "/** Set custom position metadata at a given spline point*/" },
		{ "ModuleRelativePath", "Public/CineSplineComponent.h" },
		{ "ToolTip", "Set custom position metadata at a given spline point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineSplineComponent_SetAbsolutePositionAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineSplineComponent, nullptr, "SetAbsolutePositionAtSplinePoint", nullptr, nullptr, Z_Construct_UFunction_UCineSplineComponent_SetAbsolutePositionAtSplinePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_SetAbsolutePositionAtSplinePoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCineSplineComponent_SetAbsolutePositionAtSplinePoint_Statics::CineSplineComponent_eventSetAbsolutePositionAtSplinePoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_SetAbsolutePositionAtSplinePoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCineSplineComponent_SetAbsolutePositionAtSplinePoint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_SetAbsolutePositionAtSplinePoint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCineSplineComponent_SetAbsolutePositionAtSplinePoint_Statics::CineSplineComponent_eventSetAbsolutePositionAtSplinePoint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCineSplineComponent_SetAbsolutePositionAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineSplineComponent_SetAbsolutePositionAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineSplineComponent_SetApertureAtSplinePoint_Statics
	{
		struct CineSplineComponent_eventSetApertureAtSplinePoint_Parms
		{
			int32 PointIndex;
			float value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineSplineComponent_SetApertureAtSplinePoint_Statics::NewProp_PointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCineSplineComponent_SetApertureAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineSplineComponent_eventSetApertureAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_SetApertureAtSplinePoint_Statics::NewProp_PointIndex_MetaData), Z_Construct_UFunction_UCineSplineComponent_SetApertureAtSplinePoint_Statics::NewProp_PointIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineSplineComponent_SetApertureAtSplinePoint_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCineSplineComponent_SetApertureAtSplinePoint_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineSplineComponent_eventSetApertureAtSplinePoint_Parms, value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_SetApertureAtSplinePoint_Statics::NewProp_value_MetaData), Z_Construct_UFunction_UCineSplineComponent_SetApertureAtSplinePoint_Statics::NewProp_value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineSplineComponent_SetApertureAtSplinePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineSplineComponent_SetApertureAtSplinePoint_Statics::NewProp_PointIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineSplineComponent_SetApertureAtSplinePoint_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineSplineComponent_SetApertureAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "CineSpline" },
		{ "Comment", "/** Set aperture metadata at a given spline point*/" },
		{ "ModuleRelativePath", "Public/CineSplineComponent.h" },
		{ "ToolTip", "Set aperture metadata at a given spline point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineSplineComponent_SetApertureAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineSplineComponent, nullptr, "SetApertureAtSplinePoint", nullptr, nullptr, Z_Construct_UFunction_UCineSplineComponent_SetApertureAtSplinePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_SetApertureAtSplinePoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCineSplineComponent_SetApertureAtSplinePoint_Statics::CineSplineComponent_eventSetApertureAtSplinePoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_SetApertureAtSplinePoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCineSplineComponent_SetApertureAtSplinePoint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_SetApertureAtSplinePoint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCineSplineComponent_SetApertureAtSplinePoint_Statics::CineSplineComponent_eventSetApertureAtSplinePoint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCineSplineComponent_SetApertureAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineSplineComponent_SetApertureAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineSplineComponent_SetFocalLengthAtSplinePoint_Statics
	{
		struct CineSplineComponent_eventSetFocalLengthAtSplinePoint_Parms
		{
			int32 PointIndex;
			float Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineSplineComponent_SetFocalLengthAtSplinePoint_Statics::NewProp_PointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCineSplineComponent_SetFocalLengthAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineSplineComponent_eventSetFocalLengthAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_SetFocalLengthAtSplinePoint_Statics::NewProp_PointIndex_MetaData), Z_Construct_UFunction_UCineSplineComponent_SetFocalLengthAtSplinePoint_Statics::NewProp_PointIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineSplineComponent_SetFocalLengthAtSplinePoint_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCineSplineComponent_SetFocalLengthAtSplinePoint_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineSplineComponent_eventSetFocalLengthAtSplinePoint_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_SetFocalLengthAtSplinePoint_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_UCineSplineComponent_SetFocalLengthAtSplinePoint_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineSplineComponent_SetFocalLengthAtSplinePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineSplineComponent_SetFocalLengthAtSplinePoint_Statics::NewProp_PointIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineSplineComponent_SetFocalLengthAtSplinePoint_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineSplineComponent_SetFocalLengthAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "CineSpline" },
		{ "Comment", "/** Set focal lenght metadata at a given splint point*/" },
		{ "ModuleRelativePath", "Public/CineSplineComponent.h" },
		{ "ToolTip", "Set focal lenght metadata at a given splint point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineSplineComponent_SetFocalLengthAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineSplineComponent, nullptr, "SetFocalLengthAtSplinePoint", nullptr, nullptr, Z_Construct_UFunction_UCineSplineComponent_SetFocalLengthAtSplinePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_SetFocalLengthAtSplinePoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCineSplineComponent_SetFocalLengthAtSplinePoint_Statics::CineSplineComponent_eventSetFocalLengthAtSplinePoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_SetFocalLengthAtSplinePoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCineSplineComponent_SetFocalLengthAtSplinePoint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_SetFocalLengthAtSplinePoint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCineSplineComponent_SetFocalLengthAtSplinePoint_Statics::CineSplineComponent_eventSetFocalLengthAtSplinePoint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCineSplineComponent_SetFocalLengthAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineSplineComponent_SetFocalLengthAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineSplineComponent_SetFocusDistanceAtSplinePoint_Statics
	{
		struct CineSplineComponent_eventSetFocusDistanceAtSplinePoint_Parms
		{
			int32 PointIndex;
			float value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineSplineComponent_SetFocusDistanceAtSplinePoint_Statics::NewProp_PointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCineSplineComponent_SetFocusDistanceAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineSplineComponent_eventSetFocusDistanceAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_SetFocusDistanceAtSplinePoint_Statics::NewProp_PointIndex_MetaData), Z_Construct_UFunction_UCineSplineComponent_SetFocusDistanceAtSplinePoint_Statics::NewProp_PointIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineSplineComponent_SetFocusDistanceAtSplinePoint_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCineSplineComponent_SetFocusDistanceAtSplinePoint_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineSplineComponent_eventSetFocusDistanceAtSplinePoint_Parms, value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_SetFocusDistanceAtSplinePoint_Statics::NewProp_value_MetaData), Z_Construct_UFunction_UCineSplineComponent_SetFocusDistanceAtSplinePoint_Statics::NewProp_value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineSplineComponent_SetFocusDistanceAtSplinePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineSplineComponent_SetFocusDistanceAtSplinePoint_Statics::NewProp_PointIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineSplineComponent_SetFocusDistanceAtSplinePoint_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineSplineComponent_SetFocusDistanceAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "CineSpline" },
		{ "Comment", "/** Set focus distance metadata at a given spline point*/" },
		{ "ModuleRelativePath", "Public/CineSplineComponent.h" },
		{ "ToolTip", "Set focus distance metadata at a given spline point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineSplineComponent_SetFocusDistanceAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineSplineComponent, nullptr, "SetFocusDistanceAtSplinePoint", nullptr, nullptr, Z_Construct_UFunction_UCineSplineComponent_SetFocusDistanceAtSplinePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_SetFocusDistanceAtSplinePoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCineSplineComponent_SetFocusDistanceAtSplinePoint_Statics::CineSplineComponent_eventSetFocusDistanceAtSplinePoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_SetFocusDistanceAtSplinePoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCineSplineComponent_SetFocusDistanceAtSplinePoint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_SetFocusDistanceAtSplinePoint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCineSplineComponent_SetFocusDistanceAtSplinePoint_Statics::CineSplineComponent_eventSetFocusDistanceAtSplinePoint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCineSplineComponent_SetFocusDistanceAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineSplineComponent_SetFocusDistanceAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineSplineComponent_SetPointRotationAtSplinePoint_Statics
	{
		struct CineSplineComponent_eventSetPointRotationAtSplinePoint_Parms
		{
			int32 PointIndex;
			FQuat value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineSplineComponent_SetPointRotationAtSplinePoint_Statics::NewProp_PointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCineSplineComponent_SetPointRotationAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineSplineComponent_eventSetPointRotationAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_SetPointRotationAtSplinePoint_Statics::NewProp_PointIndex_MetaData), Z_Construct_UFunction_UCineSplineComponent_SetPointRotationAtSplinePoint_Statics::NewProp_PointIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineSplineComponent_SetPointRotationAtSplinePoint_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCineSplineComponent_SetPointRotationAtSplinePoint_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineSplineComponent_eventSetPointRotationAtSplinePoint_Parms, value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_SetPointRotationAtSplinePoint_Statics::NewProp_value_MetaData), Z_Construct_UFunction_UCineSplineComponent_SetPointRotationAtSplinePoint_Statics::NewProp_value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineSplineComponent_SetPointRotationAtSplinePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineSplineComponent_SetPointRotationAtSplinePoint_Statics::NewProp_PointIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineSplineComponent_SetPointRotationAtSplinePoint_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineSplineComponent_SetPointRotationAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "CineSpline" },
		{ "Comment", "/* Set camera rotation metadata at a given spline point*/" },
		{ "ModuleRelativePath", "Public/CineSplineComponent.h" },
		{ "ToolTip", "Set camera rotation metadata at a given spline point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineSplineComponent_SetPointRotationAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineSplineComponent, nullptr, "SetPointRotationAtSplinePoint", nullptr, nullptr, Z_Construct_UFunction_UCineSplineComponent_SetPointRotationAtSplinePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_SetPointRotationAtSplinePoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCineSplineComponent_SetPointRotationAtSplinePoint_Statics::CineSplineComponent_eventSetPointRotationAtSplinePoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_SetPointRotationAtSplinePoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCineSplineComponent_SetPointRotationAtSplinePoint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_SetPointRotationAtSplinePoint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCineSplineComponent_SetPointRotationAtSplinePoint_Statics::CineSplineComponent_eventSetPointRotationAtSplinePoint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCineSplineComponent_SetPointRotationAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineSplineComponent_SetPointRotationAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineSplineComponent_UpdateSplineDataAtIndex_Statics
	{
		struct CineSplineComponent_eventUpdateSplineDataAtIndex_Parms
		{
			int32 InIndex;
			FCineSplinePointData InPointData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPointData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPointData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineSplineComponent_UpdateSplineDataAtIndex_Statics::NewProp_InIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCineSplineComponent_UpdateSplineDataAtIndex_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineSplineComponent_eventUpdateSplineDataAtIndex_Parms, InIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_UpdateSplineDataAtIndex_Statics::NewProp_InIndex_MetaData), Z_Construct_UFunction_UCineSplineComponent_UpdateSplineDataAtIndex_Statics::NewProp_InIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineSplineComponent_UpdateSplineDataAtIndex_Statics::NewProp_InPointData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCineSplineComponent_UpdateSplineDataAtIndex_Statics::NewProp_InPointData = { "InPointData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineSplineComponent_eventUpdateSplineDataAtIndex_Parms, InPointData), Z_Construct_UScriptStruct_FCineSplinePointData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_UpdateSplineDataAtIndex_Statics::NewProp_InPointData_MetaData), Z_Construct_UFunction_UCineSplineComponent_UpdateSplineDataAtIndex_Statics::NewProp_InPointData_MetaData) }; // 323724766
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineSplineComponent_UpdateSplineDataAtIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineSplineComponent_UpdateSplineDataAtIndex_Statics::NewProp_InIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineSplineComponent_UpdateSplineDataAtIndex_Statics::NewProp_InPointData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineSplineComponent_UpdateSplineDataAtIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "CineSpline" },
		{ "Comment", "/* Update spline point data at the given spline point*/" },
		{ "ModuleRelativePath", "Public/CineSplineComponent.h" },
		{ "ToolTip", "Update spline point data at the given spline point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineSplineComponent_UpdateSplineDataAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineSplineComponent, nullptr, "UpdateSplineDataAtIndex", nullptr, nullptr, Z_Construct_UFunction_UCineSplineComponent_UpdateSplineDataAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_UpdateSplineDataAtIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCineSplineComponent_UpdateSplineDataAtIndex_Statics::CineSplineComponent_eventUpdateSplineDataAtIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_UpdateSplineDataAtIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCineSplineComponent_UpdateSplineDataAtIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineSplineComponent_UpdateSplineDataAtIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCineSplineComponent_UpdateSplineDataAtIndex_Statics::CineSplineComponent_eventUpdateSplineDataAtIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCineSplineComponent_UpdateSplineDataAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineSplineComponent_UpdateSplineDataAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCineSplineComponent);
	UClass* Z_Construct_UClass_UCineSplineComponent_NoRegister()
	{
		return UCineSplineComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCineSplineComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraSplineDefaults_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraSplineDefaults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CineSplineMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CineSplineMetadata;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSplineEdited_BP_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSplineEdited_BP;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldVisualizeNormalizedPosition_MetaData[];
#endif
		static void NewProp_bShouldVisualizeNormalizedPosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldVisualizeNormalizedPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldVisualizeSplineLength_MetaData[];
#endif
		static void NewProp_bShouldVisualizeSplineLength_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldVisualizeSplineLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldVisualizePointRotation_MetaData[];
#endif
		static void NewProp_bShouldVisualizePointRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldVisualizePointRotation;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCineSplineComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USplineComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CineCameraRigs,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCineSplineComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCineSplineComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCineSplineComponent_AddSplineDataAtPosition, "AddSplineDataAtPosition" }, // 3942112899
		{ &Z_Construct_UFunction_UCineSplineComponent_FindSplineDataAtPosition, "FindSplineDataAtPosition" }, // 3775584218
		{ &Z_Construct_UFunction_UCineSplineComponent_GetInputKeyAtPosition, "GetInputKeyAtPosition" }, // 2896746262
		{ &Z_Construct_UFunction_UCineSplineComponent_GetPointRotationAtSplineInputKey, "GetPointRotationAtSplineInputKey" }, // 349585873
		{ &Z_Construct_UFunction_UCineSplineComponent_GetPointRotationAtSplinePoint, "GetPointRotationAtSplinePoint" }, // 3399488414
		{ &Z_Construct_UFunction_UCineSplineComponent_GetPositionAtInputKey, "GetPositionAtInputKey" }, // 2487776837
		{ &Z_Construct_UFunction_UCineSplineComponent_GetSplineDataAtPosition, "GetSplineDataAtPosition" }, // 99256073
		{ &Z_Construct_UDelegateFunction_UCineSplineComponent_OnSplineEdited_BP__DelegateSignature, "OnSplineEdited_BP__DelegateSignature" }, // 3167900639
		{ &Z_Construct_UFunction_UCineSplineComponent_SetAbsolutePositionAtSplinePoint, "SetAbsolutePositionAtSplinePoint" }, // 3178362352
		{ &Z_Construct_UFunction_UCineSplineComponent_SetApertureAtSplinePoint, "SetApertureAtSplinePoint" }, // 2384929466
		{ &Z_Construct_UFunction_UCineSplineComponent_SetFocalLengthAtSplinePoint, "SetFocalLengthAtSplinePoint" }, // 1403389840
		{ &Z_Construct_UFunction_UCineSplineComponent_SetFocusDistanceAtSplinePoint, "SetFocusDistanceAtSplinePoint" }, // 1258723388
		{ &Z_Construct_UFunction_UCineSplineComponent_SetPointRotationAtSplinePoint, "SetPointRotationAtSplinePoint" }, // 1281825960
		{ &Z_Construct_UFunction_UCineSplineComponent_UpdateSplineDataAtIndex, "UpdateSplineDataAtIndex" }, // 3249370598
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCineSplineComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineSplineComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Utility" },
		{ "HideCategories", "Physics Collision Lighting Rendering Mobile Physics Collision Lighting Rendering Mobile Trigger VirtualTexture" },
		{ "IncludePath", "CineSplineComponent.h" },
		{ "ModuleRelativePath", "Public/CineSplineComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineSplineComponent_Statics::NewProp_CameraSplineDefaults_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/**\n\x09* Defaults which are used to propagate values to spline points on instances of this in the world\n\x09*/" },
		{ "ModuleRelativePath", "Public/CineSplineComponent.h" },
		{ "ToolTip", "Defaults which are used to propagate values to spline points on instances of this in the world" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCineSplineComponent_Statics::NewProp_CameraSplineDefaults = { "CameraSplineDefaults", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCineSplineComponent, CameraSplineDefaults), Z_Construct_UScriptStruct_FCineSplineCurveDefaults, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCineSplineComponent_Statics::NewProp_CameraSplineDefaults_MetaData), Z_Construct_UClass_UCineSplineComponent_Statics::NewProp_CameraSplineDefaults_MetaData) }; // 467165086
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineSplineComponent_Statics::NewProp_CineSplineMetadata_MetaData[] = {
		{ "Comment", "/** Pointer to metadata */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CineSplineComponent.h" },
		{ "ToolTip", "Pointer to metadata" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCineSplineComponent_Statics::NewProp_CineSplineMetadata = { "CineSplineMetadata", nullptr, (EPropertyFlags)0x0016000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCineSplineComponent, CineSplineMetadata), Z_Construct_UClass_UCineSplineMetadata_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCineSplineComponent_Statics::NewProp_CineSplineMetadata_MetaData), Z_Construct_UClass_UCineSplineComponent_Statics::NewProp_CineSplineMetadata_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineSplineComponent_Statics::NewProp_OnSplineEdited_BP_MetaData[] = {
		{ "Category", "CineSpline" },
		{ "Comment", "/* Event trigerred when spline is edited */" },
		{ "DisplayName", "OnSplineEdited" },
		{ "ModuleRelativePath", "Public/CineSplineComponent.h" },
		{ "ToolTip", "Event trigerred when spline is edited" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCineSplineComponent_Statics::NewProp_OnSplineEdited_BP = { "OnSplineEdited_BP", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCineSplineComponent, OnSplineEdited_BP), Z_Construct_UDelegateFunction_UCineSplineComponent_OnSplineEdited_BP__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCineSplineComponent_Statics::NewProp_OnSplineEdited_BP_MetaData), Z_Construct_UClass_UCineSplineComponent_Statics::NewProp_OnSplineEdited_BP_MetaData) }; // 3167900639
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineSplineComponent_Statics::NewProp_bShouldVisualizeNormalizedPosition_MetaData[] = {
		{ "Category", "CineSplineEditor" },
		{ "Comment", "/* Toggle if visualizer displays normalized position or absolute position */" },
		{ "InlineEditConditionToggle", "TRUE" },
		{ "ModuleRelativePath", "Public/CineSplineComponent.h" },
		{ "ToolTip", "Toggle if visualizer displays normalized position or absolute position" },
	};
#endif
	void Z_Construct_UClass_UCineSplineComponent_Statics::NewProp_bShouldVisualizeNormalizedPosition_SetBit(void* Obj)
	{
		((UCineSplineComponent*)Obj)->bShouldVisualizeNormalizedPosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCineSplineComponent_Statics::NewProp_bShouldVisualizeNormalizedPosition = { "bShouldVisualizeNormalizedPosition", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCineSplineComponent), &Z_Construct_UClass_UCineSplineComponent_Statics::NewProp_bShouldVisualizeNormalizedPosition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCineSplineComponent_Statics::NewProp_bShouldVisualizeNormalizedPosition_MetaData), Z_Construct_UClass_UCineSplineComponent_Statics::NewProp_bShouldVisualizeNormalizedPosition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineSplineComponent_Statics::NewProp_bShouldVisualizeSplineLength_MetaData[] = {
		{ "Category", "CineSplineEditor" },
		{ "Comment", "/* Whether spline length value should be displayed in visualizer */" },
		{ "InlineEditConditionToggle", "TRUE" },
		{ "ModuleRelativePath", "Public/CineSplineComponent.h" },
		{ "ToolTip", "Whether spline length value should be displayed in visualizer" },
	};
#endif
	void Z_Construct_UClass_UCineSplineComponent_Statics::NewProp_bShouldVisualizeSplineLength_SetBit(void* Obj)
	{
		((UCineSplineComponent*)Obj)->bShouldVisualizeSplineLength = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCineSplineComponent_Statics::NewProp_bShouldVisualizeSplineLength = { "bShouldVisualizeSplineLength", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCineSplineComponent), &Z_Construct_UClass_UCineSplineComponent_Statics::NewProp_bShouldVisualizeSplineLength_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCineSplineComponent_Statics::NewProp_bShouldVisualizeSplineLength_MetaData), Z_Construct_UClass_UCineSplineComponent_Statics::NewProp_bShouldVisualizeSplineLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineSplineComponent_Statics::NewProp_bShouldVisualizePointRotation_MetaData[] = {
		{ "Category", "CineSplineEditor" },
		{ "Comment", "/* Whether point rotation arrows should be displayed in visualizer */" },
		{ "InlineEditConditionToggle", "TRUE" },
		{ "ModuleRelativePath", "Public/CineSplineComponent.h" },
		{ "ToolTip", "Whether point rotation arrows should be displayed in visualizer" },
	};
#endif
	void Z_Construct_UClass_UCineSplineComponent_Statics::NewProp_bShouldVisualizePointRotation_SetBit(void* Obj)
	{
		((UCineSplineComponent*)Obj)->bShouldVisualizePointRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCineSplineComponent_Statics::NewProp_bShouldVisualizePointRotation = { "bShouldVisualizePointRotation", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCineSplineComponent), &Z_Construct_UClass_UCineSplineComponent_Statics::NewProp_bShouldVisualizePointRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCineSplineComponent_Statics::NewProp_bShouldVisualizePointRotation_MetaData), Z_Construct_UClass_UCineSplineComponent_Statics::NewProp_bShouldVisualizePointRotation_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCineSplineComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineSplineComponent_Statics::NewProp_CameraSplineDefaults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineSplineComponent_Statics::NewProp_CineSplineMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineSplineComponent_Statics::NewProp_OnSplineEdited_BP,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineSplineComponent_Statics::NewProp_bShouldVisualizeNormalizedPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineSplineComponent_Statics::NewProp_bShouldVisualizeSplineLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineSplineComponent_Statics::NewProp_bShouldVisualizePointRotation,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCineSplineComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCineSplineComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCineSplineComponent_Statics::ClassParams = {
		&UCineSplineComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCineSplineComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCineSplineComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCineSplineComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCineSplineComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCineSplineComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCineSplineComponent()
	{
		if (!Z_Registration_Info_UClass_UCineSplineComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCineSplineComponent.OuterSingleton, Z_Construct_UClass_UCineSplineComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCineSplineComponent.OuterSingleton;
	}
	template<> CINECAMERARIGS_API UClass* StaticClass<UCineSplineComponent>()
	{
		return UCineSplineComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCineSplineComponent);
	UCineSplineComponent::~UCineSplineComponent() {}

static_assert(std::is_polymorphic<FCineSplineInstanceData>() == std::is_polymorphic<FSplineInstanceData>(), "USTRUCT FCineSplineInstanceData cannot be polymorphic unless super FSplineInstanceData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CineSplineInstanceData;
class UScriptStruct* FCineSplineInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CineSplineInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CineSplineInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCineSplineInstanceData, (UObject*)Z_Construct_UPackage__Script_CineCameraRigs(), TEXT("CineSplineInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_CineSplineInstanceData.OuterSingleton;
}
template<> CINECAMERARIGS_API UScriptStruct* StaticStruct<FCineSplineInstanceData>()
{
	return FCineSplineInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCineSplineInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CineSplineMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CineSplineMetadata;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCineSplineInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CineSplineComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCineSplineInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCineSplineInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCineSplineInstanceData_Statics::NewProp_CineSplineMetadata_MetaData[] = {
		{ "ModuleRelativePath", "Public/CineSplineComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCineSplineInstanceData_Statics::NewProp_CineSplineMetadata = { "CineSplineMetadata", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCineSplineInstanceData, CineSplineMetadata), Z_Construct_UClass_UCineSplineMetadata_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCineSplineInstanceData_Statics::NewProp_CineSplineMetadata_MetaData), Z_Construct_UScriptStruct_FCineSplineInstanceData_Statics::NewProp_CineSplineMetadata_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCineSplineInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCineSplineInstanceData_Statics::NewProp_CineSplineMetadata,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCineSplineInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CineCameraRigs,
		Z_Construct_UScriptStruct_FSplineInstanceData,
		&NewStructOps,
		"CineSplineInstanceData",
		Z_Construct_UScriptStruct_FCineSplineInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCineSplineInstanceData_Statics::PropPointers),
		sizeof(FCineSplineInstanceData),
		alignof(FCineSplineInstanceData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCineSplineInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCineSplineInstanceData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCineSplineInstanceData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCineSplineInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_CineSplineInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CineSplineInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FCineSplineInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CineSplineInstanceData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h_Statics::ScriptStructInfo[] = {
		{ FCineSplineInstanceData::StaticStruct, Z_Construct_UScriptStruct_FCineSplineInstanceData_Statics::NewStructOps, TEXT("CineSplineInstanceData"), &Z_Registration_Info_UScriptStruct_CineSplineInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCineSplineInstanceData), 231236598U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCineSplineComponent, UCineSplineComponent::StaticClass, TEXT("UCineSplineComponent"), &Z_Registration_Info_UClass_UCineSplineComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCineSplineComponent), 775010040U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h_2125480600(TEXT("/Script/CineCameraRigs"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
