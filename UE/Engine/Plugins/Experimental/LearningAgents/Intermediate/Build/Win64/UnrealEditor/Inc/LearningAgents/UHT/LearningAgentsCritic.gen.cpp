// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningAgentsCritic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLearningAgentsCritic() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsCritic();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsCritic_NoRegister();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsInteractor_NoRegister();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsManagerComponent();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsNeuralNetwork_NoRegister();
	LEARNINGAGENTS_API UEnum* Z_Construct_UEnum_LearningAgents_ELearningAgentsActivationFunction();
	LEARNINGAGENTS_API UScriptStruct* Z_Construct_UScriptStruct_FLearningAgentsCriticSettings();
	UPackage* Z_Construct_UPackage__Script_LearningAgents();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LearningAgentsCriticSettings;
class UScriptStruct* FLearningAgentsCriticSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LearningAgentsCriticSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LearningAgentsCriticSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLearningAgentsCriticSettings, (UObject*)Z_Construct_UPackage__Script_LearningAgents(), TEXT("LearningAgentsCriticSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LearningAgentsCriticSettings.OuterSingleton;
}
template<> LEARNINGAGENTS_API UScriptStruct* StaticStruct<FLearningAgentsCriticSettings>()
{
	return FLearningAgentsCriticSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLearningAgentsCriticSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsCriticSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/** The configurable settings for a ULearningAgentsCritic. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsCritic.h" },
		{ "ToolTip", "The configurable settings for a ULearningAgentsCritic." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLearningAgentsCriticSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLearningAgentsCriticSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsCriticSettings_Statics::NewProp_LayerNum_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "ClampMin", "2" },
		{ "Comment", "/** Total layers for critic network including input, hidden, and output layers */" },
		{ "ModuleRelativePath", "Public/LearningAgentsCritic.h" },
		{ "ToolTip", "Total layers for critic network including input, hidden, and output layers" },
		{ "UIMin", "2" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLearningAgentsCriticSettings_Statics::NewProp_LayerNum = { "LayerNum", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsCriticSettings, LayerNum), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsCriticSettings_Statics::NewProp_LayerNum_MetaData), Z_Construct_UScriptStruct_FLearningAgentsCriticSettings_Statics::NewProp_LayerNum_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsCriticSettings_Statics::NewProp_HiddenLayerSize_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of neurons in each hidden layer of the critic network */" },
		{ "ModuleRelativePath", "Public/LearningAgentsCritic.h" },
		{ "ToolTip", "Number of neurons in each hidden layer of the critic network" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLearningAgentsCriticSettings_Statics::NewProp_HiddenLayerSize = { "HiddenLayerSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsCriticSettings, HiddenLayerSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsCriticSettings_Statics::NewProp_HiddenLayerSize_MetaData), Z_Construct_UScriptStruct_FLearningAgentsCriticSettings_Statics::NewProp_HiddenLayerSize_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLearningAgentsCriticSettings_Statics::NewProp_ActivationFunction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsCriticSettings_Statics::NewProp_ActivationFunction_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** Activation function to use on hidden layers of the critic network */" },
		{ "ModuleRelativePath", "Public/LearningAgentsCritic.h" },
		{ "ToolTip", "Activation function to use on hidden layers of the critic network" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLearningAgentsCriticSettings_Statics::NewProp_ActivationFunction = { "ActivationFunction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsCriticSettings, ActivationFunction), Z_Construct_UEnum_LearningAgents_ELearningAgentsActivationFunction, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsCriticSettings_Statics::NewProp_ActivationFunction_MetaData), Z_Construct_UScriptStruct_FLearningAgentsCriticSettings_Statics::NewProp_ActivationFunction_MetaData) }; // 3592894623
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLearningAgentsCriticSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsCriticSettings_Statics::NewProp_LayerNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsCriticSettings_Statics::NewProp_HiddenLayerSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsCriticSettings_Statics::NewProp_ActivationFunction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsCriticSettings_Statics::NewProp_ActivationFunction,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLearningAgentsCriticSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgents,
		nullptr,
		&NewStructOps,
		"LearningAgentsCriticSettings",
		Z_Construct_UScriptStruct_FLearningAgentsCriticSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsCriticSettings_Statics::PropPointers),
		sizeof(FLearningAgentsCriticSettings),
		alignof(FLearningAgentsCriticSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsCriticSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLearningAgentsCriticSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsCriticSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLearningAgentsCriticSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LearningAgentsCriticSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LearningAgentsCriticSettings.InnerSingleton, Z_Construct_UScriptStruct_FLearningAgentsCriticSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LearningAgentsCriticSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(ULearningAgentsCritic::execGetEstimatedDiscountedReturn)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEstimatedDiscountedReturn(Z_Param_AgentId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsCritic::execEvaluateCritic)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EvaluateCritic();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsCritic::execSaveCriticToAsset)
	{
		P_GET_OBJECT(ULearningAgentsNeuralNetwork,Z_Param_NeuralNetworkAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveCriticToAsset(Z_Param_NeuralNetworkAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsCritic::execLoadCriticFromAsset)
	{
		P_GET_OBJECT(ULearningAgentsNeuralNetwork,Z_Param_NeuralNetworkAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadCriticFromAsset(Z_Param_NeuralNetworkAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsCritic::execUseCriticFromAsset)
	{
		P_GET_OBJECT(ULearningAgentsNeuralNetwork,Z_Param_NeuralNetworkAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UseCriticFromAsset(Z_Param_NeuralNetworkAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsCritic::execSaveCriticToSnapshot)
	{
		P_GET_STRUCT_REF(FFilePath,Z_Param_Out_File);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveCriticToSnapshot(Z_Param_Out_File);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsCritic::execLoadCriticFromSnapshot)
	{
		P_GET_STRUCT_REF(FFilePath,Z_Param_Out_File);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadCriticFromSnapshot(Z_Param_Out_File);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsCritic::execSetupCritic)
	{
		P_GET_OBJECT(ULearningAgentsInteractor,Z_Param_InInteractor);
		P_GET_STRUCT_REF(FLearningAgentsCriticSettings,Z_Param_Out_CriticSettings);
		P_GET_OBJECT(ULearningAgentsNeuralNetwork,Z_Param_NeuralNetworkAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupCritic(Z_Param_InInteractor,Z_Param_Out_CriticSettings,Z_Param_NeuralNetworkAsset);
		P_NATIVE_END;
	}
	void ULearningAgentsCritic::StaticRegisterNativesULearningAgentsCritic()
	{
		UClass* Class = ULearningAgentsCritic::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EvaluateCritic", &ULearningAgentsCritic::execEvaluateCritic },
			{ "GetEstimatedDiscountedReturn", &ULearningAgentsCritic::execGetEstimatedDiscountedReturn },
			{ "LoadCriticFromAsset", &ULearningAgentsCritic::execLoadCriticFromAsset },
			{ "LoadCriticFromSnapshot", &ULearningAgentsCritic::execLoadCriticFromSnapshot },
			{ "SaveCriticToAsset", &ULearningAgentsCritic::execSaveCriticToAsset },
			{ "SaveCriticToSnapshot", &ULearningAgentsCritic::execSaveCriticToSnapshot },
			{ "SetupCritic", &ULearningAgentsCritic::execSetupCritic },
			{ "UseCriticFromAsset", &ULearningAgentsCritic::execUseCriticFromAsset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULearningAgentsCritic_EvaluateCritic_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsCritic_EvaluateCritic_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Calling this function will run the underlying neural network on the previously buffered observations to populate\n\x09 * the output value buffer. This should be called after the corresponding agent interactor's EncodeObservations.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsCritic.h" },
		{ "ToolTip", "Calling this function will run the underlying neural network on the previously buffered observations to populate\nthe output value buffer. This should be called after the corresponding agent interactor's EncodeObservations." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsCritic_EvaluateCritic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsCritic, nullptr, "EvaluateCritic", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsCritic_EvaluateCritic_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsCritic_EvaluateCritic_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULearningAgentsCritic_EvaluateCritic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsCritic_EvaluateCritic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsCritic_GetEstimatedDiscountedReturn_Statics
	{
		struct LearningAgentsCritic_eventGetEstimatedDiscountedReturn_Parms
		{
			int32 AgentId;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsCritic_GetEstimatedDiscountedReturn_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULearningAgentsCritic_GetEstimatedDiscountedReturn_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsCritic_eventGetEstimatedDiscountedReturn_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsCritic_GetEstimatedDiscountedReturn_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_ULearningAgentsCritic_GetEstimatedDiscountedReturn_Statics::NewProp_AgentId_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULearningAgentsCritic_GetEstimatedDiscountedReturn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsCritic_eventGetEstimatedDiscountedReturn_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsCritic_GetEstimatedDiscountedReturn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsCritic_GetEstimatedDiscountedReturn_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsCritic_GetEstimatedDiscountedReturn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsCritic_GetEstimatedDiscountedReturn_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Gets an estimate of the average discounted return expected by an agent according to the critic. I.E. the total\n\x09 * sum of future rewards, scaled by the discount factor that was used during training. This value can be useful if \n\x09 * you want to make some decision based on how well the agent thinks they are doing at achieving their task. This \n\x09 * should be called only after EvaluateCritic.\n\x09 * \n\x09 * @param AgentId\x09The AgentId to look-up the estimated discounted return for\n\x09 * @returns\x09\x09\x09The estimated average discounted return according to the critic\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsCritic.h" },
		{ "ToolTip", "Gets an estimate of the average discounted return expected by an agent according to the critic. I.E. the total\nsum of future rewards, scaled by the discount factor that was used during training. This value can be useful if\nyou want to make some decision based on how well the agent thinks they are doing at achieving their task. This\nshould be called only after EvaluateCritic.\n\n@param AgentId       The AgentId to look-up the estimated discounted return for\n@returns                     The estimated average discounted return according to the critic" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsCritic_GetEstimatedDiscountedReturn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsCritic, nullptr, "GetEstimatedDiscountedReturn", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsCritic_GetEstimatedDiscountedReturn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsCritic_GetEstimatedDiscountedReturn_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsCritic_GetEstimatedDiscountedReturn_Statics::LearningAgentsCritic_eventGetEstimatedDiscountedReturn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsCritic_GetEstimatedDiscountedReturn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsCritic_GetEstimatedDiscountedReturn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsCritic_GetEstimatedDiscountedReturn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsCritic_GetEstimatedDiscountedReturn_Statics::LearningAgentsCritic_eventGetEstimatedDiscountedReturn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsCritic_GetEstimatedDiscountedReturn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsCritic_GetEstimatedDiscountedReturn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsCritic_LoadCriticFromAsset_Statics
	{
		struct LearningAgentsCritic_eventLoadCriticFromAsset_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULearningAgentsCritic_LoadCriticFromAsset_Statics::NewProp_NeuralNetworkAsset = { "NeuralNetworkAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsCritic_eventLoadCriticFromAsset_Parms, NeuralNetworkAsset), Z_Construct_UClass_ULearningAgentsNeuralNetwork_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsCritic_LoadCriticFromAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsCritic_LoadCriticFromAsset_Statics::NewProp_NeuralNetworkAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsCritic_LoadCriticFromAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Load a ULearningAgentsNeuralNetwork asset's weights into this critic.\n\x09 * @param NeuralNetworkAsset The asset to load from.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsCritic.h" },
		{ "ToolTip", "Load a ULearningAgentsNeuralNetwork asset's weights into this critic.\n@param NeuralNetworkAsset The asset to load from." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsCritic_LoadCriticFromAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsCritic, nullptr, "LoadCriticFromAsset", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsCritic_LoadCriticFromAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsCritic_LoadCriticFromAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsCritic_LoadCriticFromAsset_Statics::LearningAgentsCritic_eventLoadCriticFromAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsCritic_LoadCriticFromAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsCritic_LoadCriticFromAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsCritic_LoadCriticFromAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsCritic_LoadCriticFromAsset_Statics::LearningAgentsCritic_eventLoadCriticFromAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsCritic_LoadCriticFromAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsCritic_LoadCriticFromAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsCritic_LoadCriticFromSnapshot_Statics
	{
		struct FFilePath
		{
			FString FilePath;
		};

		struct LearningAgentsCritic_eventLoadCriticFromSnapshot_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsCritic_LoadCriticFromSnapshot_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULearningAgentsCritic_LoadCriticFromSnapshot_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsCritic_eventLoadCriticFromSnapshot_Parms, File), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsCritic_LoadCriticFromSnapshot_Statics::NewProp_File_MetaData), Z_Construct_UFunction_ULearningAgentsCritic_LoadCriticFromSnapshot_Statics::NewProp_File_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsCritic_LoadCriticFromSnapshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsCritic_LoadCriticFromSnapshot_Statics::NewProp_File,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsCritic_LoadCriticFromSnapshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Load a snapshot's weights into this critic.\n\x09 * @param File The snapshot file.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsCritic.h" },
		{ "RelativePath", "" },
		{ "ToolTip", "Load a snapshot's weights into this critic.\n@param File The snapshot file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsCritic_LoadCriticFromSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsCritic, nullptr, "LoadCriticFromSnapshot", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsCritic_LoadCriticFromSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsCritic_LoadCriticFromSnapshot_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsCritic_LoadCriticFromSnapshot_Statics::LearningAgentsCritic_eventLoadCriticFromSnapshot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsCritic_LoadCriticFromSnapshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsCritic_LoadCriticFromSnapshot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsCritic_LoadCriticFromSnapshot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsCritic_LoadCriticFromSnapshot_Statics::LearningAgentsCritic_eventLoadCriticFromSnapshot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsCritic_LoadCriticFromSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsCritic_LoadCriticFromSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsCritic_SaveCriticToAsset_Statics
	{
		struct LearningAgentsCritic_eventSaveCriticToAsset_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULearningAgentsCritic_SaveCriticToAsset_Statics::NewProp_NeuralNetworkAsset = { "NeuralNetworkAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsCritic_eventSaveCriticToAsset_Parms, NeuralNetworkAsset), Z_Construct_UClass_ULearningAgentsNeuralNetwork_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsCritic_SaveCriticToAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsCritic_SaveCriticToAsset_Statics::NewProp_NeuralNetworkAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsCritic_SaveCriticToAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Save this critic's weights to a ULearningAgentsNeuralNetwork asset.\n\x09 * @param NeuralNetworkAsset The asset to save to.\n\x09 */" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/LearningAgentsCritic.h" },
		{ "ToolTip", "Save this critic's weights to a ULearningAgentsNeuralNetwork asset.\n@param NeuralNetworkAsset The asset to save to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsCritic_SaveCriticToAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsCritic, nullptr, "SaveCriticToAsset", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsCritic_SaveCriticToAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsCritic_SaveCriticToAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsCritic_SaveCriticToAsset_Statics::LearningAgentsCritic_eventSaveCriticToAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsCritic_SaveCriticToAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsCritic_SaveCriticToAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsCritic_SaveCriticToAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsCritic_SaveCriticToAsset_Statics::LearningAgentsCritic_eventSaveCriticToAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsCritic_SaveCriticToAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsCritic_SaveCriticToAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsCritic_SaveCriticToSnapshot_Statics
	{
		struct FFilePath
		{
			FString FilePath;
		};

		struct LearningAgentsCritic_eventSaveCriticToSnapshot_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsCritic_SaveCriticToSnapshot_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULearningAgentsCritic_SaveCriticToSnapshot_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsCritic_eventSaveCriticToSnapshot_Parms, File), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsCritic_SaveCriticToSnapshot_Statics::NewProp_File_MetaData), Z_Construct_UFunction_ULearningAgentsCritic_SaveCriticToSnapshot_Statics::NewProp_File_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsCritic_SaveCriticToSnapshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsCritic_SaveCriticToSnapshot_Statics::NewProp_File,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsCritic_SaveCriticToSnapshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Save this critic's weights into a snapshot.\n\x09 * @param File The snapshot file.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsCritic.h" },
		{ "RelativePath", "" },
		{ "ToolTip", "Save this critic's weights into a snapshot.\n@param File The snapshot file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsCritic_SaveCriticToSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsCritic, nullptr, "SaveCriticToSnapshot", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsCritic_SaveCriticToSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsCritic_SaveCriticToSnapshot_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsCritic_SaveCriticToSnapshot_Statics::LearningAgentsCritic_eventSaveCriticToSnapshot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsCritic_SaveCriticToSnapshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsCritic_SaveCriticToSnapshot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsCritic_SaveCriticToSnapshot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsCritic_SaveCriticToSnapshot_Statics::LearningAgentsCritic_eventSaveCriticToSnapshot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsCritic_SaveCriticToSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsCritic_SaveCriticToSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsCritic_SetupCritic_Statics
	{
		struct LearningAgentsCritic_eventSetupCritic_Parms
		{
			ULearningAgentsInteractor* InInteractor;
			FLearningAgentsCriticSettings CriticSettings;
			ULearningAgentsNeuralNetwork* NeuralNetworkAsset;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInteractor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInteractor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CriticSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CriticSettings;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NeuralNetworkAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsCritic_SetupCritic_Statics::NewProp_InInteractor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULearningAgentsCritic_SetupCritic_Statics::NewProp_InInteractor = { "InInteractor", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsCritic_eventSetupCritic_Parms, InInteractor), Z_Construct_UClass_ULearningAgentsInteractor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsCritic_SetupCritic_Statics::NewProp_InInteractor_MetaData), Z_Construct_UFunction_ULearningAgentsCritic_SetupCritic_Statics::NewProp_InInteractor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsCritic_SetupCritic_Statics::NewProp_CriticSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULearningAgentsCritic_SetupCritic_Statics::NewProp_CriticSettings = { "CriticSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsCritic_eventSetupCritic_Parms, CriticSettings), Z_Construct_UScriptStruct_FLearningAgentsCriticSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsCritic_SetupCritic_Statics::NewProp_CriticSettings_MetaData), Z_Construct_UFunction_ULearningAgentsCritic_SetupCritic_Statics::NewProp_CriticSettings_MetaData) }; // 3034816345
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULearningAgentsCritic_SetupCritic_Statics::NewProp_NeuralNetworkAsset = { "NeuralNetworkAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsCritic_eventSetupCritic_Parms, NeuralNetworkAsset), Z_Construct_UClass_ULearningAgentsNeuralNetwork_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsCritic_SetupCritic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsCritic_SetupCritic_Statics::NewProp_InInteractor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsCritic_SetupCritic_Statics::NewProp_CriticSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsCritic_SetupCritic_Statics::NewProp_NeuralNetworkAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsCritic_SetupCritic_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Initializes this object to be used with the given agent interactor and critic settings.\n\x09 * @param InInteractor The input Interactor component\n\x09 * @param CriticSettings The critic settings to use\n\x09 * @param NeuralNetworkAsset Optional Network Asset to use. If provided must match the given CriticSettings. If not\n\x09 * provided or asset is empty then a new neural network object will be created according to the given \n\x09 * CriticSettings and used.\n\x09 */" },
		{ "CPP_Default_CriticSettings", "()" },
		{ "CPP_Default_NeuralNetworkAsset", "None" },
		{ "ModuleRelativePath", "Public/LearningAgentsCritic.h" },
		{ "ToolTip", "Initializes this object to be used with the given agent interactor and critic settings.\n@param InInteractor The input Interactor component\n@param CriticSettings The critic settings to use\n@param NeuralNetworkAsset Optional Network Asset to use. If provided must match the given CriticSettings. If not\nprovided or asset is empty then a new neural network object will be created according to the given\nCriticSettings and used." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsCritic_SetupCritic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsCritic, nullptr, "SetupCritic", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsCritic_SetupCritic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsCritic_SetupCritic_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsCritic_SetupCritic_Statics::LearningAgentsCritic_eventSetupCritic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsCritic_SetupCritic_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsCritic_SetupCritic_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsCritic_SetupCritic_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsCritic_SetupCritic_Statics::LearningAgentsCritic_eventSetupCritic_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsCritic_SetupCritic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsCritic_SetupCritic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsCritic_UseCriticFromAsset_Statics
	{
		struct LearningAgentsCritic_eventUseCriticFromAsset_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULearningAgentsCritic_UseCriticFromAsset_Statics::NewProp_NeuralNetworkAsset = { "NeuralNetworkAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsCritic_eventUseCriticFromAsset_Parms, NeuralNetworkAsset), Z_Construct_UClass_ULearningAgentsNeuralNetwork_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsCritic_UseCriticFromAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsCritic_UseCriticFromAsset_Statics::NewProp_NeuralNetworkAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsCritic_UseCriticFromAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Use a ULearningAgentsNeuralNetwork asset directly for this critic rather than making a copy. If used \n\x09 * during training then this asset's weights will be updated as training progresses.\n\x09 * @param NeuralNetworkAsset The asset to use.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsCritic.h" },
		{ "ToolTip", "Use a ULearningAgentsNeuralNetwork asset directly for this critic rather than making a copy. If used\nduring training then this asset's weights will be updated as training progresses.\n@param NeuralNetworkAsset The asset to use." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsCritic_UseCriticFromAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsCritic, nullptr, "UseCriticFromAsset", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsCritic_UseCriticFromAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsCritic_UseCriticFromAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsCritic_UseCriticFromAsset_Statics::LearningAgentsCritic_eventUseCriticFromAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsCritic_UseCriticFromAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsCritic_UseCriticFromAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsCritic_UseCriticFromAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsCritic_UseCriticFromAsset_Statics::LearningAgentsCritic_eventUseCriticFromAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsCritic_UseCriticFromAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsCritic_UseCriticFromAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULearningAgentsCritic);
	UClass* Z_Construct_UClass_ULearningAgentsCritic_NoRegister()
	{
		return ULearningAgentsCritic::StaticClass();
	}
	struct Z_Construct_UClass_ULearningAgentsCritic_Statics
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
	UObject* (*const Z_Construct_UClass_ULearningAgentsCritic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULearningAgentsManagerComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgents,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsCritic_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULearningAgentsCritic_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULearningAgentsCritic_EvaluateCritic, "EvaluateCritic" }, // 4068516868
		{ &Z_Construct_UFunction_ULearningAgentsCritic_GetEstimatedDiscountedReturn, "GetEstimatedDiscountedReturn" }, // 3755584771
		{ &Z_Construct_UFunction_ULearningAgentsCritic_LoadCriticFromAsset, "LoadCriticFromAsset" }, // 2885090674
		{ &Z_Construct_UFunction_ULearningAgentsCritic_LoadCriticFromSnapshot, "LoadCriticFromSnapshot" }, // 876893097
		{ &Z_Construct_UFunction_ULearningAgentsCritic_SaveCriticToAsset, "SaveCriticToAsset" }, // 1889657459
		{ &Z_Construct_UFunction_ULearningAgentsCritic_SaveCriticToSnapshot, "SaveCriticToSnapshot" }, // 2441294435
		{ &Z_Construct_UFunction_ULearningAgentsCritic_SetupCritic, "SetupCritic" }, // 1515254681
		{ &Z_Construct_UFunction_ULearningAgentsCritic_UseCriticFromAsset, "UseCriticFromAsset" }, // 1450041417
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsCritic_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsCritic_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A critic used by some algorithms for training the managed agents. */" },
		{ "IncludePath", "LearningAgentsCritic.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LearningAgentsCritic.h" },
		{ "ToolTip", "A critic used by some algorithms for training the managed agents." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsCritic_Statics::NewProp_Interactor_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** The agent interactor this critic is associated with. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LearningAgentsCritic.h" },
		{ "ToolTip", "The agent interactor this critic is associated with." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULearningAgentsCritic_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x00440000000a2009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULearningAgentsCritic, Interactor), Z_Construct_UClass_ULearningAgentsInteractor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsCritic_Statics::NewProp_Interactor_MetaData), Z_Construct_UClass_ULearningAgentsCritic_Statics::NewProp_Interactor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsCritic_Statics::NewProp_Network_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** The underlying neural network. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsCritic.h" },
		{ "ToolTip", "The underlying neural network." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULearningAgentsCritic_Statics::NewProp_Network = { "Network", nullptr, (EPropertyFlags)0x0044000000022001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULearningAgentsCritic, Network), Z_Construct_UClass_ULearningAgentsNeuralNetwork_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsCritic_Statics::NewProp_Network_MetaData), Z_Construct_UClass_ULearningAgentsCritic_Statics::NewProp_Network_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULearningAgentsCritic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULearningAgentsCritic_Statics::NewProp_Interactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULearningAgentsCritic_Statics::NewProp_Network,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULearningAgentsCritic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULearningAgentsCritic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULearningAgentsCritic_Statics::ClassParams = {
		&ULearningAgentsCritic::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULearningAgentsCritic_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsCritic_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsCritic_Statics::Class_MetaDataParams), Z_Construct_UClass_ULearningAgentsCritic_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsCritic_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULearningAgentsCritic()
	{
		if (!Z_Registration_Info_UClass_ULearningAgentsCritic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULearningAgentsCritic.OuterSingleton, Z_Construct_UClass_ULearningAgentsCritic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULearningAgentsCritic.OuterSingleton;
	}
	template<> LEARNINGAGENTS_API UClass* StaticClass<ULearningAgentsCritic>()
	{
		return ULearningAgentsCritic::StaticClass();
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_Statics::ScriptStructInfo[] = {
		{ FLearningAgentsCriticSettings::StaticStruct, Z_Construct_UScriptStruct_FLearningAgentsCriticSettings_Statics::NewStructOps, TEXT("LearningAgentsCriticSettings"), &Z_Registration_Info_UScriptStruct_LearningAgentsCriticSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLearningAgentsCriticSettings), 3034816345U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULearningAgentsCritic, ULearningAgentsCritic::StaticClass, TEXT("ULearningAgentsCritic"), &Z_Registration_Info_UClass_ULearningAgentsCritic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULearningAgentsCritic), 1130625435U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_2857689338(TEXT("/Script/LearningAgents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
