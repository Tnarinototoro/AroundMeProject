// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningAgentsPolicy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLearningAgentsPolicy() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsInteractor_NoRegister();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsManagerComponent();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsNeuralNetwork_NoRegister();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsPolicy();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsPolicy_NoRegister();
	LEARNINGAGENTS_API UEnum* Z_Construct_UEnum_LearningAgents_ELearningAgentsActivationFunction();
	LEARNINGAGENTS_API UScriptStruct* Z_Construct_UScriptStruct_FLearningAgentsPolicySettings();
	UPackage* Z_Construct_UPackage__Script_LearningAgents();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LearningAgentsPolicySettings;
class UScriptStruct* FLearningAgentsPolicySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LearningAgentsPolicySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LearningAgentsPolicySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLearningAgentsPolicySettings, (UObject*)Z_Construct_UPackage__Script_LearningAgents(), TEXT("LearningAgentsPolicySettings"));
	}
	return Z_Registration_Info_UScriptStruct_LearningAgentsPolicySettings.OuterSingleton;
}
template<> LEARNINGAGENTS_API UScriptStruct* StaticStruct<FLearningAgentsPolicySettings>()
{
	return FLearningAgentsPolicySettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionNoiseSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ActionNoiseSeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionNoiseMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActionNoiseMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionNoiseMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActionNoiseMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionNoiseScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActionNoiseScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LayerNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HiddenLayerSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HiddenLayerSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActivationFunction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationFunction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivationFunction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/** The configurable settings for a ULearningAgentsPolicy. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsPolicy.h" },
		{ "ToolTip", "The configurable settings for a ULearningAgentsPolicy." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLearningAgentsPolicySettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::NewProp_ActionNoiseSeed_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Seed for the action noise used by the policy  */" },
		{ "ModuleRelativePath", "Public/LearningAgentsPolicy.h" },
		{ "ToolTip", "Seed for the action noise used by the policy" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::NewProp_ActionNoiseSeed = { "ActionNoiseSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsPolicySettings, ActionNoiseSeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::NewProp_ActionNoiseSeed_MetaData), Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::NewProp_ActionNoiseSeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::NewProp_ActionNoiseMin_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Minimum action noise used by the policy */" },
		{ "ModuleRelativePath", "Public/LearningAgentsPolicy.h" },
		{ "ToolTip", "Minimum action noise used by the policy" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::NewProp_ActionNoiseMin = { "ActionNoiseMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsPolicySettings, ActionNoiseMin), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::NewProp_ActionNoiseMin_MetaData), Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::NewProp_ActionNoiseMin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::NewProp_ActionNoiseMax_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Maximum action noise used by the policy */" },
		{ "ModuleRelativePath", "Public/LearningAgentsPolicy.h" },
		{ "ToolTip", "Maximum action noise used by the policy" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::NewProp_ActionNoiseMax = { "ActionNoiseMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsPolicySettings, ActionNoiseMax), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::NewProp_ActionNoiseMax_MetaData), Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::NewProp_ActionNoiseMax_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::NewProp_ActionNoiseScale_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Scale of the action noise used by the policy should be 1.0 during training. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsPolicy.h" },
		{ "ToolTip", "Scale of the action noise used by the policy should be 1.0 during training." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::NewProp_ActionNoiseScale = { "ActionNoiseScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsPolicySettings, ActionNoiseScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::NewProp_ActionNoiseScale_MetaData), Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::NewProp_ActionNoiseScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::NewProp_LayerNum_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "ClampMin", "2" },
		{ "Comment", "/** Total layers for policy network including input, hidden, and output layers */" },
		{ "ModuleRelativePath", "Public/LearningAgentsPolicy.h" },
		{ "ToolTip", "Total layers for policy network including input, hidden, and output layers" },
		{ "UIMin", "2" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::NewProp_LayerNum = { "LayerNum", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsPolicySettings, LayerNum), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::NewProp_LayerNum_MetaData), Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::NewProp_LayerNum_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::NewProp_HiddenLayerSize_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of neurons in each hidden layer of the policy network */" },
		{ "ModuleRelativePath", "Public/LearningAgentsPolicy.h" },
		{ "ToolTip", "Number of neurons in each hidden layer of the policy network" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::NewProp_HiddenLayerSize = { "HiddenLayerSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsPolicySettings, HiddenLayerSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::NewProp_HiddenLayerSize_MetaData), Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::NewProp_HiddenLayerSize_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::NewProp_ActivationFunction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::NewProp_ActivationFunction_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** Activation function to use on hidden layers of the policy network */" },
		{ "ModuleRelativePath", "Public/LearningAgentsPolicy.h" },
		{ "ToolTip", "Activation function to use on hidden layers of the policy network" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::NewProp_ActivationFunction = { "ActivationFunction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsPolicySettings, ActivationFunction), Z_Construct_UEnum_LearningAgents_ELearningAgentsActivationFunction, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::NewProp_ActivationFunction_MetaData), Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::NewProp_ActivationFunction_MetaData) }; // 3592894623
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::NewProp_ActionNoiseSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::NewProp_ActionNoiseMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::NewProp_ActionNoiseMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::NewProp_ActionNoiseScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::NewProp_LayerNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::NewProp_HiddenLayerSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::NewProp_ActivationFunction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::NewProp_ActivationFunction,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgents,
		nullptr,
		&NewStructOps,
		"LearningAgentsPolicySettings",
		Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::PropPointers),
		sizeof(FLearningAgentsPolicySettings),
		alignof(FLearningAgentsPolicySettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLearningAgentsPolicySettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LearningAgentsPolicySettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LearningAgentsPolicySettings.InnerSingleton, Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LearningAgentsPolicySettings.InnerSingleton;
	}
	DEFINE_FUNCTION(ULearningAgentsPolicy::execSetActionNoiseScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ActionNoiseScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActionNoiseScale(Z_Param_ActionNoiseScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsPolicy::execGetActionNoiseScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetActionNoiseScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsPolicy::execRunInference)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RunInference();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsPolicy::execEvaluatePolicy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EvaluatePolicy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsPolicy::execSavePolicyToAsset)
	{
		P_GET_OBJECT(ULearningAgentsNeuralNetwork,Z_Param_NeuralNetworkAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SavePolicyToAsset(Z_Param_NeuralNetworkAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsPolicy::execLoadPolicyFromAsset)
	{
		P_GET_OBJECT(ULearningAgentsNeuralNetwork,Z_Param_NeuralNetworkAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadPolicyFromAsset(Z_Param_NeuralNetworkAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsPolicy::execUsePolicyFromAsset)
	{
		P_GET_OBJECT(ULearningAgentsNeuralNetwork,Z_Param_NeuralNetworkAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UsePolicyFromAsset(Z_Param_NeuralNetworkAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsPolicy::execSavePolicyToSnapshot)
	{
		P_GET_STRUCT_REF(FFilePath,Z_Param_Out_File);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SavePolicyToSnapshot(Z_Param_Out_File);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsPolicy::execLoadPolicyFromSnapshot)
	{
		P_GET_STRUCT_REF(FFilePath,Z_Param_Out_File);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadPolicyFromSnapshot(Z_Param_Out_File);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsPolicy::execSetupPolicy)
	{
		P_GET_OBJECT(ULearningAgentsInteractor,Z_Param_InInteractor);
		P_GET_STRUCT_REF(FLearningAgentsPolicySettings,Z_Param_Out_PolicySettings);
		P_GET_OBJECT(ULearningAgentsNeuralNetwork,Z_Param_NeuralNetworkAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupPolicy(Z_Param_InInteractor,Z_Param_Out_PolicySettings,Z_Param_NeuralNetworkAsset);
		P_NATIVE_END;
	}
	void ULearningAgentsPolicy::StaticRegisterNativesULearningAgentsPolicy()
	{
		UClass* Class = ULearningAgentsPolicy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EvaluatePolicy", &ULearningAgentsPolicy::execEvaluatePolicy },
			{ "GetActionNoiseScale", &ULearningAgentsPolicy::execGetActionNoiseScale },
			{ "LoadPolicyFromAsset", &ULearningAgentsPolicy::execLoadPolicyFromAsset },
			{ "LoadPolicyFromSnapshot", &ULearningAgentsPolicy::execLoadPolicyFromSnapshot },
			{ "RunInference", &ULearningAgentsPolicy::execRunInference },
			{ "SavePolicyToAsset", &ULearningAgentsPolicy::execSavePolicyToAsset },
			{ "SavePolicyToSnapshot", &ULearningAgentsPolicy::execSavePolicyToSnapshot },
			{ "SetActionNoiseScale", &ULearningAgentsPolicy::execSetActionNoiseScale },
			{ "SetupPolicy", &ULearningAgentsPolicy::execSetupPolicy },
			{ "UsePolicyFromAsset", &ULearningAgentsPolicy::execUsePolicyFromAsset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULearningAgentsPolicy_EvaluatePolicy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsPolicy_EvaluatePolicy_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Calling this function will run the underlying neural network on the previously buffered observations to populate\n\x09 * the output action buffer. This should be called after the associated agent interactor's EncodeObservations and\n\x09 * before its DecodeActions.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsPolicy.h" },
		{ "ToolTip", "Calling this function will run the underlying neural network on the previously buffered observations to populate\nthe output action buffer. This should be called after the associated agent interactor's EncodeObservations and\nbefore its DecodeActions." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsPolicy_EvaluatePolicy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsPolicy, nullptr, "EvaluatePolicy", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsPolicy_EvaluatePolicy_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsPolicy_EvaluatePolicy_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULearningAgentsPolicy_EvaluatePolicy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsPolicy_EvaluatePolicy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsPolicy_GetActionNoiseScale_Statics
	{
		struct LearningAgentsPolicy_eventGetActionNoiseScale_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULearningAgentsPolicy_GetActionNoiseScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsPolicy_eventGetActionNoiseScale_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsPolicy_GetActionNoiseScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsPolicy_GetActionNoiseScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsPolicy_GetActionNoiseScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** Get the action noise scale used. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsPolicy.h" },
		{ "ToolTip", "Get the action noise scale used." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsPolicy_GetActionNoiseScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsPolicy, nullptr, "GetActionNoiseScale", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsPolicy_GetActionNoiseScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsPolicy_GetActionNoiseScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsPolicy_GetActionNoiseScale_Statics::LearningAgentsPolicy_eventGetActionNoiseScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsPolicy_GetActionNoiseScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsPolicy_GetActionNoiseScale_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsPolicy_GetActionNoiseScale_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsPolicy_GetActionNoiseScale_Statics::LearningAgentsPolicy_eventGetActionNoiseScale_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsPolicy_GetActionNoiseScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsPolicy_GetActionNoiseScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsPolicy_LoadPolicyFromAsset_Statics
	{
		struct LearningAgentsPolicy_eventLoadPolicyFromAsset_Parms
		{
			ULearningAgentsNeuralNetwork* NeuralNetworkAsset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NeuralNetworkAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULearningAgentsPolicy_LoadPolicyFromAsset_Statics::NewProp_NeuralNetworkAsset = { "NeuralNetworkAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsPolicy_eventLoadPolicyFromAsset_Parms, NeuralNetworkAsset), Z_Construct_UClass_ULearningAgentsNeuralNetwork_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsPolicy_LoadPolicyFromAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsPolicy_LoadPolicyFromAsset_Statics::NewProp_NeuralNetworkAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsPolicy_LoadPolicyFromAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Load a ULearningAgentsNeuralNetwork asset's weights into this policy.\n\x09 * @param NeuralNetworkAsset The asset to load from.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsPolicy.h" },
		{ "ToolTip", "Load a ULearningAgentsNeuralNetwork asset's weights into this policy.\n@param NeuralNetworkAsset The asset to load from." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsPolicy_LoadPolicyFromAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsPolicy, nullptr, "LoadPolicyFromAsset", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsPolicy_LoadPolicyFromAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsPolicy_LoadPolicyFromAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsPolicy_LoadPolicyFromAsset_Statics::LearningAgentsPolicy_eventLoadPolicyFromAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsPolicy_LoadPolicyFromAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsPolicy_LoadPolicyFromAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsPolicy_LoadPolicyFromAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsPolicy_LoadPolicyFromAsset_Statics::LearningAgentsPolicy_eventLoadPolicyFromAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsPolicy_LoadPolicyFromAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsPolicy_LoadPolicyFromAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsPolicy_LoadPolicyFromSnapshot_Statics
	{
		struct FFilePath
		{
			FString FilePath;
		};

		struct LearningAgentsPolicy_eventLoadPolicyFromSnapshot_Parms
		{
			FFilePath File;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_File;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsPolicy_LoadPolicyFromSnapshot_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULearningAgentsPolicy_LoadPolicyFromSnapshot_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsPolicy_eventLoadPolicyFromSnapshot_Parms, File), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsPolicy_LoadPolicyFromSnapshot_Statics::NewProp_File_MetaData), Z_Construct_UFunction_ULearningAgentsPolicy_LoadPolicyFromSnapshot_Statics::NewProp_File_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsPolicy_LoadPolicyFromSnapshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsPolicy_LoadPolicyFromSnapshot_Statics::NewProp_File,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsPolicy_LoadPolicyFromSnapshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Load a snapshot's weights into this policy.\n\x09 * @param File The snapshot file.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsPolicy.h" },
		{ "RelativePath", "" },
		{ "ToolTip", "Load a snapshot's weights into this policy.\n@param File The snapshot file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsPolicy_LoadPolicyFromSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsPolicy, nullptr, "LoadPolicyFromSnapshot", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsPolicy_LoadPolicyFromSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsPolicy_LoadPolicyFromSnapshot_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsPolicy_LoadPolicyFromSnapshot_Statics::LearningAgentsPolicy_eventLoadPolicyFromSnapshot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsPolicy_LoadPolicyFromSnapshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsPolicy_LoadPolicyFromSnapshot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsPolicy_LoadPolicyFromSnapshot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsPolicy_LoadPolicyFromSnapshot_Statics::LearningAgentsPolicy_eventLoadPolicyFromSnapshot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsPolicy_LoadPolicyFromSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsPolicy_LoadPolicyFromSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsPolicy_RunInference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsPolicy_RunInference_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Calls EncodeObservations, followed by EvaluatePolicy, followed by DecodeActions\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsPolicy.h" },
		{ "ToolTip", "Calls EncodeObservations, followed by EvaluatePolicy, followed by DecodeActions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsPolicy_RunInference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsPolicy, nullptr, "RunInference", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsPolicy_RunInference_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsPolicy_RunInference_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULearningAgentsPolicy_RunInference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsPolicy_RunInference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsPolicy_SavePolicyToAsset_Statics
	{
		struct LearningAgentsPolicy_eventSavePolicyToAsset_Parms
		{
			ULearningAgentsNeuralNetwork* NeuralNetworkAsset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NeuralNetworkAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULearningAgentsPolicy_SavePolicyToAsset_Statics::NewProp_NeuralNetworkAsset = { "NeuralNetworkAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsPolicy_eventSavePolicyToAsset_Parms, NeuralNetworkAsset), Z_Construct_UClass_ULearningAgentsNeuralNetwork_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsPolicy_SavePolicyToAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsPolicy_SavePolicyToAsset_Statics::NewProp_NeuralNetworkAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsPolicy_SavePolicyToAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Save this policy's weights to a ULearningAgentsNeuralNetwork asset.\n\x09 * @param NeuralNetworkAsset The asset to save to.\n\x09 */" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/LearningAgentsPolicy.h" },
		{ "ToolTip", "Save this policy's weights to a ULearningAgentsNeuralNetwork asset.\n@param NeuralNetworkAsset The asset to save to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsPolicy_SavePolicyToAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsPolicy, nullptr, "SavePolicyToAsset", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsPolicy_SavePolicyToAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsPolicy_SavePolicyToAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsPolicy_SavePolicyToAsset_Statics::LearningAgentsPolicy_eventSavePolicyToAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsPolicy_SavePolicyToAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsPolicy_SavePolicyToAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsPolicy_SavePolicyToAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsPolicy_SavePolicyToAsset_Statics::LearningAgentsPolicy_eventSavePolicyToAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsPolicy_SavePolicyToAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsPolicy_SavePolicyToAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsPolicy_SavePolicyToSnapshot_Statics
	{
		struct FFilePath
		{
			FString FilePath;
		};

		struct LearningAgentsPolicy_eventSavePolicyToSnapshot_Parms
		{
			FFilePath File;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_File;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsPolicy_SavePolicyToSnapshot_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULearningAgentsPolicy_SavePolicyToSnapshot_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsPolicy_eventSavePolicyToSnapshot_Parms, File), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsPolicy_SavePolicyToSnapshot_Statics::NewProp_File_MetaData), Z_Construct_UFunction_ULearningAgentsPolicy_SavePolicyToSnapshot_Statics::NewProp_File_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsPolicy_SavePolicyToSnapshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsPolicy_SavePolicyToSnapshot_Statics::NewProp_File,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsPolicy_SavePolicyToSnapshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Save this policy's weights into a snapshot.\n\x09 * @param File The snapshot file.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsPolicy.h" },
		{ "RelativePath", "" },
		{ "ToolTip", "Save this policy's weights into a snapshot.\n@param File The snapshot file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsPolicy_SavePolicyToSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsPolicy, nullptr, "SavePolicyToSnapshot", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsPolicy_SavePolicyToSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsPolicy_SavePolicyToSnapshot_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsPolicy_SavePolicyToSnapshot_Statics::LearningAgentsPolicy_eventSavePolicyToSnapshot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsPolicy_SavePolicyToSnapshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsPolicy_SavePolicyToSnapshot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsPolicy_SavePolicyToSnapshot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsPolicy_SavePolicyToSnapshot_Statics::LearningAgentsPolicy_eventSavePolicyToSnapshot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsPolicy_SavePolicyToSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsPolicy_SavePolicyToSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsPolicy_SetActionNoiseScale_Statics
	{
		struct LearningAgentsPolicy_eventSetActionNoiseScale_Parms
		{
			float ActionNoiseScale;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionNoiseScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActionNoiseScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsPolicy_SetActionNoiseScale_Statics::NewProp_ActionNoiseScale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULearningAgentsPolicy_SetActionNoiseScale_Statics::NewProp_ActionNoiseScale = { "ActionNoiseScale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsPolicy_eventSetActionNoiseScale_Parms, ActionNoiseScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsPolicy_SetActionNoiseScale_Statics::NewProp_ActionNoiseScale_MetaData), Z_Construct_UFunction_ULearningAgentsPolicy_SetActionNoiseScale_Statics::NewProp_ActionNoiseScale_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsPolicy_SetActionNoiseScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsPolicy_SetActionNoiseScale_Statics::NewProp_ActionNoiseScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsPolicy_SetActionNoiseScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** Set the action noise scale used. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsPolicy.h" },
		{ "ToolTip", "Set the action noise scale used." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsPolicy_SetActionNoiseScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsPolicy, nullptr, "SetActionNoiseScale", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsPolicy_SetActionNoiseScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsPolicy_SetActionNoiseScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsPolicy_SetActionNoiseScale_Statics::LearningAgentsPolicy_eventSetActionNoiseScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsPolicy_SetActionNoiseScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsPolicy_SetActionNoiseScale_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsPolicy_SetActionNoiseScale_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsPolicy_SetActionNoiseScale_Statics::LearningAgentsPolicy_eventSetActionNoiseScale_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsPolicy_SetActionNoiseScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsPolicy_SetActionNoiseScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsPolicy_SetupPolicy_Statics
	{
		struct LearningAgentsPolicy_eventSetupPolicy_Parms
		{
			ULearningAgentsInteractor* InInteractor;
			FLearningAgentsPolicySettings PolicySettings;
			ULearningAgentsNeuralNetwork* NeuralNetworkAsset;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInteractor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInteractor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolicySettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolicySettings;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NeuralNetworkAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsPolicy_SetupPolicy_Statics::NewProp_InInteractor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULearningAgentsPolicy_SetupPolicy_Statics::NewProp_InInteractor = { "InInteractor", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsPolicy_eventSetupPolicy_Parms, InInteractor), Z_Construct_UClass_ULearningAgentsInteractor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsPolicy_SetupPolicy_Statics::NewProp_InInteractor_MetaData), Z_Construct_UFunction_ULearningAgentsPolicy_SetupPolicy_Statics::NewProp_InInteractor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsPolicy_SetupPolicy_Statics::NewProp_PolicySettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULearningAgentsPolicy_SetupPolicy_Statics::NewProp_PolicySettings = { "PolicySettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsPolicy_eventSetupPolicy_Parms, PolicySettings), Z_Construct_UScriptStruct_FLearningAgentsPolicySettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsPolicy_SetupPolicy_Statics::NewProp_PolicySettings_MetaData), Z_Construct_UFunction_ULearningAgentsPolicy_SetupPolicy_Statics::NewProp_PolicySettings_MetaData) }; // 383946298
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULearningAgentsPolicy_SetupPolicy_Statics::NewProp_NeuralNetworkAsset = { "NeuralNetworkAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsPolicy_eventSetupPolicy_Parms, NeuralNetworkAsset), Z_Construct_UClass_ULearningAgentsNeuralNetwork_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsPolicy_SetupPolicy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsPolicy_SetupPolicy_Statics::NewProp_InInteractor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsPolicy_SetupPolicy_Statics::NewProp_PolicySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsPolicy_SetupPolicy_Statics::NewProp_NeuralNetworkAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsPolicy_SetupPolicy_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Initializes this object to be used with the given agent interactor and policy settings.\n\x09 * @param InInteractor The input Interactor component\n\x09 * @param PolicySettings The policy settings to use\n\x09 * @param NeuralNetworkAsset Optional Network Asset to use. If provided must match the given PolicySettings. If not\n\x09 * provided or asset is empty then a new neural network object will be created according to the given \n\x09 * PolicySettings and used.\n\x09 */" },
		{ "CPP_Default_NeuralNetworkAsset", "None" },
		{ "CPP_Default_PolicySettings", "()" },
		{ "ModuleRelativePath", "Public/LearningAgentsPolicy.h" },
		{ "ToolTip", "Initializes this object to be used with the given agent interactor and policy settings.\n@param InInteractor The input Interactor component\n@param PolicySettings The policy settings to use\n@param NeuralNetworkAsset Optional Network Asset to use. If provided must match the given PolicySettings. If not\nprovided or asset is empty then a new neural network object will be created according to the given\nPolicySettings and used." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsPolicy_SetupPolicy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsPolicy, nullptr, "SetupPolicy", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsPolicy_SetupPolicy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsPolicy_SetupPolicy_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsPolicy_SetupPolicy_Statics::LearningAgentsPolicy_eventSetupPolicy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsPolicy_SetupPolicy_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsPolicy_SetupPolicy_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsPolicy_SetupPolicy_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsPolicy_SetupPolicy_Statics::LearningAgentsPolicy_eventSetupPolicy_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsPolicy_SetupPolicy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsPolicy_SetupPolicy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsPolicy_UsePolicyFromAsset_Statics
	{
		struct LearningAgentsPolicy_eventUsePolicyFromAsset_Parms
		{
			ULearningAgentsNeuralNetwork* NeuralNetworkAsset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NeuralNetworkAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULearningAgentsPolicy_UsePolicyFromAsset_Statics::NewProp_NeuralNetworkAsset = { "NeuralNetworkAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsPolicy_eventUsePolicyFromAsset_Parms, NeuralNetworkAsset), Z_Construct_UClass_ULearningAgentsNeuralNetwork_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsPolicy_UsePolicyFromAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsPolicy_UsePolicyFromAsset_Statics::NewProp_NeuralNetworkAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsPolicy_UsePolicyFromAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Use a ULearningAgentsNeuralNetwork asset directly for this critic rather than making a copy. If used\n\x09 * during training then this asset's weights will be updated as training progresses.\n\x09 * @param NeuralNetworkAsset The asset to use.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsPolicy.h" },
		{ "ToolTip", "Use a ULearningAgentsNeuralNetwork asset directly for this critic rather than making a copy. If used\nduring training then this asset's weights will be updated as training progresses.\n@param NeuralNetworkAsset The asset to use." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsPolicy_UsePolicyFromAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsPolicy, nullptr, "UsePolicyFromAsset", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsPolicy_UsePolicyFromAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsPolicy_UsePolicyFromAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsPolicy_UsePolicyFromAsset_Statics::LearningAgentsPolicy_eventUsePolicyFromAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsPolicy_UsePolicyFromAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsPolicy_UsePolicyFromAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsPolicy_UsePolicyFromAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsPolicy_UsePolicyFromAsset_Statics::LearningAgentsPolicy_eventUsePolicyFromAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsPolicy_UsePolicyFromAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsPolicy_UsePolicyFromAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULearningAgentsPolicy);
	UClass* Z_Construct_UClass_ULearningAgentsPolicy_NoRegister()
	{
		return ULearningAgentsPolicy::StaticClass();
	}
	struct Z_Construct_UClass_ULearningAgentsPolicy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Interactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Network_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Network;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULearningAgentsPolicy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULearningAgentsManagerComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgents,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsPolicy_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULearningAgentsPolicy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULearningAgentsPolicy_EvaluatePolicy, "EvaluatePolicy" }, // 1069840514
		{ &Z_Construct_UFunction_ULearningAgentsPolicy_GetActionNoiseScale, "GetActionNoiseScale" }, // 1453589679
		{ &Z_Construct_UFunction_ULearningAgentsPolicy_LoadPolicyFromAsset, "LoadPolicyFromAsset" }, // 314619343
		{ &Z_Construct_UFunction_ULearningAgentsPolicy_LoadPolicyFromSnapshot, "LoadPolicyFromSnapshot" }, // 2985670697
		{ &Z_Construct_UFunction_ULearningAgentsPolicy_RunInference, "RunInference" }, // 127372523
		{ &Z_Construct_UFunction_ULearningAgentsPolicy_SavePolicyToAsset, "SavePolicyToAsset" }, // 140725419
		{ &Z_Construct_UFunction_ULearningAgentsPolicy_SavePolicyToSnapshot, "SavePolicyToSnapshot" }, // 3407134683
		{ &Z_Construct_UFunction_ULearningAgentsPolicy_SetActionNoiseScale, "SetActionNoiseScale" }, // 1128297096
		{ &Z_Construct_UFunction_ULearningAgentsPolicy_SetupPolicy, "SetupPolicy" }, // 3856976214
		{ &Z_Construct_UFunction_ULearningAgentsPolicy_UsePolicyFromAsset, "UsePolicyFromAsset" }, // 1126765033
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsPolicy_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsPolicy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A policy that maps from observations to actions for the managed agents. */" },
		{ "IncludePath", "LearningAgentsPolicy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LearningAgentsPolicy.h" },
		{ "ToolTip", "A policy that maps from observations to actions for the managed agents." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsPolicy_Statics::NewProp_Interactor_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** The agent interactor this policy is associated with. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LearningAgentsPolicy.h" },
		{ "ToolTip", "The agent interactor this policy is associated with." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULearningAgentsPolicy_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x00440000000a2009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULearningAgentsPolicy, Interactor), Z_Construct_UClass_ULearningAgentsInteractor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsPolicy_Statics::NewProp_Interactor_MetaData), Z_Construct_UClass_ULearningAgentsPolicy_Statics::NewProp_Interactor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsPolicy_Statics::NewProp_Network_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** The underlying neural network. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsPolicy.h" },
		{ "ToolTip", "The underlying neural network." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULearningAgentsPolicy_Statics::NewProp_Network = { "Network", nullptr, (EPropertyFlags)0x0044000000022001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULearningAgentsPolicy, Network), Z_Construct_UClass_ULearningAgentsNeuralNetwork_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsPolicy_Statics::NewProp_Network_MetaData), Z_Construct_UClass_ULearningAgentsPolicy_Statics::NewProp_Network_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULearningAgentsPolicy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULearningAgentsPolicy_Statics::NewProp_Interactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULearningAgentsPolicy_Statics::NewProp_Network,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULearningAgentsPolicy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULearningAgentsPolicy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULearningAgentsPolicy_Statics::ClassParams = {
		&ULearningAgentsPolicy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULearningAgentsPolicy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsPolicy_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsPolicy_Statics::Class_MetaDataParams), Z_Construct_UClass_ULearningAgentsPolicy_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsPolicy_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULearningAgentsPolicy()
	{
		if (!Z_Registration_Info_UClass_ULearningAgentsPolicy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULearningAgentsPolicy.OuterSingleton, Z_Construct_UClass_ULearningAgentsPolicy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULearningAgentsPolicy.OuterSingleton;
	}
	template<> LEARNINGAGENTS_API UClass* StaticClass<ULearningAgentsPolicy>()
	{
		return ULearningAgentsPolicy::StaticClass();
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_Statics::ScriptStructInfo[] = {
		{ FLearningAgentsPolicySettings::StaticStruct, Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics::NewStructOps, TEXT("LearningAgentsPolicySettings"), &Z_Registration_Info_UScriptStruct_LearningAgentsPolicySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLearningAgentsPolicySettings), 383946298U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULearningAgentsPolicy, ULearningAgentsPolicy::StaticClass, TEXT("ULearningAgentsPolicy"), &Z_Registration_Info_UClass_ULearningAgentsPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULearningAgentsPolicy), 1678321219U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_1592024979(TEXT("/Script/LearningAgents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
