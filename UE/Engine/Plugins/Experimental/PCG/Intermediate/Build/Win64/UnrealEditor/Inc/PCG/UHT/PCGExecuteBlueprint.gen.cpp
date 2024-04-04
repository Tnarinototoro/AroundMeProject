// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/PCGExecuteBlueprint.h"
#include "PCGContext.h"
#include "PCGData.h"
#include "PCGPin.h"
#include "PCGPoint.h"
#include "PCGSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGExecuteBlueprint() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	PCG_API UClass* Z_Construct_UClass_UPCGBlueprintElement();
	PCG_API UClass* Z_Construct_UClass_UPCGBlueprintElement_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGBlueprintSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGBlueprintSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGMetadata_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGPointData_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGSpatialData_NoRegister();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGSettingsType();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGContext();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGDataCollection();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGPinProperties();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGPoint();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGPreConfiguredSettingsInfo();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	DEFINE_FUNCTION(UPCGBlueprintElement::execGetContext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPCGContext*)Z_Param__Result=P_THIS->GetContext();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintElement::execGetRandomStream)
	{
		P_GET_STRUCT_REF(FPCGContext,Z_Param_Out_InContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRandomStream*)Z_Param__Result=P_THIS->GetRandomStream(Z_Param_Out_InContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintElement::execGetSeed)
	{
		P_GET_STRUCT_REF(FPCGContext,Z_Param_Out_InContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSeed(Z_Param_Out_InContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintElement::execGetOutputPinByLabel)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InPinLabel);
		P_GET_STRUCT_REF(FPCGPinProperties,Z_Param_Out_OutFoundPin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetOutputPinByLabel(Z_Param_InPinLabel,Z_Param_Out_OutFoundPin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintElement::execGetInputPinByLabel)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InPinLabel);
		P_GET_STRUCT_REF(FPCGPinProperties,Z_Param_Out_OutFoundPin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetInputPinByLabel(Z_Param_InPinLabel,Z_Param_Out_OutFoundPin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintElement::execGetOutputPins)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FPCGPinProperties>*)Z_Param__Result=P_THIS->GetOutputPins();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintElement::execGetInputPins)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FPCGPinProperties>*)Z_Param__Result=P_THIS->GetInputPins();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintElement::execCustomOutputLabels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FName>*)Z_Param__Result=P_THIS->CustomOutputLabels();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintElement::execCustomInputLabels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FName>*)Z_Param__Result=P_THIS->CustomInputLabels();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintElement::execIsCacheableOverride)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCacheableOverride_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintElement::execNodeTypeOverride)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPCGSettingsType*)Z_Param__Result=P_THIS->NodeTypeOverride_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintElement::execNodeColorOverride)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->NodeColorOverride_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintElement::execNodeTitleOverride)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->NodeTitleOverride_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintElement::execIterationLoop)
	{
		P_GET_STRUCT_REF(FPCGContext,Z_Param_Out_InContext);
		P_GET_PROPERTY(FInt64Property,Z_Param_NumIterations);
		P_GET_OBJECT_REF(UPCGPointData,Z_Param_Out_OutData);
		P_GET_OBJECT(UPCGSpatialData,Z_Param_OptionalA);
		P_GET_OBJECT(UPCGSpatialData,Z_Param_OptionalB);
		P_GET_OBJECT(UPCGPointData,Z_Param_OptionalOutData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IterationLoop(Z_Param_Out_InContext,Z_Param_NumIterations,Z_Param_Out_OutData,Z_Param_OptionalA,Z_Param_OptionalB,Z_Param_OptionalOutData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintElement::execNestedLoop)
	{
		P_GET_STRUCT_REF(FPCGContext,Z_Param_Out_InContext);
		P_GET_OBJECT(UPCGPointData,Z_Param_InOuterData);
		P_GET_OBJECT(UPCGPointData,Z_Param_InInnerData);
		P_GET_OBJECT_REF(UPCGPointData,Z_Param_Out_OutData);
		P_GET_OBJECT(UPCGPointData,Z_Param_OptionalOutData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NestedLoop(Z_Param_Out_InContext,Z_Param_InOuterData,Z_Param_InInnerData,Z_Param_Out_OutData,Z_Param_OptionalOutData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintElement::execVariableLoop)
	{
		P_GET_STRUCT_REF(FPCGContext,Z_Param_Out_InContext);
		P_GET_OBJECT(UPCGPointData,Z_Param_InData);
		P_GET_OBJECT_REF(UPCGPointData,Z_Param_Out_OutData);
		P_GET_OBJECT(UPCGPointData,Z_Param_OptionalOutData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->VariableLoop(Z_Param_Out_InContext,Z_Param_InData,Z_Param_Out_OutData,Z_Param_OptionalOutData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintElement::execPointLoop)
	{
		P_GET_STRUCT_REF(FPCGContext,Z_Param_Out_InContext);
		P_GET_OBJECT(UPCGPointData,Z_Param_InData);
		P_GET_OBJECT_REF(UPCGPointData,Z_Param_Out_OutData);
		P_GET_OBJECT(UPCGPointData,Z_Param_OptionalOutData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PointLoop(Z_Param_Out_InContext,Z_Param_InData,Z_Param_Out_OutData,Z_Param_OptionalOutData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintElement::execExecuteWithContext)
	{
		P_GET_STRUCT_REF(FPCGContext,Z_Param_Out_InContext);
		P_GET_STRUCT_REF(FPCGDataCollection,Z_Param_Out_Input);
		P_GET_STRUCT_REF(FPCGDataCollection,Z_Param_Out_Output);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteWithContext_Implementation(Z_Param_Out_InContext,Z_Param_Out_Input,Z_Param_Out_Output);
		P_NATIVE_END;
	}
	struct PCGBlueprintElement_eventApplyPreconfiguredSettings_Parms
	{
		FPCGPreConfiguredSettingsInfo InPreconfigureInfo;
	};
	struct PCGBlueprintElement_eventExecute_Parms
	{
		FPCGDataCollection Input;
		FPCGDataCollection Output;
	};
	struct PCGBlueprintElement_eventExecuteWithContext_Parms
	{
		FPCGContext InContext;
		FPCGDataCollection Input;
		FPCGDataCollection Output;
	};
	struct PCGBlueprintElement_eventIsCacheableOverride_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		PCGBlueprintElement_eventIsCacheableOverride_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct PCGBlueprintElement_eventIterationLoopBody_Parms
	{
		FPCGContext InContext;
		int64 Iteration;
		const UPCGSpatialData* InA;
		const UPCGSpatialData* InB;
		FPCGPoint OutPoint;
		UPCGMetadata* OutMetadata;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		PCGBlueprintElement_eventIterationLoopBody_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct PCGBlueprintElement_eventNestedLoopBody_Parms
	{
		FPCGContext InContext;
		const UPCGPointData* InOuterData;
		const UPCGPointData* InInnerData;
		FPCGPoint InOuterPoint;
		FPCGPoint InInnerPoint;
		FPCGPoint OutPoint;
		UPCGMetadata* OutMetadata;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		PCGBlueprintElement_eventNestedLoopBody_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct PCGBlueprintElement_eventNodeColorOverride_Parms
	{
		FLinearColor ReturnValue;

		/** Constructor, initializes return property only **/
		PCGBlueprintElement_eventNodeColorOverride_Parms()
			: ReturnValue(ForceInit)
		{
		}
	};
	struct PCGBlueprintElement_eventNodeTitleOverride_Parms
	{
		FName ReturnValue;
	};
	struct PCGBlueprintElement_eventNodeTypeOverride_Parms
	{
		EPCGSettingsType ReturnValue;

		/** Constructor, initializes return property only **/
		PCGBlueprintElement_eventNodeTypeOverride_Parms()
			: ReturnValue((EPCGSettingsType)0)
		{
		}
	};
	struct PCGBlueprintElement_eventPointLoopBody_Parms
	{
		FPCGContext InContext;
		const UPCGPointData* InData;
		FPCGPoint InPoint;
		FPCGPoint OutPoint;
		UPCGMetadata* OutMetadata;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		PCGBlueprintElement_eventPointLoopBody_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct PCGBlueprintElement_eventVariableLoopBody_Parms
	{
		FPCGContext InContext;
		const UPCGPointData* InData;
		FPCGPoint InPoint;
		UPCGMetadata* OutMetadata;
		TArray<FPCGPoint> ReturnValue;
	};
	static FName NAME_UPCGBlueprintElement_ApplyPreconfiguredSettings = FName(TEXT("ApplyPreconfiguredSettings"));
	void UPCGBlueprintElement::ApplyPreconfiguredSettings(FPCGPreConfiguredSettingsInfo const& InPreconfigureInfo)
	{
		PCGBlueprintElement_eventApplyPreconfiguredSettings_Parms Parms;
		Parms.InPreconfigureInfo=InPreconfigureInfo;
		ProcessEvent(FindFunctionChecked(NAME_UPCGBlueprintElement_ApplyPreconfiguredSettings),&Parms);
	}
	static FName NAME_UPCGBlueprintElement_Execute = FName(TEXT("Execute"));
	void UPCGBlueprintElement::Execute(FPCGDataCollection const& Input, FPCGDataCollection& Output)
	{
		PCGBlueprintElement_eventExecute_Parms Parms;
		Parms.Input=Input;
		Parms.Output=Output;
		ProcessEvent(FindFunctionChecked(NAME_UPCGBlueprintElement_Execute),&Parms);
		Output=Parms.Output;
	}
	static FName NAME_UPCGBlueprintElement_ExecuteWithContext = FName(TEXT("ExecuteWithContext"));
	void UPCGBlueprintElement::ExecuteWithContext(FPCGContext& InContext, FPCGDataCollection const& Input, FPCGDataCollection& Output)
	{
		PCGBlueprintElement_eventExecuteWithContext_Parms Parms;
		Parms.InContext=InContext;
		Parms.Input=Input;
		Parms.Output=Output;
		ProcessEvent(FindFunctionChecked(NAME_UPCGBlueprintElement_ExecuteWithContext),&Parms);
		InContext=Parms.InContext;
		Output=Parms.Output;
	}
	static FName NAME_UPCGBlueprintElement_IsCacheableOverride = FName(TEXT("IsCacheableOverride"));
	bool UPCGBlueprintElement::IsCacheableOverride() const
	{
		PCGBlueprintElement_eventIsCacheableOverride_Parms Parms;
		const_cast<UPCGBlueprintElement*>(this)->ProcessEvent(FindFunctionChecked(NAME_UPCGBlueprintElement_IsCacheableOverride),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UPCGBlueprintElement_IterationLoopBody = FName(TEXT("IterationLoopBody"));
	bool UPCGBlueprintElement::IterationLoopBody(FPCGContext const& InContext, int64 Iteration, const UPCGSpatialData* InA, const UPCGSpatialData* InB, FPCGPoint& OutPoint, UPCGMetadata* OutMetadata) const
	{
		PCGBlueprintElement_eventIterationLoopBody_Parms Parms;
		Parms.InContext=InContext;
		Parms.Iteration=Iteration;
		Parms.InA=InA;
		Parms.InB=InB;
		Parms.OutPoint=OutPoint;
		Parms.OutMetadata=OutMetadata;
		const_cast<UPCGBlueprintElement*>(this)->ProcessEvent(FindFunctionChecked(NAME_UPCGBlueprintElement_IterationLoopBody),&Parms);
		OutPoint=Parms.OutPoint;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UPCGBlueprintElement_NestedLoopBody = FName(TEXT("NestedLoopBody"));
	bool UPCGBlueprintElement::NestedLoopBody(FPCGContext const& InContext, const UPCGPointData* InOuterData, const UPCGPointData* InInnerData, FPCGPoint const& InOuterPoint, FPCGPoint const& InInnerPoint, FPCGPoint& OutPoint, UPCGMetadata* OutMetadata) const
	{
		PCGBlueprintElement_eventNestedLoopBody_Parms Parms;
		Parms.InContext=InContext;
		Parms.InOuterData=InOuterData;
		Parms.InInnerData=InInnerData;
		Parms.InOuterPoint=InOuterPoint;
		Parms.InInnerPoint=InInnerPoint;
		Parms.OutPoint=OutPoint;
		Parms.OutMetadata=OutMetadata;
		const_cast<UPCGBlueprintElement*>(this)->ProcessEvent(FindFunctionChecked(NAME_UPCGBlueprintElement_NestedLoopBody),&Parms);
		OutPoint=Parms.OutPoint;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UPCGBlueprintElement_NodeColorOverride = FName(TEXT("NodeColorOverride"));
	FLinearColor UPCGBlueprintElement::NodeColorOverride() const
	{
		PCGBlueprintElement_eventNodeColorOverride_Parms Parms;
		const_cast<UPCGBlueprintElement*>(this)->ProcessEvent(FindFunctionChecked(NAME_UPCGBlueprintElement_NodeColorOverride),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UPCGBlueprintElement_NodeTitleOverride = FName(TEXT("NodeTitleOverride"));
	FName UPCGBlueprintElement::NodeTitleOverride() const
	{
		PCGBlueprintElement_eventNodeTitleOverride_Parms Parms;
		const_cast<UPCGBlueprintElement*>(this)->ProcessEvent(FindFunctionChecked(NAME_UPCGBlueprintElement_NodeTitleOverride),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UPCGBlueprintElement_NodeTypeOverride = FName(TEXT("NodeTypeOverride"));
	EPCGSettingsType UPCGBlueprintElement::NodeTypeOverride() const
	{
		PCGBlueprintElement_eventNodeTypeOverride_Parms Parms;
		const_cast<UPCGBlueprintElement*>(this)->ProcessEvent(FindFunctionChecked(NAME_UPCGBlueprintElement_NodeTypeOverride),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UPCGBlueprintElement_PointLoopBody = FName(TEXT("PointLoopBody"));
	bool UPCGBlueprintElement::PointLoopBody(FPCGContext const& InContext, const UPCGPointData* InData, FPCGPoint const& InPoint, FPCGPoint& OutPoint, UPCGMetadata* OutMetadata) const
	{
		PCGBlueprintElement_eventPointLoopBody_Parms Parms;
		Parms.InContext=InContext;
		Parms.InData=InData;
		Parms.InPoint=InPoint;
		Parms.OutPoint=OutPoint;
		Parms.OutMetadata=OutMetadata;
		const_cast<UPCGBlueprintElement*>(this)->ProcessEvent(FindFunctionChecked(NAME_UPCGBlueprintElement_PointLoopBody),&Parms);
		OutPoint=Parms.OutPoint;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UPCGBlueprintElement_VariableLoopBody = FName(TEXT("VariableLoopBody"));
	TArray<FPCGPoint> UPCGBlueprintElement::VariableLoopBody(FPCGContext const& InContext, const UPCGPointData* InData, FPCGPoint const& InPoint, UPCGMetadata* OutMetadata) const
	{
		PCGBlueprintElement_eventVariableLoopBody_Parms Parms;
		Parms.InContext=InContext;
		Parms.InData=InData;
		Parms.InPoint=InPoint;
		Parms.OutMetadata=OutMetadata;
		const_cast<UPCGBlueprintElement*>(this)->ProcessEvent(FindFunctionChecked(NAME_UPCGBlueprintElement_VariableLoopBody),&Parms);
		return Parms.ReturnValue;
	}
	void UPCGBlueprintElement::StaticRegisterNativesUPCGBlueprintElement()
	{
		UClass* Class = UPCGBlueprintElement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CustomInputLabels", &UPCGBlueprintElement::execCustomInputLabels },
			{ "CustomOutputLabels", &UPCGBlueprintElement::execCustomOutputLabels },
			{ "ExecuteWithContext", &UPCGBlueprintElement::execExecuteWithContext },
			{ "GetContext", &UPCGBlueprintElement::execGetContext },
			{ "GetInputPinByLabel", &UPCGBlueprintElement::execGetInputPinByLabel },
			{ "GetInputPins", &UPCGBlueprintElement::execGetInputPins },
			{ "GetOutputPinByLabel", &UPCGBlueprintElement::execGetOutputPinByLabel },
			{ "GetOutputPins", &UPCGBlueprintElement::execGetOutputPins },
			{ "GetRandomStream", &UPCGBlueprintElement::execGetRandomStream },
			{ "GetSeed", &UPCGBlueprintElement::execGetSeed },
			{ "IsCacheableOverride", &UPCGBlueprintElement::execIsCacheableOverride },
			{ "IterationLoop", &UPCGBlueprintElement::execIterationLoop },
			{ "NestedLoop", &UPCGBlueprintElement::execNestedLoop },
			{ "NodeColorOverride", &UPCGBlueprintElement::execNodeColorOverride },
			{ "NodeTitleOverride", &UPCGBlueprintElement::execNodeTitleOverride },
			{ "NodeTypeOverride", &UPCGBlueprintElement::execNodeTypeOverride },
			{ "PointLoop", &UPCGBlueprintElement::execPointLoop },
			{ "VariableLoop", &UPCGBlueprintElement::execVariableLoop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPCGBlueprintElement_ApplyPreconfiguredSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPreconfigureInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPreconfigureInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_ApplyPreconfiguredSettings_Statics::NewProp_InPreconfigureInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_ApplyPreconfiguredSettings_Statics::NewProp_InPreconfigureInfo = { "InPreconfigureInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventApplyPreconfiguredSettings_Parms, InPreconfigureInfo), Z_Construct_UScriptStruct_FPCGPreConfiguredSettingsInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_ApplyPreconfiguredSettings_Statics::NewProp_InPreconfigureInfo_MetaData), Z_Construct_UFunction_UPCGBlueprintElement_ApplyPreconfiguredSettings_Statics::NewProp_InPreconfigureInfo_MetaData) }; // 1717054666
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintElement_ApplyPreconfiguredSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_ApplyPreconfiguredSettings_Statics::NewProp_InPreconfigureInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_ApplyPreconfiguredSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Preconfigure Settings" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintElement_ApplyPreconfiguredSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintElement, nullptr, "ApplyPreconfiguredSettings", nullptr, nullptr, Z_Construct_UFunction_UPCGBlueprintElement_ApplyPreconfiguredSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_ApplyPreconfiguredSettings_Statics::PropPointers), sizeof(PCGBlueprintElement_eventApplyPreconfiguredSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_ApplyPreconfiguredSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGBlueprintElement_ApplyPreconfiguredSettings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_ApplyPreconfiguredSettings_Statics::PropPointers) < 2048);
	static_assert(sizeof(PCGBlueprintElement_eventApplyPreconfiguredSettings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGBlueprintElement_ApplyPreconfiguredSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintElement_ApplyPreconfiguredSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintElement_CustomInputLabels_Statics
	{
		struct PCGBlueprintElement_eventCustomInputLabels_Parms
		{
			TSet<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGBlueprintElement_CustomInputLabels_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_CustomInputLabels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventCustomInputLabels_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintElement_CustomInputLabels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_CustomInputLabels_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_CustomInputLabels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_CustomInputLabels_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Input & Output" },
		{ "Comment", "// Returns the labels of custom input pins only\n" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
		{ "ToolTip", "Returns the labels of custom input pins only" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintElement_CustomInputLabels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintElement, nullptr, "CustomInputLabels", nullptr, nullptr, Z_Construct_UFunction_UPCGBlueprintElement_CustomInputLabels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_CustomInputLabels_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGBlueprintElement_CustomInputLabels_Statics::PCGBlueprintElement_eventCustomInputLabels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_CustomInputLabels_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGBlueprintElement_CustomInputLabels_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_CustomInputLabels_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGBlueprintElement_CustomInputLabels_Statics::PCGBlueprintElement_eventCustomInputLabels_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGBlueprintElement_CustomInputLabels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintElement_CustomInputLabels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintElement_CustomOutputLabels_Statics
	{
		struct PCGBlueprintElement_eventCustomOutputLabels_Parms
		{
			TSet<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGBlueprintElement_CustomOutputLabels_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_CustomOutputLabels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventCustomOutputLabels_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintElement_CustomOutputLabels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_CustomOutputLabels_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_CustomOutputLabels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_CustomOutputLabels_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Input & Output" },
		{ "Comment", "// Returns the labels of custom output pins only\n" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
		{ "ToolTip", "Returns the labels of custom output pins only" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintElement_CustomOutputLabels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintElement, nullptr, "CustomOutputLabels", nullptr, nullptr, Z_Construct_UFunction_UPCGBlueprintElement_CustomOutputLabels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_CustomOutputLabels_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGBlueprintElement_CustomOutputLabels_Statics::PCGBlueprintElement_eventCustomOutputLabels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_CustomOutputLabels_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGBlueprintElement_CustomOutputLabels_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_CustomOutputLabels_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGBlueprintElement_CustomOutputLabels_Statics::PCGBlueprintElement_eventCustomOutputLabels_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGBlueprintElement_CustomOutputLabels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintElement_CustomOutputLabels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintElement_Execute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_Execute_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_Execute_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventExecute_Parms, Input), Z_Construct_UScriptStruct_FPCGDataCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_Execute_Statics::NewProp_Input_MetaData), Z_Construct_UFunction_UPCGBlueprintElement_Execute_Statics::NewProp_Input_MetaData) }; // 3944208025
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_Execute_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventExecute_Parms, Output), Z_Construct_UScriptStruct_FPCGDataCollection, METADATA_PARAMS(0, nullptr) }; // 3944208025
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintElement_Execute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_Execute_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_Execute_Statics::NewProp_Output,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_Execute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Execution" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintElement_Execute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintElement, nullptr, "Execute", nullptr, nullptr, Z_Construct_UFunction_UPCGBlueprintElement_Execute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_Execute_Statics::PropPointers), sizeof(PCGBlueprintElement_eventExecute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_Execute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGBlueprintElement_Execute_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_Execute_Statics::PropPointers) < 2048);
	static_assert(sizeof(PCGBlueprintElement_eventExecute_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGBlueprintElement_Execute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintElement_Execute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_InContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext_Statics::NewProp_InContext = { "InContext", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventExecuteWithContext_Parms, InContext), Z_Construct_UScriptStruct_FPCGContext, METADATA_PARAMS(0, nullptr) }; // 1659575695
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventExecuteWithContext_Parms, Input), Z_Construct_UScriptStruct_FPCGDataCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext_Statics::NewProp_Input_MetaData), Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext_Statics::NewProp_Input_MetaData) }; // 3944208025
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventExecuteWithContext_Parms, Output), Z_Construct_UScriptStruct_FPCGDataCollection, METADATA_PARAMS(0, nullptr) }; // 3944208025
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext_Statics::NewProp_InContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext_Statics::NewProp_Output,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Execution" },
		{ "Comment", "// ~End UObject interface\n" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
		{ "ToolTip", "~End UObject interface" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintElement, nullptr, "ExecuteWithContext", nullptr, nullptr, Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext_Statics::PropPointers), sizeof(PCGBlueprintElement_eventExecuteWithContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext_Statics::PropPointers) < 2048);
	static_assert(sizeof(PCGBlueprintElement_eventExecuteWithContext_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintElement_GetContext_Statics
	{
		struct PCGBlueprintElement_eventGetContext_Parms
		{
			FPCGContext ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_GetContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventGetContext_Parms, ReturnValue), Z_Construct_UScriptStruct_FPCGContext, METADATA_PARAMS(0, nullptr) }; // 1659575695
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintElement_GetContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_GetContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_GetContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Advanced" },
		{ "Comment", "/** Retrieves the execution context - note that this will not be valid outside of the Execute functions */" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
		{ "ToolTip", "Retrieves the execution context - note that this will not be valid outside of the Execute functions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintElement_GetContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintElement, nullptr, "GetContext", nullptr, nullptr, Z_Construct_UFunction_UPCGBlueprintElement_GetContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_GetContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGBlueprintElement_GetContext_Statics::PCGBlueprintElement_eventGetContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_GetContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGBlueprintElement_GetContext_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_GetContext_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGBlueprintElement_GetContext_Statics::PCGBlueprintElement_eventGetContext_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGBlueprintElement_GetContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintElement_GetContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintElement_GetInputPinByLabel_Statics
	{
		struct PCGBlueprintElement_eventGetInputPinByLabel_Parms
		{
			FName InPinLabel;
			FPCGPinProperties OutFoundPin;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InPinLabel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutFoundPin;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGBlueprintElement_GetInputPinByLabel_Statics::NewProp_InPinLabel = { "InPinLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventGetInputPinByLabel_Parms, InPinLabel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_GetInputPinByLabel_Statics::NewProp_OutFoundPin = { "OutFoundPin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventGetInputPinByLabel_Parms, OutFoundPin), Z_Construct_UScriptStruct_FPCGPinProperties, METADATA_PARAMS(0, nullptr) }; // 1976663911
	void Z_Construct_UFunction_UPCGBlueprintElement_GetInputPinByLabel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PCGBlueprintElement_eventGetInputPinByLabel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_GetInputPinByLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGBlueprintElement_eventGetInputPinByLabel_Parms), &Z_Construct_UFunction_UPCGBlueprintElement_GetInputPinByLabel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintElement_GetInputPinByLabel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_GetInputPinByLabel_Statics::NewProp_InPinLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_GetInputPinByLabel_Statics::NewProp_OutFoundPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_GetInputPinByLabel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_GetInputPinByLabel_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Input & Output" },
		{ "Comment", "/** Returns true if there is an input pin with the matching label. If found, will copy the pin properties in OutFoundPin */" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
		{ "ToolTip", "Returns true if there is an input pin with the matching label. If found, will copy the pin properties in OutFoundPin" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintElement_GetInputPinByLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintElement, nullptr, "GetInputPinByLabel", nullptr, nullptr, Z_Construct_UFunction_UPCGBlueprintElement_GetInputPinByLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_GetInputPinByLabel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGBlueprintElement_GetInputPinByLabel_Statics::PCGBlueprintElement_eventGetInputPinByLabel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_GetInputPinByLabel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGBlueprintElement_GetInputPinByLabel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_GetInputPinByLabel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGBlueprintElement_GetInputPinByLabel_Statics::PCGBlueprintElement_eventGetInputPinByLabel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGBlueprintElement_GetInputPinByLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintElement_GetInputPinByLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintElement_GetInputPins_Statics
	{
		struct PCGBlueprintElement_eventGetInputPins_Parms
		{
			TArray<FPCGPinProperties> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_GetInputPins_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGPinProperties, METADATA_PARAMS(0, nullptr) }; // 1976663911
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_GetInputPins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventGetInputPins_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1976663911
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintElement_GetInputPins_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_GetInputPins_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_GetInputPins_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_GetInputPins_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Input & Output" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintElement_GetInputPins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintElement, nullptr, "GetInputPins", nullptr, nullptr, Z_Construct_UFunction_UPCGBlueprintElement_GetInputPins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_GetInputPins_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGBlueprintElement_GetInputPins_Statics::PCGBlueprintElement_eventGetInputPins_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_GetInputPins_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGBlueprintElement_GetInputPins_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_GetInputPins_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGBlueprintElement_GetInputPins_Statics::PCGBlueprintElement_eventGetInputPins_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGBlueprintElement_GetInputPins()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintElement_GetInputPins_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintElement_GetOutputPinByLabel_Statics
	{
		struct PCGBlueprintElement_eventGetOutputPinByLabel_Parms
		{
			FName InPinLabel;
			FPCGPinProperties OutFoundPin;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InPinLabel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutFoundPin;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGBlueprintElement_GetOutputPinByLabel_Statics::NewProp_InPinLabel = { "InPinLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventGetOutputPinByLabel_Parms, InPinLabel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_GetOutputPinByLabel_Statics::NewProp_OutFoundPin = { "OutFoundPin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventGetOutputPinByLabel_Parms, OutFoundPin), Z_Construct_UScriptStruct_FPCGPinProperties, METADATA_PARAMS(0, nullptr) }; // 1976663911
	void Z_Construct_UFunction_UPCGBlueprintElement_GetOutputPinByLabel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PCGBlueprintElement_eventGetOutputPinByLabel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_GetOutputPinByLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGBlueprintElement_eventGetOutputPinByLabel_Parms), &Z_Construct_UFunction_UPCGBlueprintElement_GetOutputPinByLabel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintElement_GetOutputPinByLabel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_GetOutputPinByLabel_Statics::NewProp_InPinLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_GetOutputPinByLabel_Statics::NewProp_OutFoundPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_GetOutputPinByLabel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_GetOutputPinByLabel_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Input & Output" },
		{ "Comment", "/** Returns true if there is an output pin with the matching label. If found, will copy the pin properties in OutFoundPin */" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
		{ "ToolTip", "Returns true if there is an output pin with the matching label. If found, will copy the pin properties in OutFoundPin" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintElement_GetOutputPinByLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintElement, nullptr, "GetOutputPinByLabel", nullptr, nullptr, Z_Construct_UFunction_UPCGBlueprintElement_GetOutputPinByLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_GetOutputPinByLabel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGBlueprintElement_GetOutputPinByLabel_Statics::PCGBlueprintElement_eventGetOutputPinByLabel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_GetOutputPinByLabel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGBlueprintElement_GetOutputPinByLabel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_GetOutputPinByLabel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGBlueprintElement_GetOutputPinByLabel_Statics::PCGBlueprintElement_eventGetOutputPinByLabel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGBlueprintElement_GetOutputPinByLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintElement_GetOutputPinByLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintElement_GetOutputPins_Statics
	{
		struct PCGBlueprintElement_eventGetOutputPins_Parms
		{
			TArray<FPCGPinProperties> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_GetOutputPins_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGPinProperties, METADATA_PARAMS(0, nullptr) }; // 1976663911
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_GetOutputPins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventGetOutputPins_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1976663911
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintElement_GetOutputPins_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_GetOutputPins_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_GetOutputPins_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_GetOutputPins_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Input & Output" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintElement_GetOutputPins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintElement, nullptr, "GetOutputPins", nullptr, nullptr, Z_Construct_UFunction_UPCGBlueprintElement_GetOutputPins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_GetOutputPins_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGBlueprintElement_GetOutputPins_Statics::PCGBlueprintElement_eventGetOutputPins_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_GetOutputPins_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGBlueprintElement_GetOutputPins_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_GetOutputPins_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGBlueprintElement_GetOutputPins_Statics::PCGBlueprintElement_eventGetOutputPins_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGBlueprintElement_GetOutputPins()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintElement_GetOutputPins_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintElement_GetRandomStream_Statics
	{
		struct PCGBlueprintElement_eventGetRandomStream_Parms
		{
			FPCGContext InContext;
			FRandomStream ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InContext;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_GetRandomStream_Statics::NewProp_InContext = { "InContext", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventGetRandomStream_Parms, InContext), Z_Construct_UScriptStruct_FPCGContext, METADATA_PARAMS(0, nullptr) }; // 1659575695
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_GetRandomStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventGetRandomStream_Parms, ReturnValue), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintElement_GetRandomStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_GetRandomStream_Statics::NewProp_InContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_GetRandomStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_GetRandomStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Random" },
		{ "Comment", "/** Creates a random stream from the settings & source component */" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
		{ "ToolTip", "Creates a random stream from the settings & source component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintElement_GetRandomStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintElement, nullptr, "GetRandomStream", nullptr, nullptr, Z_Construct_UFunction_UPCGBlueprintElement_GetRandomStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_GetRandomStream_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGBlueprintElement_GetRandomStream_Statics::PCGBlueprintElement_eventGetRandomStream_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_GetRandomStream_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGBlueprintElement_GetRandomStream_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_GetRandomStream_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGBlueprintElement_GetRandomStream_Statics::PCGBlueprintElement_eventGetRandomStream_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGBlueprintElement_GetRandomStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintElement_GetRandomStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintElement_GetSeed_Statics
	{
		struct PCGBlueprintElement_eventGetSeed_Parms
		{
			FPCGContext InContext;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InContext;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_GetSeed_Statics::NewProp_InContext = { "InContext", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventGetSeed_Parms, InContext), Z_Construct_UScriptStruct_FPCGContext, METADATA_PARAMS(0, nullptr) }; // 1659575695
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_GetSeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventGetSeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintElement_GetSeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_GetSeed_Statics::NewProp_InContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_GetSeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_GetSeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Random" },
		{ "Comment", "/** Gets the seed from the associated settings & source component */" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
		{ "ToolTip", "Gets the seed from the associated settings & source component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintElement_GetSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintElement, nullptr, "GetSeed", nullptr, nullptr, Z_Construct_UFunction_UPCGBlueprintElement_GetSeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_GetSeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGBlueprintElement_GetSeed_Statics::PCGBlueprintElement_eventGetSeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_GetSeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGBlueprintElement_GetSeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_GetSeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGBlueprintElement_GetSeed_Statics::PCGBlueprintElement_eventGetSeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGBlueprintElement_GetSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintElement_GetSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintElement_IsCacheableOverride_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPCGBlueprintElement_IsCacheableOverride_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PCGBlueprintElement_eventIsCacheableOverride_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_IsCacheableOverride_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGBlueprintElement_eventIsCacheableOverride_Parms), &Z_Construct_UFunction_UPCGBlueprintElement_IsCacheableOverride_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintElement_IsCacheableOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_IsCacheableOverride_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_IsCacheableOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Execution" },
		{ "Comment", "/** Override for the IsCacheable node property when it depends on the settings in your node */" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
		{ "ToolTip", "Override for the IsCacheable node property when it depends on the settings in your node" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintElement_IsCacheableOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintElement, nullptr, "IsCacheableOverride", nullptr, nullptr, Z_Construct_UFunction_UPCGBlueprintElement_IsCacheableOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_IsCacheableOverride_Statics::PropPointers), sizeof(PCGBlueprintElement_eventIsCacheableOverride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_IsCacheableOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGBlueprintElement_IsCacheableOverride_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_IsCacheableOverride_Statics::PropPointers) < 2048);
	static_assert(sizeof(PCGBlueprintElement_eventIsCacheableOverride_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGBlueprintElement_IsCacheableOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintElement_IsCacheableOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics
	{
		struct PCGBlueprintElement_eventIterationLoop_Parms
		{
			FPCGContext InContext;
			int64 NumIterations;
			UPCGPointData* OutData;
			const UPCGSpatialData* OptionalA;
			const UPCGSpatialData* OptionalB;
			UPCGPointData* OptionalOutData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InContext;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_NumIterations;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalA_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalB_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalB;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalOutData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::NewProp_InContext = { "InContext", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventIterationLoop_Parms, InContext), Z_Construct_UScriptStruct_FPCGContext, METADATA_PARAMS(0, nullptr) }; // 1659575695
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::NewProp_NumIterations = { "NumIterations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventIterationLoop_Parms, NumIterations), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::NewProp_OutData = { "OutData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventIterationLoop_Parms, OutData), Z_Construct_UClass_UPCGPointData_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::NewProp_OptionalA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::NewProp_OptionalA = { "OptionalA", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventIterationLoop_Parms, OptionalA), Z_Construct_UClass_UPCGSpatialData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::NewProp_OptionalA_MetaData), Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::NewProp_OptionalA_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::NewProp_OptionalB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::NewProp_OptionalB = { "OptionalB", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventIterationLoop_Parms, OptionalB), Z_Construct_UClass_UPCGSpatialData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::NewProp_OptionalB_MetaData), Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::NewProp_OptionalB_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::NewProp_OptionalOutData = { "OptionalOutData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventIterationLoop_Parms, OptionalOutData), Z_Construct_UClass_UPCGPointData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::NewProp_InContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::NewProp_NumIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::NewProp_OutData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::NewProp_OptionalA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::NewProp_OptionalB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::NewProp_OptionalOutData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Flow Control" },
		{ "Comment", "/** Calls the IterationLoopBody a fixed number of times, optional parameters are used to potentially initialized the Out Data, but otherwise are used to remove the need to have variables */" },
		{ "CPP_Default_OptionalA", "None" },
		{ "CPP_Default_OptionalB", "None" },
		{ "CPP_Default_OptionalOutData", "None" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
		{ "ToolTip", "Calls the IterationLoopBody a fixed number of times, optional parameters are used to potentially initialized the Out Data, but otherwise are used to remove the need to have variables" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintElement, nullptr, "IterationLoop", nullptr, nullptr, Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::PCGBlueprintElement_eventIterationLoop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::PCGBlueprintElement_eventIterationLoop_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InContext;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Iteration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InA_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InB_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InB;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoint;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutMetadata;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_InContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_InContext = { "InContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventIterationLoopBody_Parms, InContext), Z_Construct_UScriptStruct_FPCGContext, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_InContext_MetaData), Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_InContext_MetaData) }; // 1659575695
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_Iteration = { "Iteration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventIterationLoopBody_Parms, Iteration), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_InA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_InA = { "InA", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventIterationLoopBody_Parms, InA), Z_Construct_UClass_UPCGSpatialData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_InA_MetaData), Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_InA_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_InB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_InB = { "InB", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventIterationLoopBody_Parms, InB), Z_Construct_UClass_UPCGSpatialData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_InB_MetaData), Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_InB_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_OutPoint = { "OutPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventIterationLoopBody_Parms, OutPoint), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(0, nullptr) }; // 2463844464
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_OutMetadata = { "OutMetadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventIterationLoopBody_Parms, OutMetadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PCGBlueprintElement_eventIterationLoopBody_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGBlueprintElement_eventIterationLoopBody_Parms), &Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_InContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_Iteration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_InA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_InB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_OutPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_OutMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Flow Control" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintElement, nullptr, "IterationLoopBody", nullptr, nullptr, Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::PropPointers), sizeof(PCGBlueprintElement_eventIterationLoopBody_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::PropPointers) < 2048);
	static_assert(sizeof(PCGBlueprintElement_eventIterationLoopBody_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics
	{
		struct PCGBlueprintElement_eventNestedLoop_Parms
		{
			FPCGContext InContext;
			const UPCGPointData* InOuterData;
			const UPCGPointData* InInnerData;
			UPCGPointData* OutData;
			UPCGPointData* OptionalOutData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InOuterData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOuterData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInnerData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInnerData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalOutData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::NewProp_InContext = { "InContext", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventNestedLoop_Parms, InContext), Z_Construct_UScriptStruct_FPCGContext, METADATA_PARAMS(0, nullptr) }; // 1659575695
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::NewProp_InOuterData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::NewProp_InOuterData = { "InOuterData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventNestedLoop_Parms, InOuterData), Z_Construct_UClass_UPCGPointData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::NewProp_InOuterData_MetaData), Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::NewProp_InOuterData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::NewProp_InInnerData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::NewProp_InInnerData = { "InInnerData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventNestedLoop_Parms, InInnerData), Z_Construct_UClass_UPCGPointData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::NewProp_InInnerData_MetaData), Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::NewProp_InInnerData_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::NewProp_OutData = { "OutData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventNestedLoop_Parms, OutData), Z_Construct_UClass_UPCGPointData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::NewProp_OptionalOutData = { "OptionalOutData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventNestedLoop_Parms, OptionalOutData), Z_Construct_UClass_UPCGPointData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::NewProp_InContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::NewProp_InOuterData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::NewProp_InInnerData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::NewProp_OutData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::NewProp_OptionalOutData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|FLow Control" },
		{ "Comment", "/** Calls the NestedLoopBody function on all nested loop pairs (e.g. (o, i) for all o in Outer, i in Inner) */" },
		{ "CPP_Default_OptionalOutData", "None" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
		{ "ToolTip", "Calls the NestedLoopBody function on all nested loop pairs (e.g. (o, i) for all o in Outer, i in Inner)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintElement, nullptr, "NestedLoop", nullptr, nullptr, Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::PCGBlueprintElement_eventNestedLoop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::PCGBlueprintElement_eventNestedLoop_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InOuterData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOuterData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInnerData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInnerData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InOuterPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InOuterPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInnerPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InInnerPoint;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoint;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutMetadata;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InContext = { "InContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventNestedLoopBody_Parms, InContext), Z_Construct_UScriptStruct_FPCGContext, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InContext_MetaData), Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InContext_MetaData) }; // 1659575695
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InOuterData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InOuterData = { "InOuterData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventNestedLoopBody_Parms, InOuterData), Z_Construct_UClass_UPCGPointData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InOuterData_MetaData), Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InOuterData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InInnerData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InInnerData = { "InInnerData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventNestedLoopBody_Parms, InInnerData), Z_Construct_UClass_UPCGPointData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InInnerData_MetaData), Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InInnerData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InOuterPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InOuterPoint = { "InOuterPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventNestedLoopBody_Parms, InOuterPoint), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InOuterPoint_MetaData), Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InOuterPoint_MetaData) }; // 2463844464
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InInnerPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InInnerPoint = { "InInnerPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventNestedLoopBody_Parms, InInnerPoint), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InInnerPoint_MetaData), Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InInnerPoint_MetaData) }; // 2463844464
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_OutPoint = { "OutPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventNestedLoopBody_Parms, OutPoint), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(0, nullptr) }; // 2463844464
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_OutMetadata = { "OutMetadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventNestedLoopBody_Parms, OutMetadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PCGBlueprintElement_eventNestedLoopBody_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGBlueprintElement_eventNestedLoopBody_Parms), &Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InOuterData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InInnerData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InOuterPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_InInnerPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_OutPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_OutMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Flow Control" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintElement, nullptr, "NestedLoopBody", nullptr, nullptr, Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::PropPointers), sizeof(PCGBlueprintElement_eventNestedLoopBody_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::PropPointers) < 2048);
	static_assert(sizeof(PCGBlueprintElement_eventNestedLoopBody_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintElement_NodeColorOverride_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_NodeColorOverride_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventNodeColorOverride_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintElement_NodeColorOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_NodeColorOverride_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_NodeColorOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Node Customization" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintElement_NodeColorOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintElement, nullptr, "NodeColorOverride", nullptr, nullptr, Z_Construct_UFunction_UPCGBlueprintElement_NodeColorOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_NodeColorOverride_Statics::PropPointers), sizeof(PCGBlueprintElement_eventNodeColorOverride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_NodeColorOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGBlueprintElement_NodeColorOverride_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_NodeColorOverride_Statics::PropPointers) < 2048);
	static_assert(sizeof(PCGBlueprintElement_eventNodeColorOverride_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGBlueprintElement_NodeColorOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintElement_NodeColorOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintElement_NodeTitleOverride_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGBlueprintElement_NodeTitleOverride_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventNodeTitleOverride_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintElement_NodeTitleOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_NodeTitleOverride_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_NodeTitleOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Node Customization" },
		{ "Comment", "/** Override for the default node name */" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
		{ "ToolTip", "Override for the default node name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintElement_NodeTitleOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintElement, nullptr, "NodeTitleOverride", nullptr, nullptr, Z_Construct_UFunction_UPCGBlueprintElement_NodeTitleOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_NodeTitleOverride_Statics::PropPointers), sizeof(PCGBlueprintElement_eventNodeTitleOverride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_NodeTitleOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGBlueprintElement_NodeTitleOverride_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_NodeTitleOverride_Statics::PropPointers) < 2048);
	static_assert(sizeof(PCGBlueprintElement_eventNodeTitleOverride_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGBlueprintElement_NodeTitleOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintElement_NodeTitleOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintElement_NodeTypeOverride_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPCGBlueprintElement_NodeTypeOverride_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_NodeTypeOverride_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventNodeTypeOverride_Parms, ReturnValue), Z_Construct_UEnum_PCG_EPCGSettingsType, METADATA_PARAMS(0, nullptr) }; // 180144913
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintElement_NodeTypeOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_NodeTypeOverride_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_NodeTypeOverride_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_NodeTypeOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Node Customization" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintElement_NodeTypeOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintElement, nullptr, "NodeTypeOverride", nullptr, nullptr, Z_Construct_UFunction_UPCGBlueprintElement_NodeTypeOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_NodeTypeOverride_Statics::PropPointers), sizeof(PCGBlueprintElement_eventNodeTypeOverride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_NodeTypeOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGBlueprintElement_NodeTypeOverride_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_NodeTypeOverride_Statics::PropPointers) < 2048);
	static_assert(sizeof(PCGBlueprintElement_eventNodeTypeOverride_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGBlueprintElement_NodeTypeOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintElement_NodeTypeOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics
	{
		struct PCGBlueprintElement_eventPointLoop_Parms
		{
			FPCGContext InContext;
			const UPCGPointData* InData;
			UPCGPointData* OutData;
			UPCGPointData* OptionalOutData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalOutData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::NewProp_InContext = { "InContext", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventPointLoop_Parms, InContext), Z_Construct_UScriptStruct_FPCGContext, METADATA_PARAMS(0, nullptr) }; // 1659575695
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::NewProp_InData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventPointLoop_Parms, InData), Z_Construct_UClass_UPCGPointData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::NewProp_InData_MetaData), Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::NewProp_InData_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::NewProp_OutData = { "OutData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventPointLoop_Parms, OutData), Z_Construct_UClass_UPCGPointData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::NewProp_OptionalOutData = { "OptionalOutData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventPointLoop_Parms, OptionalOutData), Z_Construct_UClass_UPCGPointData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::NewProp_InContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::NewProp_InData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::NewProp_OutData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::NewProp_OptionalOutData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Flow Control" },
		{ "Comment", "/** Calls the PointLoopBody function on all points */" },
		{ "CPP_Default_OptionalOutData", "None" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
		{ "ToolTip", "Calls the PointLoopBody function on all points" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintElement, nullptr, "PointLoop", nullptr, nullptr, Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::PCGBlueprintElement_eventPointLoop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::PCGBlueprintElement_eventPointLoop_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGBlueprintElement_PointLoop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPoint;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoint;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutMetadata;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_InContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_InContext = { "InContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventPointLoopBody_Parms, InContext), Z_Construct_UScriptStruct_FPCGContext, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_InContext_MetaData), Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_InContext_MetaData) }; // 1659575695
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_InData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventPointLoopBody_Parms, InData), Z_Construct_UClass_UPCGPointData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_InData_MetaData), Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_InData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_InPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_InPoint = { "InPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventPointLoopBody_Parms, InPoint), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_InPoint_MetaData), Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_InPoint_MetaData) }; // 2463844464
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_OutPoint = { "OutPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventPointLoopBody_Parms, OutPoint), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(0, nullptr) }; // 2463844464
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_OutMetadata = { "OutMetadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventPointLoopBody_Parms, OutMetadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PCGBlueprintElement_eventPointLoopBody_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGBlueprintElement_eventPointLoopBody_Parms), &Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_InContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_InData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_InPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_OutPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_OutMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Flow Control" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintElement, nullptr, "PointLoopBody", nullptr, nullptr, Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::PropPointers), sizeof(PCGBlueprintElement_eventPointLoopBody_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::PropPointers) < 2048);
	static_assert(sizeof(PCGBlueprintElement_eventPointLoopBody_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics
	{
		struct PCGBlueprintElement_eventVariableLoop_Parms
		{
			FPCGContext InContext;
			const UPCGPointData* InData;
			UPCGPointData* OutData;
			UPCGPointData* OptionalOutData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalOutData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::NewProp_InContext = { "InContext", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventVariableLoop_Parms, InContext), Z_Construct_UScriptStruct_FPCGContext, METADATA_PARAMS(0, nullptr) }; // 1659575695
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::NewProp_InData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventVariableLoop_Parms, InData), Z_Construct_UClass_UPCGPointData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::NewProp_InData_MetaData), Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::NewProp_InData_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::NewProp_OutData = { "OutData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventVariableLoop_Parms, OutData), Z_Construct_UClass_UPCGPointData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::NewProp_OptionalOutData = { "OptionalOutData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventVariableLoop_Parms, OptionalOutData), Z_Construct_UClass_UPCGPointData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::NewProp_InContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::NewProp_InData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::NewProp_OutData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::NewProp_OptionalOutData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Flow Control" },
		{ "Comment", "/** Calls the VariableLoopBody function on all points, each call can return a variable number of points */" },
		{ "CPP_Default_OptionalOutData", "None" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
		{ "ToolTip", "Calls the VariableLoopBody function on all points, each call can return a variable number of points" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintElement, nullptr, "VariableLoop", nullptr, nullptr, Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::PCGBlueprintElement_eventVariableLoop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::PCGBlueprintElement_eventVariableLoop_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPoint;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutMetadata;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::NewProp_InContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::NewProp_InContext = { "InContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventVariableLoopBody_Parms, InContext), Z_Construct_UScriptStruct_FPCGContext, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::NewProp_InContext_MetaData), Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::NewProp_InContext_MetaData) }; // 1659575695
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::NewProp_InData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventVariableLoopBody_Parms, InData), Z_Construct_UClass_UPCGPointData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::NewProp_InData_MetaData), Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::NewProp_InData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::NewProp_InPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::NewProp_InPoint = { "InPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventVariableLoopBody_Parms, InPoint), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::NewProp_InPoint_MetaData), Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::NewProp_InPoint_MetaData) }; // 2463844464
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::NewProp_OutMetadata = { "OutMetadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventVariableLoopBody_Parms, OutMetadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(0, nullptr) }; // 2463844464
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintElement_eventVariableLoopBody_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2463844464
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::NewProp_InContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::NewProp_InData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::NewProp_InPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::NewProp_OutMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Flow Control" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintElement, nullptr, "VariableLoopBody", nullptr, nullptr, Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::PropPointers), sizeof(PCGBlueprintElement_eventVariableLoopBody_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::PropPointers) < 2048);
	static_assert(sizeof(PCGBlueprintElement_eventVariableLoopBody_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGBlueprintElement);
	UClass* Z_Construct_UClass_UPCGBlueprintElement_NoRegister()
	{
		return UPCGBlueprintElement::StaticClass();
	}
	struct Z_Construct_UClass_UPCGBlueprintElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCacheable_MetaData[];
#endif
		static void NewProp_bIsCacheable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCacheable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bComputeFullDataCrc_MetaData[];
#endif
		static void NewProp_bComputeFullDataCrc_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bComputeFullDataCrc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeMultithreaded_MetaData[];
#endif
		static void NewProp_bCanBeMultithreaded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeMultithreaded;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FNamePropertyParams NewProp_InputPinLabels_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputPinLabels_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_InputPinLabels;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutputPinLabels_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputPinLabels_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_OutputPinLabels;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomInputPins_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomInputPins_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomInputPins;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomOutputPins_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomOutputPins_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomOutputPins;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasDefaultInPin_MetaData[];
#endif
		static void NewProp_bHasDefaultInPin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasDefaultInPin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasDefaultOutPin_MetaData[];
#endif
		static void NewProp_bHasDefaultOutPin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasDefaultOutPin;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExposeToLibrary_MetaData[];
#endif
		static void NewProp_bExposeToLibrary_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExposeToLibrary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePreconfiguredSettings_MetaData[];
#endif
		static void NewProp_bEnablePreconfiguredSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePreconfiguredSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyExposePreconfiguredSettings_MetaData[];
#endif
		static void NewProp_bOnlyExposePreconfiguredSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyExposePreconfiguredSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreconfiguredInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreconfiguredInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PreconfiguredInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DependencyParsingDepth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DependencyParsingDepth;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGBlueprintElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintElement_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPCGBlueprintElement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGBlueprintElement_ApplyPreconfiguredSettings, "ApplyPreconfiguredSettings" }, // 2238897048
		{ &Z_Construct_UFunction_UPCGBlueprintElement_CustomInputLabels, "CustomInputLabels" }, // 1253701242
		{ &Z_Construct_UFunction_UPCGBlueprintElement_CustomOutputLabels, "CustomOutputLabels" }, // 1769499711
		{ &Z_Construct_UFunction_UPCGBlueprintElement_Execute, "Execute" }, // 1331020326
		{ &Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext, "ExecuteWithContext" }, // 3419337834
		{ &Z_Construct_UFunction_UPCGBlueprintElement_GetContext, "GetContext" }, // 1919722853
		{ &Z_Construct_UFunction_UPCGBlueprintElement_GetInputPinByLabel, "GetInputPinByLabel" }, // 1748916794
		{ &Z_Construct_UFunction_UPCGBlueprintElement_GetInputPins, "GetInputPins" }, // 2752024860
		{ &Z_Construct_UFunction_UPCGBlueprintElement_GetOutputPinByLabel, "GetOutputPinByLabel" }, // 93026252
		{ &Z_Construct_UFunction_UPCGBlueprintElement_GetOutputPins, "GetOutputPins" }, // 3802512421
		{ &Z_Construct_UFunction_UPCGBlueprintElement_GetRandomStream, "GetRandomStream" }, // 2078611093
		{ &Z_Construct_UFunction_UPCGBlueprintElement_GetSeed, "GetSeed" }, // 2772235229
		{ &Z_Construct_UFunction_UPCGBlueprintElement_IsCacheableOverride, "IsCacheableOverride" }, // 1503824035
		{ &Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop, "IterationLoop" }, // 3480127800
		{ &Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody, "IterationLoopBody" }, // 4218458348
		{ &Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop, "NestedLoop" }, // 3843395251
		{ &Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody, "NestedLoopBody" }, // 4253840912
		{ &Z_Construct_UFunction_UPCGBlueprintElement_NodeColorOverride, "NodeColorOverride" }, // 3544913351
		{ &Z_Construct_UFunction_UPCGBlueprintElement_NodeTitleOverride, "NodeTitleOverride" }, // 2853580439
		{ &Z_Construct_UFunction_UPCGBlueprintElement_NodeTypeOverride, "NodeTypeOverride" }, // 174761728
		{ &Z_Construct_UFunction_UPCGBlueprintElement_PointLoop, "PointLoop" }, // 14981779
		{ &Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody, "PointLoopBody" }, // 716815216
		{ &Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop, "VariableLoop" }, // 2853549001
		{ &Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody, "VariableLoopBody" }, // 1839886541
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintElement_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintElement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Elements/PCGExecuteBlueprint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bIsCacheable_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Controls whether results can be cached so we can bypass execution if the inputs & settings are the same in a subsequent execution.\n\x09* If you have implemented the IsCacheableOverride function, then this value is ignored.\n\x09* Note that if your node relies on data that is not directly tracked by PCG or creates any kind of artifact (adds components, creates actors, etc.) then it should not be cacheable.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
		{ "ToolTip", "Controls whether results can be cached so we can bypass execution if the inputs & settings are the same in a subsequent execution.\nIf you have implemented the IsCacheableOverride function, then this value is ignored.\nNote that if your node relies on data that is not directly tracked by PCG or creates any kind of artifact (adds components, creates actors, etc.) then it should not be cacheable." },
	};
#endif
	void Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bIsCacheable_SetBit(void* Obj)
	{
		((UPCGBlueprintElement*)Obj)->bIsCacheable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bIsCacheable = { "bIsCacheable", nullptr, (EPropertyFlags)0x0010040000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGBlueprintElement), &Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bIsCacheable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bIsCacheable_MetaData), Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bIsCacheable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bComputeFullDataCrc_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** In cases where your node is non-cacheable but is likely to yield the same results on subsequent executions, this controls whether we will do a deep & computationally intensive CRC computation (true), \n\x09* which will allow cache usage in downstream nodes in your graph, or, by default (false), a shallow but quick crc computation which will not be cache-friendly. */" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
		{ "ToolTip", "In cases where your node is non-cacheable but is likely to yield the same results on subsequent executions, this controls whether we will do a deep & computationally intensive CRC computation (true),\nwhich will allow cache usage in downstream nodes in your graph, or, by default (false), a shallow but quick crc computation which will not be cache-friendly." },
	};
#endif
	void Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bComputeFullDataCrc_SetBit(void* Obj)
	{
		((UPCGBlueprintElement*)Obj)->bComputeFullDataCrc = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bComputeFullDataCrc = { "bComputeFullDataCrc", nullptr, (EPropertyFlags)0x0010040000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGBlueprintElement), &Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bComputeFullDataCrc_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bComputeFullDataCrc_MetaData), Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bComputeFullDataCrc_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bCanBeMultithreaded_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Controls whether this node execution can be run from a non-game thread. This is not related to the Loop functions provided/implemented in this class, which should always run on any thread. */" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
		{ "ToolTip", "Controls whether this node execution can be run from a non-game thread. This is not related to the Loop functions provided/implemented in this class, which should always run on any thread." },
	};
#endif
	void Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bCanBeMultithreaded_SetBit(void* Obj)
	{
		((UPCGBlueprintElement*)Obj)->bCanBeMultithreaded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bCanBeMultithreaded = { "bCanBeMultithreaded", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGBlueprintElement), &Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bCanBeMultithreaded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bCanBeMultithreaded_MetaData), Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bCanBeMultithreaded_MetaData) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_InputPinLabels_ElementProp = { "InputPinLabels", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_InputPinLabels_MetaData[] = {
		{ "BlueprintGetter", "CustomInputLabels" },
		{ "Category", "Settings|Input & Output" },
		{ "DeprecatedMessage", "Input Pin Labels are deprecated - use Input Labels instead." },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_InputPinLabels = { "InputPinLabels", nullptr, (EPropertyFlags)0x0010000820000014, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGBlueprintElement, InputPinLabels_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_InputPinLabels_MetaData), Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_InputPinLabels_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_OutputPinLabels_ElementProp = { "OutputPinLabels", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_OutputPinLabels_MetaData[] = {
		{ "BlueprintGetter", "CustomOutputLabels" },
		{ "Category", "Settings|Input & Output" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_OutputPinLabels = { "OutputPinLabels", nullptr, (EPropertyFlags)0x0010000820000014, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGBlueprintElement, OutputPinLabels_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_OutputPinLabels_MetaData), Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_OutputPinLabels_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_CustomInputPins_Inner = { "CustomInputPins", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGPinProperties, METADATA_PARAMS(0, nullptr) }; // 1976663911
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_CustomInputPins_MetaData[] = {
		{ "Category", "Settings|Input & Output" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_CustomInputPins = { "CustomInputPins", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGBlueprintElement, CustomInputPins), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_CustomInputPins_MetaData), Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_CustomInputPins_MetaData) }; // 1976663911
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_CustomOutputPins_Inner = { "CustomOutputPins", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGPinProperties, METADATA_PARAMS(0, nullptr) }; // 1976663911
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_CustomOutputPins_MetaData[] = {
		{ "Category", "Settings|Input & Output" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_CustomOutputPins = { "CustomOutputPins", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGBlueprintElement, CustomOutputPins), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_CustomOutputPins_MetaData), Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_CustomOutputPins_MetaData) }; // 1976663911
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bHasDefaultInPin_MetaData[] = {
		{ "Category", "Settings|Input & Output" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	void Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bHasDefaultInPin_SetBit(void* Obj)
	{
		((UPCGBlueprintElement*)Obj)->bHasDefaultInPin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bHasDefaultInPin = { "bHasDefaultInPin", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGBlueprintElement), &Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bHasDefaultInPin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bHasDefaultInPin_MetaData), Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bHasDefaultInPin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bHasDefaultOutPin_MetaData[] = {
		{ "Category", "Settings|Input & Output" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	void Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bHasDefaultOutPin_SetBit(void* Obj)
	{
		((UPCGBlueprintElement*)Obj)->bHasDefaultOutPin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bHasDefaultOutPin = { "bHasDefaultOutPin", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGBlueprintElement), &Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bHasDefaultOutPin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bHasDefaultOutPin_MetaData), Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bHasDefaultOutPin_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bExposeToLibrary_MetaData[] = {
		{ "Category", "AssetInfo" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	void Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bExposeToLibrary_SetBit(void* Obj)
	{
		((UPCGBlueprintElement*)Obj)->bExposeToLibrary = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bExposeToLibrary = { "bExposeToLibrary", nullptr, (EPropertyFlags)0x0010010800010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGBlueprintElement), &Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bExposeToLibrary_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bExposeToLibrary_MetaData), Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bExposeToLibrary_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bEnablePreconfiguredSettings_MetaData[] = {
		{ "Category", "AssetInfo|Preconfigured Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	void Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bEnablePreconfiguredSettings_SetBit(void* Obj)
	{
		((UPCGBlueprintElement*)Obj)->bEnablePreconfiguredSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bEnablePreconfiguredSettings = { "bEnablePreconfiguredSettings", nullptr, (EPropertyFlags)0x0010010800010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGBlueprintElement), &Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bEnablePreconfiguredSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bEnablePreconfiguredSettings_MetaData), Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bEnablePreconfiguredSettings_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bOnlyExposePreconfiguredSettings_MetaData[] = {
		{ "Category", "AssetInfo|Preconfigured Settings" },
		{ "EditCondition", "bEnablePreconfiguredSettings" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	void Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bOnlyExposePreconfiguredSettings_SetBit(void* Obj)
	{
		((UPCGBlueprintElement*)Obj)->bOnlyExposePreconfiguredSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bOnlyExposePreconfiguredSettings = { "bOnlyExposePreconfiguredSettings", nullptr, (EPropertyFlags)0x0010010800010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGBlueprintElement), &Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bOnlyExposePreconfiguredSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bOnlyExposePreconfiguredSettings_MetaData), Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bOnlyExposePreconfiguredSettings_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_PreconfiguredInfo_Inner = { "PreconfiguredInfo", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGPreConfiguredSettingsInfo, METADATA_PARAMS(0, nullptr) }; // 1717054666
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_PreconfiguredInfo_MetaData[] = {
		{ "Category", "AssetInfo|Preconfigured Settings" },
		{ "EditCondition", "bEnablePreconfiguredSettings" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_PreconfiguredInfo = { "PreconfiguredInfo", nullptr, (EPropertyFlags)0x0010000800010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGBlueprintElement, PreconfiguredInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_PreconfiguredInfo_MetaData), Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_PreconfiguredInfo_MetaData) }; // 1717054666
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "AssetInfo" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010010800010005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGBlueprintElement, Category), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_Category_MetaData), Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_Category_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "AssetInfo" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010010800010005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGBlueprintElement, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_Description_MetaData), Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_Description_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_DependencyParsingDepth_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_DependencyParsingDepth = { "DependencyParsingDepth", nullptr, (EPropertyFlags)0x0010040800010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGBlueprintElement, DependencyParsingDepth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_DependencyParsingDepth_MetaData), Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_DependencyParsingDepth_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGBlueprintElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bIsCacheable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bComputeFullDataCrc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bCanBeMultithreaded,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_InputPinLabels_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_InputPinLabels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_OutputPinLabels_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_OutputPinLabels,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_CustomInputPins_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_CustomInputPins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_CustomOutputPins_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_CustomOutputPins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bHasDefaultInPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bHasDefaultOutPin,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bExposeToLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bEnablePreconfiguredSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_bOnlyExposePreconfiguredSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_PreconfiguredInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_PreconfiguredInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintElement_Statics::NewProp_DependencyParsingDepth,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGBlueprintElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGBlueprintElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGBlueprintElement_Statics::ClassParams = {
		&UPCGBlueprintElement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPCGBlueprintElement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintElement_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintElement_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGBlueprintElement_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintElement_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPCGBlueprintElement()
	{
		if (!Z_Registration_Info_UClass_UPCGBlueprintElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGBlueprintElement.OuterSingleton, Z_Construct_UClass_UPCGBlueprintElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGBlueprintElement.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGBlueprintElement>()
	{
		return UPCGBlueprintElement::StaticClass();
	}
	UPCGBlueprintElement::UPCGBlueprintElement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGBlueprintElement);
	UPCGBlueprintElement::~UPCGBlueprintElement() {}
	DEFINE_FUNCTION(UPCGBlueprintSettings::execGetElementType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<UPCGBlueprintElement> *)Z_Param__Result=P_THIS->GetElementType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGBlueprintSettings::execSetElementType)
	{
		P_GET_OBJECT(UClass,Z_Param_InElementType);
		P_GET_OBJECT_REF(UPCGBlueprintElement,Z_Param_Out_ElementInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetElementType(Z_Param_InElementType,Z_Param_Out_ElementInstance);
		P_NATIVE_END;
	}
	void UPCGBlueprintSettings::StaticRegisterNativesUPCGBlueprintSettings()
	{
		UClass* Class = UPCGBlueprintSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetElementType", &UPCGBlueprintSettings::execGetElementType },
			{ "SetElementType", &UPCGBlueprintSettings::execSetElementType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPCGBlueprintSettings_GetElementType_Statics
	{
		struct PCGBlueprintSettings_eventGetElementType_Parms
		{
			TSubclassOf<UPCGBlueprintElement>  ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPCGBlueprintSettings_GetElementType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintSettings_eventGetElementType_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UPCGBlueprintElement_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintSettings_GetElementType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintSettings_GetElementType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintSettings_GetElementType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings|Template" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintSettings_GetElementType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintSettings, nullptr, "GetElementType", nullptr, nullptr, Z_Construct_UFunction_UPCGBlueprintSettings_GetElementType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintSettings_GetElementType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGBlueprintSettings_GetElementType_Statics::PCGBlueprintSettings_eventGetElementType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintSettings_GetElementType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGBlueprintSettings_GetElementType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintSettings_GetElementType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGBlueprintSettings_GetElementType_Statics::PCGBlueprintSettings_eventGetElementType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGBlueprintSettings_GetElementType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintSettings_GetElementType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGBlueprintSettings_SetElementType_Statics
	{
		struct PCGBlueprintSettings_eventSetElementType_Parms
		{
			TSubclassOf<UPCGBlueprintElement>  InElementType;
			UPCGBlueprintElement* ElementInstance;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InElementType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ElementInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPCGBlueprintSettings_SetElementType_Statics::NewProp_InElementType = { "InElementType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintSettings_eventSetElementType_Parms, InElementType), Z_Construct_UClass_UClass, Z_Construct_UClass_UPCGBlueprintElement_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGBlueprintSettings_SetElementType_Statics::NewProp_ElementInstance = { "ElementInstance", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGBlueprintSettings_eventSetElementType_Parms, ElementInstance), Z_Construct_UClass_UPCGBlueprintElement_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGBlueprintSettings_SetElementType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintSettings_SetElementType_Statics::NewProp_InElementType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGBlueprintSettings_SetElementType_Statics::NewProp_ElementInstance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGBlueprintSettings_SetElementType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings|Template" },
		{ "DeterminesOutputType", "InElementType" },
		{ "DynamicOutputParam", "ElementInstance" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGBlueprintSettings_SetElementType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGBlueprintSettings, nullptr, "SetElementType", nullptr, nullptr, Z_Construct_UFunction_UPCGBlueprintSettings_SetElementType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintSettings_SetElementType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGBlueprintSettings_SetElementType_Statics::PCGBlueprintSettings_eventSetElementType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintSettings_SetElementType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGBlueprintSettings_SetElementType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGBlueprintSettings_SetElementType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGBlueprintSettings_SetElementType_Statics::PCGBlueprintSettings_eventSetElementType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGBlueprintSettings_SetElementType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGBlueprintSettings_SetElementType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGBlueprintSettings);
	UClass* Z_Construct_UClass_UPCGBlueprintSettings_NoRegister()
	{
		return UPCGBlueprintSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGBlueprintSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintElement_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BlueprintElement;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintElementType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BlueprintElementType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintElementInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlueprintElementInstance;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FNamePropertyParams NewProp_TrackedActorTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackedActorTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackedActorTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTrackActorsOnlyWithinBounds_MetaData[];
#endif
		static void NewProp_bTrackActorsOnlyWithinBounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTrackActorsOnlyWithinBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeMultithreaded_MetaData[];
#endif
		static void NewProp_bCanBeMultithreaded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeMultithreaded;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGBlueprintSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintSettings_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPCGBlueprintSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGBlueprintSettings_GetElementType, "GetElementType" }, // 2639605551
		{ &Z_Construct_UFunction_UPCGBlueprintSettings_SetElementType, "SetElementType" }, // 2932694655
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintSettings_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Elements/PCGExecuteBlueprint.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_BlueprintElement_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_BlueprintElement = { "BlueprintElement", nullptr, (EPropertyFlags)0x0024080820000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGBlueprintSettings, BlueprintElement_DEPRECATED), Z_Construct_UClass_UClass, Z_Construct_UClass_UPCGBlueprintElement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_BlueprintElement_MetaData), Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_BlueprintElement_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_BlueprintElementType_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_BlueprintElementType = { "BlueprintElementType", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGBlueprintSettings, BlueprintElementType), Z_Construct_UClass_UClass, Z_Construct_UClass_UPCGBlueprintElement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_BlueprintElementType_MetaData), Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_BlueprintElementType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_BlueprintElementInstance_MetaData[] = {
		{ "Category", "Instance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_BlueprintElementInstance = { "BlueprintElementInstance", nullptr, (EPropertyFlags)0x00260800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGBlueprintSettings, BlueprintElementInstance), Z_Construct_UClass_UPCGBlueprintElement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_BlueprintElementInstance_MetaData), Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_BlueprintElementInstance_MetaData) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_TrackedActorTags_Inner = { "TrackedActorTags", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_TrackedActorTags_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_TrackedActorTags = { "TrackedActorTags", nullptr, (EPropertyFlags)0x0020080800000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGBlueprintSettings, TrackedActorTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_TrackedActorTags_MetaData), Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_TrackedActorTags_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_bTrackActorsOnlyWithinBounds_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If this is checked, found actors that are outside component bounds will not trigger a refresh. Only works for tags for now in editor. */" },
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
		{ "ToolTip", "If this is checked, found actors that are outside component bounds will not trigger a refresh. Only works for tags for now in editor." },
	};
#endif
	void Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_bTrackActorsOnlyWithinBounds_SetBit(void* Obj)
	{
		((UPCGBlueprintSettings*)Obj)->bTrackActorsOnlyWithinBounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_bTrackActorsOnlyWithinBounds = { "bTrackActorsOnlyWithinBounds", nullptr, (EPropertyFlags)0x0020080800000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGBlueprintSettings), &Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_bTrackActorsOnlyWithinBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_bTrackActorsOnlyWithinBounds_MetaData), Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_bTrackActorsOnlyWithinBounds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_bCanBeMultithreaded_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGExecuteBlueprint.h" },
	};
#endif
	void Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_bCanBeMultithreaded_SetBit(void* Obj)
	{
		((UPCGBlueprintSettings*)Obj)->bCanBeMultithreaded_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_bCanBeMultithreaded = { "bCanBeMultithreaded", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGBlueprintSettings), &Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_bCanBeMultithreaded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_bCanBeMultithreaded_MetaData), Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_bCanBeMultithreaded_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGBlueprintSettings_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_BlueprintElement,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_BlueprintElementType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_BlueprintElementInstance,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_TrackedActorTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_TrackedActorTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_bTrackActorsOnlyWithinBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGBlueprintSettings_Statics::NewProp_bCanBeMultithreaded,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGBlueprintSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGBlueprintSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGBlueprintSettings_Statics::ClassParams = {
		&UPCGBlueprintSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPCGBlueprintSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintSettings_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGBlueprintSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGBlueprintSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPCGBlueprintSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGBlueprintSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGBlueprintSettings.OuterSingleton, Z_Construct_UClass_UPCGBlueprintSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGBlueprintSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGBlueprintSettings>()
	{
		return UPCGBlueprintSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGBlueprintSettings);
	UPCGBlueprintSettings::~UPCGBlueprintSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGBlueprintElement, UPCGBlueprintElement::StaticClass, TEXT("UPCGBlueprintElement"), &Z_Registration_Info_UClass_UPCGBlueprintElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGBlueprintElement), 1153428583U) },
		{ Z_Construct_UClass_UPCGBlueprintSettings, UPCGBlueprintSettings::StaticClass, TEXT("UPCGBlueprintSettings"), &Z_Registration_Info_UClass_UPCGBlueprintSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGBlueprintSettings), 3836426819U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_3975744057(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
