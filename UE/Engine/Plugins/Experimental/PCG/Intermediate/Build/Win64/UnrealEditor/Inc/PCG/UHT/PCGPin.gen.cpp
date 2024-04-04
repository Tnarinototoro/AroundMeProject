// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGPin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGPin() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	PCG_API UClass* Z_Construct_UClass_UPCGBlueprintPinHelpers();
	PCG_API UClass* Z_Construct_UClass_UPCGBlueprintPinHelpers_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGEdge_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGNode_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGPin();
	PCG_API UClass* Z_Construct_UClass_UPCGPin_NoRegister();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGDataType();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGExclusiveDataType();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGTypeConversion();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGPinProperties();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGPinProperties;
class UScriptStruct* FPCGPinProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGPinProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGPinProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGPinProperties, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGPinProperties"));
	}
	return Z_Registration_Info_UScriptStruct_PCGPinProperties.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGPinProperties>()
{
	return FPCGPinProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGPinProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Label;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_AllowedTypes_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedTypes_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AllowedTypes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowMultipleData_MetaData[];
#endif
		static void NewProp_bAllowMultipleData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowMultipleData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowMultipleConnections_MetaData[];
#endif
		static void NewProp_bAllowMultipleConnections_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowMultipleConnections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAdvancedPin_MetaData[];
#endif
		static void NewProp_bAdvancedPin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdvancedPin;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tooltip_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Tooltip;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGPinProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeBreak", "/Script/PCG.PCGBlueprintPinHelpers.BreakPinProperty" },
		{ "HasNativeMake", "/Script/PCG.PCGBlueprintPinHelpers.MakePinProperty" },
		{ "ModuleRelativePath", "Public/PCGPin.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGPinProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_Label_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGPin.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGPinProperties, Label), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_Label_MetaData), Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_Label_MetaData) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_AllowedTypes_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_AllowedTypes_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGPin.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_AllowedTypes = { "AllowedTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGPinProperties, AllowedTypes), Z_Construct_UEnum_PCG_EPCGDataType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_AllowedTypes_MetaData), Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_AllowedTypes_MetaData) }; // 3852861111
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAllowMultipleData_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGPin.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAllowMultipleData_SetBit(void* Obj)
	{
		((FPCGPinProperties*)Obj)->bAllowMultipleData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAllowMultipleData = { "bAllowMultipleData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGPinProperties), &Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAllowMultipleData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAllowMultipleData_MetaData), Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAllowMultipleData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAllowMultipleConnections_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bAllowMultipleData" },
		{ "ModuleRelativePath", "Public/PCGPin.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAllowMultipleConnections_SetBit(void* Obj)
	{
		((FPCGPinProperties*)Obj)->bAllowMultipleConnections = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAllowMultipleConnections = { "bAllowMultipleConnections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGPinProperties), &Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAllowMultipleConnections_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAllowMultipleConnections_MetaData), Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAllowMultipleConnections_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAdvancedPin_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/* Advanced pin will be hidden by default in the UI and will be shown only if the user extend the node (in the UI) to see advanced pins. */" },
		{ "ModuleRelativePath", "Public/PCGPin.h" },
		{ "ToolTip", "Advanced pin will be hidden by default in the UI and will be shown only if the user extend the node (in the UI) to see advanced pins." },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAdvancedPin_SetBit(void* Obj)
	{
		((FPCGPinProperties*)Obj)->bAdvancedPin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAdvancedPin = { "bAdvancedPin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGPinProperties), &Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAdvancedPin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAdvancedPin_MetaData), Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAdvancedPin_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_Tooltip_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGPin.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGPinProperties, Tooltip), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_Tooltip_MetaData), Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_Tooltip_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGPinProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_AllowedTypes_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_AllowedTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAllowMultipleData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAllowMultipleConnections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAdvancedPin,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_Tooltip,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGPinProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		&NewStructOps,
		"PCGPinProperties",
		Z_Construct_UScriptStruct_FPCGPinProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPinProperties_Statics::PropPointers),
		sizeof(FPCGPinProperties),
		alignof(FPCGPinProperties),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPinProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGPinProperties_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPinProperties_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPCGPinProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGPinProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGPinProperties.InnerSingleton, Z_Construct_UScriptStruct_FPCGPinProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGPinProperties.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGTypeConversion;
	static UEnum* EPCGTypeConversion_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGTypeConversion.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGTypeConversion.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGTypeConversion, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGTypeConversion"));
		}
		return Z_Registration_Info_UEnum_EPCGTypeConversion.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGTypeConversion>()
	{
		return EPCGTypeConversion_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGTypeConversion_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGTypeConversion_Statics::Enumerators[] = {
		{ "EPCGTypeConversion::NoConversionRequired", (int64)EPCGTypeConversion::NoConversionRequired },
		{ "EPCGTypeConversion::CollapseToPoint", (int64)EPCGTypeConversion::CollapseToPoint },
		{ "EPCGTypeConversion::Filter", (int64)EPCGTypeConversion::Filter },
		{ "EPCGTypeConversion::MakeConcrete", (int64)EPCGTypeConversion::MakeConcrete },
		{ "EPCGTypeConversion::Failed", (int64)EPCGTypeConversion::Failed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGTypeConversion_Statics::Enum_MetaDataParams[] = {
		{ "CollapseToPoint.Name", "EPCGTypeConversion::CollapseToPoint" },
		{ "Failed.Name", "EPCGTypeConversion::Failed" },
		{ "Filter.Name", "EPCGTypeConversion::Filter" },
		{ "MakeConcrete.Name", "EPCGTypeConversion::MakeConcrete" },
		{ "ModuleRelativePath", "Public/PCGPin.h" },
		{ "NoConversionRequired.Name", "EPCGTypeConversion::NoConversionRequired" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGTypeConversion_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGTypeConversion",
		"EPCGTypeConversion",
		Z_Construct_UEnum_PCG_EPCGTypeConversion_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGTypeConversion_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGTypeConversion_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCG_EPCGTypeConversion_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGTypeConversion()
	{
		if (!Z_Registration_Info_UEnum_EPCGTypeConversion.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGTypeConversion.InnerSingleton, Z_Construct_UEnum_PCG_EPCGTypeConversion_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGTypeConversion.InnerSingleton;
	}
	DEFINE_FUNCTION(UPCGBlueprintPinHelpers::execMakePinProperty)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Label);
		P_GET_UBOOL(Z_Param_bAllowMultipleData);
		P_GET_UBOOL(Z_Param_bAllowMultipleConnections);
		P_GET_UBOOL(Z_Param_bAdvancedPin);
		P_GET_ENUM(EPCGExclusiveDataType,Z_Param_AllowedType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPCGPinProperties*)Z_Param__Result=UPCGBlueprintPinHelpers::MakePinProperty(Z_Param_Label,Z_Param_bAllowMultipleData,Z_Param_bAllowMultipleConnections,Z_Param_bAdvancedPin,EPCGExclusiveDataType(Z_Param_AllowedType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintPinHelpers::execBreakPinProperty)
	{
		P_GET_STRUCT_REF(FPCGPinProperties,Z_Param_Out_PinProperty);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Label);
		P_GET_UBOOL_REF(Z_Param_Out_bAllowMultipleData);
		P_GET_UBOOL_REF(Z_Param_Out_bAllowMultipleConnections);
		P_GET_UBOOL_REF(Z_Param_Out_bAdvancedPin);
		P_GET_ENUM_REF(EPCGExclusiveDataType,Z_Param_Out_AllowedType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGBlueprintPinHelpers::BreakPinProperty(Z_Param_Out_PinProperty,Z_Param_Out_Label,Z_Param_Out_bAllowMultipleData,Z_Param_Out_bAllowMultipleConnections,Z_Param_Out_bAdvancedPin,(EPCGExclusiveDataType&)(Z_Param_Out_AllowedType));
		P_NATIVE_END;
	}
	void UPCGBlueprintPinHelpers::StaticRegisterNativesUPCGBlueprintPinHelpers()
	{
		UClass* Class = UPCGBlueprintPinHelpers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakPinProperty", &UPCGBlueprintPinHelpers::execBreakPinProperty },
			{ "MakePinProperty", &UPCGBlueprintPinHelpers::execMakePinProperty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty_Statics
	{
		struct PCGBlueprintPinHelpers_eventBreakPinProperty_Parms
		{
			FPCGPinProperties PinProperty;
			FName Label;
			bool bAllowMultipleData;
			bool bAllowMultipleConnections;
			bool bAdvancedPin;
			EPCGExclusiveDataType AllowedType;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinProperty_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PinProperty;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Label;
		static void NewProp_bAllowMultipleData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowMultipleData;
		static void NewProp_bAllowMultipleConnections_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowMultipleConnections;
		static void NewProp_bAdvancedPin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdvancedPin;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AllowedType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AllowedType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty_Statics::NewProp_PinProperty_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty_Statics::NewProp_PinProperty = { "PinProperty", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintPinHelpers_eventBreakPinProperty_Parms, PinProperty), Z_Construct_UScriptStruct_FPCGPinProperties, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty_Statics::NewProp_PinProperty_MetaData), Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty_Statics::NewProp_PinProperty_MetaData) }; // 1976663911
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintPinHelpers_eventBreakPinProperty_Parms, Label), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty_Statics::NewProp_bAllowMultipleData_SetBit(void* Obj)
	{
		((PCGBlueprintPinHelpers_eventBreakPinProperty_Parms*)Obj)->bAllowMultipleData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty_Statics::NewProp_bAllowMultipleData = { "bAllowMultipleData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGBlueprintPinHelpers_eventBreakPinProperty_Parms), &Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty_Statics::NewProp_bAllowMultipleData_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty_Statics::NewProp_bAllowMultipleConnections_SetBit(void* Obj)
	{
		((PCGBlueprintPinHelpers_eventBreakPinProperty_Parms*)Obj)->bAllowMultipleConnections = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty_Statics::NewProp_bAllowMultipleConnections = { "bAllowMultipleConnections", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGBlueprintPinHelpers_eventBreakPinProperty_Parms), &Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty_Statics::NewProp_bAllowMultipleConnections_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty_Statics::NewProp_bAdvancedPin_SetBit(void* Obj)
	{
		((PCGBlueprintPinHelpers_eventBreakPinProperty_Parms*)Obj)->bAdvancedPin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty_Statics::NewProp_bAdvancedPin = { "bAdvancedPin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGBlueprintPinHelpers_eventBreakPinProperty_Parms), &Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty_Statics::NewProp_bAdvancedPin_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty_Statics::NewProp_AllowedType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty_Statics::NewProp_AllowedType = { "AllowedType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintPinHelpers_eventBreakPinProperty_Parms, AllowedType), Z_Construct_UEnum_PCG_EPCGExclusiveDataType, METADATA_PARAMS(0, nullptr) }; // 2341094698
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty_Statics::NewProp_PinProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty_Statics::NewProp_bAllowMultipleData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty_Statics::NewProp_bAllowMultipleConnections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty_Statics::NewProp_bAdvancedPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty_Statics::NewProp_AllowedType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty_Statics::NewProp_AllowedType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Pins" },
		{ "ModuleRelativePath", "Public/PCGPin.h" },
		{ "NativeBreakFunc", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintPinHelpers, nullptr, "BreakPinProperty", nullptr, nullptr, Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty_Statics::PCGBlueprintPinHelpers_eventBreakPinProperty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty_Statics::PCGBlueprintPinHelpers_eventBreakPinProperty_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintPinHelpers_MakePinProperty_Statics
	{
		struct PCGBlueprintPinHelpers_eventMakePinProperty_Parms
		{
			FName Label;
			bool bAllowMultipleData;
			bool bAllowMultipleConnections;
			bool bAdvancedPin;
			EPCGExclusiveDataType AllowedType;
			FPCGPinProperties ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Label;
		static void NewProp_bAllowMultipleData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowMultipleData;
		static void NewProp_bAllowMultipleConnections_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowMultipleConnections;
		static void NewProp_bAdvancedPin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdvancedPin;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AllowedType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AllowedType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGBlueprintPinHelpers_MakePinProperty_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintPinHelpers_eventMakePinProperty_Parms, Label), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UPCGBlueprintPinHelpers_MakePinProperty_Statics::NewProp_bAllowMultipleData_SetBit(void* Obj)
	{
		((PCGBlueprintPinHelpers_eventMakePinProperty_Parms*)Obj)->bAllowMultipleData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGBlueprintPinHelpers_MakePinProperty_Statics::NewProp_bAllowMultipleData = { "bAllowMultipleData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGBlueprintPinHelpers_eventMakePinProperty_Parms), &Z_Construct_UFunction_UPCGBlueprintPinHelpers_MakePinProperty_Statics::NewProp_bAllowMultipleData_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UPCGBlueprintPinHelpers_MakePinProperty_Statics::NewProp_bAllowMultipleConnections_SetBit(void* Obj)
	{
		((PCGBlueprintPinHelpers_eventMakePinProperty_Parms*)Obj)->bAllowMultipleConnections = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGBlueprintPinHelpers_MakePinProperty_Statics::NewProp_bAllowMultipleConnections = { "bAllowMultipleConnections", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGBlueprintPinHelpers_eventMakePinProperty_Parms), &Z_Construct_UFunction_UPCGBlueprintPinHelpers_MakePinProperty_Statics::NewProp_bAllowMultipleConnections_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UPCGBlueprintPinHelpers_MakePinProperty_Statics::NewProp_bAdvancedPin_SetBit(void* Obj)
	{
		((PCGBlueprintPinHelpers_eventMakePinProperty_Parms*)Obj)->bAdvancedPin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGBlueprintPinHelpers_MakePinProperty_Statics::NewProp_bAdvancedPin = { "bAdvancedPin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGBlueprintPinHelpers_eventMakePinProperty_Parms), &Z_Construct_UFunction_UPCGBlueprintPinHelpers_MakePinProperty_Statics::NewProp_bAdvancedPin_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPCGBlueprintPinHelpers_MakePinProperty_Statics::NewProp_AllowedType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPCGBlueprintPinHelpers_MakePinProperty_Statics::NewProp_AllowedType = { "AllowedType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintPinHelpers_eventMakePinProperty_Parms, AllowedType), Z_Construct_UEnum_PCG_EPCGExclusiveDataType, METADATA_PARAMS(0, nullptr) }; // 2341094698
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintPinHelpers_MakePinProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintPinHelpers_eventMakePinProperty_Parms, ReturnValue), Z_Construct_UScriptStruct_FPCGPinProperties, METADATA_PARAMS(0, nullptr) }; // 1976663911
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintPinHelpers_MakePinProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintPinHelpers_MakePinProperty_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintPinHelpers_MakePinProperty_Statics::NewProp_bAllowMultipleData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintPinHelpers_MakePinProperty_Statics::NewProp_bAllowMultipleConnections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintPinHelpers_MakePinProperty_Statics::NewProp_bAdvancedPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintPinHelpers_MakePinProperty_Statics::NewProp_AllowedType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintPinHelpers_MakePinProperty_Statics::NewProp_AllowedType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintPinHelpers_MakePinProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintPinHelpers_MakePinProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Pins" },
		{ "CPP_Default_AllowedType", "Any" },
		{ "ModuleRelativePath", "Public/PCGPin.h" },
		{ "NativeMakeFunc", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintPinHelpers_MakePinProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintPinHelpers, nullptr, "MakePinProperty", nullptr, nullptr, Z_Construct_UFunction_UPCGBlueprintPinHelpers_MakePinProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintPinHelpers_MakePinProperty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGBlueprintPinHelpers_MakePinProperty_Statics::PCGBlueprintPinHelpers_eventMakePinProperty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintPinHelpers_MakePinProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGBlueprintPinHelpers_MakePinProperty_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintPinHelpers_MakePinProperty_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGBlueprintPinHelpers_MakePinProperty_Statics::PCGBlueprintPinHelpers_eventMakePinProperty_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGBlueprintPinHelpers_MakePinProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintPinHelpers_MakePinProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGBlueprintPinHelpers);
	UClass* Z_Construct_UClass_UPCGBlueprintPinHelpers_NoRegister()
	{
		return UPCGBlueprintPinHelpers::StaticClass();
	}
	struct Z_Construct_UClass_UPCGBlueprintPinHelpers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGBlueprintPinHelpers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintPinHelpers_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPCGBlueprintPinHelpers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty, "BreakPinProperty" }, // 1073880045
		{ &Z_Construct_UFunction_UPCGBlueprintPinHelpers_MakePinProperty, "MakePinProperty" }, // 2111507711
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintPinHelpers_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintPinHelpers_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PCGPin.h" },
		{ "ModuleRelativePath", "Public/PCGPin.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGBlueprintPinHelpers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGBlueprintPinHelpers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGBlueprintPinHelpers_Statics::ClassParams = {
		&UPCGBlueprintPinHelpers::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintPinHelpers_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGBlueprintPinHelpers_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPCGBlueprintPinHelpers()
	{
		if (!Z_Registration_Info_UClass_UPCGBlueprintPinHelpers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGBlueprintPinHelpers.OuterSingleton, Z_Construct_UClass_UPCGBlueprintPinHelpers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGBlueprintPinHelpers.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGBlueprintPinHelpers>()
	{
		return UPCGBlueprintPinHelpers::StaticClass();
	}
	UPCGBlueprintPinHelpers::UPCGBlueprintPinHelpers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGBlueprintPinHelpers);
	UPCGBlueprintPinHelpers::~UPCGBlueprintPinHelpers() {}
	DEFINE_FUNCTION(UPCGPin::execSetTooltip)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InTooltip);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTooltip(Z_Param_Out_InTooltip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGPin::execGetTooltip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetTooltip();
		P_NATIVE_END;
	}
	void UPCGPin::StaticRegisterNativesUPCGPin()
	{
		UClass* Class = UPCGPin::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTooltip", &UPCGPin::execGetTooltip },
			{ "SetTooltip", &UPCGPin::execSetTooltip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPCGPin_GetTooltip_Statics
	{
		struct PCGPin_eventGetTooltip_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UPCGPin_GetTooltip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGPin_eventGetTooltip_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGPin_GetTooltip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGPin_GetTooltip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGPin_GetTooltip_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGPin.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGPin_GetTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGPin, nullptr, "GetTooltip", nullptr, nullptr, Z_Construct_UFunction_UPCGPin_GetTooltip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGPin_GetTooltip_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGPin_GetTooltip_Statics::PCGPin_eventGetTooltip_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGPin_GetTooltip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGPin_GetTooltip_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGPin_GetTooltip_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGPin_GetTooltip_Statics::PCGPin_eventGetTooltip_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGPin_GetTooltip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGPin_GetTooltip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGPin_SetTooltip_Statics
	{
		struct PCGPin_eventSetTooltip_Parms
		{
			FText InTooltip;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTooltip_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InTooltip;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGPin_SetTooltip_Statics::NewProp_InTooltip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UPCGPin_SetTooltip_Statics::NewProp_InTooltip = { "InTooltip", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGPin_eventSetTooltip_Parms, InTooltip), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGPin_SetTooltip_Statics::NewProp_InTooltip_MetaData), Z_Construct_UFunction_UPCGPin_SetTooltip_Statics::NewProp_InTooltip_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGPin_SetTooltip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGPin_SetTooltip_Statics::NewProp_InTooltip,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGPin_SetTooltip_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGPin.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGPin_SetTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGPin, nullptr, "SetTooltip", nullptr, nullptr, Z_Construct_UFunction_UPCGPin_SetTooltip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGPin_SetTooltip_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGPin_SetTooltip_Statics::PCGPin_eventSetTooltip_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGPin_SetTooltip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGPin_SetTooltip_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGPin_SetTooltip_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGPin_SetTooltip_Statics::PCGPin_eventSetTooltip_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGPin_SetTooltip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGPin_SetTooltip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGPin);
	UClass* Z_Construct_UClass_UPCGPin_NoRegister()
	{
		return UPCGPin::StaticClass();
	}
	struct Z_Construct_UClass_UPCGPin_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Node;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Label;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Edges_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Edges_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Edges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Properties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGPin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPin_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPCGPin_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGPin_GetTooltip, "GetTooltip" }, // 3176600016
		{ &Z_Construct_UFunction_UPCGPin_SetTooltip, "SetTooltip" }, // 1198630465
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPin_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPin_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "PCGPin.h" },
		{ "ModuleRelativePath", "Public/PCGPin.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPin_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "// ~End UObject interface\n" },
		{ "ModuleRelativePath", "Public/PCGPin.h" },
		{ "ToolTip", "~End UObject interface" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGPin_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPin, Node), Z_Construct_UClass_UPCGNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPin_Statics::NewProp_Node_MetaData), Z_Construct_UClass_UPCGPin_Statics::NewProp_Node_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPin_Statics::NewProp_Label_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGPin.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGPin_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPin, Label_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPin_Statics::NewProp_Label_MetaData), Z_Construct_UClass_UPCGPin_Statics::NewProp_Label_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGPin_Statics::NewProp_Edges_Inner = { "Edges", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPCGEdge_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPin_Statics::NewProp_Edges_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/PCGPin.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGPin_Statics::NewProp_Edges = { "Edges", nullptr, (EPropertyFlags)0x0014400000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPin, Edges), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPin_Statics::NewProp_Edges_MetaData), Z_Construct_UClass_UPCGPin_Statics::NewProp_Edges_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPin_Statics::NewProp_Properties_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGPin.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGPin_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPin, Properties), Z_Construct_UScriptStruct_FPCGPinProperties, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPin_Statics::NewProp_Properties_MetaData), Z_Construct_UClass_UPCGPin_Statics::NewProp_Properties_MetaData) }; // 1976663911
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGPin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPin_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPin_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPin_Statics::NewProp_Edges_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPin_Statics::NewProp_Edges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPin_Statics::NewProp_Properties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGPin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGPin>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGPin_Statics::ClassParams = {
		&UPCGPin::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPCGPin_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPin_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPin_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGPin_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPin_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPCGPin()
	{
		if (!Z_Registration_Info_UClass_UPCGPin.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGPin.OuterSingleton, Z_Construct_UClass_UPCGPin_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGPin.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGPin>()
	{
		return UPCGPin::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGPin);
	UPCGPin::~UPCGPin() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_Statics::EnumInfo[] = {
		{ EPCGTypeConversion_StaticEnum, TEXT("EPCGTypeConversion"), &Z_Registration_Info_UEnum_EPCGTypeConversion, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2098763355U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_Statics::ScriptStructInfo[] = {
		{ FPCGPinProperties::StaticStruct, Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewStructOps, TEXT("PCGPinProperties"), &Z_Registration_Info_UScriptStruct_PCGPinProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGPinProperties), 1976663911U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGBlueprintPinHelpers, UPCGBlueprintPinHelpers::StaticClass, TEXT("UPCGBlueprintPinHelpers"), &Z_Registration_Info_UClass_UPCGBlueprintPinHelpers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGBlueprintPinHelpers), 3234138781U) },
		{ Z_Construct_UClass_UPCGPin, UPCGPin::StaticClass, TEXT("UPCGPin"), &Z_Registration_Info_UClass_UPCGPin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGPin), 1080937508U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_1871286308(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGPin_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
