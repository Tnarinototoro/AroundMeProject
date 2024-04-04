// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeCameraNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeCameraNode() {}
// Cross Module References
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNode();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangePhysicalCameraNode();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangePhysicalCameraNode_NoRegister();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeStandardCameraNode();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeStandardCameraNode_NoRegister();
	INTERCHANGENODES_API UEnum* Z_Construct_UEnum_InterchangeNodes_EInterchangeCameraProjectionType();
	UPackage* Z_Construct_UPackage__Script_InterchangeNodes();
// End Cross Module References
	DEFINE_FUNCTION(UInterchangePhysicalCameraNode::execSetCustomEnableDepthOfField)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomEnableDepthOfField(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePhysicalCameraNode::execGetCustomEnableDepthOfField)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomEnableDepthOfField(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePhysicalCameraNode::execSetCustomSensorHeight)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomSensorHeight(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePhysicalCameraNode::execGetCustomSensorHeight)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomSensorHeight(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePhysicalCameraNode::execSetCustomSensorWidth)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomSensorWidth(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePhysicalCameraNode::execGetCustomSensorWidth)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomSensorWidth(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePhysicalCameraNode::execSetCustomFocalLength)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomFocalLength(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePhysicalCameraNode::execGetCustomFocalLength)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomFocalLength(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	void UInterchangePhysicalCameraNode::StaticRegisterNativesUInterchangePhysicalCameraNode()
	{
		UClass* Class = UInterchangePhysicalCameraNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCustomEnableDepthOfField", &UInterchangePhysicalCameraNode::execGetCustomEnableDepthOfField },
			{ "GetCustomFocalLength", &UInterchangePhysicalCameraNode::execGetCustomFocalLength },
			{ "GetCustomSensorHeight", &UInterchangePhysicalCameraNode::execGetCustomSensorHeight },
			{ "GetCustomSensorWidth", &UInterchangePhysicalCameraNode::execGetCustomSensorWidth },
			{ "SetCustomEnableDepthOfField", &UInterchangePhysicalCameraNode::execSetCustomEnableDepthOfField },
			{ "SetCustomFocalLength", &UInterchangePhysicalCameraNode::execSetCustomFocalLength },
			{ "SetCustomSensorHeight", &UInterchangePhysicalCameraNode::execSetCustomSensorHeight },
			{ "SetCustomSensorWidth", &UInterchangePhysicalCameraNode::execSetCustomSensorWidth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomEnableDepthOfField_Statics
	{
		struct InterchangePhysicalCameraNode_eventGetCustomEnableDepthOfField_Parms
		{
			bool AttributeValue;
			bool ReturnValue;
		};
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomEnableDepthOfField_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangePhysicalCameraNode_eventGetCustomEnableDepthOfField_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomEnableDepthOfField_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePhysicalCameraNode_eventGetCustomEnableDepthOfField_Parms), &Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomEnableDepthOfField_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomEnableDepthOfField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangePhysicalCameraNode_eventGetCustomEnableDepthOfField_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomEnableDepthOfField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePhysicalCameraNode_eventGetCustomEnableDepthOfField_Parms), &Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomEnableDepthOfField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomEnableDepthOfField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomEnableDepthOfField_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomEnableDepthOfField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomEnableDepthOfField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Camera" },
		{ "ModuleRelativePath", "Public/InterchangeCameraNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomEnableDepthOfField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePhysicalCameraNode, nullptr, "GetCustomEnableDepthOfField", nullptr, nullptr, Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomEnableDepthOfField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomEnableDepthOfField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomEnableDepthOfField_Statics::InterchangePhysicalCameraNode_eventGetCustomEnableDepthOfField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomEnableDepthOfField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomEnableDepthOfField_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomEnableDepthOfField_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomEnableDepthOfField_Statics::InterchangePhysicalCameraNode_eventGetCustomEnableDepthOfField_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomEnableDepthOfField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomEnableDepthOfField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomFocalLength_Statics
	{
		struct InterchangePhysicalCameraNode_eventGetCustomFocalLength_Parms
		{
			float AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomFocalLength_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePhysicalCameraNode_eventGetCustomFocalLength_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomFocalLength_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangePhysicalCameraNode_eventGetCustomFocalLength_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomFocalLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePhysicalCameraNode_eventGetCustomFocalLength_Parms), &Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomFocalLength_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomFocalLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomFocalLength_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomFocalLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomFocalLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Camera" },
		{ "ModuleRelativePath", "Public/InterchangeCameraNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomFocalLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePhysicalCameraNode, nullptr, "GetCustomFocalLength", nullptr, nullptr, Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomFocalLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomFocalLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomFocalLength_Statics::InterchangePhysicalCameraNode_eventGetCustomFocalLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomFocalLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomFocalLength_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomFocalLength_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomFocalLength_Statics::InterchangePhysicalCameraNode_eventGetCustomFocalLength_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomFocalLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomFocalLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomSensorHeight_Statics
	{
		struct InterchangePhysicalCameraNode_eventGetCustomSensorHeight_Parms
		{
			float AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomSensorHeight_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePhysicalCameraNode_eventGetCustomSensorHeight_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomSensorHeight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangePhysicalCameraNode_eventGetCustomSensorHeight_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomSensorHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePhysicalCameraNode_eventGetCustomSensorHeight_Parms), &Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomSensorHeight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomSensorHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomSensorHeight_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomSensorHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomSensorHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Camera" },
		{ "ModuleRelativePath", "Public/InterchangeCameraNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomSensorHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePhysicalCameraNode, nullptr, "GetCustomSensorHeight", nullptr, nullptr, Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomSensorHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomSensorHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomSensorHeight_Statics::InterchangePhysicalCameraNode_eventGetCustomSensorHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomSensorHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomSensorHeight_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomSensorHeight_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomSensorHeight_Statics::InterchangePhysicalCameraNode_eventGetCustomSensorHeight_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomSensorHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomSensorHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomSensorWidth_Statics
	{
		struct InterchangePhysicalCameraNode_eventGetCustomSensorWidth_Parms
		{
			float AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomSensorWidth_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePhysicalCameraNode_eventGetCustomSensorWidth_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomSensorWidth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangePhysicalCameraNode_eventGetCustomSensorWidth_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomSensorWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePhysicalCameraNode_eventGetCustomSensorWidth_Parms), &Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomSensorWidth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomSensorWidth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomSensorWidth_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomSensorWidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomSensorWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Camera" },
		{ "ModuleRelativePath", "Public/InterchangeCameraNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomSensorWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePhysicalCameraNode, nullptr, "GetCustomSensorWidth", nullptr, nullptr, Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomSensorWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomSensorWidth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomSensorWidth_Statics::InterchangePhysicalCameraNode_eventGetCustomSensorWidth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomSensorWidth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomSensorWidth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomSensorWidth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomSensorWidth_Statics::InterchangePhysicalCameraNode_eventGetCustomSensorWidth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomSensorWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomSensorWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomEnableDepthOfField_Statics
	{
		struct InterchangePhysicalCameraNode_eventSetCustomEnableDepthOfField_Parms
		{
			bool AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomEnableDepthOfField_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomEnableDepthOfField_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangePhysicalCameraNode_eventSetCustomEnableDepthOfField_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomEnableDepthOfField_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePhysicalCameraNode_eventSetCustomEnableDepthOfField_Parms), &Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomEnableDepthOfField_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomEnableDepthOfField_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomEnableDepthOfField_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomEnableDepthOfField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangePhysicalCameraNode_eventSetCustomEnableDepthOfField_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomEnableDepthOfField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePhysicalCameraNode_eventSetCustomEnableDepthOfField_Parms), &Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomEnableDepthOfField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomEnableDepthOfField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomEnableDepthOfField_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomEnableDepthOfField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomEnableDepthOfField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Camera" },
		{ "ModuleRelativePath", "Public/InterchangeCameraNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomEnableDepthOfField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePhysicalCameraNode, nullptr, "SetCustomEnableDepthOfField", nullptr, nullptr, Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomEnableDepthOfField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomEnableDepthOfField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomEnableDepthOfField_Statics::InterchangePhysicalCameraNode_eventSetCustomEnableDepthOfField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomEnableDepthOfField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomEnableDepthOfField_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomEnableDepthOfField_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomEnableDepthOfField_Statics::InterchangePhysicalCameraNode_eventSetCustomEnableDepthOfField_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomEnableDepthOfField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomEnableDepthOfField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomFocalLength_Statics
	{
		struct InterchangePhysicalCameraNode_eventSetCustomFocalLength_Parms
		{
			float AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomFocalLength_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomFocalLength_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePhysicalCameraNode_eventSetCustomFocalLength_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomFocalLength_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomFocalLength_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomFocalLength_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangePhysicalCameraNode_eventSetCustomFocalLength_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomFocalLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePhysicalCameraNode_eventSetCustomFocalLength_Parms), &Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomFocalLength_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomFocalLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomFocalLength_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomFocalLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomFocalLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Camera" },
		{ "ModuleRelativePath", "Public/InterchangeCameraNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomFocalLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePhysicalCameraNode, nullptr, "SetCustomFocalLength", nullptr, nullptr, Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomFocalLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomFocalLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomFocalLength_Statics::InterchangePhysicalCameraNode_eventSetCustomFocalLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomFocalLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomFocalLength_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomFocalLength_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomFocalLength_Statics::InterchangePhysicalCameraNode_eventSetCustomFocalLength_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomFocalLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomFocalLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorHeight_Statics
	{
		struct InterchangePhysicalCameraNode_eventSetCustomSensorHeight_Parms
		{
			float AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorHeight_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorHeight_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePhysicalCameraNode_eventSetCustomSensorHeight_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorHeight_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorHeight_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorHeight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangePhysicalCameraNode_eventSetCustomSensorHeight_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePhysicalCameraNode_eventSetCustomSensorHeight_Parms), &Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorHeight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorHeight_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Camera" },
		{ "ModuleRelativePath", "Public/InterchangeCameraNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePhysicalCameraNode, nullptr, "SetCustomSensorHeight", nullptr, nullptr, Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorHeight_Statics::InterchangePhysicalCameraNode_eventSetCustomSensorHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorHeight_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorHeight_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorHeight_Statics::InterchangePhysicalCameraNode_eventSetCustomSensorHeight_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorWidth_Statics
	{
		struct InterchangePhysicalCameraNode_eventSetCustomSensorWidth_Parms
		{
			float AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorWidth_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorWidth_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePhysicalCameraNode_eventSetCustomSensorWidth_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorWidth_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorWidth_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorWidth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangePhysicalCameraNode_eventSetCustomSensorWidth_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePhysicalCameraNode_eventSetCustomSensorWidth_Parms), &Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorWidth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorWidth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorWidth_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorWidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Camera" },
		{ "ModuleRelativePath", "Public/InterchangeCameraNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePhysicalCameraNode, nullptr, "SetCustomSensorWidth", nullptr, nullptr, Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorWidth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorWidth_Statics::InterchangePhysicalCameraNode_eventSetCustomSensorWidth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorWidth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorWidth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorWidth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorWidth_Statics::InterchangePhysicalCameraNode_eventSetCustomSensorWidth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangePhysicalCameraNode);
	UClass* Z_Construct_UClass_UInterchangePhysicalCameraNode_NoRegister()
	{
		return UInterchangePhysicalCameraNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangePhysicalCameraNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangePhysicalCameraNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeBaseNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePhysicalCameraNode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangePhysicalCameraNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomEnableDepthOfField, "GetCustomEnableDepthOfField" }, // 2790006299
		{ &Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomFocalLength, "GetCustomFocalLength" }, // 3189130648
		{ &Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomSensorHeight, "GetCustomSensorHeight" }, // 2058595011
		{ &Z_Construct_UFunction_UInterchangePhysicalCameraNode_GetCustomSensorWidth, "GetCustomSensorWidth" }, // 1775528039
		{ &Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomEnableDepthOfField, "SetCustomEnableDepthOfField" }, // 2306512207
		{ &Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomFocalLength, "SetCustomFocalLength" }, // 4011281311
		{ &Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorHeight, "SetCustomSensorHeight" }, // 3686446290
		{ &Z_Construct_UFunction_UInterchangePhysicalCameraNode_SetCustomSensorWidth, "SetCustomSensorWidth" }, // 3476972827
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePhysicalCameraNode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangePhysicalCameraNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeCameraNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeCameraNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangePhysicalCameraNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangePhysicalCameraNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangePhysicalCameraNode_Statics::ClassParams = {
		&UInterchangePhysicalCameraNode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePhysicalCameraNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangePhysicalCameraNode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UInterchangePhysicalCameraNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangePhysicalCameraNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangePhysicalCameraNode.OuterSingleton, Z_Construct_UClass_UInterchangePhysicalCameraNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangePhysicalCameraNode.OuterSingleton;
	}
	template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangePhysicalCameraNode>()
	{
		return UInterchangePhysicalCameraNode::StaticClass();
	}
	UInterchangePhysicalCameraNode::UInterchangePhysicalCameraNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangePhysicalCameraNode);
	UInterchangePhysicalCameraNode::~UInterchangePhysicalCameraNode() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangeCameraProjectionType;
	static UEnum* EInterchangeCameraProjectionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInterchangeCameraProjectionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInterchangeCameraProjectionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangeNodes_EInterchangeCameraProjectionType, (UObject*)Z_Construct_UPackage__Script_InterchangeNodes(), TEXT("EInterchangeCameraProjectionType"));
		}
		return Z_Registration_Info_UEnum_EInterchangeCameraProjectionType.OuterSingleton;
	}
	template<> INTERCHANGENODES_API UEnum* StaticEnum<EInterchangeCameraProjectionType>()
	{
		return EInterchangeCameraProjectionType_StaticEnum();
	}
	struct Z_Construct_UEnum_InterchangeNodes_EInterchangeCameraProjectionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InterchangeNodes_EInterchangeCameraProjectionType_Statics::Enumerators[] = {
		{ "EInterchangeCameraProjectionType::Perspective", (int64)EInterchangeCameraProjectionType::Perspective },
		{ "EInterchangeCameraProjectionType::Orthographic", (int64)EInterchangeCameraProjectionType::Orthographic },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InterchangeNodes_EInterchangeCameraProjectionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InterchangeCameraNode.h" },
		{ "Orthographic.Name", "EInterchangeCameraProjectionType::Orthographic" },
		{ "Perspective.Name", "EInterchangeCameraProjectionType::Perspective" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangeNodes_EInterchangeCameraProjectionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InterchangeNodes,
		nullptr,
		"EInterchangeCameraProjectionType",
		"EInterchangeCameraProjectionType",
		Z_Construct_UEnum_InterchangeNodes_EInterchangeCameraProjectionType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeNodes_EInterchangeCameraProjectionType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeNodes_EInterchangeCameraProjectionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InterchangeNodes_EInterchangeCameraProjectionType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_InterchangeNodes_EInterchangeCameraProjectionType()
	{
		if (!Z_Registration_Info_UEnum_EInterchangeCameraProjectionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangeCameraProjectionType.InnerSingleton, Z_Construct_UEnum_InterchangeNodes_EInterchangeCameraProjectionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInterchangeCameraProjectionType.InnerSingleton;
	}
	DEFINE_FUNCTION(UInterchangeStandardCameraNode::execSetCustomFieldOfView)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomFieldOfView(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeStandardCameraNode::execGetCustomFieldOfView)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomFieldOfView(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeStandardCameraNode::execSetCustomAspectRatio)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomAspectRatio(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeStandardCameraNode::execGetCustomAspectRatio)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomAspectRatio(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeStandardCameraNode::execSetCustomFarClipPlane)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomFarClipPlane(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeStandardCameraNode::execGetCustomFarClipPlane)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomFarClipPlane(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeStandardCameraNode::execSetCustomNearClipPlane)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomNearClipPlane(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeStandardCameraNode::execGetCustomNearClipPlane)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomNearClipPlane(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeStandardCameraNode::execSetCustomWidth)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomWidth(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeStandardCameraNode::execGetCustomWidth)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomWidth(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeStandardCameraNode::execSetCustomProjectionMode)
	{
		P_GET_ENUM_REF(EInterchangeCameraProjectionType,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomProjectionMode((EInterchangeCameraProjectionType&)(Z_Param_Out_AttributeValue));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeStandardCameraNode::execGetCustomProjectionMode)
	{
		P_GET_ENUM_REF(EInterchangeCameraProjectionType,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomProjectionMode((EInterchangeCameraProjectionType&)(Z_Param_Out_AttributeValue));
		P_NATIVE_END;
	}
	void UInterchangeStandardCameraNode::StaticRegisterNativesUInterchangeStandardCameraNode()
	{
		UClass* Class = UInterchangeStandardCameraNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCustomAspectRatio", &UInterchangeStandardCameraNode::execGetCustomAspectRatio },
			{ "GetCustomFarClipPlane", &UInterchangeStandardCameraNode::execGetCustomFarClipPlane },
			{ "GetCustomFieldOfView", &UInterchangeStandardCameraNode::execGetCustomFieldOfView },
			{ "GetCustomNearClipPlane", &UInterchangeStandardCameraNode::execGetCustomNearClipPlane },
			{ "GetCustomProjectionMode", &UInterchangeStandardCameraNode::execGetCustomProjectionMode },
			{ "GetCustomWidth", &UInterchangeStandardCameraNode::execGetCustomWidth },
			{ "SetCustomAspectRatio", &UInterchangeStandardCameraNode::execSetCustomAspectRatio },
			{ "SetCustomFarClipPlane", &UInterchangeStandardCameraNode::execSetCustomFarClipPlane },
			{ "SetCustomFieldOfView", &UInterchangeStandardCameraNode::execSetCustomFieldOfView },
			{ "SetCustomNearClipPlane", &UInterchangeStandardCameraNode::execSetCustomNearClipPlane },
			{ "SetCustomProjectionMode", &UInterchangeStandardCameraNode::execSetCustomProjectionMode },
			{ "SetCustomWidth", &UInterchangeStandardCameraNode::execSetCustomWidth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomAspectRatio_Statics
	{
		struct InterchangeStandardCameraNode_eventGetCustomAspectRatio_Parms
		{
			float AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomAspectRatio_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStandardCameraNode_eventGetCustomAspectRatio_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomAspectRatio_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeStandardCameraNode_eventGetCustomAspectRatio_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomAspectRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStandardCameraNode_eventGetCustomAspectRatio_Parms), &Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomAspectRatio_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomAspectRatio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomAspectRatio_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomAspectRatio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomAspectRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Camera" },
		{ "ModuleRelativePath", "Public/InterchangeCameraNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStandardCameraNode, nullptr, "GetCustomAspectRatio", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomAspectRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomAspectRatio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomAspectRatio_Statics::InterchangeStandardCameraNode_eventGetCustomAspectRatio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomAspectRatio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomAspectRatio_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomAspectRatio_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomAspectRatio_Statics::InterchangeStandardCameraNode_eventGetCustomAspectRatio_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomAspectRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomAspectRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomFarClipPlane_Statics
	{
		struct InterchangeStandardCameraNode_eventGetCustomFarClipPlane_Parms
		{
			float AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomFarClipPlane_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStandardCameraNode_eventGetCustomFarClipPlane_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomFarClipPlane_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeStandardCameraNode_eventGetCustomFarClipPlane_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomFarClipPlane_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStandardCameraNode_eventGetCustomFarClipPlane_Parms), &Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomFarClipPlane_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomFarClipPlane_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomFarClipPlane_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomFarClipPlane_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomFarClipPlane_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Camera" },
		{ "ModuleRelativePath", "Public/InterchangeCameraNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomFarClipPlane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStandardCameraNode, nullptr, "GetCustomFarClipPlane", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomFarClipPlane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomFarClipPlane_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomFarClipPlane_Statics::InterchangeStandardCameraNode_eventGetCustomFarClipPlane_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomFarClipPlane_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomFarClipPlane_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomFarClipPlane_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomFarClipPlane_Statics::InterchangeStandardCameraNode_eventGetCustomFarClipPlane_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomFarClipPlane()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomFarClipPlane_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomFieldOfView_Statics
	{
		struct InterchangeStandardCameraNode_eventGetCustomFieldOfView_Parms
		{
			float AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomFieldOfView_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStandardCameraNode_eventGetCustomFieldOfView_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomFieldOfView_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeStandardCameraNode_eventGetCustomFieldOfView_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomFieldOfView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStandardCameraNode_eventGetCustomFieldOfView_Parms), &Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomFieldOfView_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomFieldOfView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomFieldOfView_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomFieldOfView_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomFieldOfView_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Camera" },
		{ "Comment", "//Field of View in Degrees.\n" },
		{ "ModuleRelativePath", "Public/InterchangeCameraNode.h" },
		{ "ToolTip", "Field of View in Degrees." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomFieldOfView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStandardCameraNode, nullptr, "GetCustomFieldOfView", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomFieldOfView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomFieldOfView_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomFieldOfView_Statics::InterchangeStandardCameraNode_eventGetCustomFieldOfView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomFieldOfView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomFieldOfView_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomFieldOfView_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomFieldOfView_Statics::InterchangeStandardCameraNode_eventGetCustomFieldOfView_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomFieldOfView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomFieldOfView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomNearClipPlane_Statics
	{
		struct InterchangeStandardCameraNode_eventGetCustomNearClipPlane_Parms
		{
			float AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomNearClipPlane_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStandardCameraNode_eventGetCustomNearClipPlane_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomNearClipPlane_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeStandardCameraNode_eventGetCustomNearClipPlane_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomNearClipPlane_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStandardCameraNode_eventGetCustomNearClipPlane_Parms), &Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomNearClipPlane_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomNearClipPlane_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomNearClipPlane_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomNearClipPlane_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomNearClipPlane_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Camera" },
		{ "ModuleRelativePath", "Public/InterchangeCameraNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomNearClipPlane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStandardCameraNode, nullptr, "GetCustomNearClipPlane", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomNearClipPlane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomNearClipPlane_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomNearClipPlane_Statics::InterchangeStandardCameraNode_eventGetCustomNearClipPlane_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomNearClipPlane_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomNearClipPlane_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomNearClipPlane_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomNearClipPlane_Statics::InterchangeStandardCameraNode_eventGetCustomNearClipPlane_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomNearClipPlane()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomNearClipPlane_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomProjectionMode_Statics
	{
		struct InterchangeStandardCameraNode_eventGetCustomProjectionMode_Parms
		{
			EInterchangeCameraProjectionType AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomProjectionMode_Statics::NewProp_AttributeValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomProjectionMode_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStandardCameraNode_eventGetCustomProjectionMode_Parms, AttributeValue), Z_Construct_UEnum_InterchangeNodes_EInterchangeCameraProjectionType, METADATA_PARAMS(0, nullptr) }; // 3208687270
	void Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomProjectionMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeStandardCameraNode_eventGetCustomProjectionMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomProjectionMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStandardCameraNode_eventGetCustomProjectionMode_Parms), &Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomProjectionMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomProjectionMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomProjectionMode_Statics::NewProp_AttributeValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomProjectionMode_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomProjectionMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomProjectionMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Camera" },
		{ "ModuleRelativePath", "Public/InterchangeCameraNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomProjectionMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStandardCameraNode, nullptr, "GetCustomProjectionMode", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomProjectionMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomProjectionMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomProjectionMode_Statics::InterchangeStandardCameraNode_eventGetCustomProjectionMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomProjectionMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomProjectionMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomProjectionMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomProjectionMode_Statics::InterchangeStandardCameraNode_eventGetCustomProjectionMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomProjectionMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomProjectionMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomWidth_Statics
	{
		struct InterchangeStandardCameraNode_eventGetCustomWidth_Parms
		{
			float AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomWidth_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStandardCameraNode_eventGetCustomWidth_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomWidth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeStandardCameraNode_eventGetCustomWidth_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStandardCameraNode_eventGetCustomWidth_Parms), &Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomWidth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomWidth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomWidth_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomWidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Camera" },
		{ "ModuleRelativePath", "Public/InterchangeCameraNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStandardCameraNode, nullptr, "GetCustomWidth", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomWidth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomWidth_Statics::InterchangeStandardCameraNode_eventGetCustomWidth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomWidth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomWidth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomWidth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomWidth_Statics::InterchangeStandardCameraNode_eventGetCustomWidth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomAspectRatio_Statics
	{
		struct InterchangeStandardCameraNode_eventSetCustomAspectRatio_Parms
		{
			float AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomAspectRatio_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomAspectRatio_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStandardCameraNode_eventSetCustomAspectRatio_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomAspectRatio_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomAspectRatio_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomAspectRatio_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeStandardCameraNode_eventSetCustomAspectRatio_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomAspectRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStandardCameraNode_eventSetCustomAspectRatio_Parms), &Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomAspectRatio_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomAspectRatio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomAspectRatio_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomAspectRatio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomAspectRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Camera" },
		{ "ModuleRelativePath", "Public/InterchangeCameraNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStandardCameraNode, nullptr, "SetCustomAspectRatio", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomAspectRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomAspectRatio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomAspectRatio_Statics::InterchangeStandardCameraNode_eventSetCustomAspectRatio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomAspectRatio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomAspectRatio_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomAspectRatio_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomAspectRatio_Statics::InterchangeStandardCameraNode_eventSetCustomAspectRatio_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomAspectRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomAspectRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFarClipPlane_Statics
	{
		struct InterchangeStandardCameraNode_eventSetCustomFarClipPlane_Parms
		{
			float AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFarClipPlane_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFarClipPlane_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStandardCameraNode_eventSetCustomFarClipPlane_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFarClipPlane_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFarClipPlane_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFarClipPlane_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeStandardCameraNode_eventSetCustomFarClipPlane_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFarClipPlane_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStandardCameraNode_eventSetCustomFarClipPlane_Parms), &Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFarClipPlane_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFarClipPlane_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFarClipPlane_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFarClipPlane_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFarClipPlane_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Camera" },
		{ "ModuleRelativePath", "Public/InterchangeCameraNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFarClipPlane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStandardCameraNode, nullptr, "SetCustomFarClipPlane", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFarClipPlane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFarClipPlane_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFarClipPlane_Statics::InterchangeStandardCameraNode_eventSetCustomFarClipPlane_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFarClipPlane_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFarClipPlane_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFarClipPlane_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFarClipPlane_Statics::InterchangeStandardCameraNode_eventSetCustomFarClipPlane_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFarClipPlane()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFarClipPlane_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFieldOfView_Statics
	{
		struct InterchangeStandardCameraNode_eventSetCustomFieldOfView_Parms
		{
			float AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFieldOfView_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFieldOfView_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStandardCameraNode_eventSetCustomFieldOfView_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFieldOfView_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFieldOfView_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFieldOfView_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeStandardCameraNode_eventSetCustomFieldOfView_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFieldOfView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStandardCameraNode_eventSetCustomFieldOfView_Parms), &Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFieldOfView_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFieldOfView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFieldOfView_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFieldOfView_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFieldOfView_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Camera" },
		{ "Comment", "//Field of View in Degrees.\n" },
		{ "ModuleRelativePath", "Public/InterchangeCameraNode.h" },
		{ "ToolTip", "Field of View in Degrees." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFieldOfView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStandardCameraNode, nullptr, "SetCustomFieldOfView", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFieldOfView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFieldOfView_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFieldOfView_Statics::InterchangeStandardCameraNode_eventSetCustomFieldOfView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFieldOfView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFieldOfView_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFieldOfView_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFieldOfView_Statics::InterchangeStandardCameraNode_eventSetCustomFieldOfView_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFieldOfView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFieldOfView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomNearClipPlane_Statics
	{
		struct InterchangeStandardCameraNode_eventSetCustomNearClipPlane_Parms
		{
			float AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomNearClipPlane_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomNearClipPlane_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStandardCameraNode_eventSetCustomNearClipPlane_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomNearClipPlane_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomNearClipPlane_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomNearClipPlane_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeStandardCameraNode_eventSetCustomNearClipPlane_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomNearClipPlane_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStandardCameraNode_eventSetCustomNearClipPlane_Parms), &Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomNearClipPlane_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomNearClipPlane_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomNearClipPlane_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomNearClipPlane_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomNearClipPlane_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Camera" },
		{ "ModuleRelativePath", "Public/InterchangeCameraNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomNearClipPlane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStandardCameraNode, nullptr, "SetCustomNearClipPlane", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomNearClipPlane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomNearClipPlane_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomNearClipPlane_Statics::InterchangeStandardCameraNode_eventSetCustomNearClipPlane_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomNearClipPlane_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomNearClipPlane_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomNearClipPlane_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomNearClipPlane_Statics::InterchangeStandardCameraNode_eventSetCustomNearClipPlane_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomNearClipPlane()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomNearClipPlane_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomProjectionMode_Statics
	{
		struct InterchangeStandardCameraNode_eventSetCustomProjectionMode_Parms
		{
			EInterchangeCameraProjectionType AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomProjectionMode_Statics::NewProp_AttributeValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomProjectionMode_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomProjectionMode_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStandardCameraNode_eventSetCustomProjectionMode_Parms, AttributeValue), Z_Construct_UEnum_InterchangeNodes_EInterchangeCameraProjectionType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomProjectionMode_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomProjectionMode_Statics::NewProp_AttributeValue_MetaData) }; // 3208687270
	void Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomProjectionMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeStandardCameraNode_eventSetCustomProjectionMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomProjectionMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStandardCameraNode_eventSetCustomProjectionMode_Parms), &Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomProjectionMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomProjectionMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomProjectionMode_Statics::NewProp_AttributeValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomProjectionMode_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomProjectionMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomProjectionMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Camera" },
		{ "ModuleRelativePath", "Public/InterchangeCameraNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomProjectionMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStandardCameraNode, nullptr, "SetCustomProjectionMode", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomProjectionMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomProjectionMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomProjectionMode_Statics::InterchangeStandardCameraNode_eventSetCustomProjectionMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomProjectionMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomProjectionMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomProjectionMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomProjectionMode_Statics::InterchangeStandardCameraNode_eventSetCustomProjectionMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomProjectionMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomProjectionMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomWidth_Statics
	{
		struct InterchangeStandardCameraNode_eventSetCustomWidth_Parms
		{
			float AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomWidth_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomWidth_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStandardCameraNode_eventSetCustomWidth_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomWidth_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomWidth_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomWidth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeStandardCameraNode_eventSetCustomWidth_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStandardCameraNode_eventSetCustomWidth_Parms), &Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomWidth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomWidth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomWidth_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomWidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Camera" },
		{ "ModuleRelativePath", "Public/InterchangeCameraNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStandardCameraNode, nullptr, "SetCustomWidth", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomWidth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomWidth_Statics::InterchangeStandardCameraNode_eventSetCustomWidth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomWidth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomWidth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomWidth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomWidth_Statics::InterchangeStandardCameraNode_eventSetCustomWidth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeStandardCameraNode);
	UClass* Z_Construct_UClass_UInterchangeStandardCameraNode_NoRegister()
	{
		return UInterchangeStandardCameraNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeStandardCameraNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeStandardCameraNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeBaseNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeStandardCameraNode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeStandardCameraNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomAspectRatio, "GetCustomAspectRatio" }, // 593078390
		{ &Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomFarClipPlane, "GetCustomFarClipPlane" }, // 529161231
		{ &Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomFieldOfView, "GetCustomFieldOfView" }, // 3167438197
		{ &Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomNearClipPlane, "GetCustomNearClipPlane" }, // 2249212544
		{ &Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomProjectionMode, "GetCustomProjectionMode" }, // 2821312879
		{ &Z_Construct_UFunction_UInterchangeStandardCameraNode_GetCustomWidth, "GetCustomWidth" }, // 1870372418
		{ &Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomAspectRatio, "SetCustomAspectRatio" }, // 2493355416
		{ &Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFarClipPlane, "SetCustomFarClipPlane" }, // 2900688563
		{ &Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomFieldOfView, "SetCustomFieldOfView" }, // 290573812
		{ &Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomNearClipPlane, "SetCustomNearClipPlane" }, // 3231243983
		{ &Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomProjectionMode, "SetCustomProjectionMode" }, // 2369336715
		{ &Z_Construct_UFunction_UInterchangeStandardCameraNode_SetCustomWidth, "SetCustomWidth" }, // 3717747934
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeStandardCameraNode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeStandardCameraNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Primarily used for Ortho Camera\n" },
		{ "IncludePath", "InterchangeCameraNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeCameraNode.h" },
		{ "ToolTip", "Primarily used for Ortho Camera" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeStandardCameraNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeStandardCameraNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeStandardCameraNode_Statics::ClassParams = {
		&UInterchangeStandardCameraNode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeStandardCameraNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeStandardCameraNode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UInterchangeStandardCameraNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeStandardCameraNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeStandardCameraNode.OuterSingleton, Z_Construct_UClass_UInterchangeStandardCameraNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeStandardCameraNode.OuterSingleton;
	}
	template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeStandardCameraNode>()
	{
		return UInterchangeStandardCameraNode::StaticClass();
	}
	UInterchangeStandardCameraNode::UInterchangeStandardCameraNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeStandardCameraNode);
	UInterchangeStandardCameraNode::~UInterchangeStandardCameraNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_Statics::EnumInfo[] = {
		{ EInterchangeCameraProjectionType_StaticEnum, TEXT("EInterchangeCameraProjectionType"), &Z_Registration_Info_UEnum_EInterchangeCameraProjectionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3208687270U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangePhysicalCameraNode, UInterchangePhysicalCameraNode::StaticClass, TEXT("UInterchangePhysicalCameraNode"), &Z_Registration_Info_UClass_UInterchangePhysicalCameraNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangePhysicalCameraNode), 3512419466U) },
		{ Z_Construct_UClass_UInterchangeStandardCameraNode, UInterchangeStandardCameraNode::StaticClass, TEXT("UInterchangeStandardCameraNode"), &Z_Registration_Info_UClass_UInterchangeStandardCameraNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeStandardCameraNode), 2851511861U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_3536768128(TEXT("/Script/InterchangeNodes"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
