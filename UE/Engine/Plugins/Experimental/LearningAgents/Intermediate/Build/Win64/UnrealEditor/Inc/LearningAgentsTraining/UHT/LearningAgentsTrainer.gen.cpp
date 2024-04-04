// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningAgentsTrainer.h"
#include "LearningAgentsCritic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLearningAgentsTrainer() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsCritic_NoRegister();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsInteractor_NoRegister();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsManagerComponent();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsPolicy_NoRegister();
	LEARNINGAGENTS_API UScriptStruct* Z_Construct_UScriptStruct_FLearningAgentsCriticSettings();
	LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_ULearningAgentsCompletion_NoRegister();
	LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_ULearningAgentsReward_NoRegister();
	LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_ULearningAgentsTrainer();
	LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_ULearningAgentsTrainer_NoRegister();
	LEARNINGAGENTSTRAINING_API UEnum* Z_Construct_UEnum_LearningAgentsTraining_ELearningAgentsCompletion();
	LEARNINGAGENTSTRAINING_API UEnum* Z_Construct_UEnum_LearningAgentsTraining_ELearningAgentsTrainerDevice();
	LEARNINGAGENTSTRAINING_API UScriptStruct* Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings();
	LEARNINGAGENTSTRAINING_API UScriptStruct* Z_Construct_UScriptStruct_FLearningAgentsTrainerPathSettings();
	LEARNINGAGENTSTRAINING_API UScriptStruct* Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings();
	LEARNINGAGENTSTRAINING_API UScriptStruct* Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings();
	UPackage* Z_Construct_UPackage__Script_LearningAgentsTraining();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELearningAgentsCompletion;
	static UEnum* ELearningAgentsCompletion_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELearningAgentsCompletion.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELearningAgentsCompletion.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LearningAgentsTraining_ELearningAgentsCompletion, (UObject*)Z_Construct_UPackage__Script_LearningAgentsTraining(), TEXT("ELearningAgentsCompletion"));
		}
		return Z_Registration_Info_UEnum_ELearningAgentsCompletion.OuterSingleton;
	}
	template<> LEARNINGAGENTSTRAINING_API UEnum* StaticEnum<ELearningAgentsCompletion>()
	{
		return ELearningAgentsCompletion_StaticEnum();
	}
	struct Z_Construct_UEnum_LearningAgentsTraining_ELearningAgentsCompletion_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LearningAgentsTraining_ELearningAgentsCompletion_Statics::Enumerators[] = {
		{ "ELearningAgentsCompletion::Truncation", (int64)ELearningAgentsCompletion::Truncation },
		{ "ELearningAgentsCompletion::Termination", (int64)ELearningAgentsCompletion::Termination },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LearningAgentsTraining_ELearningAgentsCompletion_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/** Completion modes for episodes. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ScriptName", "LearningAgentsCompletionEnum" },
		{ "Termination.Comment", "/** Episode ended early and zero reward was expected for all future steps. */" },
		{ "Termination.DisplayName", "Termination" },
		{ "Termination.Name", "ELearningAgentsCompletion::Termination" },
		{ "Termination.ToolTip", "Episode ended early and zero reward was expected for all future steps." },
		{ "ToolTip", "Completion modes for episodes." },
		{ "Truncation.Comment", "/** Episode ended early but was still in progress. Critic will be used to estimate final return. */" },
		{ "Truncation.DisplayName", "Truncation" },
		{ "Truncation.Name", "ELearningAgentsCompletion::Truncation" },
		{ "Truncation.ToolTip", "Episode ended early but was still in progress. Critic will be used to estimate final return." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LearningAgentsTraining_ELearningAgentsCompletion_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LearningAgentsTraining,
		nullptr,
		"ELearningAgentsCompletion",
		"ELearningAgentsCompletion",
		Z_Construct_UEnum_LearningAgentsTraining_ELearningAgentsCompletion_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LearningAgentsTraining_ELearningAgentsCompletion_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LearningAgentsTraining_ELearningAgentsCompletion_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LearningAgentsTraining_ELearningAgentsCompletion_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_LearningAgentsTraining_ELearningAgentsCompletion()
	{
		if (!Z_Registration_Info_UEnum_ELearningAgentsCompletion.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELearningAgentsCompletion.InnerSingleton, Z_Construct_UEnum_LearningAgentsTraining_ELearningAgentsCompletion_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELearningAgentsCompletion.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LearningAgentsTrainerSettings;
class UScriptStruct* FLearningAgentsTrainerSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LearningAgentsTrainerSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LearningAgentsTrainerSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings, (UObject*)Z_Construct_UPackage__Script_LearningAgentsTraining(), TEXT("LearningAgentsTrainerSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LearningAgentsTrainerSettings.OuterSingleton;
}
template<> LEARNINGAGENTSTRAINING_API UScriptStruct* StaticStruct<FLearningAgentsTrainerSettings>()
{
	return FLearningAgentsTrainerSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaxStepsCompletion_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxStepsCompletion_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MaxStepsCompletion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxStepNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxStepNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumRecordedEpisodesPerIteration_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaximumRecordedEpisodesPerIteration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumRecordedStepsPerIteration_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaximumRecordedStepsPerIteration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrainerCommunicationTimeout_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TrainerCommunicationTimeout;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/** The configurable settings for a ULearningAgentsTrainer. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "The configurable settings for a ULearningAgentsTrainer." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLearningAgentsTrainerSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings_Statics::NewProp_MaxStepsCompletion_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings_Statics::NewProp_MaxStepsCompletion_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** Completion type to use when the maximum number of steps for an episode is reached. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "Completion type to use when the maximum number of steps for an episode is reached." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings_Statics::NewProp_MaxStepsCompletion = { "MaxStepsCompletion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsTrainerSettings, MaxStepsCompletion), Z_Construct_UEnum_LearningAgentsTraining_ELearningAgentsCompletion, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings_Statics::NewProp_MaxStepsCompletion_MetaData), Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings_Statics::NewProp_MaxStepsCompletion_MetaData) }; // 1079080398
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings_Statics::NewProp_MaxStepNum_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Max number of steps to take while training before episode automatically completes. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "Max number of steps to take while training before episode automatically completes." },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings_Statics::NewProp_MaxStepNum = { "MaxStepNum", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsTrainerSettings, MaxStepNum), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings_Statics::NewProp_MaxStepNum_MetaData), Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings_Statics::NewProp_MaxStepNum_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings_Statics::NewProp_MaximumRecordedEpisodesPerIteration_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Maximum number of episodes to record before running a training iteration. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "Maximum number of episodes to record before running a training iteration." },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings_Statics::NewProp_MaximumRecordedEpisodesPerIteration = { "MaximumRecordedEpisodesPerIteration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsTrainerSettings, MaximumRecordedEpisodesPerIteration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings_Statics::NewProp_MaximumRecordedEpisodesPerIteration_MetaData), Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings_Statics::NewProp_MaximumRecordedEpisodesPerIteration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings_Statics::NewProp_MaximumRecordedStepsPerIteration_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Maximum number of steps to record before running a training iteration. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "Maximum number of steps to record before running a training iteration." },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings_Statics::NewProp_MaximumRecordedStepsPerIteration = { "MaximumRecordedStepsPerIteration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsTrainerSettings, MaximumRecordedStepsPerIteration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings_Statics::NewProp_MaximumRecordedStepsPerIteration_MetaData), Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings_Statics::NewProp_MaximumRecordedStepsPerIteration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings_Statics::NewProp_TrainerCommunicationTimeout_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Time in seconds to wait for the training subprocess before timing out. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "Time in seconds to wait for the training subprocess before timing out." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings_Statics::NewProp_TrainerCommunicationTimeout = { "TrainerCommunicationTimeout", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsTrainerSettings, TrainerCommunicationTimeout), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings_Statics::NewProp_TrainerCommunicationTimeout_MetaData), Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings_Statics::NewProp_TrainerCommunicationTimeout_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings_Statics::NewProp_MaxStepsCompletion_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings_Statics::NewProp_MaxStepsCompletion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings_Statics::NewProp_MaxStepNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings_Statics::NewProp_MaximumRecordedEpisodesPerIteration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings_Statics::NewProp_MaximumRecordedStepsPerIteration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings_Statics::NewProp_TrainerCommunicationTimeout,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgentsTraining,
		nullptr,
		&NewStructOps,
		"LearningAgentsTrainerSettings",
		Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings_Statics::PropPointers),
		sizeof(FLearningAgentsTrainerSettings),
		alignof(FLearningAgentsTrainerSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LearningAgentsTrainerSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LearningAgentsTrainerSettings.InnerSingleton, Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LearningAgentsTrainerSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LearningAgentsTrainerGameSettings;
class UScriptStruct* FLearningAgentsTrainerGameSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LearningAgentsTrainerGameSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LearningAgentsTrainerGameSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings, (UObject*)Z_Construct_UPackage__Script_LearningAgentsTraining(), TEXT("LearningAgentsTrainerGameSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LearningAgentsTrainerGameSettings.OuterSingleton;
}
template<> LEARNINGAGENTSTRAINING_API UScriptStruct* StaticStruct<FLearningAgentsTrainerGameSettings>()
{
	return FLearningAgentsTrainerGameSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFixedTimeStep_MetaData[];
#endif
		static void NewProp_bUseFixedTimeStep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFixedTimeStep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixedTimeStepFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FixedTimeStepFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSetMaxPhysicsStepToFixedTimeStep_MetaData[];
#endif
		static void NewProp_bSetMaxPhysicsStepToFixedTimeStep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetMaxPhysicsStepToFixedTimeStep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableVSync_MetaData[];
#endif
		static void NewProp_bDisableVSync_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableVSync;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseUnlitViewportRendering_MetaData[];
#endif
		static void NewProp_bUseUnlitViewportRendering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseUnlitViewportRendering;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n * The configurable game settings for a ULearningAgentsTrainer. These allow the timestep and physics tick to be fixed\n * during training, which can enable ticking faster than real-time.\n */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "The configurable game settings for a ULearningAgentsTrainer. These allow the timestep and physics tick to be fixed\nduring training, which can enable ticking faster than real-time." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLearningAgentsTrainerGameSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::NewProp_bUseFixedTimeStep_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * If true, the game will run in fixed time step mode (i.e the frame's delta times will always be the same\n\x09 * regardless of how much wall time has passed). This can enable faster than real-time training if your game runs\n\x09 * quickly. If false, the time steps will match real wall time.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "If true, the game will run in fixed time step mode (i.e the frame's delta times will always be the same\nregardless of how much wall time has passed). This can enable faster than real-time training if your game runs\nquickly. If false, the time steps will match real wall time." },
	};
#endif
	void Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::NewProp_bUseFixedTimeStep_SetBit(void* Obj)
	{
		((FLearningAgentsTrainerGameSettings*)Obj)->bUseFixedTimeStep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::NewProp_bUseFixedTimeStep = { "bUseFixedTimeStep", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLearningAgentsTrainerGameSettings), &Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::NewProp_bUseFixedTimeStep_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::NewProp_bUseFixedTimeStep_MetaData), Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::NewProp_bUseFixedTimeStep_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::NewProp_FixedTimeStepFrequency_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Determines the amount of time for each frame when bUseFixedTimeStep is true; Ignored if false. You want this\n\x09 * time step to match as closely as possible to the expected inference time steps, otherwise your training results\n\x09 * may not generalize to your game.\n\x09 */" },
		{ "DisplayName", "Fixed Time Step Frequency (Hz)" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "Determines the amount of time for each frame when bUseFixedTimeStep is true; Ignored if false. You want this\ntime step to match as closely as possible to the expected inference time steps, otherwise your training results\nmay not generalize to your game." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::NewProp_FixedTimeStepFrequency = { "FixedTimeStepFrequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsTrainerGameSettings, FixedTimeStepFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::NewProp_FixedTimeStepFrequency_MetaData), Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::NewProp_FixedTimeStepFrequency_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::NewProp_bSetMaxPhysicsStepToFixedTimeStep_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** If true, set the physics delta time to match the fixed time step. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "If true, set the physics delta time to match the fixed time step." },
	};
#endif
	void Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::NewProp_bSetMaxPhysicsStepToFixedTimeStep_SetBit(void* Obj)
	{
		((FLearningAgentsTrainerGameSettings*)Obj)->bSetMaxPhysicsStepToFixedTimeStep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::NewProp_bSetMaxPhysicsStepToFixedTimeStep = { "bSetMaxPhysicsStepToFixedTimeStep", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLearningAgentsTrainerGameSettings), &Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::NewProp_bSetMaxPhysicsStepToFixedTimeStep_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::NewProp_bSetMaxPhysicsStepToFixedTimeStep_MetaData), Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::NewProp_bSetMaxPhysicsStepToFixedTimeStep_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::NewProp_bDisableVSync_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** If true, VSync will be disabled; Otherwise, it will not. Disabling VSync can speed up the game simulation. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "If true, VSync will be disabled; Otherwise, it will not. Disabling VSync can speed up the game simulation." },
	};
#endif
	void Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::NewProp_bDisableVSync_SetBit(void* Obj)
	{
		((FLearningAgentsTrainerGameSettings*)Obj)->bDisableVSync = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::NewProp_bDisableVSync = { "bDisableVSync", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLearningAgentsTrainerGameSettings), &Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::NewProp_bDisableVSync_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::NewProp_bDisableVSync_MetaData), Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::NewProp_bDisableVSync_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::NewProp_bUseUnlitViewportRendering_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** If true, the viewport rendering will be unlit; Otherwise, it will not. Disabling lighting can speed up the game simulation. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "If true, the viewport rendering will be unlit; Otherwise, it will not. Disabling lighting can speed up the game simulation." },
	};
#endif
	void Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::NewProp_bUseUnlitViewportRendering_SetBit(void* Obj)
	{
		((FLearningAgentsTrainerGameSettings*)Obj)->bUseUnlitViewportRendering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::NewProp_bUseUnlitViewportRendering = { "bUseUnlitViewportRendering", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLearningAgentsTrainerGameSettings), &Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::NewProp_bUseUnlitViewportRendering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::NewProp_bUseUnlitViewportRendering_MetaData), Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::NewProp_bUseUnlitViewportRendering_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::NewProp_bUseFixedTimeStep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::NewProp_FixedTimeStepFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::NewProp_bSetMaxPhysicsStepToFixedTimeStep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::NewProp_bDisableVSync,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::NewProp_bUseUnlitViewportRendering,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgentsTraining,
		nullptr,
		&NewStructOps,
		"LearningAgentsTrainerGameSettings",
		Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::PropPointers),
		sizeof(FLearningAgentsTrainerGameSettings),
		alignof(FLearningAgentsTrainerGameSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LearningAgentsTrainerGameSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LearningAgentsTrainerGameSettings.InnerSingleton, Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LearningAgentsTrainerGameSettings.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELearningAgentsTrainerDevice;
	static UEnum* ELearningAgentsTrainerDevice_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELearningAgentsTrainerDevice.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELearningAgentsTrainerDevice.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LearningAgentsTraining_ELearningAgentsTrainerDevice, (UObject*)Z_Construct_UPackage__Script_LearningAgentsTraining(), TEXT("ELearningAgentsTrainerDevice"));
		}
		return Z_Registration_Info_UEnum_ELearningAgentsTrainerDevice.OuterSingleton;
	}
	template<> LEARNINGAGENTSTRAINING_API UEnum* StaticEnum<ELearningAgentsTrainerDevice>()
	{
		return ELearningAgentsTrainerDevice_StaticEnum();
	}
	struct Z_Construct_UEnum_LearningAgentsTraining_ELearningAgentsTrainerDevice_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LearningAgentsTraining_ELearningAgentsTrainerDevice_Statics::Enumerators[] = {
		{ "ELearningAgentsTrainerDevice::CPU", (int64)ELearningAgentsTrainerDevice::CPU },
		{ "ELearningAgentsTrainerDevice::GPU", (int64)ELearningAgentsTrainerDevice::GPU },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LearningAgentsTraining_ELearningAgentsTrainerDevice_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/** Enumeration of the training devices. */" },
		{ "CPU.Name", "ELearningAgentsTrainerDevice::CPU" },
		{ "GPU.Name", "ELearningAgentsTrainerDevice::GPU" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "Enumeration of the training devices." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LearningAgentsTraining_ELearningAgentsTrainerDevice_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LearningAgentsTraining,
		nullptr,
		"ELearningAgentsTrainerDevice",
		"ELearningAgentsTrainerDevice",
		Z_Construct_UEnum_LearningAgentsTraining_ELearningAgentsTrainerDevice_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LearningAgentsTraining_ELearningAgentsTrainerDevice_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LearningAgentsTraining_ELearningAgentsTrainerDevice_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LearningAgentsTraining_ELearningAgentsTrainerDevice_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_LearningAgentsTraining_ELearningAgentsTrainerDevice()
	{
		if (!Z_Registration_Info_UEnum_ELearningAgentsTrainerDevice.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELearningAgentsTrainerDevice.InnerSingleton, Z_Construct_UEnum_LearningAgentsTraining_ELearningAgentsTrainerDevice_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELearningAgentsTrainerDevice.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LearningAgentsTrainerTrainingSettings;
class UScriptStruct* FLearningAgentsTrainerTrainingSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LearningAgentsTrainerTrainingSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LearningAgentsTrainerTrainingSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings, (UObject*)Z_Construct_UPackage__Script_LearningAgentsTraining(), TEXT("LearningAgentsTrainerTrainingSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LearningAgentsTrainerTrainingSettings.OuterSingleton;
}
template<> LEARNINGAGENTSTRAINING_API UScriptStruct* StaticStruct<FLearningAgentsTrainerTrainingSettings>()
{
	return FLearningAgentsTrainerTrainingSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LearningRatePolicy_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LearningRatePolicy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LearningRateCritic_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LearningRateCritic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LearningRateDecay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LearningRateDecay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightDecay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeightDecay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialActionScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialActionScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BatchSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BatchSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EpsilonClip_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EpsilonClip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionRegularizationWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActionRegularizationWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntropyWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EntropyWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GaeLambda_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GaeLambda;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClipAdvantages_MetaData[];
#endif
		static void NewProp_bClipAdvantages_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClipAdvantages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAdvantageNormalization_MetaData[];
#endif
		static void NewProp_bAdvantageNormalization_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdvantageNormalization;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfStepsToTrimAtStartOfEpisode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfStepsToTrimAtStartOfEpisode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfStepsToTrimAtEndOfEpisode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfStepsToTrimAtEndOfEpisode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DiscountFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DiscountFactor;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/** The configurable settings for the training process. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "The configurable settings for the training process." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLearningAgentsTrainerTrainingSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_NumberOfIterations_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The number of iterations to run before ending training. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "The number of iterations to run before ending training." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_NumberOfIterations = { "NumberOfIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsTrainerTrainingSettings, NumberOfIterations), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_NumberOfIterations_MetaData), Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_NumberOfIterations_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_LearningRatePolicy_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Learning rate of the policy network. Typical values are between 0.001 and 0.0001. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "Learning rate of the policy network. Typical values are between 0.001 and 0.0001." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_LearningRatePolicy = { "LearningRatePolicy", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsTrainerTrainingSettings, LearningRatePolicy), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_LearningRatePolicy_MetaData), Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_LearningRatePolicy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_LearningRateCritic_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Learning rate of the critic network. To avoid instability generally the critic should have a larger learning \n\x09 * rate than the policy. Typically this can be set to 10x the rate of the policy.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "Learning rate of the critic network. To avoid instability generally the critic should have a larger learning\nrate than the policy. Typically this can be set to 10x the rate of the policy." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_LearningRateCritic = { "LearningRateCritic", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsTrainerTrainingSettings, LearningRateCritic), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_LearningRateCritic_MetaData), Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_LearningRateCritic_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_LearningRateDecay_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Ratio by which to decay the learning rate every 1000 iterations. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "Ratio by which to decay the learning rate every 1000 iterations." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_LearningRateDecay = { "LearningRateDecay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsTrainerTrainingSettings, LearningRateDecay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_LearningRateDecay_MetaData), Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_LearningRateDecay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_WeightDecay_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Amount of weight decay to apply to the network. Larger values encourage network weights to be smaller but too \n\x09 * large a value can cause the network weights to collapse to all zeros.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "Amount of weight decay to apply to the network. Larger values encourage network weights to be smaller but too\nlarge a value can cause the network weights to collapse to all zeros." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_WeightDecay = { "WeightDecay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsTrainerTrainingSettings, WeightDecay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_WeightDecay_MetaData), Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_WeightDecay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_InitialActionScale_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * The initial scaling for the weights of the output layer of the neural network. Typically, you would use this to\n\x09 * scale down the initial actions as it can stabilize the training and speed up convergence.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "The initial scaling for the weights of the output layer of the neural network. Typically, you would use this to\nscale down the initial actions as it can stabilize the training and speed up convergence." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_InitialActionScale = { "InitialActionScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsTrainerTrainingSettings, InitialActionScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_InitialActionScale_MetaData), Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_InitialActionScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_BatchSize_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "ClampMax", "4096" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Batch size to use for training. Smaller values tend to produce better results at the cost of slowing down \n\x09 * training. Large batch sizes are much more computationally efficient when training on the GPU.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "Batch size to use for training. Smaller values tend to produce better results at the cost of slowing down\ntraining. Large batch sizes are much more computationally efficient when training on the GPU." },
		{ "UIMax", "4096" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_BatchSize = { "BatchSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsTrainerTrainingSettings, BatchSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_BatchSize_MetaData), Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_BatchSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_EpsilonClip_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Clipping ratio to apply to policy updates. Keeps the training \"on-policy\". Larger values may speed up training at \n\x09 * the cost of stability. Conversely, too small values will keep the policy from being able to learn an \n\x09 * optimal policy.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "Clipping ratio to apply to policy updates. Keeps the training \"on-policy\". Larger values may speed up training at\nthe cost of stability. Conversely, too small values will keep the policy from being able to learn an\noptimal policy." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_EpsilonClip = { "EpsilonClip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsTrainerTrainingSettings, EpsilonClip), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_EpsilonClip_MetaData), Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_EpsilonClip_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_ActionRegularizationWeight_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Weight used to regularize actions. Larger values will encourage smaller actions but too large will cause actions \n\x09 * to become always zero.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "Weight used to regularize actions. Larger values will encourage smaller actions but too large will cause actions\nto become always zero." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_ActionRegularizationWeight = { "ActionRegularizationWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsTrainerTrainingSettings, ActionRegularizationWeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_ActionRegularizationWeight_MetaData), Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_ActionRegularizationWeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_EntropyWeight_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Weighting used for the entropy bonus. Larger values encourage larger action noise and therefore greater \n\x09 * exploration but can make actions very noisy.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "Weighting used for the entropy bonus. Larger values encourage larger action noise and therefore greater\nexploration but can make actions very noisy." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_EntropyWeight = { "EntropyWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsTrainerTrainingSettings, EntropyWeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_EntropyWeight_MetaData), Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_EntropyWeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_GaeLambda_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * This is used in the Generalized Advantage Estimation as what is essentially an exponential smoothing/decay. \n\x09 * Typical values should be between 0.9 and 1.0.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "This is used in the Generalized Advantage Estimation as what is essentially an exponential smoothing/decay.\nTypical values should be between 0.9 and 1.0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_GaeLambda = { "GaeLambda", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsTrainerTrainingSettings, GaeLambda), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_GaeLambda_MetaData), Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_GaeLambda_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_bClipAdvantages_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * When true, very large or small advantages will be clipped. This has few downsides and helps with numerical \n\x09 * stability.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "When true, very large or small advantages will be clipped. This has few downsides and helps with numerical\nstability." },
	};
#endif
	void Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_bClipAdvantages_SetBit(void* Obj)
	{
		((FLearningAgentsTrainerTrainingSettings*)Obj)->bClipAdvantages = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_bClipAdvantages = { "bClipAdvantages", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLearningAgentsTrainerTrainingSettings), &Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_bClipAdvantages_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_bClipAdvantages_MetaData), Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_bClipAdvantages_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_bAdvantageNormalization_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** When true, advantages are normalized. This tends to makes training more robust to adjustments of the scale of rewards. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "When true, advantages are normalized. This tends to makes training more robust to adjustments of the scale of rewards." },
	};
#endif
	void Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_bAdvantageNormalization_SetBit(void* Obj)
	{
		((FLearningAgentsTrainerTrainingSettings*)Obj)->bAdvantageNormalization = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_bAdvantageNormalization = { "bAdvantageNormalization", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLearningAgentsTrainerTrainingSettings), &Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_bAdvantageNormalization_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_bAdvantageNormalization_MetaData), Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_bAdvantageNormalization_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_NumberOfStepsToTrimAtStartOfEpisode_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The number of steps to trim from the start of the episode, e.g. can be useful if some things are still getting\n\x09 * setup at the start of the episode and you don't want them used for training.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "The number of steps to trim from the start of the episode, e.g. can be useful if some things are still getting\nsetup at the start of the episode and you don't want them used for training." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_NumberOfStepsToTrimAtStartOfEpisode = { "NumberOfStepsToTrimAtStartOfEpisode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsTrainerTrainingSettings, NumberOfStepsToTrimAtStartOfEpisode), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_NumberOfStepsToTrimAtStartOfEpisode_MetaData), Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_NumberOfStepsToTrimAtStartOfEpisode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_NumberOfStepsToTrimAtEndOfEpisode_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The number of steps to trim from the end of the episode. Can be useful if the end of the episode contains\n\x09 * irrelevant data.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "The number of steps to trim from the end of the episode. Can be useful if the end of the episode contains\nirrelevant data." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_NumberOfStepsToTrimAtEndOfEpisode = { "NumberOfStepsToTrimAtEndOfEpisode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsTrainerTrainingSettings, NumberOfStepsToTrimAtEndOfEpisode), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_NumberOfStepsToTrimAtEndOfEpisode_MetaData), Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_NumberOfStepsToTrimAtEndOfEpisode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_RandomSeed_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The seed used for any random sampling the trainer will perform, e.g. for weight initialization. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "The seed used for any random sampling the trainer will perform, e.g. for weight initialization." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsTrainerTrainingSettings, RandomSeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_RandomSeed_MetaData), Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_RandomSeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_DiscountFactor_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * The discount factor to use during training. This affects how much the agent cares about future rewards vs\n\x09 * near-term rewards. Should typically be a value less than but near 1.0. \n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "The discount factor to use during training. This affects how much the agent cares about future rewards vs\nnear-term rewards. Should typically be a value less than but near 1.0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_DiscountFactor = { "DiscountFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsTrainerTrainingSettings, DiscountFactor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_DiscountFactor_MetaData), Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_DiscountFactor_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_Device_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_Device_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** The device to train on. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "The device to train on." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_Device = { "Device", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsTrainerTrainingSettings, Device), Z_Construct_UEnum_LearningAgentsTraining_ELearningAgentsTrainerDevice, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_Device_MetaData), Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_Device_MetaData) }; // 3268198106
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_bUseTensorboard_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** If true, TensorBoard logs will be emitted to the intermediate directory. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "If true, TensorBoard logs will be emitted to the intermediate directory." },
	};
#endif
	void Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_bUseTensorboard_SetBit(void* Obj)
	{
		((FLearningAgentsTrainerTrainingSettings*)Obj)->bUseTensorboard = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_bUseTensorboard = { "bUseTensorboard", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLearningAgentsTrainerTrainingSettings), &Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_bUseTensorboard_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_bUseTensorboard_MetaData), Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_bUseTensorboard_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_NumberOfIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_LearningRatePolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_LearningRateCritic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_LearningRateDecay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_WeightDecay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_InitialActionScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_BatchSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_EpsilonClip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_ActionRegularizationWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_EntropyWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_GaeLambda,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_bClipAdvantages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_bAdvantageNormalization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_NumberOfStepsToTrimAtStartOfEpisode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_NumberOfStepsToTrimAtEndOfEpisode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_RandomSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_DiscountFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_Device_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_Device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewProp_bUseTensorboard,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgentsTraining,
		nullptr,
		&NewStructOps,
		"LearningAgentsTrainerTrainingSettings",
		Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::PropPointers),
		sizeof(FLearningAgentsTrainerTrainingSettings),
		alignof(FLearningAgentsTrainerTrainingSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LearningAgentsTrainerTrainingSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LearningAgentsTrainerTrainingSettings.InnerSingleton, Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LearningAgentsTrainerTrainingSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LearningAgentsTrainerPathSettings;
class UScriptStruct* FLearningAgentsTrainerPathSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LearningAgentsTrainerPathSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LearningAgentsTrainerPathSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLearningAgentsTrainerPathSettings, (UObject*)Z_Construct_UPackage__Script_LearningAgentsTraining(), TEXT("LearningAgentsTrainerPathSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LearningAgentsTrainerPathSettings.OuterSingleton;
}
template<> LEARNINGAGENTSTRAINING_API UScriptStruct* StaticStruct<FLearningAgentsTrainerPathSettings>()
{
	return FLearningAgentsTrainerPathSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLearningAgentsTrainerPathSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorEngineRelativePath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditorEngineRelativePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NonEditorEngineRelativePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NonEditorEngineRelativePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntermediateRelativePath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IntermediateRelativePath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsTrainerPathSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/** The path settings for the trainer. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "The path settings for the trainer." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLearningAgentsTrainerPathSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLearningAgentsTrainerPathSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsTrainerPathSettings_Statics::NewProp_EditorEngineRelativePath_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** The relative path to the engine for editor builds. Defaults to FPaths::EngineDir. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "RelativePath", "" },
		{ "ToolTip", "The relative path to the engine for editor builds. Defaults to FPaths::EngineDir." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLearningAgentsTrainerPathSettings_Statics::NewProp_EditorEngineRelativePath = { "EditorEngineRelativePath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsTrainerPathSettings, EditorEngineRelativePath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerPathSettings_Statics::NewProp_EditorEngineRelativePath_MetaData), Z_Construct_UScriptStruct_FLearningAgentsTrainerPathSettings_Statics::NewProp_EditorEngineRelativePath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsTrainerPathSettings_Statics::NewProp_NonEditorEngineRelativePath_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * The relative path to the editor engine folder for non-editor builds.\n\x09 * \n\x09 * If we want to run training in cooked, non-editor builds, then by default we wont have access to python and the\n\x09 * LearningAgents training scripts - these are editor-only things and are stripped during the cooking process.\n\x09 *\n\x09 * However, running training in non-editor builds can be very important - we probably want to disable rendering\n\x09 * and sound while we are training to make experience gathering as fast as possible - and for any non-trivial game\n\x09 * is simply may not be realistic to run it for a long time in play-in-editor.\n\x09 *\n\x09 * For this reason even in non-editor builds we let you provide the path where all of these editor-only things can \n\x09 * be found. This allows you to run training when these things actually exist somewhere accessible to the executable, \n\x09 * which will usually be the case on a normal development machine or cloud machine if it is set up that way.\n\x09 *\n\x09 * Since non-editor builds can be produced in a number of different ways, this is not set by default and cannot \n\x09 * use a directory picker since it is relative to the final location of where your cooked, non-editor executable \n\x09 * will exist rather than the current with-editor executable.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "The relative path to the editor engine folder for non-editor builds.\n\nIf we want to run training in cooked, non-editor builds, then by default we wont have access to python and the\nLearningAgents training scripts - these are editor-only things and are stripped during the cooking process.\n\nHowever, running training in non-editor builds can be very important - we probably want to disable rendering\nand sound while we are training to make experience gathering as fast as possible - and for any non-trivial game\nis simply may not be realistic to run it for a long time in play-in-editor.\n\nFor this reason even in non-editor builds we let you provide the path where all of these editor-only things can\nbe found. This allows you to run training when these things actually exist somewhere accessible to the executable,\nwhich will usually be the case on a normal development machine or cloud machine if it is set up that way.\n\nSince non-editor builds can be produced in a number of different ways, this is not set by default and cannot\nuse a directory picker since it is relative to the final location of where your cooked, non-editor executable\nwill exist rather than the current with-editor executable." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLearningAgentsTrainerPathSettings_Statics::NewProp_NonEditorEngineRelativePath = { "NonEditorEngineRelativePath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsTrainerPathSettings, NonEditorEngineRelativePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerPathSettings_Statics::NewProp_NonEditorEngineRelativePath_MetaData), Z_Construct_UScriptStruct_FLearningAgentsTrainerPathSettings_Statics::NewProp_NonEditorEngineRelativePath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsTrainerPathSettings_Statics::NewProp_IntermediateRelativePath_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** The relative path to the Intermediate directory. Defaults to FPaths::ProjectIntermediateDir. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "RelativePath", "" },
		{ "ToolTip", "The relative path to the Intermediate directory. Defaults to FPaths::ProjectIntermediateDir." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLearningAgentsTrainerPathSettings_Statics::NewProp_IntermediateRelativePath = { "IntermediateRelativePath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsTrainerPathSettings, IntermediateRelativePath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerPathSettings_Statics::NewProp_IntermediateRelativePath_MetaData), Z_Construct_UScriptStruct_FLearningAgentsTrainerPathSettings_Statics::NewProp_IntermediateRelativePath_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLearningAgentsTrainerPathSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsTrainerPathSettings_Statics::NewProp_EditorEngineRelativePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsTrainerPathSettings_Statics::NewProp_NonEditorEngineRelativePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsTrainerPathSettings_Statics::NewProp_IntermediateRelativePath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLearningAgentsTrainerPathSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgentsTraining,
		nullptr,
		&NewStructOps,
		"LearningAgentsTrainerPathSettings",
		Z_Construct_UScriptStruct_FLearningAgentsTrainerPathSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerPathSettings_Statics::PropPointers),
		sizeof(FLearningAgentsTrainerPathSettings),
		alignof(FLearningAgentsTrainerPathSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerPathSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLearningAgentsTrainerPathSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsTrainerPathSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLearningAgentsTrainerPathSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LearningAgentsTrainerPathSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LearningAgentsTrainerPathSettings.InnerSingleton, Z_Construct_UScriptStruct_FLearningAgentsTrainerPathSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LearningAgentsTrainerPathSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(ULearningAgentsTrainer::execHasTrainingFailed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasTrainingFailed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsTrainer::execIsCompleted)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_GET_ENUM_REF(ELearningAgentsCompletion,Z_Param_Out_OutCompletion);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCompleted(Z_Param_AgentId,(ELearningAgentsCompletion&)(Z_Param_Out_OutCompletion));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsTrainer::execGetReward)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetReward(Z_Param_AgentId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsTrainer::execRunTraining)
	{
		P_GET_STRUCT_REF(FLearningAgentsTrainerTrainingSettings,Z_Param_Out_TrainerTrainingSettings);
		P_GET_STRUCT_REF(FLearningAgentsTrainerGameSettings,Z_Param_Out_TrainerGameSettings);
		P_GET_STRUCT_REF(FLearningAgentsTrainerPathSettings,Z_Param_Out_TrainerPathSettings);
		P_GET_STRUCT_REF(FLearningAgentsCriticSettings,Z_Param_Out_CriticSettings);
		P_GET_UBOOL(Z_Param_bReinitializePolicyNetwork);
		P_GET_UBOOL(Z_Param_bReinitializeCriticNetwork);
		P_GET_UBOOL(Z_Param_bResetAgentsOnBegin);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RunTraining(Z_Param_Out_TrainerTrainingSettings,Z_Param_Out_TrainerGameSettings,Z_Param_Out_TrainerPathSettings,Z_Param_Out_CriticSettings,Z_Param_bReinitializePolicyNetwork,Z_Param_bReinitializeCriticNetwork,Z_Param_bResetAgentsOnBegin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsTrainer::execProcessExperience)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProcessExperience();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsTrainer::execEvaluateCompletions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EvaluateCompletions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsTrainer::execEvaluateRewards)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EvaluateRewards();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsTrainer::execEndTraining)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndTraining();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsTrainer::execBeginTraining)
	{
		P_GET_STRUCT_REF(FLearningAgentsTrainerTrainingSettings,Z_Param_Out_TrainerTrainingSettings);
		P_GET_STRUCT_REF(FLearningAgentsTrainerGameSettings,Z_Param_Out_TrainerGameSettings);
		P_GET_STRUCT_REF(FLearningAgentsTrainerPathSettings,Z_Param_Out_TrainerPathSettings);
		P_GET_STRUCT_REF(FLearningAgentsCriticSettings,Z_Param_Out_CriticSettings);
		P_GET_UBOOL(Z_Param_bReinitializePolicyNetwork);
		P_GET_UBOOL(Z_Param_bReinitializeCriticNetwork);
		P_GET_UBOOL(Z_Param_bResetAgentsOnBegin);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginTraining(Z_Param_Out_TrainerTrainingSettings,Z_Param_Out_TrainerGameSettings,Z_Param_Out_TrainerPathSettings,Z_Param_Out_CriticSettings,Z_Param_bReinitializePolicyNetwork,Z_Param_bReinitializeCriticNetwork,Z_Param_bResetAgentsOnBegin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsTrainer::execIsTraining)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTraining();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsTrainer::execResetEpisodes)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_AgentIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetEpisodes_Implementation(Z_Param_Out_AgentIds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsTrainer::execSetCompletions)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_AgentIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCompletions_Implementation(Z_Param_Out_AgentIds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsTrainer::execSetupCompletions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupCompletions_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsTrainer::execSetRewards)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_AgentIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRewards_Implementation(Z_Param_Out_AgentIds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsTrainer::execSetupRewards)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupRewards_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsTrainer::execSetupTrainer)
	{
		P_GET_OBJECT(ULearningAgentsInteractor,Z_Param_InInteractor);
		P_GET_OBJECT(ULearningAgentsPolicy,Z_Param_InPolicy);
		P_GET_OBJECT(ULearningAgentsCritic,Z_Param_InCritic);
		P_GET_STRUCT_REF(FLearningAgentsTrainerSettings,Z_Param_Out_TrainerSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupTrainer(Z_Param_InInteractor,Z_Param_InPolicy,Z_Param_InCritic,Z_Param_Out_TrainerSettings);
		P_NATIVE_END;
	}
	struct LearningAgentsTrainer_eventResetEpisodes_Parms
	{
		TArray<int32> AgentIds;
	};
	struct LearningAgentsTrainer_eventSetCompletions_Parms
	{
		TArray<int32> AgentIds;
	};
	struct LearningAgentsTrainer_eventSetRewards_Parms
	{
		TArray<int32> AgentIds;
	};
	static FName NAME_ULearningAgentsTrainer_ResetEpisodes = FName(TEXT("ResetEpisodes"));
	void ULearningAgentsTrainer::ResetEpisodes(TArray<int32> const& AgentIds)
	{
		LearningAgentsTrainer_eventResetEpisodes_Parms Parms;
		Parms.AgentIds=AgentIds;
		ProcessEvent(FindFunctionChecked(NAME_ULearningAgentsTrainer_ResetEpisodes),&Parms);
	}
	static FName NAME_ULearningAgentsTrainer_SetCompletions = FName(TEXT("SetCompletions"));
	void ULearningAgentsTrainer::SetCompletions(TArray<int32> const& AgentIds)
	{
		LearningAgentsTrainer_eventSetCompletions_Parms Parms;
		Parms.AgentIds=AgentIds;
		ProcessEvent(FindFunctionChecked(NAME_ULearningAgentsTrainer_SetCompletions),&Parms);
	}
	static FName NAME_ULearningAgentsTrainer_SetRewards = FName(TEXT("SetRewards"));
	void ULearningAgentsTrainer::SetRewards(TArray<int32> const& AgentIds)
	{
		LearningAgentsTrainer_eventSetRewards_Parms Parms;
		Parms.AgentIds=AgentIds;
		ProcessEvent(FindFunctionChecked(NAME_ULearningAgentsTrainer_SetRewards),&Parms);
	}
	static FName NAME_ULearningAgentsTrainer_SetupCompletions = FName(TEXT("SetupCompletions"));
	void ULearningAgentsTrainer::SetupCompletions()
	{
		ProcessEvent(FindFunctionChecked(NAME_ULearningAgentsTrainer_SetupCompletions),NULL);
	}
	static FName NAME_ULearningAgentsTrainer_SetupRewards = FName(TEXT("SetupRewards"));
	void ULearningAgentsTrainer::SetupRewards()
	{
		ProcessEvent(FindFunctionChecked(NAME_ULearningAgentsTrainer_SetupRewards),NULL);
	}
	void ULearningAgentsTrainer::StaticRegisterNativesULearningAgentsTrainer()
	{
		UClass* Class = ULearningAgentsTrainer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginTraining", &ULearningAgentsTrainer::execBeginTraining },
			{ "EndTraining", &ULearningAgentsTrainer::execEndTraining },
			{ "EvaluateCompletions", &ULearningAgentsTrainer::execEvaluateCompletions },
			{ "EvaluateRewards", &ULearningAgentsTrainer::execEvaluateRewards },
			{ "GetReward", &ULearningAgentsTrainer::execGetReward },
			{ "HasTrainingFailed", &ULearningAgentsTrainer::execHasTrainingFailed },
			{ "IsCompleted", &ULearningAgentsTrainer::execIsCompleted },
			{ "IsTraining", &ULearningAgentsTrainer::execIsTraining },
			{ "ProcessExperience", &ULearningAgentsTrainer::execProcessExperience },
			{ "ResetEpisodes", &ULearningAgentsTrainer::execResetEpisodes },
			{ "RunTraining", &ULearningAgentsTrainer::execRunTraining },
			{ "SetCompletions", &ULearningAgentsTrainer::execSetCompletions },
			{ "SetRewards", &ULearningAgentsTrainer::execSetRewards },
			{ "SetupCompletions", &ULearningAgentsTrainer::execSetupCompletions },
			{ "SetupRewards", &ULearningAgentsTrainer::execSetupRewards },
			{ "SetupTrainer", &ULearningAgentsTrainer::execSetupTrainer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics
	{
		struct LearningAgentsTrainer_eventBeginTraining_Parms
		{
			FLearningAgentsTrainerTrainingSettings TrainerTrainingSettings;
			FLearningAgentsTrainerGameSettings TrainerGameSettings;
			FLearningAgentsTrainerPathSettings TrainerPathSettings;
			FLearningAgentsCriticSettings CriticSettings;
			bool bReinitializePolicyNetwork;
			bool bReinitializeCriticNetwork;
			bool bResetAgentsOnBegin;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrainerTrainingSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrainerTrainingSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrainerGameSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrainerGameSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrainerPathSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrainerPathSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CriticSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CriticSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReinitializePolicyNetwork_MetaData[];
#endif
		static void NewProp_bReinitializePolicyNetwork_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReinitializePolicyNetwork;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReinitializeCriticNetwork_MetaData[];
#endif
		static void NewProp_bReinitializeCriticNetwork_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReinitializeCriticNetwork;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetAgentsOnBegin_MetaData[];
#endif
		static void NewProp_bResetAgentsOnBegin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetAgentsOnBegin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::NewProp_TrainerTrainingSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::NewProp_TrainerTrainingSettings = { "TrainerTrainingSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsTrainer_eventBeginTraining_Parms, TrainerTrainingSettings), Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::NewProp_TrainerTrainingSettings_MetaData), Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::NewProp_TrainerTrainingSettings_MetaData) }; // 2505288296
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::NewProp_TrainerGameSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::NewProp_TrainerGameSettings = { "TrainerGameSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsTrainer_eventBeginTraining_Parms, TrainerGameSettings), Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::NewProp_TrainerGameSettings_MetaData), Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::NewProp_TrainerGameSettings_MetaData) }; // 2929973695
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::NewProp_TrainerPathSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::NewProp_TrainerPathSettings = { "TrainerPathSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsTrainer_eventBeginTraining_Parms, TrainerPathSettings), Z_Construct_UScriptStruct_FLearningAgentsTrainerPathSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::NewProp_TrainerPathSettings_MetaData), Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::NewProp_TrainerPathSettings_MetaData) }; // 2984407820
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::NewProp_CriticSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::NewProp_CriticSettings = { "CriticSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsTrainer_eventBeginTraining_Parms, CriticSettings), Z_Construct_UScriptStruct_FLearningAgentsCriticSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::NewProp_CriticSettings_MetaData), Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::NewProp_CriticSettings_MetaData) }; // 3034816345
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::NewProp_bReinitializePolicyNetwork_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::NewProp_bReinitializePolicyNetwork_SetBit(void* Obj)
	{
		((LearningAgentsTrainer_eventBeginTraining_Parms*)Obj)->bReinitializePolicyNetwork = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::NewProp_bReinitializePolicyNetwork = { "bReinitializePolicyNetwork", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LearningAgentsTrainer_eventBeginTraining_Parms), &Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::NewProp_bReinitializePolicyNetwork_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::NewProp_bReinitializePolicyNetwork_MetaData), Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::NewProp_bReinitializePolicyNetwork_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::NewProp_bReinitializeCriticNetwork_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::NewProp_bReinitializeCriticNetwork_SetBit(void* Obj)
	{
		((LearningAgentsTrainer_eventBeginTraining_Parms*)Obj)->bReinitializeCriticNetwork = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::NewProp_bReinitializeCriticNetwork = { "bReinitializeCriticNetwork", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LearningAgentsTrainer_eventBeginTraining_Parms), &Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::NewProp_bReinitializeCriticNetwork_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::NewProp_bReinitializeCriticNetwork_MetaData), Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::NewProp_bReinitializeCriticNetwork_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::NewProp_bResetAgentsOnBegin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::NewProp_bResetAgentsOnBegin_SetBit(void* Obj)
	{
		((LearningAgentsTrainer_eventBeginTraining_Parms*)Obj)->bResetAgentsOnBegin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::NewProp_bResetAgentsOnBegin = { "bResetAgentsOnBegin", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LearningAgentsTrainer_eventBeginTraining_Parms), &Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::NewProp_bResetAgentsOnBegin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::NewProp_bResetAgentsOnBegin_MetaData), Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::NewProp_bResetAgentsOnBegin_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::NewProp_TrainerTrainingSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::NewProp_TrainerGameSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::NewProp_TrainerPathSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::NewProp_CriticSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::NewProp_bReinitializePolicyNetwork,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::NewProp_bReinitializeCriticNetwork,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::NewProp_bResetAgentsOnBegin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Begins the training process with the provided settings.\n\x09 * @param TrainerTrainingSettings The settings for this training run.\n\x09 * @param TrainerGameSettings The settings that will affect the game's simulation.\n\x09 * @param TrainerPathSettings The path settings used by the trainer.\n\x09 * @param CriticSettings The settings for the critic (if we are using one).\n\x09 * @param bReinitializePolicyNetwork If true, reinitialize the policy. Set this to false if your policy is pre-trained, e.g. with imitation learning.\n\x09 * @param bReinitializeCriticNetwork If true, reinitialize the critic. Set this to false if your critic is pre-trained.\n\x09 * @param bResetAgentsOnBegin If true, reset all agents at the beginning of training.\n\x09 */" },
		{ "CPP_Default_bReinitializeCriticNetwork", "true" },
		{ "CPP_Default_bReinitializePolicyNetwork", "true" },
		{ "CPP_Default_bResetAgentsOnBegin", "true" },
		{ "CPP_Default_CriticSettings", "()" },
		{ "CPP_Default_TrainerGameSettings", "()" },
		{ "CPP_Default_TrainerPathSettings", "()" },
		{ "CPP_Default_TrainerTrainingSettings", "()" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "Begins the training process with the provided settings.\n@param TrainerTrainingSettings The settings for this training run.\n@param TrainerGameSettings The settings that will affect the game's simulation.\n@param TrainerPathSettings The path settings used by the trainer.\n@param CriticSettings The settings for the critic (if we are using one).\n@param bReinitializePolicyNetwork If true, reinitialize the policy. Set this to false if your policy is pre-trained, e.g. with imitation learning.\n@param bReinitializeCriticNetwork If true, reinitialize the critic. Set this to false if your critic is pre-trained.\n@param bResetAgentsOnBegin If true, reset all agents at the beginning of training." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsTrainer, nullptr, "BeginTraining", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::LearningAgentsTrainer_eventBeginTraining_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::LearningAgentsTrainer_eventBeginTraining_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsTrainer_EndTraining_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsTrainer_EndTraining_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** Stops the training process. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "Stops the training process." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsTrainer_EndTraining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsTrainer, nullptr, "EndTraining", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_EndTraining_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsTrainer_EndTraining_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULearningAgentsTrainer_EndTraining()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsTrainer_EndTraining_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsTrainer_EvaluateCompletions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsTrainer_EvaluateCompletions_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Call this function when it is time to evaluate the completions for your agents. This should be done at the beginning\n\x09 * of each iteration of your training loop after the initial step, i.e. after taking an action, you want to get into\n\x09 * the next state before evaluating the completions.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "Call this function when it is time to evaluate the completions for your agents. This should be done at the beginning\nof each iteration of your training loop after the initial step, i.e. after taking an action, you want to get into\nthe next state before evaluating the completions." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsTrainer_EvaluateCompletions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsTrainer, nullptr, "EvaluateCompletions", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_EvaluateCompletions_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsTrainer_EvaluateCompletions_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULearningAgentsTrainer_EvaluateCompletions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsTrainer_EvaluateCompletions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsTrainer_EvaluateRewards_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsTrainer_EvaluateRewards_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Call this function when it is time to evaluate the rewards for your agents. This should be done at the beginning\n\x09 * of each iteration of your training loop after the initial step, i.e. after taking an action, you want to get into\n\x09 * the next state before evaluating the rewards.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "Call this function when it is time to evaluate the rewards for your agents. This should be done at the beginning\nof each iteration of your training loop after the initial step, i.e. after taking an action, you want to get into\nthe next state before evaluating the rewards." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsTrainer_EvaluateRewards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsTrainer, nullptr, "EvaluateRewards", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_EvaluateRewards_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsTrainer_EvaluateRewards_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULearningAgentsTrainer_EvaluateRewards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsTrainer_EvaluateRewards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsTrainer_GetReward_Statics
	{
		struct LearningAgentsTrainer_eventGetReward_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsTrainer_GetReward_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULearningAgentsTrainer_GetReward_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsTrainer_eventGetReward_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_GetReward_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_ULearningAgentsTrainer_GetReward_Statics::NewProp_AgentId_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULearningAgentsTrainer_GetReward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsTrainer_eventGetReward_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsTrainer_GetReward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsTrainer_GetReward_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsTrainer_GetReward_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsTrainer_GetReward_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Gets the current reward for an agent according to the critic. Should be called only after EvaluateRewards.\n\x09 *\n\x09 * @param AgentId\x09The AgentId to look-up the reward for\n\x09 * @returns\x09\x09\x09The reward\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "Gets the current reward for an agent according to the critic. Should be called only after EvaluateRewards.\n\n@param AgentId       The AgentId to look-up the reward for\n@returns                     The reward" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsTrainer_GetReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsTrainer, nullptr, "GetReward", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsTrainer_GetReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_GetReward_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsTrainer_GetReward_Statics::LearningAgentsTrainer_eventGetReward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_GetReward_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsTrainer_GetReward_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_GetReward_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsTrainer_GetReward_Statics::LearningAgentsTrainer_eventGetReward_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsTrainer_GetReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsTrainer_GetReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsTrainer_HasTrainingFailed_Statics
	{
		struct LearningAgentsTrainer_eventHasTrainingFailed_Parms
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
	void Z_Construct_UFunction_ULearningAgentsTrainer_HasTrainingFailed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LearningAgentsTrainer_eventHasTrainingFailed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULearningAgentsTrainer_HasTrainingFailed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LearningAgentsTrainer_eventHasTrainingFailed_Parms), &Z_Construct_UFunction_ULearningAgentsTrainer_HasTrainingFailed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsTrainer_HasTrainingFailed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsTrainer_HasTrainingFailed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsTrainer_HasTrainingFailed_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Returns true if the trainer has failed to communicate with the external training process. This can be used in\n\x09 * combination with RunTraining to avoid filling the logs with errors.\n\x09 *\n\x09 * @returns\x09\x09\x09\x09True if the training has failed. Otherwise, false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "Returns true if the trainer has failed to communicate with the external training process. This can be used in\ncombination with RunTraining to avoid filling the logs with errors.\n\n@returns                             True if the training has failed. Otherwise, false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsTrainer_HasTrainingFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsTrainer, nullptr, "HasTrainingFailed", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsTrainer_HasTrainingFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_HasTrainingFailed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsTrainer_HasTrainingFailed_Statics::LearningAgentsTrainer_eventHasTrainingFailed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_HasTrainingFailed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsTrainer_HasTrainingFailed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_HasTrainingFailed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsTrainer_HasTrainingFailed_Statics::LearningAgentsTrainer_eventHasTrainingFailed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsTrainer_HasTrainingFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsTrainer_HasTrainingFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsTrainer_IsCompleted_Statics
	{
		struct LearningAgentsTrainer_eventIsCompleted_Parms
		{
			int32 AgentId;
			ELearningAgentsCompletion OutCompletion;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutCompletion_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutCompletion;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsTrainer_IsCompleted_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULearningAgentsTrainer_IsCompleted_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsTrainer_eventIsCompleted_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_IsCompleted_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_ULearningAgentsTrainer_IsCompleted_Statics::NewProp_AgentId_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULearningAgentsTrainer_IsCompleted_Statics::NewProp_OutCompletion_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULearningAgentsTrainer_IsCompleted_Statics::NewProp_OutCompletion = { "OutCompletion", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsTrainer_eventIsCompleted_Parms, OutCompletion), Z_Construct_UEnum_LearningAgentsTraining_ELearningAgentsCompletion, METADATA_PARAMS(0, nullptr) }; // 1079080398
	void Z_Construct_UFunction_ULearningAgentsTrainer_IsCompleted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LearningAgentsTrainer_eventIsCompleted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULearningAgentsTrainer_IsCompleted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LearningAgentsTrainer_eventIsCompleted_Parms), &Z_Construct_UFunction_ULearningAgentsTrainer_IsCompleted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsTrainer_IsCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsTrainer_IsCompleted_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsTrainer_IsCompleted_Statics::NewProp_OutCompletion_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsTrainer_IsCompleted_Statics::NewProp_OutCompletion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsTrainer_IsCompleted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsTrainer_IsCompleted_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Gets if the agent will complete the episode or not according to the given set of completions. Should be called \n\x09 * only after EvaluateCompletions.\n\x09 *\n\x09 * @param AgentId\x09\x09The AgentId to look-up the completion for\n\x09 * @param OutCompletion\x09The completion type if the agent will complete the episode\n\x09 * @returns\x09\x09\x09\x09If the agent will complete the episode\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "Gets if the agent will complete the episode or not according to the given set of completions. Should be called\nonly after EvaluateCompletions.\n\n@param AgentId               The AgentId to look-up the completion for\n@param OutCompletion The completion type if the agent will complete the episode\n@returns                             If the agent will complete the episode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsTrainer_IsCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsTrainer, nullptr, "IsCompleted", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsTrainer_IsCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_IsCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsTrainer_IsCompleted_Statics::LearningAgentsTrainer_eventIsCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_IsCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsTrainer_IsCompleted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_IsCompleted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsTrainer_IsCompleted_Statics::LearningAgentsTrainer_eventIsCompleted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsTrainer_IsCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsTrainer_IsCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsTrainer_IsTraining_Statics
	{
		struct LearningAgentsTrainer_eventIsTraining_Parms
		{
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsTrainer_IsTraining_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULearningAgentsTrainer_IsTraining_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LearningAgentsTrainer_eventIsTraining_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULearningAgentsTrainer_IsTraining_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LearningAgentsTrainer_eventIsTraining_Parms), &Z_Construct_UFunction_ULearningAgentsTrainer_IsTraining_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_IsTraining_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ULearningAgentsTrainer_IsTraining_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsTrainer_IsTraining_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsTrainer_IsTraining_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsTrainer_IsTraining_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** Returns true if the trainer is currently training; Otherwise, false. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "Returns true if the trainer is currently training; Otherwise, false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsTrainer_IsTraining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsTrainer, nullptr, "IsTraining", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsTrainer_IsTraining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_IsTraining_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsTrainer_IsTraining_Statics::LearningAgentsTrainer_eventIsTraining_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_IsTraining_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsTrainer_IsTraining_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_IsTraining_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsTrainer_IsTraining_Statics::LearningAgentsTrainer_eventIsTraining_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsTrainer_IsTraining()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsTrainer_IsTraining_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsTrainer_ProcessExperience_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsTrainer_ProcessExperience_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Call this function at the end of each step of your training loop. This takes the current observations/actions/\n\x09 * rewards and moves them into the episode experience buffer. All agents with full episode buffers or those which\n\x09 * have been signaled complete will be reset. If enough experience is gathered, it will be sent to the training \n\x09 * process and an iteration of training will be run and the updated policy will be synced back.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "Call this function at the end of each step of your training loop. This takes the current observations/actions/\nrewards and moves them into the episode experience buffer. All agents with full episode buffers or those which\nhave been signaled complete will be reset. If enough experience is gathered, it will be sent to the training\nprocess and an iteration of training will be run and the updated policy will be synced back." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsTrainer_ProcessExperience_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsTrainer, nullptr, "ProcessExperience", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_ProcessExperience_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsTrainer_ProcessExperience_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULearningAgentsTrainer_ProcessExperience()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsTrainer_ProcessExperience_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsTrainer_ResetEpisodes_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AgentIds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULearningAgentsTrainer_ResetEpisodes_Statics::NewProp_AgentIds_Inner = { "AgentIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsTrainer_ResetEpisodes_Statics::NewProp_AgentIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULearningAgentsTrainer_ResetEpisodes_Statics::NewProp_AgentIds = { "AgentIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsTrainer_eventResetEpisodes_Parms, AgentIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_ResetEpisodes_Statics::NewProp_AgentIds_MetaData), Z_Construct_UFunction_ULearningAgentsTrainer_ResetEpisodes_Statics::NewProp_AgentIds_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsTrainer_ResetEpisodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsTrainer_ResetEpisodes_Statics::NewProp_AgentIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsTrainer_ResetEpisodes_Statics::NewProp_AgentIds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsTrainer_ResetEpisodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * During this event, all episodes should be reset for each agent.\n\x09 * @param AgentIds The ids of the agents that need resetting.\n\x09 * @see GetAgent to get the agent corresponding to each id.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "During this event, all episodes should be reset for each agent.\n@param AgentIds The ids of the agents that need resetting.\n@see GetAgent to get the agent corresponding to each id." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsTrainer_ResetEpisodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsTrainer, nullptr, "ResetEpisodes", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsTrainer_ResetEpisodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_ResetEpisodes_Statics::PropPointers), sizeof(LearningAgentsTrainer_eventResetEpisodes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_ResetEpisodes_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsTrainer_ResetEpisodes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_ResetEpisodes_Statics::PropPointers) < 2048);
	static_assert(sizeof(LearningAgentsTrainer_eventResetEpisodes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsTrainer_ResetEpisodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsTrainer_ResetEpisodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics
	{
		struct LearningAgentsTrainer_eventRunTraining_Parms
		{
			FLearningAgentsTrainerTrainingSettings TrainerTrainingSettings;
			FLearningAgentsTrainerGameSettings TrainerGameSettings;
			FLearningAgentsTrainerPathSettings TrainerPathSettings;
			FLearningAgentsCriticSettings CriticSettings;
			bool bReinitializePolicyNetwork;
			bool bReinitializeCriticNetwork;
			bool bResetAgentsOnBegin;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrainerTrainingSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrainerTrainingSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrainerGameSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrainerGameSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrainerPathSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrainerPathSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CriticSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CriticSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReinitializePolicyNetwork_MetaData[];
#endif
		static void NewProp_bReinitializePolicyNetwork_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReinitializePolicyNetwork;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReinitializeCriticNetwork_MetaData[];
#endif
		static void NewProp_bReinitializeCriticNetwork_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReinitializeCriticNetwork;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetAgentsOnBegin_MetaData[];
#endif
		static void NewProp_bResetAgentsOnBegin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetAgentsOnBegin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::NewProp_TrainerTrainingSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::NewProp_TrainerTrainingSettings = { "TrainerTrainingSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsTrainer_eventRunTraining_Parms, TrainerTrainingSettings), Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::NewProp_TrainerTrainingSettings_MetaData), Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::NewProp_TrainerTrainingSettings_MetaData) }; // 2505288296
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::NewProp_TrainerGameSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::NewProp_TrainerGameSettings = { "TrainerGameSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsTrainer_eventRunTraining_Parms, TrainerGameSettings), Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::NewProp_TrainerGameSettings_MetaData), Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::NewProp_TrainerGameSettings_MetaData) }; // 2929973695
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::NewProp_TrainerPathSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::NewProp_TrainerPathSettings = { "TrainerPathSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsTrainer_eventRunTraining_Parms, TrainerPathSettings), Z_Construct_UScriptStruct_FLearningAgentsTrainerPathSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::NewProp_TrainerPathSettings_MetaData), Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::NewProp_TrainerPathSettings_MetaData) }; // 2984407820
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::NewProp_CriticSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::NewProp_CriticSettings = { "CriticSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsTrainer_eventRunTraining_Parms, CriticSettings), Z_Construct_UScriptStruct_FLearningAgentsCriticSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::NewProp_CriticSettings_MetaData), Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::NewProp_CriticSettings_MetaData) }; // 3034816345
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::NewProp_bReinitializePolicyNetwork_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::NewProp_bReinitializePolicyNetwork_SetBit(void* Obj)
	{
		((LearningAgentsTrainer_eventRunTraining_Parms*)Obj)->bReinitializePolicyNetwork = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::NewProp_bReinitializePolicyNetwork = { "bReinitializePolicyNetwork", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LearningAgentsTrainer_eventRunTraining_Parms), &Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::NewProp_bReinitializePolicyNetwork_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::NewProp_bReinitializePolicyNetwork_MetaData), Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::NewProp_bReinitializePolicyNetwork_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::NewProp_bReinitializeCriticNetwork_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::NewProp_bReinitializeCriticNetwork_SetBit(void* Obj)
	{
		((LearningAgentsTrainer_eventRunTraining_Parms*)Obj)->bReinitializeCriticNetwork = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::NewProp_bReinitializeCriticNetwork = { "bReinitializeCriticNetwork", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LearningAgentsTrainer_eventRunTraining_Parms), &Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::NewProp_bReinitializeCriticNetwork_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::NewProp_bReinitializeCriticNetwork_MetaData), Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::NewProp_bReinitializeCriticNetwork_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::NewProp_bResetAgentsOnBegin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::NewProp_bResetAgentsOnBegin_SetBit(void* Obj)
	{
		((LearningAgentsTrainer_eventRunTraining_Parms*)Obj)->bResetAgentsOnBegin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::NewProp_bResetAgentsOnBegin = { "bResetAgentsOnBegin", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LearningAgentsTrainer_eventRunTraining_Parms), &Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::NewProp_bResetAgentsOnBegin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::NewProp_bResetAgentsOnBegin_MetaData), Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::NewProp_bResetAgentsOnBegin_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::NewProp_TrainerTrainingSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::NewProp_TrainerGameSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::NewProp_TrainerPathSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::NewProp_CriticSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::NewProp_bReinitializePolicyNetwork,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::NewProp_bReinitializeCriticNetwork,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::NewProp_bResetAgentsOnBegin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Convenience function that runs a basic training loop. If training has not been started, it will start it, and \n\x09 * then call RunInference. On each following call to this function, it will call EvaluateRewards, \n\x09 * EvaluateCompletions, and ProcessExperience, followed by RunInference.\n\x09 * @param TrainerTrainingSettings The settings for this training run.\n\x09 * @param TrainerGameSettings The settings that will affect the game's simulation.\n\x09 * @param TrainerPathSettings The path settings used by the trainer.\n\x09 * @param CriticSettings The settings for the critic (if we are using one).\n\x09 * @param bReinitializePolicyNetwork If true, reinitialize the policy. Set this to false if your policy is pre-trained, e.g. with imitation learning.\n\x09 * @param bReinitializeCriticNetwork If true, reinitialize the critic. Set this to false if your critic is pre-trained.\n\x09 * @param bResetAgentsOnBegin If true, reset all agents at the beginning of training.\n\x09 */" },
		{ "CPP_Default_bReinitializeCriticNetwork", "true" },
		{ "CPP_Default_bReinitializePolicyNetwork", "true" },
		{ "CPP_Default_bResetAgentsOnBegin", "true" },
		{ "CPP_Default_CriticSettings", "()" },
		{ "CPP_Default_TrainerGameSettings", "()" },
		{ "CPP_Default_TrainerPathSettings", "()" },
		{ "CPP_Default_TrainerTrainingSettings", "()" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "Convenience function that runs a basic training loop. If training has not been started, it will start it, and\nthen call RunInference. On each following call to this function, it will call EvaluateRewards,\nEvaluateCompletions, and ProcessExperience, followed by RunInference.\n@param TrainerTrainingSettings The settings for this training run.\n@param TrainerGameSettings The settings that will affect the game's simulation.\n@param TrainerPathSettings The path settings used by the trainer.\n@param CriticSettings The settings for the critic (if we are using one).\n@param bReinitializePolicyNetwork If true, reinitialize the policy. Set this to false if your policy is pre-trained, e.g. with imitation learning.\n@param bReinitializeCriticNetwork If true, reinitialize the critic. Set this to false if your critic is pre-trained.\n@param bResetAgentsOnBegin If true, reset all agents at the beginning of training." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsTrainer, nullptr, "RunTraining", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::LearningAgentsTrainer_eventRunTraining_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::LearningAgentsTrainer_eventRunTraining_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsTrainer_SetCompletions_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AgentIds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULearningAgentsTrainer_SetCompletions_Statics::NewProp_AgentIds_Inner = { "AgentIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsTrainer_SetCompletions_Statics::NewProp_AgentIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULearningAgentsTrainer_SetCompletions_Statics::NewProp_AgentIds = { "AgentIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsTrainer_eventSetCompletions_Parms, AgentIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_SetCompletions_Statics::NewProp_AgentIds_MetaData), Z_Construct_UFunction_ULearningAgentsTrainer_SetCompletions_Statics::NewProp_AgentIds_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsTrainer_SetCompletions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsTrainer_SetCompletions_Statics::NewProp_AgentIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsTrainer_SetCompletions_Statics::NewProp_AgentIds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsTrainer_SetCompletions_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * During this event, all completions should be set for each agent.\n\x09 * @param AgentIds The list of agent ids to set completions for.\n\x09 * @see LearningAgentsCompletions.h for the list of available completions.\n\x09 * @see GetAgent to get the agent corresponding to each id.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "During this event, all completions should be set for each agent.\n@param AgentIds The list of agent ids to set completions for.\n@see LearningAgentsCompletions.h for the list of available completions.\n@see GetAgent to get the agent corresponding to each id." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsTrainer_SetCompletions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsTrainer, nullptr, "SetCompletions", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsTrainer_SetCompletions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_SetCompletions_Statics::PropPointers), sizeof(LearningAgentsTrainer_eventSetCompletions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_SetCompletions_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsTrainer_SetCompletions_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_SetCompletions_Statics::PropPointers) < 2048);
	static_assert(sizeof(LearningAgentsTrainer_eventSetCompletions_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsTrainer_SetCompletions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsTrainer_SetCompletions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsTrainer_SetRewards_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AgentIds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULearningAgentsTrainer_SetRewards_Statics::NewProp_AgentIds_Inner = { "AgentIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsTrainer_SetRewards_Statics::NewProp_AgentIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULearningAgentsTrainer_SetRewards_Statics::NewProp_AgentIds = { "AgentIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsTrainer_eventSetRewards_Parms, AgentIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_SetRewards_Statics::NewProp_AgentIds_MetaData), Z_Construct_UFunction_ULearningAgentsTrainer_SetRewards_Statics::NewProp_AgentIds_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsTrainer_SetRewards_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsTrainer_SetRewards_Statics::NewProp_AgentIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsTrainer_SetRewards_Statics::NewProp_AgentIds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsTrainer_SetRewards_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * During this event, all rewards/penalties should be set for each agent.\n\x09 * @param AgentIds The list of agent ids to set rewards/penalties for.\n\x09 * @see LearningAgentsRewards.h for the list of available rewards/penalties.\n\x09 * @see GetAgent to get the agent corresponding to each id.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "During this event, all rewards/penalties should be set for each agent.\n@param AgentIds The list of agent ids to set rewards/penalties for.\n@see LearningAgentsRewards.h for the list of available rewards/penalties.\n@see GetAgent to get the agent corresponding to each id." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsTrainer_SetRewards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsTrainer, nullptr, "SetRewards", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsTrainer_SetRewards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_SetRewards_Statics::PropPointers), sizeof(LearningAgentsTrainer_eventSetRewards_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_SetRewards_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsTrainer_SetRewards_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_SetRewards_Statics::PropPointers) < 2048);
	static_assert(sizeof(LearningAgentsTrainer_eventSetRewards_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsTrainer_SetRewards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsTrainer_SetRewards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsTrainer_SetupCompletions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsTrainer_SetupCompletions_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * During this event, all completions should be added to this trainer.\n\x09 * @see LearningAgentsCompletions.h for the list of available completions.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "During this event, all completions should be added to this trainer.\n@see LearningAgentsCompletions.h for the list of available completions." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsTrainer_SetupCompletions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsTrainer, nullptr, "SetupCompletions", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_SetupCompletions_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsTrainer_SetupCompletions_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULearningAgentsTrainer_SetupCompletions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsTrainer_SetupCompletions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsTrainer_SetupRewards_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsTrainer_SetupRewards_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * During this event, all rewards/penalties should be added to this trainer.\n\x09 * @see LearningAgentsRewards.h for the list of available rewards/penalties.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "During this event, all rewards/penalties should be added to this trainer.\n@see LearningAgentsRewards.h for the list of available rewards/penalties." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsTrainer_SetupRewards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsTrainer, nullptr, "SetupRewards", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_SetupRewards_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsTrainer_SetupRewards_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULearningAgentsTrainer_SetupRewards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsTrainer_SetupRewards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsTrainer_SetupTrainer_Statics
	{
		struct LearningAgentsTrainer_eventSetupTrainer_Parms
		{
			ULearningAgentsInteractor* InInteractor;
			ULearningAgentsPolicy* InPolicy;
			ULearningAgentsCritic* InCritic;
			FLearningAgentsTrainerSettings TrainerSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInteractor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInteractor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPolicy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCritic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InCritic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrainerSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrainerSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsTrainer_SetupTrainer_Statics::NewProp_InInteractor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULearningAgentsTrainer_SetupTrainer_Statics::NewProp_InInteractor = { "InInteractor", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsTrainer_eventSetupTrainer_Parms, InInteractor), Z_Construct_UClass_ULearningAgentsInteractor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_SetupTrainer_Statics::NewProp_InInteractor_MetaData), Z_Construct_UFunction_ULearningAgentsTrainer_SetupTrainer_Statics::NewProp_InInteractor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsTrainer_SetupTrainer_Statics::NewProp_InPolicy_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULearningAgentsTrainer_SetupTrainer_Statics::NewProp_InPolicy = { "InPolicy", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsTrainer_eventSetupTrainer_Parms, InPolicy), Z_Construct_UClass_ULearningAgentsPolicy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_SetupTrainer_Statics::NewProp_InPolicy_MetaData), Z_Construct_UFunction_ULearningAgentsTrainer_SetupTrainer_Statics::NewProp_InPolicy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsTrainer_SetupTrainer_Statics::NewProp_InCritic_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULearningAgentsTrainer_SetupTrainer_Statics::NewProp_InCritic = { "InCritic", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsTrainer_eventSetupTrainer_Parms, InCritic), Z_Construct_UClass_ULearningAgentsCritic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_SetupTrainer_Statics::NewProp_InCritic_MetaData), Z_Construct_UFunction_ULearningAgentsTrainer_SetupTrainer_Statics::NewProp_InCritic_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsTrainer_SetupTrainer_Statics::NewProp_TrainerSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULearningAgentsTrainer_SetupTrainer_Statics::NewProp_TrainerSettings = { "TrainerSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsTrainer_eventSetupTrainer_Parms, TrainerSettings), Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_SetupTrainer_Statics::NewProp_TrainerSettings_MetaData), Z_Construct_UFunction_ULearningAgentsTrainer_SetupTrainer_Statics::NewProp_TrainerSettings_MetaData) }; // 3095818436
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsTrainer_SetupTrainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsTrainer_SetupTrainer_Statics::NewProp_InInteractor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsTrainer_SetupTrainer_Statics::NewProp_InPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsTrainer_SetupTrainer_Statics::NewProp_InCritic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsTrainer_SetupTrainer_Statics::NewProp_TrainerSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsTrainer_SetupTrainer_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Initializes this object and runs the setup functions for rewards and completions.\n\x09 * @param InInteractor The agent interactor we are training with.\n\x09 * @param InPolicy The policy to be trained.\n\x09 * @param InCritic Optional - only needs to be provided if we want the critic to be accessible at runtime.\n\x09 * @param TrainerSettings The trainer settings to use.\n\x09 */" },
		{ "CPP_Default_InCritic", "None" },
		{ "CPP_Default_TrainerSettings", "()" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "Initializes this object and runs the setup functions for rewards and completions.\n@param InInteractor The agent interactor we are training with.\n@param InPolicy The policy to be trained.\n@param InCritic Optional - only needs to be provided if we want the critic to be accessible at runtime.\n@param TrainerSettings The trainer settings to use." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsTrainer_SetupTrainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsTrainer, nullptr, "SetupTrainer", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsTrainer_SetupTrainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_SetupTrainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsTrainer_SetupTrainer_Statics::LearningAgentsTrainer_eventSetupTrainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_SetupTrainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsTrainer_SetupTrainer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsTrainer_SetupTrainer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsTrainer_SetupTrainer_Statics::LearningAgentsTrainer_eventSetupTrainer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsTrainer_SetupTrainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsTrainer_SetupTrainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULearningAgentsTrainer);
	UClass* Z_Construct_UClass_ULearningAgentsTrainer_NoRegister()
	{
		return ULearningAgentsTrainer::StaticClass();
	}
	struct Z_Construct_UClass_ULearningAgentsTrainer_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Policy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Policy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Critic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Critic;
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
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RewardObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RewardObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RewardObjects;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CompletionObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompletionObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CompletionObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULearningAgentsTrainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULearningAgentsManagerComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgentsTraining,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsTrainer_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULearningAgentsTrainer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULearningAgentsTrainer_BeginTraining, "BeginTraining" }, // 2306338099
		{ &Z_Construct_UFunction_ULearningAgentsTrainer_EndTraining, "EndTraining" }, // 4121047626
		{ &Z_Construct_UFunction_ULearningAgentsTrainer_EvaluateCompletions, "EvaluateCompletions" }, // 4124983754
		{ &Z_Construct_UFunction_ULearningAgentsTrainer_EvaluateRewards, "EvaluateRewards" }, // 260783589
		{ &Z_Construct_UFunction_ULearningAgentsTrainer_GetReward, "GetReward" }, // 1140517094
		{ &Z_Construct_UFunction_ULearningAgentsTrainer_HasTrainingFailed, "HasTrainingFailed" }, // 3656496217
		{ &Z_Construct_UFunction_ULearningAgentsTrainer_IsCompleted, "IsCompleted" }, // 3666577337
		{ &Z_Construct_UFunction_ULearningAgentsTrainer_IsTraining, "IsTraining" }, // 239786872
		{ &Z_Construct_UFunction_ULearningAgentsTrainer_ProcessExperience, "ProcessExperience" }, // 3097965889
		{ &Z_Construct_UFunction_ULearningAgentsTrainer_ResetEpisodes, "ResetEpisodes" }, // 3414830849
		{ &Z_Construct_UFunction_ULearningAgentsTrainer_RunTraining, "RunTraining" }, // 1384689223
		{ &Z_Construct_UFunction_ULearningAgentsTrainer_SetCompletions, "SetCompletions" }, // 3587872982
		{ &Z_Construct_UFunction_ULearningAgentsTrainer_SetRewards, "SetRewards" }, // 1336108476
		{ &Z_Construct_UFunction_ULearningAgentsTrainer_SetupCompletions, "SetupCompletions" }, // 4019969378
		{ &Z_Construct_UFunction_ULearningAgentsTrainer_SetupRewards, "SetupRewards" }, // 2509170200
		{ &Z_Construct_UFunction_ULearningAgentsTrainer_SetupTrainer, "SetupTrainer" }, // 867317827
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsTrainer_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsTrainer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The ULearningAgentsTrainer is the core class for reinforcement learning training. It has a few responsibilities:\n *   1) It keeps track of which agents are gathering training data.\n *   2) It defines how those agents' rewards, completions, and resets are implemented.\n *   3) It provides methods for orchestrating the training process.\n *\n * To use this class, you need to implement the SetupRewards and SetupCompletions functions (as well as their\n * corresponding SetRewards and SetCompletions functions), which will define the rewards and penalties the agent\n * receives and what conditions cause an episode to end. Before you can begin training, you need to call SetupTrainer,\n * which will initialize the underlying data structures, and you need to call AddAgent for each agent you want to gather\n * training data from.\n *\n * @see ULearningAgentsInteractor to understand how observations and actions work.\n */" },
		{ "IncludePath", "LearningAgentsTrainer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "The ULearningAgentsTrainer is the core class for reinforcement learning training. It has a few responsibilities:\n  1) It keeps track of which agents are gathering training data.\n  2) It defines how those agents' rewards, completions, and resets are implemented.\n  3) It provides methods for orchestrating the training process.\n\nTo use this class, you need to implement the SetupRewards and SetupCompletions functions (as well as their\ncorresponding SetRewards and SetCompletions functions), which will define the rewards and penalties the agent\nreceives and what conditions cause an episode to end. Before you can begin training, you need to call SetupTrainer,\nwhich will initialize the underlying data structures, and you need to call AddAgent for each agent you want to gather\ntraining data from.\n\n@see ULearningAgentsInteractor to understand how observations and actions work." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_Interactor_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** The agent interactor associated with this component. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "The agent interactor associated with this component." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x00440000000a2009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULearningAgentsTrainer, Interactor), Z_Construct_UClass_ULearningAgentsInteractor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_Interactor_MetaData), Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_Interactor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_Policy_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** The current policy for experience gathering. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "The current policy for experience gathering." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_Policy = { "Policy", nullptr, (EPropertyFlags)0x00440000000a2009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULearningAgentsTrainer, Policy), Z_Construct_UClass_ULearningAgentsPolicy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_Policy_MetaData), Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_Policy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_Critic_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** The current critic. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "The current critic." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_Critic = { "Critic", nullptr, (EPropertyFlags)0x00440000000a2009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULearningAgentsTrainer, Critic), Z_Construct_UClass_ULearningAgentsCritic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_Critic_MetaData), Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_Critic_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_bIsTraining_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** True if training is currently in-progress. Otherwise, false. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "True if training is currently in-progress. Otherwise, false." },
	};
#endif
	void Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_bIsTraining_SetBit(void* Obj)
	{
		((ULearningAgentsTrainer*)Obj)->bIsTraining = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_bIsTraining = { "bIsTraining", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULearningAgentsTrainer), &Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_bIsTraining_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_bIsTraining_MetaData), Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_bIsTraining_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_bHasTrainingFailed_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * True if trainer encountered an unrecoverable error during training (e.g. the trainer process timed out). Otherwise, false.\n\x09 * This exists mainly to keep the editor from locking up if something goes wrong during training.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "True if trainer encountered an unrecoverable error during training (e.g. the trainer process timed out). Otherwise, false.\nThis exists mainly to keep the editor from locking up if something goes wrong during training." },
	};
#endif
	void Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_bHasTrainingFailed_SetBit(void* Obj)
	{
		((ULearningAgentsTrainer*)Obj)->bHasTrainingFailed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_bHasTrainingFailed = { "bHasTrainingFailed", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULearningAgentsTrainer), &Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_bHasTrainingFailed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_bHasTrainingFailed_MetaData), Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_bHasTrainingFailed_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_RewardObjects_Inner = { "RewardObjects", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULearningAgentsReward_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_RewardObjects_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** The list of current reward objects. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "The list of current reward objects." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_RewardObjects = { "RewardObjects", nullptr, (EPropertyFlags)0x0044000000022001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULearningAgentsTrainer, RewardObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_RewardObjects_MetaData), Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_RewardObjects_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_CompletionObjects_Inner = { "CompletionObjects", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULearningAgentsCompletion_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_CompletionObjects_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** The list of current completion objects. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsTrainer.h" },
		{ "ToolTip", "The list of current completion objects." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_CompletionObjects = { "CompletionObjects", nullptr, (EPropertyFlags)0x0044000000022001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULearningAgentsTrainer, CompletionObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_CompletionObjects_MetaData), Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_CompletionObjects_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULearningAgentsTrainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_Interactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_Policy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_Critic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_bIsTraining,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_bHasTrainingFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_RewardObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_RewardObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_CompletionObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULearningAgentsTrainer_Statics::NewProp_CompletionObjects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULearningAgentsTrainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULearningAgentsTrainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULearningAgentsTrainer_Statics::ClassParams = {
		&ULearningAgentsTrainer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULearningAgentsTrainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsTrainer_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsTrainer_Statics::Class_MetaDataParams), Z_Construct_UClass_ULearningAgentsTrainer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsTrainer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULearningAgentsTrainer()
	{
		if (!Z_Registration_Info_UClass_ULearningAgentsTrainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULearningAgentsTrainer.OuterSingleton, Z_Construct_UClass_ULearningAgentsTrainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULearningAgentsTrainer.OuterSingleton;
	}
	template<> LEARNINGAGENTSTRAINING_API UClass* StaticClass<ULearningAgentsTrainer>()
	{
		return ULearningAgentsTrainer::StaticClass();
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainer_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainer_h_Statics::EnumInfo[] = {
		{ ELearningAgentsCompletion_StaticEnum, TEXT("ELearningAgentsCompletion"), &Z_Registration_Info_UEnum_ELearningAgentsCompletion, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1079080398U) },
		{ ELearningAgentsTrainerDevice_StaticEnum, TEXT("ELearningAgentsTrainerDevice"), &Z_Registration_Info_UEnum_ELearningAgentsTrainerDevice, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3268198106U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainer_h_Statics::ScriptStructInfo[] = {
		{ FLearningAgentsTrainerSettings::StaticStruct, Z_Construct_UScriptStruct_FLearningAgentsTrainerSettings_Statics::NewStructOps, TEXT("LearningAgentsTrainerSettings"), &Z_Registration_Info_UScriptStruct_LearningAgentsTrainerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLearningAgentsTrainerSettings), 3095818436U) },
		{ FLearningAgentsTrainerGameSettings::StaticStruct, Z_Construct_UScriptStruct_FLearningAgentsTrainerGameSettings_Statics::NewStructOps, TEXT("LearningAgentsTrainerGameSettings"), &Z_Registration_Info_UScriptStruct_LearningAgentsTrainerGameSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLearningAgentsTrainerGameSettings), 2929973695U) },
		{ FLearningAgentsTrainerTrainingSettings::StaticStruct, Z_Construct_UScriptStruct_FLearningAgentsTrainerTrainingSettings_Statics::NewStructOps, TEXT("LearningAgentsTrainerTrainingSettings"), &Z_Registration_Info_UScriptStruct_LearningAgentsTrainerTrainingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLearningAgentsTrainerTrainingSettings), 2505288296U) },
		{ FLearningAgentsTrainerPathSettings::StaticStruct, Z_Construct_UScriptStruct_FLearningAgentsTrainerPathSettings_Statics::NewStructOps, TEXT("LearningAgentsTrainerPathSettings"), &Z_Registration_Info_UScriptStruct_LearningAgentsTrainerPathSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLearningAgentsTrainerPathSettings), 2984407820U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULearningAgentsTrainer, ULearningAgentsTrainer::StaticClass, TEXT("ULearningAgentsTrainer"), &Z_Registration_Info_UClass_ULearningAgentsTrainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULearningAgentsTrainer), 3903388435U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainer_h_281230839(TEXT("/Script/LearningAgentsTraining"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainer_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainer_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainer_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
