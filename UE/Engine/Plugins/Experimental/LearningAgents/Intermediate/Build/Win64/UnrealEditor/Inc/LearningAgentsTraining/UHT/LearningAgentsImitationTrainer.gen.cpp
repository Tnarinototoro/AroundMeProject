// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningAgentsImitationTrainer.h"
#include "LearningAgentsTrainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLearningAgentsImitationTrainer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsPolicy_NoRegister();
	LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_ULearningAgentsImitationTrainer();
	LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_ULearningAgentsImitationTrainer_NoRegister();
	LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_ULearningAgentsRecording_NoRegister();
	LEARNINGAGENTSTRAINING_API UEnum* Z_Construct_UEnum_LearningAgentsTraining_ELearningAgentsTrainerDevice();
	LEARNINGAGENTSTRAINING_API UScriptStruct* Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerSettings();
	LEARNINGAGENTSTRAINING_API UScriptStruct* Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings();
	LEARNINGAGENTSTRAINING_API UScriptStruct* Z_Construct_UScriptStruct_FLearningAgentsTrainerPathSettings();
	UPackage* Z_Construct_UPackage__Script_LearningAgentsTraining();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LearningAgentsImitationTrainerSettings;
class UScriptStruct* FLearningAgentsImitationTrainerSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LearningAgentsImitationTrainerSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LearningAgentsImitationTrainerSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerSettings, (UObject*)Z_Construct_UPackage__Script_LearningAgentsTraining(), TEXT("LearningAgentsImitationTrainerSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LearningAgentsImitationTrainerSettings.OuterSingleton;
}
template<> LEARNINGAGENTSTRAINING_API UScriptStruct* StaticStruct<FLearningAgentsImitationTrainerSettings>()
{
	return FLearningAgentsImitationTrainerSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrainerCommunicationTimeout_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TrainerCommunicationTimeout;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/** The configurable settings for a ULearningAgentsImitationTrainer. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsImitationTrainer.h" },
		{ "ToolTip", "The configurable settings for a ULearningAgentsImitationTrainer." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLearningAgentsImitationTrainerSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerSettings_Statics::NewProp_TrainerCommunicationTimeout_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Time in seconds to wait for the training process before timing out. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsImitationTrainer.h" },
		{ "ToolTip", "Time in seconds to wait for the training process before timing out." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerSettings_Statics::NewProp_TrainerCommunicationTimeout = { "TrainerCommunicationTimeout", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsImitationTrainerSettings, TrainerCommunicationTimeout), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerSettings_Statics::NewProp_TrainerCommunicationTimeout_MetaData), Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerSettings_Statics::NewProp_TrainerCommunicationTimeout_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerSettings_Statics::NewProp_TrainerCommunicationTimeout,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgentsTraining,
		nullptr,
		&NewStructOps,
		"LearningAgentsImitationTrainerSettings",
		Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerSettings_Statics::PropPointers),
		sizeof(FLearningAgentsImitationTrainerSettings),
		alignof(FLearningAgentsImitationTrainerSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LearningAgentsImitationTrainerSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LearningAgentsImitationTrainerSettings.InnerSingleton, Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LearningAgentsImitationTrainerSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LearningAgentsImitationTrainerTrainingSettings;
class UScriptStruct* FLearningAgentsImitationTrainerTrainingSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LearningAgentsImitationTrainerTrainingSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LearningAgentsImitationTrainerTrainingSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings, (UObject*)Z_Construct_UPackage__Script_LearningAgentsTraining(), TEXT("LearningAgentsImitationTrainerTrainingSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LearningAgentsImitationTrainerTrainingSettings.OuterSingleton;
}
template<> LEARNINGAGENTSTRAINING_API UScriptStruct* StaticStruct<FLearningAgentsImitationTrainerTrainingSettings>()
{
	return FLearningAgentsImitationTrainerTrainingSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LearningRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LearningRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LearningRateDecay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LearningRateDecay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightDecay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeightDecay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BatchSize_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_BatchSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Device_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Device_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Device;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseTensorboard_MetaData[];
#endif
		static void NewProp_bUseTensorboard_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTensorboard;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/** The configurable settings for the training process. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsImitationTrainer.h" },
		{ "ToolTip", "The configurable settings for the training process." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLearningAgentsImitationTrainerTrainingSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_NumberOfIterations_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The number of iterations to run before ending training. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsImitationTrainer.h" },
		{ "ToolTip", "The number of iterations to run before ending training." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_NumberOfIterations = { "NumberOfIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsImitationTrainerTrainingSettings, NumberOfIterations), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_NumberOfIterations_MetaData), Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_NumberOfIterations_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_LearningRate_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Learning rate of the policy network. Typical values are between 0.001 and 0.0001. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsImitationTrainer.h" },
		{ "ToolTip", "Learning rate of the policy network. Typical values are between 0.001 and 0.0001." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_LearningRate = { "LearningRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsImitationTrainerTrainingSettings, LearningRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_LearningRate_MetaData), Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_LearningRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_LearningRateDecay_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Ratio by which to decay the learning rate every 1000 iterations. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsImitationTrainer.h" },
		{ "ToolTip", "Ratio by which to decay the learning rate every 1000 iterations." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_LearningRateDecay = { "LearningRateDecay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsImitationTrainerTrainingSettings, LearningRateDecay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_LearningRateDecay_MetaData), Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_LearningRateDecay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_WeightDecay_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Amount of weight decay to apply to the network. Larger values encourage network weights to be smaller but too\n\x09 * large a value can cause the network weights to collapse to all zeros.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsImitationTrainer.h" },
		{ "ToolTip", "Amount of weight decay to apply to the network. Larger values encourage network weights to be smaller but too\nlarge a value can cause the network weights to collapse to all zeros." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_WeightDecay = { "WeightDecay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsImitationTrainerTrainingSettings, WeightDecay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_WeightDecay_MetaData), Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_WeightDecay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_BatchSize_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "ClampMax", "4096" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Batch size to use for training. Smaller values tend to produce better results at the cost of slowing down\n\x09 * training. Large batch sizes are much more computationally efficient when training on the GPU.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsImitationTrainer.h" },
		{ "ToolTip", "Batch size to use for training. Smaller values tend to produce better results at the cost of slowing down\ntraining. Large batch sizes are much more computationally efficient when training on the GPU." },
		{ "UIMax", "4096" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_BatchSize = { "BatchSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsImitationTrainerTrainingSettings, BatchSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_BatchSize_MetaData), Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_BatchSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_RandomSeed_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The seed used for any random sampling the trainer will perform, e.g. for weight initialization. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsImitationTrainer.h" },
		{ "ToolTip", "The seed used for any random sampling the trainer will perform, e.g. for weight initialization." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsImitationTrainerTrainingSettings, RandomSeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_RandomSeed_MetaData), Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_RandomSeed_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_Device_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_Device_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** The device to train on. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsImitationTrainer.h" },
		{ "ToolTip", "The device to train on." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_Device = { "Device", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsImitationTrainerTrainingSettings, Device), Z_Construct_UEnum_LearningAgentsTraining_ELearningAgentsTrainerDevice, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_Device_MetaData), Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_Device_MetaData) }; // 3268198106
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_bUseTensorboard_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** If true, TensorBoard logs will be emitted to the intermediate directory. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsImitationTrainer.h" },
		{ "ToolTip", "If true, TensorBoard logs will be emitted to the intermediate directory." },
	};
#endif
	void Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_bUseTensorboard_SetBit(void* Obj)
	{
		((FLearningAgentsImitationTrainerTrainingSettings*)Obj)->bUseTensorboard = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_bUseTensorboard = { "bUseTensorboard", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLearningAgentsImitationTrainerTrainingSettings), &Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_bUseTensorboard_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_bUseTensorboard_MetaData), Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_bUseTensorboard_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_NumberOfIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_LearningRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_LearningRateDecay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_WeightDecay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_BatchSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_RandomSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_Device_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_Device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewProp_bUseTensorboard,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgentsTraining,
		nullptr,
		&NewStructOps,
		"LearningAgentsImitationTrainerTrainingSettings",
		Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::PropPointers),
		sizeof(FLearningAgentsImitationTrainerTrainingSettings),
		alignof(FLearningAgentsImitationTrainerTrainingSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LearningAgentsImitationTrainerTrainingSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LearningAgentsImitationTrainerTrainingSettings.InnerSingleton, Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LearningAgentsImitationTrainerTrainingSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(ULearningAgentsImitationTrainer::execRunTraining)
	{
		P_GET_OBJECT(ULearningAgentsPolicy,Z_Param_InPolicy);
		P_GET_OBJECT(ULearningAgentsRecording,Z_Param_Recording);
		P_GET_STRUCT_REF(FLearningAgentsImitationTrainerSettings,Z_Param_Out_ImitationTrainerSettings);
		P_GET_STRUCT_REF(FLearningAgentsImitationTrainerTrainingSettings,Z_Param_Out_ImitationTrainerTrainingSettings);
		P_GET_STRUCT_REF(FLearningAgentsTrainerPathSettings,Z_Param_Out_ImitationTrainerPathSettings);
		P_GET_UBOOL(Z_Param_bReinitializePolicyNetwork);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RunTraining(Z_Param_InPolicy,Z_Param_Recording,Z_Param_Out_ImitationTrainerSettings,Z_Param_Out_ImitationTrainerTrainingSettings,Z_Param_Out_ImitationTrainerPathSettings,Z_Param_bReinitializePolicyNetwork);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsImitationTrainer::execIterateTraining)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IterateTraining();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsImitationTrainer::execEndTraining)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndTraining();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsImitationTrainer::execBeginTraining)
	{
		P_GET_OBJECT(ULearningAgentsPolicy,Z_Param_InPolicy);
		P_GET_OBJECT(ULearningAgentsRecording,Z_Param_Recording);
		P_GET_STRUCT_REF(FLearningAgentsImitationTrainerSettings,Z_Param_Out_ImitationTrainerSettings);
		P_GET_STRUCT_REF(FLearningAgentsImitationTrainerTrainingSettings,Z_Param_Out_ImitationTrainerTrainingSettings);
		P_GET_STRUCT_REF(FLearningAgentsTrainerPathSettings,Z_Param_Out_ImitationTrainerPathSettings);
		P_GET_UBOOL(Z_Param_bReinitializePolicyNetwork);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginTraining(Z_Param_InPolicy,Z_Param_Recording,Z_Param_Out_ImitationTrainerSettings,Z_Param_Out_ImitationTrainerTrainingSettings,Z_Param_Out_ImitationTrainerPathSettings,Z_Param_bReinitializePolicyNetwork);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsImitationTrainer::execHasTrainingFailed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasTrainingFailed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsImitationTrainer::execIsTraining)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTraining();
		P_NATIVE_END;
	}
	void ULearningAgentsImitationTrainer::StaticRegisterNativesULearningAgentsImitationTrainer()
	{
		UClass* Class = ULearningAgentsImitationTrainer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginTraining", &ULearningAgentsImitationTrainer::execBeginTraining },
			{ "EndTraining", &ULearningAgentsImitationTrainer::execEndTraining },
			{ "HasTrainingFailed", &ULearningAgentsImitationTrainer::execHasTrainingFailed },
			{ "IsTraining", &ULearningAgentsImitationTrainer::execIsTraining },
			{ "IterateTraining", &ULearningAgentsImitationTrainer::execIterateTraining },
			{ "RunTraining", &ULearningAgentsImitationTrainer::execRunTraining },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics
	{
		struct LearningAgentsImitationTrainer_eventBeginTraining_Parms
		{
			ULearningAgentsPolicy* InPolicy;
			const ULearningAgentsRecording* Recording;
			FLearningAgentsImitationTrainerSettings ImitationTrainerSettings;
			FLearningAgentsImitationTrainerTrainingSettings ImitationTrainerTrainingSettings;
			FLearningAgentsTrainerPathSettings ImitationTrainerPathSettings;
			bool bReinitializePolicyNetwork;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPolicy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Recording_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Recording;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImitationTrainerSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImitationTrainerSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImitationTrainerTrainingSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImitationTrainerTrainingSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImitationTrainerPathSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImitationTrainerPathSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReinitializePolicyNetwork_MetaData[];
#endif
		static void NewProp_bReinitializePolicyNetwork_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReinitializePolicyNetwork;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::NewProp_InPolicy_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::NewProp_InPolicy = { "InPolicy", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsImitationTrainer_eventBeginTraining_Parms, InPolicy), Z_Construct_UClass_ULearningAgentsPolicy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::NewProp_InPolicy_MetaData), Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::NewProp_InPolicy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::NewProp_Recording_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::NewProp_Recording = { "Recording", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsImitationTrainer_eventBeginTraining_Parms, Recording), Z_Construct_UClass_ULearningAgentsRecording_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::NewProp_Recording_MetaData), Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::NewProp_Recording_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::NewProp_ImitationTrainerSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::NewProp_ImitationTrainerSettings = { "ImitationTrainerSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsImitationTrainer_eventBeginTraining_Parms, ImitationTrainerSettings), Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::NewProp_ImitationTrainerSettings_MetaData), Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::NewProp_ImitationTrainerSettings_MetaData) }; // 1374236262
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::NewProp_ImitationTrainerTrainingSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::NewProp_ImitationTrainerTrainingSettings = { "ImitationTrainerTrainingSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsImitationTrainer_eventBeginTraining_Parms, ImitationTrainerTrainingSettings), Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::NewProp_ImitationTrainerTrainingSettings_MetaData), Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::NewProp_ImitationTrainerTrainingSettings_MetaData) }; // 2313449315
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::NewProp_ImitationTrainerPathSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::NewProp_ImitationTrainerPathSettings = { "ImitationTrainerPathSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsImitationTrainer_eventBeginTraining_Parms, ImitationTrainerPathSettings), Z_Construct_UScriptStruct_FLearningAgentsTrainerPathSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::NewProp_ImitationTrainerPathSettings_MetaData), Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::NewProp_ImitationTrainerPathSettings_MetaData) }; // 2984407820
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::NewProp_bReinitializePolicyNetwork_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::NewProp_bReinitializePolicyNetwork_SetBit(void* Obj)
	{
		((LearningAgentsImitationTrainer_eventBeginTraining_Parms*)Obj)->bReinitializePolicyNetwork = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::NewProp_bReinitializePolicyNetwork = { "bReinitializePolicyNetwork", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LearningAgentsImitationTrainer_eventBeginTraining_Parms), &Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::NewProp_bReinitializePolicyNetwork_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::NewProp_bReinitializePolicyNetwork_MetaData), Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::NewProp_bReinitializePolicyNetwork_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::NewProp_InPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::NewProp_Recording,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::NewProp_ImitationTrainerSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::NewProp_ImitationTrainerTrainingSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::NewProp_ImitationTrainerPathSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::NewProp_bReinitializePolicyNetwork,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Begins the training process with the provided settings.\n\x09 * @param InPolicy The policy to train.\n\x09 * @param Recording The data to train on.\n\x09 * @param ImitationTrainerSettings The settings for this trainer.\n\x09 * @param ImitationTrainerTrainingSettings The training settings for this network.\n\x09 * @param ImitationTrainerPathSettings The path settings used by the imitation trainer.\n\x09 * @param bReinitializePolicyNetwork If true, reinitialize the policy. Set this to false if your policy is pre-trained.\n\x09 */" },
		{ "CPP_Default_bReinitializePolicyNetwork", "true" },
		{ "CPP_Default_ImitationTrainerPathSettings", "()" },
		{ "CPP_Default_ImitationTrainerSettings", "()" },
		{ "CPP_Default_ImitationTrainerTrainingSettings", "()" },
		{ "ModuleRelativePath", "Public/LearningAgentsImitationTrainer.h" },
		{ "ToolTip", "Begins the training process with the provided settings.\n@param InPolicy The policy to train.\n@param Recording The data to train on.\n@param ImitationTrainerSettings The settings for this trainer.\n@param ImitationTrainerTrainingSettings The training settings for this network.\n@param ImitationTrainerPathSettings The path settings used by the imitation trainer.\n@param bReinitializePolicyNetwork If true, reinitialize the policy. Set this to false if your policy is pre-trained." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsImitationTrainer, nullptr, "BeginTraining", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::LearningAgentsImitationTrainer_eventBeginTraining_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::LearningAgentsImitationTrainer_eventBeginTraining_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsImitationTrainer_EndTraining_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsImitationTrainer_EndTraining_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** Stops the training process. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsImitationTrainer.h" },
		{ "ToolTip", "Stops the training process." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsImitationTrainer_EndTraining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsImitationTrainer, nullptr, "EndTraining", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsImitationTrainer_EndTraining_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsImitationTrainer_EndTraining_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULearningAgentsImitationTrainer_EndTraining()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsImitationTrainer_EndTraining_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsImitationTrainer_HasTrainingFailed_Statics
	{
		struct LearningAgentsImitationTrainer_eventHasTrainingFailed_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULearningAgentsImitationTrainer_HasTrainingFailed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LearningAgentsImitationTrainer_eventHasTrainingFailed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULearningAgentsImitationTrainer_HasTrainingFailed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LearningAgentsImitationTrainer_eventHasTrainingFailed_Parms), &Z_Construct_UFunction_ULearningAgentsImitationTrainer_HasTrainingFailed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsImitationTrainer_HasTrainingFailed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsImitationTrainer_HasTrainingFailed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsImitationTrainer_HasTrainingFailed_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Returns true if the trainer has failed to communicate with the external training process. This can be used in\n\x09 * combination with RunTraining to avoid filling the logs with errors.\n\x09 *\n\x09 * @returns\x09\x09\x09\x09True if the training has failed. Otherwise, false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsImitationTrainer.h" },
		{ "ToolTip", "Returns true if the trainer has failed to communicate with the external training process. This can be used in\ncombination with RunTraining to avoid filling the logs with errors.\n\n@returns                             True if the training has failed. Otherwise, false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsImitationTrainer_HasTrainingFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsImitationTrainer, nullptr, "HasTrainingFailed", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsImitationTrainer_HasTrainingFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsImitationTrainer_HasTrainingFailed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsImitationTrainer_HasTrainingFailed_Statics::LearningAgentsImitationTrainer_eventHasTrainingFailed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsImitationTrainer_HasTrainingFailed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsImitationTrainer_HasTrainingFailed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsImitationTrainer_HasTrainingFailed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsImitationTrainer_HasTrainingFailed_Statics::LearningAgentsImitationTrainer_eventHasTrainingFailed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsImitationTrainer_HasTrainingFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsImitationTrainer_HasTrainingFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsImitationTrainer_IsTraining_Statics
	{
		struct LearningAgentsImitationTrainer_eventIsTraining_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULearningAgentsImitationTrainer_IsTraining_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LearningAgentsImitationTrainer_eventIsTraining_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULearningAgentsImitationTrainer_IsTraining_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LearningAgentsImitationTrainer_eventIsTraining_Parms), &Z_Construct_UFunction_ULearningAgentsImitationTrainer_IsTraining_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsImitationTrainer_IsTraining_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsImitationTrainer_IsTraining_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsImitationTrainer_IsTraining_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** Returns true if the trainer is currently training; Otherwise, false. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsImitationTrainer.h" },
		{ "ToolTip", "Returns true if the trainer is currently training; Otherwise, false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsImitationTrainer_IsTraining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsImitationTrainer, nullptr, "IsTraining", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsImitationTrainer_IsTraining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsImitationTrainer_IsTraining_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsImitationTrainer_IsTraining_Statics::LearningAgentsImitationTrainer_eventIsTraining_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsImitationTrainer_IsTraining_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsImitationTrainer_IsTraining_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsImitationTrainer_IsTraining_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsImitationTrainer_IsTraining_Statics::LearningAgentsImitationTrainer_eventIsTraining_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsImitationTrainer_IsTraining()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsImitationTrainer_IsTraining_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsImitationTrainer_IterateTraining_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsImitationTrainer_IterateTraining_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** Iterates the training process and gets the updated policy network. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsImitationTrainer.h" },
		{ "ToolTip", "Iterates the training process and gets the updated policy network." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsImitationTrainer_IterateTraining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsImitationTrainer, nullptr, "IterateTraining", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsImitationTrainer_IterateTraining_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsImitationTrainer_IterateTraining_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULearningAgentsImitationTrainer_IterateTraining()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsImitationTrainer_IterateTraining_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics
	{
		struct LearningAgentsImitationTrainer_eventRunTraining_Parms
		{
			ULearningAgentsPolicy* InPolicy;
			const ULearningAgentsRecording* Recording;
			FLearningAgentsImitationTrainerSettings ImitationTrainerSettings;
			FLearningAgentsImitationTrainerTrainingSettings ImitationTrainerTrainingSettings;
			FLearningAgentsTrainerPathSettings ImitationTrainerPathSettings;
			bool bReinitializePolicyNetwork;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPolicy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Recording_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Recording;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImitationTrainerSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImitationTrainerSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImitationTrainerTrainingSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImitationTrainerTrainingSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImitationTrainerPathSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImitationTrainerPathSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReinitializePolicyNetwork_MetaData[];
#endif
		static void NewProp_bReinitializePolicyNetwork_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReinitializePolicyNetwork;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::NewProp_InPolicy_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::NewProp_InPolicy = { "InPolicy", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsImitationTrainer_eventRunTraining_Parms, InPolicy), Z_Construct_UClass_ULearningAgentsPolicy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::NewProp_InPolicy_MetaData), Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::NewProp_InPolicy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::NewProp_Recording_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::NewProp_Recording = { "Recording", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsImitationTrainer_eventRunTraining_Parms, Recording), Z_Construct_UClass_ULearningAgentsRecording_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::NewProp_Recording_MetaData), Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::NewProp_Recording_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::NewProp_ImitationTrainerSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::NewProp_ImitationTrainerSettings = { "ImitationTrainerSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsImitationTrainer_eventRunTraining_Parms, ImitationTrainerSettings), Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::NewProp_ImitationTrainerSettings_MetaData), Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::NewProp_ImitationTrainerSettings_MetaData) }; // 1374236262
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::NewProp_ImitationTrainerTrainingSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::NewProp_ImitationTrainerTrainingSettings = { "ImitationTrainerTrainingSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsImitationTrainer_eventRunTraining_Parms, ImitationTrainerTrainingSettings), Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::NewProp_ImitationTrainerTrainingSettings_MetaData), Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::NewProp_ImitationTrainerTrainingSettings_MetaData) }; // 2313449315
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::NewProp_ImitationTrainerPathSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::NewProp_ImitationTrainerPathSettings = { "ImitationTrainerPathSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsImitationTrainer_eventRunTraining_Parms, ImitationTrainerPathSettings), Z_Construct_UScriptStruct_FLearningAgentsTrainerPathSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::NewProp_ImitationTrainerPathSettings_MetaData), Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::NewProp_ImitationTrainerPathSettings_MetaData) }; // 2984407820
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::NewProp_bReinitializePolicyNetwork_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::NewProp_bReinitializePolicyNetwork_SetBit(void* Obj)
	{
		((LearningAgentsImitationTrainer_eventRunTraining_Parms*)Obj)->bReinitializePolicyNetwork = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::NewProp_bReinitializePolicyNetwork = { "bReinitializePolicyNetwork", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LearningAgentsImitationTrainer_eventRunTraining_Parms), &Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::NewProp_bReinitializePolicyNetwork_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::NewProp_bReinitializePolicyNetwork_MetaData), Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::NewProp_bReinitializePolicyNetwork_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::NewProp_InPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::NewProp_Recording,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::NewProp_ImitationTrainerSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::NewProp_ImitationTrainerTrainingSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::NewProp_ImitationTrainerPathSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::NewProp_bReinitializePolicyNetwork,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Convenience function that runs a basic training loop. If training has not been started, it will start it. On \n\x09 * each following call to this function, it will call IterateTraining.\n\x09 * @param InPolicy The policy to train.\n\x09 * @param Recording The data to train on.\n\x09 * @param ImitationTrainerSettings The settings for this trainer.\n\x09 * @param ImitationTrainerTrainingSettings The training settings for this network.\n\x09 * @param ImitationTrainerPathSettings The path settings used by the imitation trainer.\n\x09 * @param bReinitializePolicyNetwork If true, reinitialize the policy. Set this to false if your policy is pre-trained.\n\x09 */" },
		{ "CPP_Default_bReinitializePolicyNetwork", "true" },
		{ "CPP_Default_ImitationTrainerPathSettings", "()" },
		{ "CPP_Default_ImitationTrainerSettings", "()" },
		{ "CPP_Default_ImitationTrainerTrainingSettings", "()" },
		{ "ModuleRelativePath", "Public/LearningAgentsImitationTrainer.h" },
		{ "ToolTip", "Convenience function that runs a basic training loop. If training has not been started, it will start it. On\neach following call to this function, it will call IterateTraining.\n@param InPolicy The policy to train.\n@param Recording The data to train on.\n@param ImitationTrainerSettings The settings for this trainer.\n@param ImitationTrainerTrainingSettings The training settings for this network.\n@param ImitationTrainerPathSettings The path settings used by the imitation trainer.\n@param bReinitializePolicyNetwork If true, reinitialize the policy. Set this to false if your policy is pre-trained." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsImitationTrainer, nullptr, "RunTraining", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::LearningAgentsImitationTrainer_eventRunTraining_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::LearningAgentsImitationTrainer_eventRunTraining_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULearningAgentsImitationTrainer);
	UClass* Z_Construct_UClass_ULearningAgentsImitationTrainer_NoRegister()
	{
		return ULearningAgentsImitationTrainer::StaticClass();
	}
	struct Z_Construct_UClass_ULearningAgentsImitationTrainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Policy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Policy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsTraining_MetaData[];
#endif
		static void NewProp_bIsTraining_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTraining;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasTrainingFailed_MetaData[];
#endif
		static void NewProp_bHasTrainingFailed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasTrainingFailed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULearningAgentsImitationTrainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgentsTraining,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsImitationTrainer_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULearningAgentsImitationTrainer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULearningAgentsImitationTrainer_BeginTraining, "BeginTraining" }, // 1279682426
		{ &Z_Construct_UFunction_ULearningAgentsImitationTrainer_EndTraining, "EndTraining" }, // 4079844710
		{ &Z_Construct_UFunction_ULearningAgentsImitationTrainer_HasTrainingFailed, "HasTrainingFailed" }, // 3247720650
		{ &Z_Construct_UFunction_ULearningAgentsImitationTrainer_IsTraining, "IsTraining" }, // 2769581684
		{ &Z_Construct_UFunction_ULearningAgentsImitationTrainer_IterateTraining, "IterateTraining" }, // 245748828
		{ &Z_Construct_UFunction_ULearningAgentsImitationTrainer_RunTraining, "RunTraining" }, // 2575147100
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsImitationTrainer_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsImitationTrainer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The ULearningAgentsImitationTrainer enable imitation learning, i.e. learning from human/AI demonstrations.\n * Imitation training is typically much faster than reinforcement learning, but requires gathering large amounts of\n * data in order to generalize. This can be used to initialize a reinforcement learning policy to speed up initial\n * exploration.\n * @see ULearningAgentsInteractor to understand how observations and actions work.\n * @see ULearningAgentsController to understand how we can manually perform actions via a human or AI.\n * @see ULearningAgentsRecorder to understand how to make new recordings.\n */" },
		{ "IncludePath", "LearningAgentsImitationTrainer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LearningAgentsImitationTrainer.h" },
		{ "ToolTip", "The ULearningAgentsImitationTrainer enable imitation learning, i.e. learning from human/AI demonstrations.\nImitation training is typically much faster than reinforcement learning, but requires gathering large amounts of\ndata in order to generalize. This can be used to initialize a reinforcement learning policy to speed up initial\nexploration.\n@see ULearningAgentsInteractor to understand how observations and actions work.\n@see ULearningAgentsController to understand how we can manually perform actions via a human or AI.\n@see ULearningAgentsRecorder to understand how to make new recordings." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsImitationTrainer_Statics::NewProp_Policy_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** The policy being trained. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LearningAgentsImitationTrainer.h" },
		{ "ToolTip", "The policy being trained." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULearningAgentsImitationTrainer_Statics::NewProp_Policy = { "Policy", nullptr, (EPropertyFlags)0x00440000000a2009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULearningAgentsImitationTrainer, Policy), Z_Construct_UClass_ULearningAgentsPolicy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsImitationTrainer_Statics::NewProp_Policy_MetaData), Z_Construct_UClass_ULearningAgentsImitationTrainer_Statics::NewProp_Policy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsImitationTrainer_Statics::NewProp_bIsTraining_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** True if training is currently in-progress. Otherwise, false. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsImitationTrainer.h" },
		{ "ToolTip", "True if training is currently in-progress. Otherwise, false." },
	};
#endif
	void Z_Construct_UClass_ULearningAgentsImitationTrainer_Statics::NewProp_bIsTraining_SetBit(void* Obj)
	{
		((ULearningAgentsImitationTrainer*)Obj)->bIsTraining = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULearningAgentsImitationTrainer_Statics::NewProp_bIsTraining = { "bIsTraining", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULearningAgentsImitationTrainer), &Z_Construct_UClass_ULearningAgentsImitationTrainer_Statics::NewProp_bIsTraining_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsImitationTrainer_Statics::NewProp_bIsTraining_MetaData), Z_Construct_UClass_ULearningAgentsImitationTrainer_Statics::NewProp_bIsTraining_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsImitationTrainer_Statics::NewProp_bHasTrainingFailed_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * True if trainer encountered an unrecoverable error during training (e.g. the trainer process timed out). Otherwise, false.\n\x09 * This exists mainly to keep the editor from locking up if something goes wrong during training.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsImitationTrainer.h" },
		{ "ToolTip", "True if trainer encountered an unrecoverable error during training (e.g. the trainer process timed out). Otherwise, false.\nThis exists mainly to keep the editor from locking up if something goes wrong during training." },
	};
#endif
	void Z_Construct_UClass_ULearningAgentsImitationTrainer_Statics::NewProp_bHasTrainingFailed_SetBit(void* Obj)
	{
		((ULearningAgentsImitationTrainer*)Obj)->bHasTrainingFailed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULearningAgentsImitationTrainer_Statics::NewProp_bHasTrainingFailed = { "bHasTrainingFailed", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULearningAgentsImitationTrainer), &Z_Construct_UClass_ULearningAgentsImitationTrainer_Statics::NewProp_bHasTrainingFailed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsImitationTrainer_Statics::NewProp_bHasTrainingFailed_MetaData), Z_Construct_UClass_ULearningAgentsImitationTrainer_Statics::NewProp_bHasTrainingFailed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULearningAgentsImitationTrainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULearningAgentsImitationTrainer_Statics::NewProp_Policy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULearningAgentsImitationTrainer_Statics::NewProp_bIsTraining,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULearningAgentsImitationTrainer_Statics::NewProp_bHasTrainingFailed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULearningAgentsImitationTrainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULearningAgentsImitationTrainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULearningAgentsImitationTrainer_Statics::ClassParams = {
		&ULearningAgentsImitationTrainer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULearningAgentsImitationTrainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsImitationTrainer_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsImitationTrainer_Statics::Class_MetaDataParams), Z_Construct_UClass_ULearningAgentsImitationTrainer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsImitationTrainer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULearningAgentsImitationTrainer()
	{
		if (!Z_Registration_Info_UClass_ULearningAgentsImitationTrainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULearningAgentsImitationTrainer.OuterSingleton, Z_Construct_UClass_ULearningAgentsImitationTrainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULearningAgentsImitationTrainer.OuterSingleton;
	}
	template<> LEARNINGAGENTSTRAINING_API UClass* StaticClass<ULearningAgentsImitationTrainer>()
	{
		return ULearningAgentsImitationTrainer::StaticClass();
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsImitationTrainer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsImitationTrainer_h_Statics::ScriptStructInfo[] = {
		{ FLearningAgentsImitationTrainerSettings::StaticStruct, Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerSettings_Statics::NewStructOps, TEXT("LearningAgentsImitationTrainerSettings"), &Z_Registration_Info_UScriptStruct_LearningAgentsImitationTrainerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLearningAgentsImitationTrainerSettings), 1374236262U) },
		{ FLearningAgentsImitationTrainerTrainingSettings::StaticStruct, Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics::NewStructOps, TEXT("LearningAgentsImitationTrainerTrainingSettings"), &Z_Registration_Info_UScriptStruct_LearningAgentsImitationTrainerTrainingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLearningAgentsImitationTrainerTrainingSettings), 2313449315U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsImitationTrainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULearningAgentsImitationTrainer, ULearningAgentsImitationTrainer::StaticClass, TEXT("ULearningAgentsImitationTrainer"), &Z_Registration_Info_UClass_ULearningAgentsImitationTrainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULearningAgentsImitationTrainer), 1144512627U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsImitationTrainer_h_568011006(TEXT("/Script/LearningAgentsTraining"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsImitationTrainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsImitationTrainer_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsImitationTrainer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsImitationTrainer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
