// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningAgentsRewards.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLearningAgentsRewards() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_UConditionalReward();
	LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_UConditionalReward_NoRegister();
	LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_UFloatReward();
	LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_UFloatReward_NoRegister();
	LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_ULearningAgentsReward();
	LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_ULearningAgentsReward_NoRegister();
	LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_ULearningAgentsTrainer_NoRegister();
	LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_ULocalDirectionalVelocityReward();
	LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_ULocalDirectionalVelocityReward_NoRegister();
	LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_UPlanarPositionDifferencePenalty();
	LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_UPlanarPositionDifferencePenalty_NoRegister();
	LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_UPositionArraySimilarityReward();
	LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_UPositionArraySimilarityReward_NoRegister();
	LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_UScalarVelocityReward();
	LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_UScalarVelocityReward_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LearningAgentsTraining();
// End Cross Module References
	void ULearningAgentsReward::StaticRegisterNativesULearningAgentsReward()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULearningAgentsReward);
	UClass* Z_Construct_UClass_ULearningAgentsReward_NoRegister()
	{
		return ULearningAgentsReward::StaticClass();
	}
	struct Z_Construct_UClass_ULearningAgentsReward_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentTrainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AgentTrainer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULearningAgentsReward_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgentsTraining,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsReward_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsReward_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for all rewards/penalties. Rewards are used during reinforcement learning to encourage/discourage\n * certain behaviors from occurring.\n */" },
		{ "IncludePath", "LearningAgentsRewards.h" },
		{ "ModuleRelativePath", "Public/LearningAgentsRewards.h" },
		{ "ToolTip", "Base class for all rewards/penalties. Rewards are used during reinforcement learning to encourage/discourage\ncertain behaviors from occurring." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsReward_Statics::NewProp_AgentTrainer_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** Reference to the Trainer this reward is associated with. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LearningAgentsRewards.h" },
		{ "ToolTip", "Reference to the Trainer this reward is associated with." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULearningAgentsReward_Statics::NewProp_AgentTrainer = { "AgentTrainer", nullptr, (EPropertyFlags)0x00140000000a2009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULearningAgentsReward, AgentTrainer), Z_Construct_UClass_ULearningAgentsTrainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsReward_Statics::NewProp_AgentTrainer_MetaData), Z_Construct_UClass_ULearningAgentsReward_Statics::NewProp_AgentTrainer_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULearningAgentsReward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULearningAgentsReward_Statics::NewProp_AgentTrainer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULearningAgentsReward_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULearningAgentsReward>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULearningAgentsReward_Statics::ClassParams = {
		&ULearningAgentsReward::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULearningAgentsReward_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsReward_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsReward_Statics::Class_MetaDataParams), Z_Construct_UClass_ULearningAgentsReward_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsReward_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULearningAgentsReward()
	{
		if (!Z_Registration_Info_UClass_ULearningAgentsReward.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULearningAgentsReward.OuterSingleton, Z_Construct_UClass_ULearningAgentsReward_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULearningAgentsReward.OuterSingleton;
	}
	template<> LEARNINGAGENTSTRAINING_API UClass* StaticClass<ULearningAgentsReward>()
	{
		return ULearningAgentsReward::StaticClass();
	}
	ULearningAgentsReward::ULearningAgentsReward(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULearningAgentsReward);
	ULearningAgentsReward::~ULearningAgentsReward() {}
	DEFINE_FUNCTION(UFloatReward::execSetFloatReward)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Reward);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFloatReward(Z_Param_AgentId,Z_Param_Reward);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFloatReward::execAddFloatReward)
	{
		P_GET_OBJECT(ULearningAgentsTrainer,Z_Param_InAgentTrainer);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Weight);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFloatReward**)Z_Param__Result=UFloatReward::AddFloatReward(Z_Param_InAgentTrainer,Z_Param_Name,Z_Param_Weight);
		P_NATIVE_END;
	}
	void UFloatReward::StaticRegisterNativesUFloatReward()
	{
		UClass* Class = UFloatReward::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddFloatReward", &UFloatReward::execAddFloatReward },
			{ "SetFloatReward", &UFloatReward::execSetFloatReward },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFloatReward_AddFloatReward_Statics
	{
		struct FloatReward_eventAddFloatReward_Parms
		{
			ULearningAgentsTrainer* InAgentTrainer;
			FName Name;
			float Weight;
			UFloatReward* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAgentTrainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAgentTrainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatReward_AddFloatReward_Statics::NewProp_InAgentTrainer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFloatReward_AddFloatReward_Statics::NewProp_InAgentTrainer = { "InAgentTrainer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatReward_eventAddFloatReward_Parms, InAgentTrainer), Z_Construct_UClass_ULearningAgentsTrainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatReward_AddFloatReward_Statics::NewProp_InAgentTrainer_MetaData), Z_Construct_UFunction_UFloatReward_AddFloatReward_Statics::NewProp_InAgentTrainer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatReward_AddFloatReward_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFloatReward_AddFloatReward_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatReward_eventAddFloatReward_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatReward_AddFloatReward_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UFloatReward_AddFloatReward_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatReward_AddFloatReward_Statics::NewProp_Weight_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFloatReward_AddFloatReward_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatReward_eventAddFloatReward_Parms, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatReward_AddFloatReward_Statics::NewProp_Weight_MetaData), Z_Construct_UFunction_UFloatReward_AddFloatReward_Statics::NewProp_Weight_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFloatReward_AddFloatReward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatReward_eventAddFloatReward_Parms, ReturnValue), Z_Construct_UClass_UFloatReward_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatReward_AddFloatReward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatReward_AddFloatReward_Statics::NewProp_InAgentTrainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatReward_AddFloatReward_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatReward_AddFloatReward_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatReward_AddFloatReward_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatReward_AddFloatReward_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Adds a new float reward to the given trainer. Call during ULearningAgentsTrainer::SetupRewards event.\n\x09 * @param InAgentTrainer The trainer to add this reward to.\n\x09 * @param Name The name of this new reward. Used for debugging.\n\x09 * @param Weight Multiplier for this reward when being summed up for the total reward.\n\x09 * @return The newly created reward.\n\x09 */" },
		{ "CPP_Default_Name", "None" },
		{ "CPP_Default_Weight", "1.000000" },
		{ "DefaultToSelf", "InAgentTrainer" },
		{ "ModuleRelativePath", "Public/LearningAgentsRewards.h" },
		{ "ToolTip", "Adds a new float reward to the given trainer. Call during ULearningAgentsTrainer::SetupRewards event.\n@param InAgentTrainer The trainer to add this reward to.\n@param Name The name of this new reward. Used for debugging.\n@param Weight Multiplier for this reward when being summed up for the total reward.\n@return The newly created reward." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatReward_AddFloatReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloatReward, nullptr, "AddFloatReward", nullptr, nullptr, Z_Construct_UFunction_UFloatReward_AddFloatReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatReward_AddFloatReward_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFloatReward_AddFloatReward_Statics::FloatReward_eventAddFloatReward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatReward_AddFloatReward_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFloatReward_AddFloatReward_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatReward_AddFloatReward_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFloatReward_AddFloatReward_Statics::FloatReward_eventAddFloatReward_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFloatReward_AddFloatReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFloatReward_AddFloatReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFloatReward_SetFloatReward_Statics
	{
		struct FloatReward_eventSetFloatReward_Parms
		{
			int32 AgentId;
			float Reward;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Reward_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Reward;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatReward_SetFloatReward_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFloatReward_SetFloatReward_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatReward_eventSetFloatReward_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatReward_SetFloatReward_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_UFloatReward_SetFloatReward_Statics::NewProp_AgentId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatReward_SetFloatReward_Statics::NewProp_Reward_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFloatReward_SetFloatReward_Statics::NewProp_Reward = { "Reward", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatReward_eventSetFloatReward_Parms, Reward), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatReward_SetFloatReward_Statics::NewProp_Reward_MetaData), Z_Construct_UFunction_UFloatReward_SetFloatReward_Statics::NewProp_Reward_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatReward_SetFloatReward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatReward_SetFloatReward_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatReward_SetFloatReward_Statics::NewProp_Reward,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatReward_SetFloatReward_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Sets the data for this reward. Call during ULearningAgentsTrainer::SetRewards event.\n\x09 * @param AgentId The agent id this data corresponds to.\n\x09 * @param Reward The value currently being rewarded.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsRewards.h" },
		{ "ToolTip", "Sets the data for this reward. Call during ULearningAgentsTrainer::SetRewards event.\n@param AgentId The agent id this data corresponds to.\n@param Reward The value currently being rewarded." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatReward_SetFloatReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloatReward, nullptr, "SetFloatReward", nullptr, nullptr, Z_Construct_UFunction_UFloatReward_SetFloatReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatReward_SetFloatReward_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFloatReward_SetFloatReward_Statics::FloatReward_eventSetFloatReward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatReward_SetFloatReward_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFloatReward_SetFloatReward_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatReward_SetFloatReward_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFloatReward_SetFloatReward_Statics::FloatReward_eventSetFloatReward_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFloatReward_SetFloatReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFloatReward_SetFloatReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFloatReward);
	UClass* Z_Construct_UClass_UFloatReward_NoRegister()
	{
		return UFloatReward::StaticClass();
	}
	struct Z_Construct_UClass_UFloatReward_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFloatReward_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULearningAgentsReward,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgentsTraining,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFloatReward_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UFloatReward_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFloatReward_AddFloatReward, "AddFloatReward" }, // 541126391
		{ &Z_Construct_UFunction_UFloatReward_SetFloatReward, "SetFloatReward" }, // 3177032881
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFloatReward_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatReward_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A simple float reward. Used as a catch-all for situations where a more type-specific reward does not exist yet. */" },
		{ "IncludePath", "LearningAgentsRewards.h" },
		{ "ModuleRelativePath", "Public/LearningAgentsRewards.h" },
		{ "ToolTip", "A simple float reward. Used as a catch-all for situations where a more type-specific reward does not exist yet." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFloatReward_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloatReward>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFloatReward_Statics::ClassParams = {
		&UFloatReward::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloatReward_Statics::Class_MetaDataParams), Z_Construct_UClass_UFloatReward_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UFloatReward()
	{
		if (!Z_Registration_Info_UClass_UFloatReward.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFloatReward.OuterSingleton, Z_Construct_UClass_UFloatReward_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFloatReward.OuterSingleton;
	}
	template<> LEARNINGAGENTSTRAINING_API UClass* StaticClass<UFloatReward>()
	{
		return UFloatReward::StaticClass();
	}
	UFloatReward::UFloatReward(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFloatReward);
	UFloatReward::~UFloatReward() {}
	DEFINE_FUNCTION(UConditionalReward::execSetConditionalReward)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_GET_UBOOL(Z_Param_bCondition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetConditionalReward(Z_Param_AgentId,Z_Param_bCondition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConditionalReward::execAddConditionalReward)
	{
		P_GET_OBJECT(ULearningAgentsTrainer,Z_Param_InAgentTrainer);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UConditionalReward**)Z_Param__Result=UConditionalReward::AddConditionalReward(Z_Param_InAgentTrainer,Z_Param_Name,Z_Param_Value);
		P_NATIVE_END;
	}
	void UConditionalReward::StaticRegisterNativesUConditionalReward()
	{
		UClass* Class = UConditionalReward::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddConditionalReward", &UConditionalReward::execAddConditionalReward },
			{ "SetConditionalReward", &UConditionalReward::execSetConditionalReward },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UConditionalReward_AddConditionalReward_Statics
	{
		struct ConditionalReward_eventAddConditionalReward_Parms
		{
			ULearningAgentsTrainer* InAgentTrainer;
			FName Name;
			float Value;
			UConditionalReward* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAgentTrainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAgentTrainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionalReward_AddConditionalReward_Statics::NewProp_InAgentTrainer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConditionalReward_AddConditionalReward_Statics::NewProp_InAgentTrainer = { "InAgentTrainer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConditionalReward_eventAddConditionalReward_Parms, InAgentTrainer), Z_Construct_UClass_ULearningAgentsTrainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionalReward_AddConditionalReward_Statics::NewProp_InAgentTrainer_MetaData), Z_Construct_UFunction_UConditionalReward_AddConditionalReward_Statics::NewProp_InAgentTrainer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionalReward_AddConditionalReward_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UConditionalReward_AddConditionalReward_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConditionalReward_eventAddConditionalReward_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionalReward_AddConditionalReward_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UConditionalReward_AddConditionalReward_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionalReward_AddConditionalReward_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConditionalReward_AddConditionalReward_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConditionalReward_eventAddConditionalReward_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionalReward_AddConditionalReward_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_UConditionalReward_AddConditionalReward_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConditionalReward_AddConditionalReward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConditionalReward_eventAddConditionalReward_Parms, ReturnValue), Z_Construct_UClass_UConditionalReward_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConditionalReward_AddConditionalReward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionalReward_AddConditionalReward_Statics::NewProp_InAgentTrainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionalReward_AddConditionalReward_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionalReward_AddConditionalReward_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionalReward_AddConditionalReward_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionalReward_AddConditionalReward_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Adds a new conditional reward to the given trainer. Call during ULearningAgentsTrainer::SetupRewards event.\n\x09 * @param InAgentTrainer The trainer to add this reward to.\n\x09 * @param Name The name of this new reward. Used for debugging.\n\x09 * @param Value The amount of reward to give the agent when the provided condition is true.\n\x09 * @return The newly created reward.\n\x09 */" },
		{ "CPP_Default_Name", "None" },
		{ "CPP_Default_Value", "1.000000" },
		{ "DefaultToSelf", "InAgentTrainer" },
		{ "ModuleRelativePath", "Public/LearningAgentsRewards.h" },
		{ "ToolTip", "Adds a new conditional reward to the given trainer. Call during ULearningAgentsTrainer::SetupRewards event.\n@param InAgentTrainer The trainer to add this reward to.\n@param Name The name of this new reward. Used for debugging.\n@param Value The amount of reward to give the agent when the provided condition is true.\n@return The newly created reward." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConditionalReward_AddConditionalReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConditionalReward, nullptr, "AddConditionalReward", nullptr, nullptr, Z_Construct_UFunction_UConditionalReward_AddConditionalReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionalReward_AddConditionalReward_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConditionalReward_AddConditionalReward_Statics::ConditionalReward_eventAddConditionalReward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionalReward_AddConditionalReward_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConditionalReward_AddConditionalReward_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionalReward_AddConditionalReward_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UConditionalReward_AddConditionalReward_Statics::ConditionalReward_eventAddConditionalReward_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UConditionalReward_AddConditionalReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConditionalReward_AddConditionalReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConditionalReward_SetConditionalReward_Statics
	{
		struct ConditionalReward_eventSetConditionalReward_Parms
		{
			int32 AgentId;
			bool bCondition;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCondition_MetaData[];
#endif
		static void NewProp_bCondition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCondition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionalReward_SetConditionalReward_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConditionalReward_SetConditionalReward_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConditionalReward_eventSetConditionalReward_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionalReward_SetConditionalReward_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_UConditionalReward_SetConditionalReward_Statics::NewProp_AgentId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionalReward_SetConditionalReward_Statics::NewProp_bCondition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UConditionalReward_SetConditionalReward_Statics::NewProp_bCondition_SetBit(void* Obj)
	{
		((ConditionalReward_eventSetConditionalReward_Parms*)Obj)->bCondition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConditionalReward_SetConditionalReward_Statics::NewProp_bCondition = { "bCondition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ConditionalReward_eventSetConditionalReward_Parms), &Z_Construct_UFunction_UConditionalReward_SetConditionalReward_Statics::NewProp_bCondition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionalReward_SetConditionalReward_Statics::NewProp_bCondition_MetaData), Z_Construct_UFunction_UConditionalReward_SetConditionalReward_Statics::NewProp_bCondition_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConditionalReward_SetConditionalReward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionalReward_SetConditionalReward_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionalReward_SetConditionalReward_Statics::NewProp_bCondition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionalReward_SetConditionalReward_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Sets if the agent should receive a reward. Call during ULearningAgentsTrainer::SetRewards event.\n\x09 * @param AgentId The agent id this data corresponds to.\n\x09 * @param bCondition If the agent should receive a reward this iteration.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsRewards.h" },
		{ "ToolTip", "Sets if the agent should receive a reward. Call during ULearningAgentsTrainer::SetRewards event.\n@param AgentId The agent id this data corresponds to.\n@param bCondition If the agent should receive a reward this iteration." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConditionalReward_SetConditionalReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConditionalReward, nullptr, "SetConditionalReward", nullptr, nullptr, Z_Construct_UFunction_UConditionalReward_SetConditionalReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionalReward_SetConditionalReward_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConditionalReward_SetConditionalReward_Statics::ConditionalReward_eventSetConditionalReward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionalReward_SetConditionalReward_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConditionalReward_SetConditionalReward_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionalReward_SetConditionalReward_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UConditionalReward_SetConditionalReward_Statics::ConditionalReward_eventSetConditionalReward_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UConditionalReward_SetConditionalReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConditionalReward_SetConditionalReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConditionalReward);
	UClass* Z_Construct_UClass_UConditionalReward_NoRegister()
	{
		return UConditionalReward::StaticClass();
	}
	struct Z_Construct_UClass_UConditionalReward_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConditionalReward_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULearningAgentsReward,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgentsTraining,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConditionalReward_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UConditionalReward_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UConditionalReward_AddConditionalReward, "AddConditionalReward" }, // 2025039139
		{ &Z_Construct_UFunction_UConditionalReward_SetConditionalReward, "SetConditionalReward" }, // 1887861642
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConditionalReward_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConditionalReward_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A simple conditional reward that gives some constant reward value when a condition is true. */" },
		{ "IncludePath", "LearningAgentsRewards.h" },
		{ "ModuleRelativePath", "Public/LearningAgentsRewards.h" },
		{ "ToolTip", "A simple conditional reward that gives some constant reward value when a condition is true." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConditionalReward_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConditionalReward>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConditionalReward_Statics::ClassParams = {
		&UConditionalReward::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UConditionalReward_Statics::Class_MetaDataParams), Z_Construct_UClass_UConditionalReward_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UConditionalReward()
	{
		if (!Z_Registration_Info_UClass_UConditionalReward.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConditionalReward.OuterSingleton, Z_Construct_UClass_UConditionalReward_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConditionalReward.OuterSingleton;
	}
	template<> LEARNINGAGENTSTRAINING_API UClass* StaticClass<UConditionalReward>()
	{
		return UConditionalReward::StaticClass();
	}
	UConditionalReward::UConditionalReward(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConditionalReward);
	UConditionalReward::~UConditionalReward() {}
	DEFINE_FUNCTION(UScalarVelocityReward::execSetScalarVelocityReward)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Velocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScalarVelocityReward(Z_Param_AgentId,Z_Param_Velocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScalarVelocityReward::execAddScalarVelocityReward)
	{
		P_GET_OBJECT(ULearningAgentsTrainer,Z_Param_InAgentTrainer);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Weight);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UScalarVelocityReward**)Z_Param__Result=UScalarVelocityReward::AddScalarVelocityReward(Z_Param_InAgentTrainer,Z_Param_Name,Z_Param_Weight,Z_Param_Scale);
		P_NATIVE_END;
	}
	void UScalarVelocityReward::StaticRegisterNativesUScalarVelocityReward()
	{
		UClass* Class = UScalarVelocityReward::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddScalarVelocityReward", &UScalarVelocityReward::execAddScalarVelocityReward },
			{ "SetScalarVelocityReward", &UScalarVelocityReward::execSetScalarVelocityReward },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScalarVelocityReward_AddScalarVelocityReward_Statics
	{
		struct ScalarVelocityReward_eventAddScalarVelocityReward_Parms
		{
			ULearningAgentsTrainer* InAgentTrainer;
			FName Name;
			float Weight;
			float Scale;
			UScalarVelocityReward* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAgentTrainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAgentTrainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScalarVelocityReward_AddScalarVelocityReward_Statics::NewProp_InAgentTrainer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScalarVelocityReward_AddScalarVelocityReward_Statics::NewProp_InAgentTrainer = { "InAgentTrainer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScalarVelocityReward_eventAddScalarVelocityReward_Parms, InAgentTrainer), Z_Construct_UClass_ULearningAgentsTrainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScalarVelocityReward_AddScalarVelocityReward_Statics::NewProp_InAgentTrainer_MetaData), Z_Construct_UFunction_UScalarVelocityReward_AddScalarVelocityReward_Statics::NewProp_InAgentTrainer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScalarVelocityReward_AddScalarVelocityReward_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UScalarVelocityReward_AddScalarVelocityReward_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScalarVelocityReward_eventAddScalarVelocityReward_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScalarVelocityReward_AddScalarVelocityReward_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UScalarVelocityReward_AddScalarVelocityReward_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScalarVelocityReward_AddScalarVelocityReward_Statics::NewProp_Weight_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScalarVelocityReward_AddScalarVelocityReward_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScalarVelocityReward_eventAddScalarVelocityReward_Parms, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScalarVelocityReward_AddScalarVelocityReward_Statics::NewProp_Weight_MetaData), Z_Construct_UFunction_UScalarVelocityReward_AddScalarVelocityReward_Statics::NewProp_Weight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScalarVelocityReward_AddScalarVelocityReward_Statics::NewProp_Scale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScalarVelocityReward_AddScalarVelocityReward_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScalarVelocityReward_eventAddScalarVelocityReward_Parms, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScalarVelocityReward_AddScalarVelocityReward_Statics::NewProp_Scale_MetaData), Z_Construct_UFunction_UScalarVelocityReward_AddScalarVelocityReward_Statics::NewProp_Scale_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScalarVelocityReward_AddScalarVelocityReward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScalarVelocityReward_eventAddScalarVelocityReward_Parms, ReturnValue), Z_Construct_UClass_UScalarVelocityReward_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScalarVelocityReward_AddScalarVelocityReward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScalarVelocityReward_AddScalarVelocityReward_Statics::NewProp_InAgentTrainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScalarVelocityReward_AddScalarVelocityReward_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScalarVelocityReward_AddScalarVelocityReward_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScalarVelocityReward_AddScalarVelocityReward_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScalarVelocityReward_AddScalarVelocityReward_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScalarVelocityReward_AddScalarVelocityReward_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Adds a new scalar velocity reward to the given trainer. Call during ULearningAgentsTrainer::SetupRewards event.\n\x09 * @param InAgentTrainer The trainer to add this reward to.\n\x09 * @param Name The name of this new reward. Used for debugging.\n\x09 * @param Weight Multiplier for this reward when being summed up for the total reward.\n\x09 * @param Scale Used to normalize the data for the reward.\n\x09 * @return The newly created reward.\n\x09 */" },
		{ "CPP_Default_Name", "None" },
		{ "CPP_Default_Scale", "200.000000" },
		{ "CPP_Default_Weight", "1.000000" },
		{ "DefaultToSelf", "InAgentTrainer" },
		{ "ModuleRelativePath", "Public/LearningAgentsRewards.h" },
		{ "ToolTip", "Adds a new scalar velocity reward to the given trainer. Call during ULearningAgentsTrainer::SetupRewards event.\n@param InAgentTrainer The trainer to add this reward to.\n@param Name The name of this new reward. Used for debugging.\n@param Weight Multiplier for this reward when being summed up for the total reward.\n@param Scale Used to normalize the data for the reward.\n@return The newly created reward." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScalarVelocityReward_AddScalarVelocityReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScalarVelocityReward, nullptr, "AddScalarVelocityReward", nullptr, nullptr, Z_Construct_UFunction_UScalarVelocityReward_AddScalarVelocityReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScalarVelocityReward_AddScalarVelocityReward_Statics::PropPointers), sizeof(Z_Construct_UFunction_UScalarVelocityReward_AddScalarVelocityReward_Statics::ScalarVelocityReward_eventAddScalarVelocityReward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScalarVelocityReward_AddScalarVelocityReward_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScalarVelocityReward_AddScalarVelocityReward_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UScalarVelocityReward_AddScalarVelocityReward_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UScalarVelocityReward_AddScalarVelocityReward_Statics::ScalarVelocityReward_eventAddScalarVelocityReward_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UScalarVelocityReward_AddScalarVelocityReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScalarVelocityReward_AddScalarVelocityReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScalarVelocityReward_SetScalarVelocityReward_Statics
	{
		struct ScalarVelocityReward_eventSetScalarVelocityReward_Parms
		{
			int32 AgentId;
			float Velocity;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Velocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScalarVelocityReward_SetScalarVelocityReward_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UScalarVelocityReward_SetScalarVelocityReward_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScalarVelocityReward_eventSetScalarVelocityReward_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScalarVelocityReward_SetScalarVelocityReward_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_UScalarVelocityReward_SetScalarVelocityReward_Statics::NewProp_AgentId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScalarVelocityReward_SetScalarVelocityReward_Statics::NewProp_Velocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScalarVelocityReward_SetScalarVelocityReward_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScalarVelocityReward_eventSetScalarVelocityReward_Parms, Velocity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScalarVelocityReward_SetScalarVelocityReward_Statics::NewProp_Velocity_MetaData), Z_Construct_UFunction_UScalarVelocityReward_SetScalarVelocityReward_Statics::NewProp_Velocity_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScalarVelocityReward_SetScalarVelocityReward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScalarVelocityReward_SetScalarVelocityReward_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScalarVelocityReward_SetScalarVelocityReward_Statics::NewProp_Velocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScalarVelocityReward_SetScalarVelocityReward_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Sets the data for this reward. Call during ULearningAgentsTrainer::SetRewards event.\n\x09 * @param AgentId The agent id this data corresponds to.\n\x09 * @param Velocity The current scalar velocity.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsRewards.h" },
		{ "ToolTip", "Sets the data for this reward. Call during ULearningAgentsTrainer::SetRewards event.\n@param AgentId The agent id this data corresponds to.\n@param Velocity The current scalar velocity." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScalarVelocityReward_SetScalarVelocityReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScalarVelocityReward, nullptr, "SetScalarVelocityReward", nullptr, nullptr, Z_Construct_UFunction_UScalarVelocityReward_SetScalarVelocityReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScalarVelocityReward_SetScalarVelocityReward_Statics::PropPointers), sizeof(Z_Construct_UFunction_UScalarVelocityReward_SetScalarVelocityReward_Statics::ScalarVelocityReward_eventSetScalarVelocityReward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScalarVelocityReward_SetScalarVelocityReward_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScalarVelocityReward_SetScalarVelocityReward_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UScalarVelocityReward_SetScalarVelocityReward_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UScalarVelocityReward_SetScalarVelocityReward_Statics::ScalarVelocityReward_eventSetScalarVelocityReward_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UScalarVelocityReward_SetScalarVelocityReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScalarVelocityReward_SetScalarVelocityReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScalarVelocityReward);
	UClass* Z_Construct_UClass_UScalarVelocityReward_NoRegister()
	{
		return UScalarVelocityReward::StaticClass();
	}
	struct Z_Construct_UClass_UScalarVelocityReward_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScalarVelocityReward_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULearningAgentsReward,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgentsTraining,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScalarVelocityReward_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UScalarVelocityReward_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScalarVelocityReward_AddScalarVelocityReward, "AddScalarVelocityReward" }, // 1870621238
		{ &Z_Construct_UFunction_UScalarVelocityReward_SetScalarVelocityReward, "SetScalarVelocityReward" }, // 4222753728
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScalarVelocityReward_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScalarVelocityReward_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A reward for maximizing speed. */" },
		{ "IncludePath", "LearningAgentsRewards.h" },
		{ "ModuleRelativePath", "Public/LearningAgentsRewards.h" },
		{ "ToolTip", "A reward for maximizing speed." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScalarVelocityReward_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScalarVelocityReward>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UScalarVelocityReward_Statics::ClassParams = {
		&UScalarVelocityReward::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UScalarVelocityReward_Statics::Class_MetaDataParams), Z_Construct_UClass_UScalarVelocityReward_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UScalarVelocityReward()
	{
		if (!Z_Registration_Info_UClass_UScalarVelocityReward.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScalarVelocityReward.OuterSingleton, Z_Construct_UClass_UScalarVelocityReward_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UScalarVelocityReward.OuterSingleton;
	}
	template<> LEARNINGAGENTSTRAINING_API UClass* StaticClass<UScalarVelocityReward>()
	{
		return UScalarVelocityReward::StaticClass();
	}
	UScalarVelocityReward::UScalarVelocityReward(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScalarVelocityReward);
	UScalarVelocityReward::~UScalarVelocityReward() {}
	DEFINE_FUNCTION(ULocalDirectionalVelocityReward::execSetLocalDirectionalVelocityReward)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_GET_STRUCT(FVector,Z_Param_Velocity);
		P_GET_STRUCT(FRotator,Z_Param_RelativeRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocalDirectionalVelocityReward(Z_Param_AgentId,Z_Param_Velocity,Z_Param_RelativeRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULocalDirectionalVelocityReward::execAddLocalDirectionalVelocityReward)
	{
		P_GET_OBJECT(ULearningAgentsTrainer,Z_Param_InAgentTrainer);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Weight);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_STRUCT(FVector,Z_Param_Axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULocalDirectionalVelocityReward**)Z_Param__Result=ULocalDirectionalVelocityReward::AddLocalDirectionalVelocityReward(Z_Param_InAgentTrainer,Z_Param_Name,Z_Param_Weight,Z_Param_Scale,Z_Param_Axis);
		P_NATIVE_END;
	}
	void ULocalDirectionalVelocityReward::StaticRegisterNativesULocalDirectionalVelocityReward()
	{
		UClass* Class = ULocalDirectionalVelocityReward::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddLocalDirectionalVelocityReward", &ULocalDirectionalVelocityReward::execAddLocalDirectionalVelocityReward },
			{ "SetLocalDirectionalVelocityReward", &ULocalDirectionalVelocityReward::execSetLocalDirectionalVelocityReward },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULocalDirectionalVelocityReward_AddLocalDirectionalVelocityReward_Statics
	{
		struct LocalDirectionalVelocityReward_eventAddLocalDirectionalVelocityReward_Parms
		{
			ULearningAgentsTrainer* InAgentTrainer;
			FName Name;
			float Weight;
			float Scale;
			FVector Axis;
			ULocalDirectionalVelocityReward* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAgentTrainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAgentTrainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Axis;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocalDirectionalVelocityReward_AddLocalDirectionalVelocityReward_Statics::NewProp_InAgentTrainer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalDirectionalVelocityReward_AddLocalDirectionalVelocityReward_Statics::NewProp_InAgentTrainer = { "InAgentTrainer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocalDirectionalVelocityReward_eventAddLocalDirectionalVelocityReward_Parms, InAgentTrainer), Z_Construct_UClass_ULearningAgentsTrainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalDirectionalVelocityReward_AddLocalDirectionalVelocityReward_Statics::NewProp_InAgentTrainer_MetaData), Z_Construct_UFunction_ULocalDirectionalVelocityReward_AddLocalDirectionalVelocityReward_Statics::NewProp_InAgentTrainer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocalDirectionalVelocityReward_AddLocalDirectionalVelocityReward_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULocalDirectionalVelocityReward_AddLocalDirectionalVelocityReward_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocalDirectionalVelocityReward_eventAddLocalDirectionalVelocityReward_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalDirectionalVelocityReward_AddLocalDirectionalVelocityReward_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_ULocalDirectionalVelocityReward_AddLocalDirectionalVelocityReward_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocalDirectionalVelocityReward_AddLocalDirectionalVelocityReward_Statics::NewProp_Weight_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULocalDirectionalVelocityReward_AddLocalDirectionalVelocityReward_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocalDirectionalVelocityReward_eventAddLocalDirectionalVelocityReward_Parms, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalDirectionalVelocityReward_AddLocalDirectionalVelocityReward_Statics::NewProp_Weight_MetaData), Z_Construct_UFunction_ULocalDirectionalVelocityReward_AddLocalDirectionalVelocityReward_Statics::NewProp_Weight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocalDirectionalVelocityReward_AddLocalDirectionalVelocityReward_Statics::NewProp_Scale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULocalDirectionalVelocityReward_AddLocalDirectionalVelocityReward_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocalDirectionalVelocityReward_eventAddLocalDirectionalVelocityReward_Parms, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalDirectionalVelocityReward_AddLocalDirectionalVelocityReward_Statics::NewProp_Scale_MetaData), Z_Construct_UFunction_ULocalDirectionalVelocityReward_AddLocalDirectionalVelocityReward_Statics::NewProp_Scale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocalDirectionalVelocityReward_AddLocalDirectionalVelocityReward_Statics::NewProp_Axis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULocalDirectionalVelocityReward_AddLocalDirectionalVelocityReward_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocalDirectionalVelocityReward_eventAddLocalDirectionalVelocityReward_Parms, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalDirectionalVelocityReward_AddLocalDirectionalVelocityReward_Statics::NewProp_Axis_MetaData), Z_Construct_UFunction_ULocalDirectionalVelocityReward_AddLocalDirectionalVelocityReward_Statics::NewProp_Axis_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalDirectionalVelocityReward_AddLocalDirectionalVelocityReward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocalDirectionalVelocityReward_eventAddLocalDirectionalVelocityReward_Parms, ReturnValue), Z_Construct_UClass_ULocalDirectionalVelocityReward_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalDirectionalVelocityReward_AddLocalDirectionalVelocityReward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalDirectionalVelocityReward_AddLocalDirectionalVelocityReward_Statics::NewProp_InAgentTrainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalDirectionalVelocityReward_AddLocalDirectionalVelocityReward_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalDirectionalVelocityReward_AddLocalDirectionalVelocityReward_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalDirectionalVelocityReward_AddLocalDirectionalVelocityReward_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalDirectionalVelocityReward_AddLocalDirectionalVelocityReward_Statics::NewProp_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalDirectionalVelocityReward_AddLocalDirectionalVelocityReward_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocalDirectionalVelocityReward_AddLocalDirectionalVelocityReward_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Adds a new directional velocity reward to the given trainer. Call during ULearningAgentsTrainer::SetupRewards event.\n\x09 * @param InAgentTrainer The trainer to add this reward to.\n\x09 * @param Name The name of this new reward. Used for debugging.\n\x09 * @param Weight Multiplier for this reward when being summed up for the total reward.\n\x09 * @param Scale Used to normalize the data for the reward.\n\x09 * @param Axis The local direction we want to maximize velocity in.\n\x09 * @return The newly created reward.\n\x09 */" },
		{ "CPP_Default_Axis", "1.000000,0.000000,0.000000" },
		{ "CPP_Default_Name", "None" },
		{ "CPP_Default_Scale", "200.000000" },
		{ "CPP_Default_Weight", "1.000000" },
		{ "DefaultToSelf", "InAgentTrainer" },
		{ "ModuleRelativePath", "Public/LearningAgentsRewards.h" },
		{ "ToolTip", "Adds a new directional velocity reward to the given trainer. Call during ULearningAgentsTrainer::SetupRewards event.\n@param InAgentTrainer The trainer to add this reward to.\n@param Name The name of this new reward. Used for debugging.\n@param Weight Multiplier for this reward when being summed up for the total reward.\n@param Scale Used to normalize the data for the reward.\n@param Axis The local direction we want to maximize velocity in.\n@return The newly created reward." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalDirectionalVelocityReward_AddLocalDirectionalVelocityReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalDirectionalVelocityReward, nullptr, "AddLocalDirectionalVelocityReward", nullptr, nullptr, Z_Construct_UFunction_ULocalDirectionalVelocityReward_AddLocalDirectionalVelocityReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalDirectionalVelocityReward_AddLocalDirectionalVelocityReward_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULocalDirectionalVelocityReward_AddLocalDirectionalVelocityReward_Statics::LocalDirectionalVelocityReward_eventAddLocalDirectionalVelocityReward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalDirectionalVelocityReward_AddLocalDirectionalVelocityReward_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocalDirectionalVelocityReward_AddLocalDirectionalVelocityReward_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalDirectionalVelocityReward_AddLocalDirectionalVelocityReward_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULocalDirectionalVelocityReward_AddLocalDirectionalVelocityReward_Statics::LocalDirectionalVelocityReward_eventAddLocalDirectionalVelocityReward_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULocalDirectionalVelocityReward_AddLocalDirectionalVelocityReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocalDirectionalVelocityReward_AddLocalDirectionalVelocityReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULocalDirectionalVelocityReward_SetLocalDirectionalVelocityReward_Statics
	{
		struct LocalDirectionalVelocityReward_eventSetLocalDirectionalVelocityReward_Parms
		{
			int32 AgentId;
			FVector Velocity;
			FRotator RelativeRotation;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocalDirectionalVelocityReward_SetLocalDirectionalVelocityReward_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULocalDirectionalVelocityReward_SetLocalDirectionalVelocityReward_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocalDirectionalVelocityReward_eventSetLocalDirectionalVelocityReward_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalDirectionalVelocityReward_SetLocalDirectionalVelocityReward_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_ULocalDirectionalVelocityReward_SetLocalDirectionalVelocityReward_Statics::NewProp_AgentId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocalDirectionalVelocityReward_SetLocalDirectionalVelocityReward_Statics::NewProp_Velocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULocalDirectionalVelocityReward_SetLocalDirectionalVelocityReward_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocalDirectionalVelocityReward_eventSetLocalDirectionalVelocityReward_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalDirectionalVelocityReward_SetLocalDirectionalVelocityReward_Statics::NewProp_Velocity_MetaData), Z_Construct_UFunction_ULocalDirectionalVelocityReward_SetLocalDirectionalVelocityReward_Statics::NewProp_Velocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocalDirectionalVelocityReward_SetLocalDirectionalVelocityReward_Statics::NewProp_RelativeRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULocalDirectionalVelocityReward_SetLocalDirectionalVelocityReward_Statics::NewProp_RelativeRotation = { "RelativeRotation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocalDirectionalVelocityReward_eventSetLocalDirectionalVelocityReward_Parms, RelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalDirectionalVelocityReward_SetLocalDirectionalVelocityReward_Statics::NewProp_RelativeRotation_MetaData), Z_Construct_UFunction_ULocalDirectionalVelocityReward_SetLocalDirectionalVelocityReward_Statics::NewProp_RelativeRotation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalDirectionalVelocityReward_SetLocalDirectionalVelocityReward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalDirectionalVelocityReward_SetLocalDirectionalVelocityReward_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalDirectionalVelocityReward_SetLocalDirectionalVelocityReward_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalDirectionalVelocityReward_SetLocalDirectionalVelocityReward_Statics::NewProp_RelativeRotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocalDirectionalVelocityReward_SetLocalDirectionalVelocityReward_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Sets the data for this reward. Call during ULearningAgentsTrainer::SetRewards event.\n\x09 * @param AgentId The agent id this data corresponds to.\n\x09 * @param Velocity The current velocity.\n\x09 * @param RelativeRotation The frame of reference rotation.\n\x09 */" },
		{ "CPP_Default_RelativeRotation", "" },
		{ "ModuleRelativePath", "Public/LearningAgentsRewards.h" },
		{ "ToolTip", "Sets the data for this reward. Call during ULearningAgentsTrainer::SetRewards event.\n@param AgentId The agent id this data corresponds to.\n@param Velocity The current velocity.\n@param RelativeRotation The frame of reference rotation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalDirectionalVelocityReward_SetLocalDirectionalVelocityReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalDirectionalVelocityReward, nullptr, "SetLocalDirectionalVelocityReward", nullptr, nullptr, Z_Construct_UFunction_ULocalDirectionalVelocityReward_SetLocalDirectionalVelocityReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalDirectionalVelocityReward_SetLocalDirectionalVelocityReward_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULocalDirectionalVelocityReward_SetLocalDirectionalVelocityReward_Statics::LocalDirectionalVelocityReward_eventSetLocalDirectionalVelocityReward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalDirectionalVelocityReward_SetLocalDirectionalVelocityReward_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocalDirectionalVelocityReward_SetLocalDirectionalVelocityReward_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalDirectionalVelocityReward_SetLocalDirectionalVelocityReward_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULocalDirectionalVelocityReward_SetLocalDirectionalVelocityReward_Statics::LocalDirectionalVelocityReward_eventSetLocalDirectionalVelocityReward_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULocalDirectionalVelocityReward_SetLocalDirectionalVelocityReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocalDirectionalVelocityReward_SetLocalDirectionalVelocityReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULocalDirectionalVelocityReward);
	UClass* Z_Construct_UClass_ULocalDirectionalVelocityReward_NoRegister()
	{
		return ULocalDirectionalVelocityReward::StaticClass();
	}
	struct Z_Construct_UClass_ULocalDirectionalVelocityReward_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocalDirectionalVelocityReward_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULearningAgentsReward,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgentsTraining,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULocalDirectionalVelocityReward_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULocalDirectionalVelocityReward_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULocalDirectionalVelocityReward_AddLocalDirectionalVelocityReward, "AddLocalDirectionalVelocityReward" }, // 712771212
		{ &Z_Construct_UFunction_ULocalDirectionalVelocityReward_SetLocalDirectionalVelocityReward, "SetLocalDirectionalVelocityReward" }, // 146089635
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULocalDirectionalVelocityReward_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalDirectionalVelocityReward_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A reward for maximizing velocity along a given local axis. */" },
		{ "IncludePath", "LearningAgentsRewards.h" },
		{ "ModuleRelativePath", "Public/LearningAgentsRewards.h" },
		{ "ToolTip", "A reward for maximizing velocity along a given local axis." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocalDirectionalVelocityReward_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalDirectionalVelocityReward>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULocalDirectionalVelocityReward_Statics::ClassParams = {
		&ULocalDirectionalVelocityReward::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULocalDirectionalVelocityReward_Statics::Class_MetaDataParams), Z_Construct_UClass_ULocalDirectionalVelocityReward_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULocalDirectionalVelocityReward()
	{
		if (!Z_Registration_Info_UClass_ULocalDirectionalVelocityReward.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULocalDirectionalVelocityReward.OuterSingleton, Z_Construct_UClass_ULocalDirectionalVelocityReward_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULocalDirectionalVelocityReward.OuterSingleton;
	}
	template<> LEARNINGAGENTSTRAINING_API UClass* StaticClass<ULocalDirectionalVelocityReward>()
	{
		return ULocalDirectionalVelocityReward::StaticClass();
	}
	ULocalDirectionalVelocityReward::ULocalDirectionalVelocityReward(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalDirectionalVelocityReward);
	ULocalDirectionalVelocityReward::~ULocalDirectionalVelocityReward() {}
	DEFINE_FUNCTION(UPlanarPositionDifferencePenalty::execSetPlanarPositionDifferencePenalty)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_GET_STRUCT(FVector,Z_Param_Position0);
		P_GET_STRUCT(FVector,Z_Param_Position1);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlanarPositionDifferencePenalty(Z_Param_AgentId,Z_Param_Position0,Z_Param_Position1);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlanarPositionDifferencePenalty::execAddPlanarPositionDifferencePenalty)
	{
		P_GET_OBJECT(ULearningAgentsTrainer,Z_Param_InAgentTrainer);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Weight);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Threshold);
		P_GET_STRUCT(FVector,Z_Param_Axis0);
		P_GET_STRUCT(FVector,Z_Param_Axis1);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlanarPositionDifferencePenalty**)Z_Param__Result=UPlanarPositionDifferencePenalty::AddPlanarPositionDifferencePenalty(Z_Param_InAgentTrainer,Z_Param_Name,Z_Param_Weight,Z_Param_Scale,Z_Param_Threshold,Z_Param_Axis0,Z_Param_Axis1);
		P_NATIVE_END;
	}
	void UPlanarPositionDifferencePenalty::StaticRegisterNativesUPlanarPositionDifferencePenalty()
	{
		UClass* Class = UPlanarPositionDifferencePenalty::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPlanarPositionDifferencePenalty", &UPlanarPositionDifferencePenalty::execAddPlanarPositionDifferencePenalty },
			{ "SetPlanarPositionDifferencePenalty", &UPlanarPositionDifferencePenalty::execSetPlanarPositionDifferencePenalty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics
	{
		struct PlanarPositionDifferencePenalty_eventAddPlanarPositionDifferencePenalty_Parms
		{
			ULearningAgentsTrainer* InAgentTrainer;
			FName Name;
			float Weight;
			float Scale;
			float Threshold;
			FVector Axis0;
			FVector Axis1;
			UPlanarPositionDifferencePenalty* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAgentTrainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAgentTrainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Threshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Threshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Axis0_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Axis0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Axis1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Axis1;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::NewProp_InAgentTrainer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::NewProp_InAgentTrainer = { "InAgentTrainer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarPositionDifferencePenalty_eventAddPlanarPositionDifferencePenalty_Parms, InAgentTrainer), Z_Construct_UClass_ULearningAgentsTrainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::NewProp_InAgentTrainer_MetaData), Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::NewProp_InAgentTrainer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarPositionDifferencePenalty_eventAddPlanarPositionDifferencePenalty_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::NewProp_Weight_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarPositionDifferencePenalty_eventAddPlanarPositionDifferencePenalty_Parms, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::NewProp_Weight_MetaData), Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::NewProp_Weight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::NewProp_Scale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarPositionDifferencePenalty_eventAddPlanarPositionDifferencePenalty_Parms, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::NewProp_Scale_MetaData), Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::NewProp_Scale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::NewProp_Threshold_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarPositionDifferencePenalty_eventAddPlanarPositionDifferencePenalty_Parms, Threshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::NewProp_Threshold_MetaData), Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::NewProp_Threshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::NewProp_Axis0_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::NewProp_Axis0 = { "Axis0", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarPositionDifferencePenalty_eventAddPlanarPositionDifferencePenalty_Parms, Axis0), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::NewProp_Axis0_MetaData), Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::NewProp_Axis0_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::NewProp_Axis1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::NewProp_Axis1 = { "Axis1", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarPositionDifferencePenalty_eventAddPlanarPositionDifferencePenalty_Parms, Axis1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::NewProp_Axis1_MetaData), Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::NewProp_Axis1_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarPositionDifferencePenalty_eventAddPlanarPositionDifferencePenalty_Parms, ReturnValue), Z_Construct_UClass_UPlanarPositionDifferencePenalty_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::NewProp_InAgentTrainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::NewProp_Threshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::NewProp_Axis0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::NewProp_Axis1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Adds a new planar difference penalty to the given trainer. The axis parameters define the plane.\n\x09 * Call during ULearningAgentsTrainer::SetupRewards event.\n\x09 * @param InAgentTrainer The trainer to add this penalty to.\n\x09 * @param Name The name of this new penalty. Used for debugging.\n\x09 * @param Weight Multiplier for this penalty when being summed up for the total reward.\n\x09 * @param Scale Used to normalize the data for the penalty.\n\x09 * @param Threshold Minimal distance to apply this penalty.\n\x09 * @param Axis0 The forward axis of the plane.\n\x09 * @param Axis1 The right axis of the plane.\n\x09 * @return The newly created reward.\n\x09 */" },
		{ "CPP_Default_Axis0", "1.000000,0.000000,0.000000" },
		{ "CPP_Default_Axis1", "0.000000,1.000000,0.000000" },
		{ "CPP_Default_Name", "None" },
		{ "CPP_Default_Scale", "100.000000" },
		{ "CPP_Default_Threshold", "0.000000" },
		{ "CPP_Default_Weight", "1.000000" },
		{ "DefaultToSelf", "InAgentTrainer" },
		{ "ModuleRelativePath", "Public/LearningAgentsRewards.h" },
		{ "ToolTip", "Adds a new planar difference penalty to the given trainer. The axis parameters define the plane.\nCall during ULearningAgentsTrainer::SetupRewards event.\n@param InAgentTrainer The trainer to add this penalty to.\n@param Name The name of this new penalty. Used for debugging.\n@param Weight Multiplier for this penalty when being summed up for the total reward.\n@param Scale Used to normalize the data for the penalty.\n@param Threshold Minimal distance to apply this penalty.\n@param Axis0 The forward axis of the plane.\n@param Axis1 The right axis of the plane.\n@return The newly created reward." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlanarPositionDifferencePenalty, nullptr, "AddPlanarPositionDifferencePenalty", nullptr, nullptr, Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::PlanarPositionDifferencePenalty_eventAddPlanarPositionDifferencePenalty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::PlanarPositionDifferencePenalty_eventAddPlanarPositionDifferencePenalty_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlanarPositionDifferencePenalty_SetPlanarPositionDifferencePenalty_Statics
	{
		struct PlanarPositionDifferencePenalty_eventSetPlanarPositionDifferencePenalty_Parms
		{
			int32 AgentId;
			FVector Position0;
			FVector Position1;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position0_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position1;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarPositionDifferencePenalty_SetPlanarPositionDifferencePenalty_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlanarPositionDifferencePenalty_SetPlanarPositionDifferencePenalty_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarPositionDifferencePenalty_eventSetPlanarPositionDifferencePenalty_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionDifferencePenalty_SetPlanarPositionDifferencePenalty_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_UPlanarPositionDifferencePenalty_SetPlanarPositionDifferencePenalty_Statics::NewProp_AgentId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarPositionDifferencePenalty_SetPlanarPositionDifferencePenalty_Statics::NewProp_Position0_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlanarPositionDifferencePenalty_SetPlanarPositionDifferencePenalty_Statics::NewProp_Position0 = { "Position0", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarPositionDifferencePenalty_eventSetPlanarPositionDifferencePenalty_Parms, Position0), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionDifferencePenalty_SetPlanarPositionDifferencePenalty_Statics::NewProp_Position0_MetaData), Z_Construct_UFunction_UPlanarPositionDifferencePenalty_SetPlanarPositionDifferencePenalty_Statics::NewProp_Position0_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarPositionDifferencePenalty_SetPlanarPositionDifferencePenalty_Statics::NewProp_Position1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlanarPositionDifferencePenalty_SetPlanarPositionDifferencePenalty_Statics::NewProp_Position1 = { "Position1", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarPositionDifferencePenalty_eventSetPlanarPositionDifferencePenalty_Parms, Position1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionDifferencePenalty_SetPlanarPositionDifferencePenalty_Statics::NewProp_Position1_MetaData), Z_Construct_UFunction_UPlanarPositionDifferencePenalty_SetPlanarPositionDifferencePenalty_Statics::NewProp_Position1_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlanarPositionDifferencePenalty_SetPlanarPositionDifferencePenalty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarPositionDifferencePenalty_SetPlanarPositionDifferencePenalty_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarPositionDifferencePenalty_SetPlanarPositionDifferencePenalty_Statics::NewProp_Position0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarPositionDifferencePenalty_SetPlanarPositionDifferencePenalty_Statics::NewProp_Position1,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarPositionDifferencePenalty_SetPlanarPositionDifferencePenalty_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Sets the data for this penalty. Call during ULearningAgentsTrainer::SetRewards event.\n\x09 * @param AgentId The agent id this data corresponds to.\n\x09 * @param Position0 The current position.\n\x09 * @param Position1 The goal position.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsRewards.h" },
		{ "ToolTip", "Sets the data for this penalty. Call during ULearningAgentsTrainer::SetRewards event.\n@param AgentId The agent id this data corresponds to.\n@param Position0 The current position.\n@param Position1 The goal position." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlanarPositionDifferencePenalty_SetPlanarPositionDifferencePenalty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlanarPositionDifferencePenalty, nullptr, "SetPlanarPositionDifferencePenalty", nullptr, nullptr, Z_Construct_UFunction_UPlanarPositionDifferencePenalty_SetPlanarPositionDifferencePenalty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionDifferencePenalty_SetPlanarPositionDifferencePenalty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlanarPositionDifferencePenalty_SetPlanarPositionDifferencePenalty_Statics::PlanarPositionDifferencePenalty_eventSetPlanarPositionDifferencePenalty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionDifferencePenalty_SetPlanarPositionDifferencePenalty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlanarPositionDifferencePenalty_SetPlanarPositionDifferencePenalty_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionDifferencePenalty_SetPlanarPositionDifferencePenalty_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPlanarPositionDifferencePenalty_SetPlanarPositionDifferencePenalty_Statics::PlanarPositionDifferencePenalty_eventSetPlanarPositionDifferencePenalty_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlanarPositionDifferencePenalty_SetPlanarPositionDifferencePenalty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlanarPositionDifferencePenalty_SetPlanarPositionDifferencePenalty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlanarPositionDifferencePenalty);
	UClass* Z_Construct_UClass_UPlanarPositionDifferencePenalty_NoRegister()
	{
		return UPlanarPositionDifferencePenalty::StaticClass();
	}
	struct Z_Construct_UClass_UPlanarPositionDifferencePenalty_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlanarPositionDifferencePenalty_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULearningAgentsReward,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgentsTraining,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlanarPositionDifferencePenalty_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlanarPositionDifferencePenalty_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlanarPositionDifferencePenalty_AddPlanarPositionDifferencePenalty, "AddPlanarPositionDifferencePenalty" }, // 2367724364
		{ &Z_Construct_UFunction_UPlanarPositionDifferencePenalty_SetPlanarPositionDifferencePenalty, "SetPlanarPositionDifferencePenalty" }, // 1325792022
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlanarPositionDifferencePenalty_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanarPositionDifferencePenalty_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A penalty for being far from a goal position in a plane. */" },
		{ "IncludePath", "LearningAgentsRewards.h" },
		{ "ModuleRelativePath", "Public/LearningAgentsRewards.h" },
		{ "ToolTip", "A penalty for being far from a goal position in a plane." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlanarPositionDifferencePenalty_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlanarPositionDifferencePenalty>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlanarPositionDifferencePenalty_Statics::ClassParams = {
		&UPlanarPositionDifferencePenalty::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlanarPositionDifferencePenalty_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlanarPositionDifferencePenalty_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPlanarPositionDifferencePenalty()
	{
		if (!Z_Registration_Info_UClass_UPlanarPositionDifferencePenalty.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlanarPositionDifferencePenalty.OuterSingleton, Z_Construct_UClass_UPlanarPositionDifferencePenalty_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlanarPositionDifferencePenalty.OuterSingleton;
	}
	template<> LEARNINGAGENTSTRAINING_API UClass* StaticClass<UPlanarPositionDifferencePenalty>()
	{
		return UPlanarPositionDifferencePenalty::StaticClass();
	}
	UPlanarPositionDifferencePenalty::UPlanarPositionDifferencePenalty(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlanarPositionDifferencePenalty);
	UPlanarPositionDifferencePenalty::~UPlanarPositionDifferencePenalty() {}
	DEFINE_FUNCTION(UPositionArraySimilarityReward::execSetPositionArraySimilarityReward)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Positions0);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Positions1);
		P_GET_STRUCT(FVector,Z_Param_RelativePosition0);
		P_GET_STRUCT(FVector,Z_Param_RelativePosition1);
		P_GET_STRUCT(FRotator,Z_Param_RelativeRotation0);
		P_GET_STRUCT(FRotator,Z_Param_RelativeRotation1);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPositionArraySimilarityReward(Z_Param_AgentId,Z_Param_Out_Positions0,Z_Param_Out_Positions1,Z_Param_RelativePosition0,Z_Param_RelativePosition1,Z_Param_RelativeRotation0,Z_Param_RelativeRotation1);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPositionArraySimilarityReward::execAddPositionArraySimilarityReward)
	{
		P_GET_OBJECT(ULearningAgentsTrainer,Z_Param_InAgentTrainer);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FIntProperty,Z_Param_PositionNum);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Weight);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPositionArraySimilarityReward**)Z_Param__Result=UPositionArraySimilarityReward::AddPositionArraySimilarityReward(Z_Param_InAgentTrainer,Z_Param_Name,Z_Param_PositionNum,Z_Param_Scale,Z_Param_Weight);
		P_NATIVE_END;
	}
	void UPositionArraySimilarityReward::StaticRegisterNativesUPositionArraySimilarityReward()
	{
		UClass* Class = UPositionArraySimilarityReward::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPositionArraySimilarityReward", &UPositionArraySimilarityReward::execAddPositionArraySimilarityReward },
			{ "SetPositionArraySimilarityReward", &UPositionArraySimilarityReward::execSetPositionArraySimilarityReward },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPositionArraySimilarityReward_AddPositionArraySimilarityReward_Statics
	{
		struct PositionArraySimilarityReward_eventAddPositionArraySimilarityReward_Parms
		{
			ULearningAgentsTrainer* InAgentTrainer;
			FName Name;
			int32 PositionNum;
			float Scale;
			float Weight;
			UPositionArraySimilarityReward* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAgentTrainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAgentTrainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PositionNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPositionArraySimilarityReward_AddPositionArraySimilarityReward_Statics::NewProp_InAgentTrainer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPositionArraySimilarityReward_AddPositionArraySimilarityReward_Statics::NewProp_InAgentTrainer = { "InAgentTrainer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PositionArraySimilarityReward_eventAddPositionArraySimilarityReward_Parms, InAgentTrainer), Z_Construct_UClass_ULearningAgentsTrainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPositionArraySimilarityReward_AddPositionArraySimilarityReward_Statics::NewProp_InAgentTrainer_MetaData), Z_Construct_UFunction_UPositionArraySimilarityReward_AddPositionArraySimilarityReward_Statics::NewProp_InAgentTrainer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPositionArraySimilarityReward_AddPositionArraySimilarityReward_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPositionArraySimilarityReward_AddPositionArraySimilarityReward_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PositionArraySimilarityReward_eventAddPositionArraySimilarityReward_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPositionArraySimilarityReward_AddPositionArraySimilarityReward_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UPositionArraySimilarityReward_AddPositionArraySimilarityReward_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPositionArraySimilarityReward_AddPositionArraySimilarityReward_Statics::NewProp_PositionNum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPositionArraySimilarityReward_AddPositionArraySimilarityReward_Statics::NewProp_PositionNum = { "PositionNum", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PositionArraySimilarityReward_eventAddPositionArraySimilarityReward_Parms, PositionNum), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPositionArraySimilarityReward_AddPositionArraySimilarityReward_Statics::NewProp_PositionNum_MetaData), Z_Construct_UFunction_UPositionArraySimilarityReward_AddPositionArraySimilarityReward_Statics::NewProp_PositionNum_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPositionArraySimilarityReward_AddPositionArraySimilarityReward_Statics::NewProp_Scale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPositionArraySimilarityReward_AddPositionArraySimilarityReward_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PositionArraySimilarityReward_eventAddPositionArraySimilarityReward_Parms, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPositionArraySimilarityReward_AddPositionArraySimilarityReward_Statics::NewProp_Scale_MetaData), Z_Construct_UFunction_UPositionArraySimilarityReward_AddPositionArraySimilarityReward_Statics::NewProp_Scale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPositionArraySimilarityReward_AddPositionArraySimilarityReward_Statics::NewProp_Weight_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPositionArraySimilarityReward_AddPositionArraySimilarityReward_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PositionArraySimilarityReward_eventAddPositionArraySimilarityReward_Parms, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPositionArraySimilarityReward_AddPositionArraySimilarityReward_Statics::NewProp_Weight_MetaData), Z_Construct_UFunction_UPositionArraySimilarityReward_AddPositionArraySimilarityReward_Statics::NewProp_Weight_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPositionArraySimilarityReward_AddPositionArraySimilarityReward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PositionArraySimilarityReward_eventAddPositionArraySimilarityReward_Parms, ReturnValue), Z_Construct_UClass_UPositionArraySimilarityReward_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPositionArraySimilarityReward_AddPositionArraySimilarityReward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPositionArraySimilarityReward_AddPositionArraySimilarityReward_Statics::NewProp_InAgentTrainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPositionArraySimilarityReward_AddPositionArraySimilarityReward_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPositionArraySimilarityReward_AddPositionArraySimilarityReward_Statics::NewProp_PositionNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPositionArraySimilarityReward_AddPositionArraySimilarityReward_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPositionArraySimilarityReward_AddPositionArraySimilarityReward_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPositionArraySimilarityReward_AddPositionArraySimilarityReward_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPositionArraySimilarityReward_AddPositionArraySimilarityReward_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Adds a new position array similarity reward to the given trainer. Call during ULearningAgentsTrainer::SetupRewards event.\n\x09 * @param InAgentTrainer The trainer to add this reward to.\n\x09 * @param Name The name of this new reward. Used for debugging.\n\x09 * @param PositionNum The number of positions in the array.\n\x09 * @param Scale Used to normalize the data for the reward.\n\x09 * @param Weight Multiplier for this reward when being summed up for the total reward.\n\x09 * @return The newly created reward.\n\x09 */" },
		{ "CPP_Default_Name", "None" },
		{ "CPP_Default_PositionNum", "0" },
		{ "CPP_Default_Scale", "100.000000" },
		{ "CPP_Default_Weight", "1.000000" },
		{ "DefaultToSelf", "InAgentTrainer" },
		{ "ModuleRelativePath", "Public/LearningAgentsRewards.h" },
		{ "ToolTip", "Adds a new position array similarity reward to the given trainer. Call during ULearningAgentsTrainer::SetupRewards event.\n@param InAgentTrainer The trainer to add this reward to.\n@param Name The name of this new reward. Used for debugging.\n@param PositionNum The number of positions in the array.\n@param Scale Used to normalize the data for the reward.\n@param Weight Multiplier for this reward when being summed up for the total reward.\n@return The newly created reward." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPositionArraySimilarityReward_AddPositionArraySimilarityReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPositionArraySimilarityReward, nullptr, "AddPositionArraySimilarityReward", nullptr, nullptr, Z_Construct_UFunction_UPositionArraySimilarityReward_AddPositionArraySimilarityReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPositionArraySimilarityReward_AddPositionArraySimilarityReward_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPositionArraySimilarityReward_AddPositionArraySimilarityReward_Statics::PositionArraySimilarityReward_eventAddPositionArraySimilarityReward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPositionArraySimilarityReward_AddPositionArraySimilarityReward_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPositionArraySimilarityReward_AddPositionArraySimilarityReward_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPositionArraySimilarityReward_AddPositionArraySimilarityReward_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPositionArraySimilarityReward_AddPositionArraySimilarityReward_Statics::PositionArraySimilarityReward_eventAddPositionArraySimilarityReward_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPositionArraySimilarityReward_AddPositionArraySimilarityReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPositionArraySimilarityReward_AddPositionArraySimilarityReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics
	{
		struct PositionArraySimilarityReward_eventSetPositionArraySimilarityReward_Parms
		{
			int32 AgentId;
			TArray<FVector> Positions0;
			TArray<FVector> Positions1;
			FVector RelativePosition0;
			FVector RelativePosition1;
			FRotator RelativeRotation0;
			FRotator RelativeRotation1;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Positions0_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Positions0_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Positions0;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Positions1_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Positions1_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Positions1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativePosition0_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativePosition0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativePosition1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativePosition1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeRotation0_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeRotation0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeRotation1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeRotation1;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PositionArraySimilarityReward_eventSetPositionArraySimilarityReward_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::NewProp_AgentId_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::NewProp_Positions0_Inner = { "Positions0", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::NewProp_Positions0_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::NewProp_Positions0 = { "Positions0", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PositionArraySimilarityReward_eventSetPositionArraySimilarityReward_Parms, Positions0), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::NewProp_Positions0_MetaData), Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::NewProp_Positions0_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::NewProp_Positions1_Inner = { "Positions1", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::NewProp_Positions1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::NewProp_Positions1 = { "Positions1", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PositionArraySimilarityReward_eventSetPositionArraySimilarityReward_Parms, Positions1), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::NewProp_Positions1_MetaData), Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::NewProp_Positions1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::NewProp_RelativePosition0_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::NewProp_RelativePosition0 = { "RelativePosition0", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PositionArraySimilarityReward_eventSetPositionArraySimilarityReward_Parms, RelativePosition0), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::NewProp_RelativePosition0_MetaData), Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::NewProp_RelativePosition0_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::NewProp_RelativePosition1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::NewProp_RelativePosition1 = { "RelativePosition1", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PositionArraySimilarityReward_eventSetPositionArraySimilarityReward_Parms, RelativePosition1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::NewProp_RelativePosition1_MetaData), Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::NewProp_RelativePosition1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::NewProp_RelativeRotation0_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::NewProp_RelativeRotation0 = { "RelativeRotation0", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PositionArraySimilarityReward_eventSetPositionArraySimilarityReward_Parms, RelativeRotation0), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::NewProp_RelativeRotation0_MetaData), Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::NewProp_RelativeRotation0_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::NewProp_RelativeRotation1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::NewProp_RelativeRotation1 = { "RelativeRotation1", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PositionArraySimilarityReward_eventSetPositionArraySimilarityReward_Parms, RelativeRotation1), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::NewProp_RelativeRotation1_MetaData), Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::NewProp_RelativeRotation1_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::NewProp_Positions0_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::NewProp_Positions0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::NewProp_Positions1_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::NewProp_Positions1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::NewProp_RelativePosition0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::NewProp_RelativePosition1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::NewProp_RelativeRotation0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::NewProp_RelativeRotation1,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Sets the data for this reward. Call during ULearningAgentsTrainer::SetRewards event.\n\x09 * @param AgentId The agent id this data corresponds to.\n\x09 * @param Positions0 The current positions.\n\x09 * @param Positions1 The goal positions.\n\x09 * @param RelativePosition0 The vector Positions0 will be offset from.\n\x09 * @param RelativePosition1 The vector Positions1 will be offset from.\n\x09 * @param RelativeRotation0 The frame of reference rotation for Positions0.\n\x09 * @param RelativeRotation1 The frame of reference rotation for Positions1.\n\x09 */" },
		{ "CPP_Default_RelativePosition0", "" },
		{ "CPP_Default_RelativePosition1", "" },
		{ "CPP_Default_RelativeRotation0", "" },
		{ "CPP_Default_RelativeRotation1", "" },
		{ "ModuleRelativePath", "Public/LearningAgentsRewards.h" },
		{ "ToolTip", "Sets the data for this reward. Call during ULearningAgentsTrainer::SetRewards event.\n@param AgentId The agent id this data corresponds to.\n@param Positions0 The current positions.\n@param Positions1 The goal positions.\n@param RelativePosition0 The vector Positions0 will be offset from.\n@param RelativePosition1 The vector Positions1 will be offset from.\n@param RelativeRotation0 The frame of reference rotation for Positions0.\n@param RelativeRotation1 The frame of reference rotation for Positions1." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPositionArraySimilarityReward, nullptr, "SetPositionArraySimilarityReward", nullptr, nullptr, Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::PositionArraySimilarityReward_eventSetPositionArraySimilarityReward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::PositionArraySimilarityReward_eventSetPositionArraySimilarityReward_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPositionArraySimilarityReward);
	UClass* Z_Construct_UClass_UPositionArraySimilarityReward_NoRegister()
	{
		return UPositionArraySimilarityReward::StaticClass();
	}
	struct Z_Construct_UClass_UPositionArraySimilarityReward_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPositionArraySimilarityReward_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULearningAgentsReward,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgentsTraining,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPositionArraySimilarityReward_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPositionArraySimilarityReward_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPositionArraySimilarityReward_AddPositionArraySimilarityReward, "AddPositionArraySimilarityReward" }, // 3502426967
		{ &Z_Construct_UFunction_UPositionArraySimilarityReward_SetPositionArraySimilarityReward, "SetPositionArraySimilarityReward" }, // 499157640
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPositionArraySimilarityReward_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPositionArraySimilarityReward_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A reward for minimizing the distances of positions in the given arrays. */" },
		{ "IncludePath", "LearningAgentsRewards.h" },
		{ "ModuleRelativePath", "Public/LearningAgentsRewards.h" },
		{ "ToolTip", "A reward for minimizing the distances of positions in the given arrays." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPositionArraySimilarityReward_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPositionArraySimilarityReward>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPositionArraySimilarityReward_Statics::ClassParams = {
		&UPositionArraySimilarityReward::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPositionArraySimilarityReward_Statics::Class_MetaDataParams), Z_Construct_UClass_UPositionArraySimilarityReward_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPositionArraySimilarityReward()
	{
		if (!Z_Registration_Info_UClass_UPositionArraySimilarityReward.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPositionArraySimilarityReward.OuterSingleton, Z_Construct_UClass_UPositionArraySimilarityReward_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPositionArraySimilarityReward.OuterSingleton;
	}
	template<> LEARNINGAGENTSTRAINING_API UClass* StaticClass<UPositionArraySimilarityReward>()
	{
		return UPositionArraySimilarityReward::StaticClass();
	}
	UPositionArraySimilarityReward::UPositionArraySimilarityReward(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPositionArraySimilarityReward);
	UPositionArraySimilarityReward::~UPositionArraySimilarityReward() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRewards_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRewards_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULearningAgentsReward, ULearningAgentsReward::StaticClass, TEXT("ULearningAgentsReward"), &Z_Registration_Info_UClass_ULearningAgentsReward, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULearningAgentsReward), 3352439326U) },
		{ Z_Construct_UClass_UFloatReward, UFloatReward::StaticClass, TEXT("UFloatReward"), &Z_Registration_Info_UClass_UFloatReward, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFloatReward), 1022662815U) },
		{ Z_Construct_UClass_UConditionalReward, UConditionalReward::StaticClass, TEXT("UConditionalReward"), &Z_Registration_Info_UClass_UConditionalReward, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConditionalReward), 62852191U) },
		{ Z_Construct_UClass_UScalarVelocityReward, UScalarVelocityReward::StaticClass, TEXT("UScalarVelocityReward"), &Z_Registration_Info_UClass_UScalarVelocityReward, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScalarVelocityReward), 390192190U) },
		{ Z_Construct_UClass_ULocalDirectionalVelocityReward, ULocalDirectionalVelocityReward::StaticClass, TEXT("ULocalDirectionalVelocityReward"), &Z_Registration_Info_UClass_ULocalDirectionalVelocityReward, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULocalDirectionalVelocityReward), 23480409U) },
		{ Z_Construct_UClass_UPlanarPositionDifferencePenalty, UPlanarPositionDifferencePenalty::StaticClass, TEXT("UPlanarPositionDifferencePenalty"), &Z_Registration_Info_UClass_UPlanarPositionDifferencePenalty, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlanarPositionDifferencePenalty), 46602785U) },
		{ Z_Construct_UClass_UPositionArraySimilarityReward, UPositionArraySimilarityReward::StaticClass, TEXT("UPositionArraySimilarityReward"), &Z_Registration_Info_UClass_UPositionArraySimilarityReward, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPositionArraySimilarityReward), 211066197U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRewards_h_1492549648(TEXT("/Script/LearningAgentsTraining"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRewards_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRewards_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
