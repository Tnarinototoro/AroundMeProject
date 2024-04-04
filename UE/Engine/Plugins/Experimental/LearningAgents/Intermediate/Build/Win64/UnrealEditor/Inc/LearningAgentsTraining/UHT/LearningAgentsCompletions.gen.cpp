// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningAgentsCompletions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLearningAgentsCompletions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_UConditionalCompletion();
	LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_UConditionalCompletion_NoRegister();
	LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_ULearningAgentsCompletion();
	LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_ULearningAgentsCompletion_NoRegister();
	LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_ULearningAgentsTrainer_NoRegister();
	LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_UPlanarPositionDifferenceCompletion();
	LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_UPlanarPositionDifferenceCompletion_NoRegister();
	LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_UPlanarPositionSimilarityCompletion();
	LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_UPlanarPositionSimilarityCompletion_NoRegister();
	LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_UTimeElapsedCompletion();
	LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_UTimeElapsedCompletion_NoRegister();
	LEARNINGAGENTSTRAINING_API UEnum* Z_Construct_UEnum_LearningAgentsTraining_ELearningAgentsCompletion();
	UPackage* Z_Construct_UPackage__Script_LearningAgentsTraining();
// End Cross Module References
	void ULearningAgentsCompletion::StaticRegisterNativesULearningAgentsCompletion()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULearningAgentsCompletion);
	UClass* Z_Construct_UClass_ULearningAgentsCompletion_NoRegister()
	{
		return ULearningAgentsCompletion::StaticClass();
	}
	struct Z_Construct_UClass_ULearningAgentsCompletion_Statics
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
	UObject* (*const Z_Construct_UClass_ULearningAgentsCompletion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgentsTraining,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsCompletion_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsCompletion_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The base class for all completions. Completions contain logic that determines if an agent's current episode should\n * end, e.g. because the agent achieved the normal win/loss condition for the game. Additionally, completions can speed\n * up training by ending episodes early if the agent has gotten into a state where training data is no longer useful,\n * e.g. the agent is stuck somewhere. These two modes of completions are expressed with the following enum values:\n *   ELearningAgentsCompletion::Termination - used when the episode ends in an expected way and no further rewards\n *       should be expected, i.e. do not use the value function to estimate future rewards.\n *   ELearningAgentsCompletion::Truncation - used when the episode ends in an unexpected way, mainly to speed up the \n *       training process. The agent should expect additional rewards if training were to continue, so it should use\n *       its value function to estimate future rewards.\n */" },
		{ "IncludePath", "LearningAgentsCompletions.h" },
		{ "ModuleRelativePath", "Public/LearningAgentsCompletions.h" },
		{ "ToolTip", "The base class for all completions. Completions contain logic that determines if an agent's current episode should\nend, e.g. because the agent achieved the normal win/loss condition for the game. Additionally, completions can speed\nup training by ending episodes early if the agent has gotten into a state where training data is no longer useful,\ne.g. the agent is stuck somewhere. These two modes of completions are expressed with the following enum values:\n  ELearningAgentsCompletion::Termination - used when the episode ends in an expected way and no further rewards\n      should be expected, i.e. do not use the value function to estimate future rewards.\n  ELearningAgentsCompletion::Truncation - used when the episode ends in an unexpected way, mainly to speed up the\n      training process. The agent should expect additional rewards if training were to continue, so it should use\n      its value function to estimate future rewards." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsCompletion_Statics::NewProp_AgentTrainer_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** Reference to the Trainer this completion is associated with. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LearningAgentsCompletions.h" },
		{ "ToolTip", "Reference to the Trainer this completion is associated with." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULearningAgentsCompletion_Statics::NewProp_AgentTrainer = { "AgentTrainer", nullptr, (EPropertyFlags)0x00140000000a2009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULearningAgentsCompletion, AgentTrainer), Z_Construct_UClass_ULearningAgentsTrainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsCompletion_Statics::NewProp_AgentTrainer_MetaData), Z_Construct_UClass_ULearningAgentsCompletion_Statics::NewProp_AgentTrainer_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULearningAgentsCompletion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULearningAgentsCompletion_Statics::NewProp_AgentTrainer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULearningAgentsCompletion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULearningAgentsCompletion>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULearningAgentsCompletion_Statics::ClassParams = {
		&ULearningAgentsCompletion::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULearningAgentsCompletion_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsCompletion_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsCompletion_Statics::Class_MetaDataParams), Z_Construct_UClass_ULearningAgentsCompletion_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsCompletion_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULearningAgentsCompletion()
	{
		if (!Z_Registration_Info_UClass_ULearningAgentsCompletion.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULearningAgentsCompletion.OuterSingleton, Z_Construct_UClass_ULearningAgentsCompletion_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULearningAgentsCompletion.OuterSingleton;
	}
	template<> LEARNINGAGENTSTRAINING_API UClass* StaticClass<ULearningAgentsCompletion>()
	{
		return ULearningAgentsCompletion::StaticClass();
	}
	ULearningAgentsCompletion::ULearningAgentsCompletion(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULearningAgentsCompletion);
	ULearningAgentsCompletion::~ULearningAgentsCompletion() {}
	DEFINE_FUNCTION(UConditionalCompletion::execSetConditionalCompletion)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_GET_UBOOL(Z_Param_bIsCompleted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetConditionalCompletion(Z_Param_AgentId,Z_Param_bIsCompleted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConditionalCompletion::execAddConditionalCompletion)
	{
		P_GET_OBJECT(ULearningAgentsTrainer,Z_Param_InAgentTrainer);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_ENUM(ELearningAgentsCompletion,Z_Param_InCompletionMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UConditionalCompletion**)Z_Param__Result=UConditionalCompletion::AddConditionalCompletion(Z_Param_InAgentTrainer,Z_Param_Name,ELearningAgentsCompletion(Z_Param_InCompletionMode));
		P_NATIVE_END;
	}
	void UConditionalCompletion::StaticRegisterNativesUConditionalCompletion()
	{
		UClass* Class = UConditionalCompletion::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddConditionalCompletion", &UConditionalCompletion::execAddConditionalCompletion },
			{ "SetConditionalCompletion", &UConditionalCompletion::execSetConditionalCompletion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UConditionalCompletion_AddConditionalCompletion_Statics
	{
		struct ConditionalCompletion_eventAddConditionalCompletion_Parms
		{
			ULearningAgentsTrainer* InAgentTrainer;
			FName Name;
			ELearningAgentsCompletion InCompletionMode;
			UConditionalCompletion* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAgentTrainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAgentTrainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InCompletionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCompletionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InCompletionMode;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionalCompletion_AddConditionalCompletion_Statics::NewProp_InAgentTrainer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConditionalCompletion_AddConditionalCompletion_Statics::NewProp_InAgentTrainer = { "InAgentTrainer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConditionalCompletion_eventAddConditionalCompletion_Parms, InAgentTrainer), Z_Construct_UClass_ULearningAgentsTrainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionalCompletion_AddConditionalCompletion_Statics::NewProp_InAgentTrainer_MetaData), Z_Construct_UFunction_UConditionalCompletion_AddConditionalCompletion_Statics::NewProp_InAgentTrainer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionalCompletion_AddConditionalCompletion_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UConditionalCompletion_AddConditionalCompletion_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConditionalCompletion_eventAddConditionalCompletion_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionalCompletion_AddConditionalCompletion_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UConditionalCompletion_AddConditionalCompletion_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UConditionalCompletion_AddConditionalCompletion_Statics::NewProp_InCompletionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionalCompletion_AddConditionalCompletion_Statics::NewProp_InCompletionMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UConditionalCompletion_AddConditionalCompletion_Statics::NewProp_InCompletionMode = { "InCompletionMode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConditionalCompletion_eventAddConditionalCompletion_Parms, InCompletionMode), Z_Construct_UEnum_LearningAgentsTraining_ELearningAgentsCompletion, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionalCompletion_AddConditionalCompletion_Statics::NewProp_InCompletionMode_MetaData), Z_Construct_UFunction_UConditionalCompletion_AddConditionalCompletion_Statics::NewProp_InCompletionMode_MetaData) }; // 1079080398
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConditionalCompletion_AddConditionalCompletion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConditionalCompletion_eventAddConditionalCompletion_Parms, ReturnValue), Z_Construct_UClass_UConditionalCompletion_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConditionalCompletion_AddConditionalCompletion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionalCompletion_AddConditionalCompletion_Statics::NewProp_InAgentTrainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionalCompletion_AddConditionalCompletion_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionalCompletion_AddConditionalCompletion_Statics::NewProp_InCompletionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionalCompletion_AddConditionalCompletion_Statics::NewProp_InCompletionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionalCompletion_AddConditionalCompletion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionalCompletion_AddConditionalCompletion_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Adds a new conditional completion to the given trainer. Call during ULearningAgentsTrainer::SetupCompletions event.\n\x09 * @param InAgentTrainer The trainer to add this completion to.\n\x09 * @param Name The name of this new completion. Used for debugging.\n\x09 * @param InCompletionMode The completion mode.\n\x09 * @return The newly created completion.\n\x09 */" },
		{ "CPP_Default_InCompletionMode", "Termination" },
		{ "CPP_Default_Name", "None" },
		{ "DefaultToSelf", "InAgentTrainer" },
		{ "ModuleRelativePath", "Public/LearningAgentsCompletions.h" },
		{ "ToolTip", "Adds a new conditional completion to the given trainer. Call during ULearningAgentsTrainer::SetupCompletions event.\n@param InAgentTrainer The trainer to add this completion to.\n@param Name The name of this new completion. Used for debugging.\n@param InCompletionMode The completion mode.\n@return The newly created completion." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConditionalCompletion_AddConditionalCompletion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConditionalCompletion, nullptr, "AddConditionalCompletion", nullptr, nullptr, Z_Construct_UFunction_UConditionalCompletion_AddConditionalCompletion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionalCompletion_AddConditionalCompletion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConditionalCompletion_AddConditionalCompletion_Statics::ConditionalCompletion_eventAddConditionalCompletion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionalCompletion_AddConditionalCompletion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConditionalCompletion_AddConditionalCompletion_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionalCompletion_AddConditionalCompletion_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UConditionalCompletion_AddConditionalCompletion_Statics::ConditionalCompletion_eventAddConditionalCompletion_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UConditionalCompletion_AddConditionalCompletion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConditionalCompletion_AddConditionalCompletion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConditionalCompletion_SetConditionalCompletion_Statics
	{
		struct ConditionalCompletion_eventSetConditionalCompletion_Parms
		{
			int32 AgentId;
			bool bIsCompleted;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCompleted_MetaData[];
#endif
		static void NewProp_bIsCompleted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCompleted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionalCompletion_SetConditionalCompletion_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConditionalCompletion_SetConditionalCompletion_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConditionalCompletion_eventSetConditionalCompletion_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionalCompletion_SetConditionalCompletion_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_UConditionalCompletion_SetConditionalCompletion_Statics::NewProp_AgentId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionalCompletion_SetConditionalCompletion_Statics::NewProp_bIsCompleted_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UConditionalCompletion_SetConditionalCompletion_Statics::NewProp_bIsCompleted_SetBit(void* Obj)
	{
		((ConditionalCompletion_eventSetConditionalCompletion_Parms*)Obj)->bIsCompleted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConditionalCompletion_SetConditionalCompletion_Statics::NewProp_bIsCompleted = { "bIsCompleted", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ConditionalCompletion_eventSetConditionalCompletion_Parms), &Z_Construct_UFunction_UConditionalCompletion_SetConditionalCompletion_Statics::NewProp_bIsCompleted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionalCompletion_SetConditionalCompletion_Statics::NewProp_bIsCompleted_MetaData), Z_Construct_UFunction_UConditionalCompletion_SetConditionalCompletion_Statics::NewProp_bIsCompleted_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConditionalCompletion_SetConditionalCompletion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionalCompletion_SetConditionalCompletion_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionalCompletion_SetConditionalCompletion_Statics::NewProp_bIsCompleted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionalCompletion_SetConditionalCompletion_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Sets the data for this completion. Call during ULearningAgentsTrainer::SetCompletions event.\n\x09 * @param AgentId The agent id this data corresponds to.\n\x09 * @param bIsCompleted Pass in true if condition is met. Otherwise, false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsCompletions.h" },
		{ "ToolTip", "Sets the data for this completion. Call during ULearningAgentsTrainer::SetCompletions event.\n@param AgentId The agent id this data corresponds to.\n@param bIsCompleted Pass in true if condition is met. Otherwise, false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConditionalCompletion_SetConditionalCompletion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConditionalCompletion, nullptr, "SetConditionalCompletion", nullptr, nullptr, Z_Construct_UFunction_UConditionalCompletion_SetConditionalCompletion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionalCompletion_SetConditionalCompletion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConditionalCompletion_SetConditionalCompletion_Statics::ConditionalCompletion_eventSetConditionalCompletion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionalCompletion_SetConditionalCompletion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConditionalCompletion_SetConditionalCompletion_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionalCompletion_SetConditionalCompletion_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UConditionalCompletion_SetConditionalCompletion_Statics::ConditionalCompletion_eventSetConditionalCompletion_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UConditionalCompletion_SetConditionalCompletion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConditionalCompletion_SetConditionalCompletion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConditionalCompletion);
	UClass* Z_Construct_UClass_UConditionalCompletion_NoRegister()
	{
		return UConditionalCompletion::StaticClass();
	}
	struct Z_Construct_UClass_UConditionalCompletion_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConditionalCompletion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULearningAgentsCompletion,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgentsTraining,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConditionalCompletion_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UConditionalCompletion_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UConditionalCompletion_AddConditionalCompletion, "AddConditionalCompletion" }, // 1151905504
		{ &Z_Construct_UFunction_UConditionalCompletion_SetConditionalCompletion, "SetConditionalCompletion" }, // 1975238807
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConditionalCompletion_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConditionalCompletion_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A simple boolean completion. Used as a catch-all for situations where a more type-specific completion does not exist yet. */" },
		{ "IncludePath", "LearningAgentsCompletions.h" },
		{ "ModuleRelativePath", "Public/LearningAgentsCompletions.h" },
		{ "ToolTip", "A simple boolean completion. Used as a catch-all for situations where a more type-specific completion does not exist yet." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConditionalCompletion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConditionalCompletion>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConditionalCompletion_Statics::ClassParams = {
		&UConditionalCompletion::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UConditionalCompletion_Statics::Class_MetaDataParams), Z_Construct_UClass_UConditionalCompletion_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UConditionalCompletion()
	{
		if (!Z_Registration_Info_UClass_UConditionalCompletion.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConditionalCompletion.OuterSingleton, Z_Construct_UClass_UConditionalCompletion_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConditionalCompletion.OuterSingleton;
	}
	template<> LEARNINGAGENTSTRAINING_API UClass* StaticClass<UConditionalCompletion>()
	{
		return UConditionalCompletion::StaticClass();
	}
	UConditionalCompletion::UConditionalCompletion(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConditionalCompletion);
	UConditionalCompletion::~UConditionalCompletion() {}
	DEFINE_FUNCTION(UTimeElapsedCompletion::execSetTimeElapsedCompletion)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTimeElapsedCompletion(Z_Param_AgentId,Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimeElapsedCompletion::execAddTimeElapsedCompletion)
	{
		P_GET_OBJECT(ULearningAgentsTrainer,Z_Param_InAgentTrainer);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Threshold);
		P_GET_ENUM(ELearningAgentsCompletion,Z_Param_InCompletionMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTimeElapsedCompletion**)Z_Param__Result=UTimeElapsedCompletion::AddTimeElapsedCompletion(Z_Param_InAgentTrainer,Z_Param_Name,Z_Param_Threshold,ELearningAgentsCompletion(Z_Param_InCompletionMode));
		P_NATIVE_END;
	}
	void UTimeElapsedCompletion::StaticRegisterNativesUTimeElapsedCompletion()
	{
		UClass* Class = UTimeElapsedCompletion::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTimeElapsedCompletion", &UTimeElapsedCompletion::execAddTimeElapsedCompletion },
			{ "SetTimeElapsedCompletion", &UTimeElapsedCompletion::execSetTimeElapsedCompletion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTimeElapsedCompletion_AddTimeElapsedCompletion_Statics
	{
		struct TimeElapsedCompletion_eventAddTimeElapsedCompletion_Parms
		{
			ULearningAgentsTrainer* InAgentTrainer;
			FName Name;
			float Threshold;
			ELearningAgentsCompletion InCompletionMode;
			UTimeElapsedCompletion* ReturnValue;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Threshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Threshold;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InCompletionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCompletionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InCompletionMode;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeElapsedCompletion_AddTimeElapsedCompletion_Statics::NewProp_InAgentTrainer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTimeElapsedCompletion_AddTimeElapsedCompletion_Statics::NewProp_InAgentTrainer = { "InAgentTrainer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimeElapsedCompletion_eventAddTimeElapsedCompletion_Parms, InAgentTrainer), Z_Construct_UClass_ULearningAgentsTrainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeElapsedCompletion_AddTimeElapsedCompletion_Statics::NewProp_InAgentTrainer_MetaData), Z_Construct_UFunction_UTimeElapsedCompletion_AddTimeElapsedCompletion_Statics::NewProp_InAgentTrainer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeElapsedCompletion_AddTimeElapsedCompletion_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTimeElapsedCompletion_AddTimeElapsedCompletion_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimeElapsedCompletion_eventAddTimeElapsedCompletion_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeElapsedCompletion_AddTimeElapsedCompletion_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UTimeElapsedCompletion_AddTimeElapsedCompletion_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeElapsedCompletion_AddTimeElapsedCompletion_Statics::NewProp_Threshold_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimeElapsedCompletion_AddTimeElapsedCompletion_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimeElapsedCompletion_eventAddTimeElapsedCompletion_Parms, Threshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeElapsedCompletion_AddTimeElapsedCompletion_Statics::NewProp_Threshold_MetaData), Z_Construct_UFunction_UTimeElapsedCompletion_AddTimeElapsedCompletion_Statics::NewProp_Threshold_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTimeElapsedCompletion_AddTimeElapsedCompletion_Statics::NewProp_InCompletionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeElapsedCompletion_AddTimeElapsedCompletion_Statics::NewProp_InCompletionMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTimeElapsedCompletion_AddTimeElapsedCompletion_Statics::NewProp_InCompletionMode = { "InCompletionMode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimeElapsedCompletion_eventAddTimeElapsedCompletion_Parms, InCompletionMode), Z_Construct_UEnum_LearningAgentsTraining_ELearningAgentsCompletion, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeElapsedCompletion_AddTimeElapsedCompletion_Statics::NewProp_InCompletionMode_MetaData), Z_Construct_UFunction_UTimeElapsedCompletion_AddTimeElapsedCompletion_Statics::NewProp_InCompletionMode_MetaData) }; // 1079080398
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTimeElapsedCompletion_AddTimeElapsedCompletion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimeElapsedCompletion_eventAddTimeElapsedCompletion_Parms, ReturnValue), Z_Construct_UClass_UTimeElapsedCompletion_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeElapsedCompletion_AddTimeElapsedCompletion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeElapsedCompletion_AddTimeElapsedCompletion_Statics::NewProp_InAgentTrainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeElapsedCompletion_AddTimeElapsedCompletion_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeElapsedCompletion_AddTimeElapsedCompletion_Statics::NewProp_Threshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeElapsedCompletion_AddTimeElapsedCompletion_Statics::NewProp_InCompletionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeElapsedCompletion_AddTimeElapsedCompletion_Statics::NewProp_InCompletionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeElapsedCompletion_AddTimeElapsedCompletion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeElapsedCompletion_AddTimeElapsedCompletion_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Adds a new time elapsed completion to the given trainer. Call during ULearningAgentsTrainer::SetupCompletions event.\n\x09 * @param InAgentTrainer The trainer to add this completion to.\n\x09 * @param Name The name of this new completion. Used for debugging.\n\x09 * @param Threshold How much time should be elapsed for the completion to trigger.\n\x09 * @param InCompletionMode The completion mode.\n\x09 * @return The newly created completion.\n\x09 */" },
		{ "CPP_Default_InCompletionMode", "Termination" },
		{ "CPP_Default_Name", "None" },
		{ "CPP_Default_Threshold", "10.000000" },
		{ "DefaultToSelf", "InAgentTrainer" },
		{ "ModuleRelativePath", "Public/LearningAgentsCompletions.h" },
		{ "ToolTip", "Adds a new time elapsed completion to the given trainer. Call during ULearningAgentsTrainer::SetupCompletions event.\n@param InAgentTrainer The trainer to add this completion to.\n@param Name The name of this new completion. Used for debugging.\n@param Threshold How much time should be elapsed for the completion to trigger.\n@param InCompletionMode The completion mode.\n@return The newly created completion." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeElapsedCompletion_AddTimeElapsedCompletion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeElapsedCompletion, nullptr, "AddTimeElapsedCompletion", nullptr, nullptr, Z_Construct_UFunction_UTimeElapsedCompletion_AddTimeElapsedCompletion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeElapsedCompletion_AddTimeElapsedCompletion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimeElapsedCompletion_AddTimeElapsedCompletion_Statics::TimeElapsedCompletion_eventAddTimeElapsedCompletion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeElapsedCompletion_AddTimeElapsedCompletion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimeElapsedCompletion_AddTimeElapsedCompletion_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeElapsedCompletion_AddTimeElapsedCompletion_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTimeElapsedCompletion_AddTimeElapsedCompletion_Statics::TimeElapsedCompletion_eventAddTimeElapsedCompletion_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTimeElapsedCompletion_AddTimeElapsedCompletion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimeElapsedCompletion_AddTimeElapsedCompletion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeElapsedCompletion_SetTimeElapsedCompletion_Statics
	{
		struct TimeElapsedCompletion_eventSetTimeElapsedCompletion_Parms
		{
			int32 AgentId;
			float Time;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeElapsedCompletion_SetTimeElapsedCompletion_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTimeElapsedCompletion_SetTimeElapsedCompletion_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimeElapsedCompletion_eventSetTimeElapsedCompletion_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeElapsedCompletion_SetTimeElapsedCompletion_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_UTimeElapsedCompletion_SetTimeElapsedCompletion_Statics::NewProp_AgentId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeElapsedCompletion_SetTimeElapsedCompletion_Statics::NewProp_Time_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimeElapsedCompletion_SetTimeElapsedCompletion_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimeElapsedCompletion_eventSetTimeElapsedCompletion_Parms, Time), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeElapsedCompletion_SetTimeElapsedCompletion_Statics::NewProp_Time_MetaData), Z_Construct_UFunction_UTimeElapsedCompletion_SetTimeElapsedCompletion_Statics::NewProp_Time_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeElapsedCompletion_SetTimeElapsedCompletion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeElapsedCompletion_SetTimeElapsedCompletion_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeElapsedCompletion_SetTimeElapsedCompletion_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeElapsedCompletion_SetTimeElapsedCompletion_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Sets the data for this completion. Call during ULearningAgentsTrainer::SetCompletions event.\n\x09 * @param AgentId The agent id this data corresponds to.\n\x09 * @param Time The amount of time that has passed\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsCompletions.h" },
		{ "ToolTip", "Sets the data for this completion. Call during ULearningAgentsTrainer::SetCompletions event.\n@param AgentId The agent id this data corresponds to.\n@param Time The amount of time that has passed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeElapsedCompletion_SetTimeElapsedCompletion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeElapsedCompletion, nullptr, "SetTimeElapsedCompletion", nullptr, nullptr, Z_Construct_UFunction_UTimeElapsedCompletion_SetTimeElapsedCompletion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeElapsedCompletion_SetTimeElapsedCompletion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimeElapsedCompletion_SetTimeElapsedCompletion_Statics::TimeElapsedCompletion_eventSetTimeElapsedCompletion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeElapsedCompletion_SetTimeElapsedCompletion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimeElapsedCompletion_SetTimeElapsedCompletion_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeElapsedCompletion_SetTimeElapsedCompletion_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTimeElapsedCompletion_SetTimeElapsedCompletion_Statics::TimeElapsedCompletion_eventSetTimeElapsedCompletion_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTimeElapsedCompletion_SetTimeElapsedCompletion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimeElapsedCompletion_SetTimeElapsedCompletion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTimeElapsedCompletion);
	UClass* Z_Construct_UClass_UTimeElapsedCompletion_NoRegister()
	{
		return UTimeElapsedCompletion::StaticClass();
	}
	struct Z_Construct_UClass_UTimeElapsedCompletion_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimeElapsedCompletion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULearningAgentsCompletion,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgentsTraining,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTimeElapsedCompletion_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTimeElapsedCompletion_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTimeElapsedCompletion_AddTimeElapsedCompletion, "AddTimeElapsedCompletion" }, // 1388661154
		{ &Z_Construct_UFunction_UTimeElapsedCompletion_SetTimeElapsedCompletion, "SetTimeElapsedCompletion" }, // 762922926
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTimeElapsedCompletion_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimeElapsedCompletion_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A completion for if a given amount of time has elapsed. */" },
		{ "IncludePath", "LearningAgentsCompletions.h" },
		{ "ModuleRelativePath", "Public/LearningAgentsCompletions.h" },
		{ "ToolTip", "A completion for if a given amount of time has elapsed." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimeElapsedCompletion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimeElapsedCompletion>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTimeElapsedCompletion_Statics::ClassParams = {
		&UTimeElapsedCompletion::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTimeElapsedCompletion_Statics::Class_MetaDataParams), Z_Construct_UClass_UTimeElapsedCompletion_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTimeElapsedCompletion()
	{
		if (!Z_Registration_Info_UClass_UTimeElapsedCompletion.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTimeElapsedCompletion.OuterSingleton, Z_Construct_UClass_UTimeElapsedCompletion_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTimeElapsedCompletion.OuterSingleton;
	}
	template<> LEARNINGAGENTSTRAINING_API UClass* StaticClass<UTimeElapsedCompletion>()
	{
		return UTimeElapsedCompletion::StaticClass();
	}
	UTimeElapsedCompletion::UTimeElapsedCompletion(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimeElapsedCompletion);
	UTimeElapsedCompletion::~UTimeElapsedCompletion() {}
	DEFINE_FUNCTION(UPlanarPositionDifferenceCompletion::execSetPlanarPositionDifferenceCompletion)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_GET_STRUCT(FVector,Z_Param_Position0);
		P_GET_STRUCT(FVector,Z_Param_Position1);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlanarPositionDifferenceCompletion(Z_Param_AgentId,Z_Param_Position0,Z_Param_Position1);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlanarPositionDifferenceCompletion::execAddPlanarPositionDifferenceCompletion)
	{
		P_GET_OBJECT(ULearningAgentsTrainer,Z_Param_InAgentTrainer);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Threshold);
		P_GET_ENUM(ELearningAgentsCompletion,Z_Param_InCompletionMode);
		P_GET_STRUCT(FVector,Z_Param_Axis0);
		P_GET_STRUCT(FVector,Z_Param_Axis1);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlanarPositionDifferenceCompletion**)Z_Param__Result=UPlanarPositionDifferenceCompletion::AddPlanarPositionDifferenceCompletion(Z_Param_InAgentTrainer,Z_Param_Name,Z_Param_Threshold,ELearningAgentsCompletion(Z_Param_InCompletionMode),Z_Param_Axis0,Z_Param_Axis1);
		P_NATIVE_END;
	}
	void UPlanarPositionDifferenceCompletion::StaticRegisterNativesUPlanarPositionDifferenceCompletion()
	{
		UClass* Class = UPlanarPositionDifferenceCompletion::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPlanarPositionDifferenceCompletion", &UPlanarPositionDifferenceCompletion::execAddPlanarPositionDifferenceCompletion },
			{ "SetPlanarPositionDifferenceCompletion", &UPlanarPositionDifferenceCompletion::execSetPlanarPositionDifferenceCompletion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics
	{
		struct PlanarPositionDifferenceCompletion_eventAddPlanarPositionDifferenceCompletion_Parms
		{
			ULearningAgentsTrainer* InAgentTrainer;
			FName Name;
			float Threshold;
			ELearningAgentsCompletion InCompletionMode;
			FVector Axis0;
			FVector Axis1;
			UPlanarPositionDifferenceCompletion* ReturnValue;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Threshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Threshold;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InCompletionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCompletionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InCompletionMode;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::NewProp_InAgentTrainer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::NewProp_InAgentTrainer = { "InAgentTrainer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarPositionDifferenceCompletion_eventAddPlanarPositionDifferenceCompletion_Parms, InAgentTrainer), Z_Construct_UClass_ULearningAgentsTrainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::NewProp_InAgentTrainer_MetaData), Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::NewProp_InAgentTrainer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarPositionDifferenceCompletion_eventAddPlanarPositionDifferenceCompletion_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::NewProp_Threshold_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarPositionDifferenceCompletion_eventAddPlanarPositionDifferenceCompletion_Parms, Threshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::NewProp_Threshold_MetaData), Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::NewProp_Threshold_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::NewProp_InCompletionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::NewProp_InCompletionMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::NewProp_InCompletionMode = { "InCompletionMode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarPositionDifferenceCompletion_eventAddPlanarPositionDifferenceCompletion_Parms, InCompletionMode), Z_Construct_UEnum_LearningAgentsTraining_ELearningAgentsCompletion, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::NewProp_InCompletionMode_MetaData), Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::NewProp_InCompletionMode_MetaData) }; // 1079080398
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::NewProp_Axis0_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::NewProp_Axis0 = { "Axis0", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarPositionDifferenceCompletion_eventAddPlanarPositionDifferenceCompletion_Parms, Axis0), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::NewProp_Axis0_MetaData), Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::NewProp_Axis0_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::NewProp_Axis1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::NewProp_Axis1 = { "Axis1", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarPositionDifferenceCompletion_eventAddPlanarPositionDifferenceCompletion_Parms, Axis1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::NewProp_Axis1_MetaData), Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::NewProp_Axis1_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarPositionDifferenceCompletion_eventAddPlanarPositionDifferenceCompletion_Parms, ReturnValue), Z_Construct_UClass_UPlanarPositionDifferenceCompletion_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::NewProp_InAgentTrainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::NewProp_Threshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::NewProp_InCompletionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::NewProp_InCompletionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::NewProp_Axis0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::NewProp_Axis1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Adds a new planar position difference completion to the given trainer. The axis parameters define the plane.\n\x09 * Call during ULearningAgentsTrainer::SetupCompletions event.\n\x09 * @param InAgentTrainer The trainer to add this completion to.\n\x09 * @param Name The name of this new completion. Used for debugging.\n\x09 * @param Threshold If the distance becomes greater than this threshold, then the episode will complete.\n\x09 * @param InCompletionMode The completion mode.\n\x09 * @param Axis0 The forward axis of the plane.\n\x09 * @param Axis1 The right axis of the plane.\n\x09 * @return The newly created completion.\n\x09 */" },
		{ "CPP_Default_Axis0", "1.000000,0.000000,0.000000" },
		{ "CPP_Default_Axis1", "0.000000,1.000000,0.000000" },
		{ "CPP_Default_InCompletionMode", "Termination" },
		{ "CPP_Default_Name", "None" },
		{ "CPP_Default_Threshold", "100.000000" },
		{ "DefaultToSelf", "InAgentTrainer" },
		{ "ModuleRelativePath", "Public/LearningAgentsCompletions.h" },
		{ "ToolTip", "Adds a new planar position difference completion to the given trainer. The axis parameters define the plane.\nCall during ULearningAgentsTrainer::SetupCompletions event.\n@param InAgentTrainer The trainer to add this completion to.\n@param Name The name of this new completion. Used for debugging.\n@param Threshold If the distance becomes greater than this threshold, then the episode will complete.\n@param InCompletionMode The completion mode.\n@param Axis0 The forward axis of the plane.\n@param Axis1 The right axis of the plane.\n@return The newly created completion." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlanarPositionDifferenceCompletion, nullptr, "AddPlanarPositionDifferenceCompletion", nullptr, nullptr, Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::PlanarPositionDifferenceCompletion_eventAddPlanarPositionDifferenceCompletion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::PlanarPositionDifferenceCompletion_eventAddPlanarPositionDifferenceCompletion_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_SetPlanarPositionDifferenceCompletion_Statics
	{
		struct PlanarPositionDifferenceCompletion_eventSetPlanarPositionDifferenceCompletion_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_SetPlanarPositionDifferenceCompletion_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_SetPlanarPositionDifferenceCompletion_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarPositionDifferenceCompletion_eventSetPlanarPositionDifferenceCompletion_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_SetPlanarPositionDifferenceCompletion_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_SetPlanarPositionDifferenceCompletion_Statics::NewProp_AgentId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_SetPlanarPositionDifferenceCompletion_Statics::NewProp_Position0_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_SetPlanarPositionDifferenceCompletion_Statics::NewProp_Position0 = { "Position0", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarPositionDifferenceCompletion_eventSetPlanarPositionDifferenceCompletion_Parms, Position0), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_SetPlanarPositionDifferenceCompletion_Statics::NewProp_Position0_MetaData), Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_SetPlanarPositionDifferenceCompletion_Statics::NewProp_Position0_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_SetPlanarPositionDifferenceCompletion_Statics::NewProp_Position1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_SetPlanarPositionDifferenceCompletion_Statics::NewProp_Position1 = { "Position1", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarPositionDifferenceCompletion_eventSetPlanarPositionDifferenceCompletion_Parms, Position1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_SetPlanarPositionDifferenceCompletion_Statics::NewProp_Position1_MetaData), Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_SetPlanarPositionDifferenceCompletion_Statics::NewProp_Position1_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_SetPlanarPositionDifferenceCompletion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_SetPlanarPositionDifferenceCompletion_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_SetPlanarPositionDifferenceCompletion_Statics::NewProp_Position0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_SetPlanarPositionDifferenceCompletion_Statics::NewProp_Position1,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_SetPlanarPositionDifferenceCompletion_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Sets the data for this completion. Call during ULearningAgentsTrainer::SetCompletions event.\n\x09 * @param AgentId The agent id this data corresponds to.\n\x09 * @param Position0 The first position.\n\x09 * @param Position1 The second position.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsCompletions.h" },
		{ "ToolTip", "Sets the data for this completion. Call during ULearningAgentsTrainer::SetCompletions event.\n@param AgentId The agent id this data corresponds to.\n@param Position0 The first position.\n@param Position1 The second position." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_SetPlanarPositionDifferenceCompletion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlanarPositionDifferenceCompletion, nullptr, "SetPlanarPositionDifferenceCompletion", nullptr, nullptr, Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_SetPlanarPositionDifferenceCompletion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_SetPlanarPositionDifferenceCompletion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_SetPlanarPositionDifferenceCompletion_Statics::PlanarPositionDifferenceCompletion_eventSetPlanarPositionDifferenceCompletion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_SetPlanarPositionDifferenceCompletion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_SetPlanarPositionDifferenceCompletion_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_SetPlanarPositionDifferenceCompletion_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_SetPlanarPositionDifferenceCompletion_Statics::PlanarPositionDifferenceCompletion_eventSetPlanarPositionDifferenceCompletion_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_SetPlanarPositionDifferenceCompletion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_SetPlanarPositionDifferenceCompletion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlanarPositionDifferenceCompletion);
	UClass* Z_Construct_UClass_UPlanarPositionDifferenceCompletion_NoRegister()
	{
		return UPlanarPositionDifferenceCompletion::StaticClass();
	}
	struct Z_Construct_UClass_UPlanarPositionDifferenceCompletion_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlanarPositionDifferenceCompletion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULearningAgentsCompletion,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgentsTraining,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlanarPositionDifferenceCompletion_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlanarPositionDifferenceCompletion_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_AddPlanarPositionDifferenceCompletion, "AddPlanarPositionDifferenceCompletion" }, // 4103361143
		{ &Z_Construct_UFunction_UPlanarPositionDifferenceCompletion_SetPlanarPositionDifferenceCompletion, "SetPlanarPositionDifferenceCompletion" }, // 2547896929
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlanarPositionDifferenceCompletion_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanarPositionDifferenceCompletion_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A completion for if two positions differ by some threshold in a plane, e.g. if the agent gets too far from a\n * starting position.\n */" },
		{ "IncludePath", "LearningAgentsCompletions.h" },
		{ "ModuleRelativePath", "Public/LearningAgentsCompletions.h" },
		{ "ToolTip", "A completion for if two positions differ by some threshold in a plane, e.g. if the agent gets too far from a\nstarting position." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlanarPositionDifferenceCompletion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlanarPositionDifferenceCompletion>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlanarPositionDifferenceCompletion_Statics::ClassParams = {
		&UPlanarPositionDifferenceCompletion::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlanarPositionDifferenceCompletion_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlanarPositionDifferenceCompletion_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPlanarPositionDifferenceCompletion()
	{
		if (!Z_Registration_Info_UClass_UPlanarPositionDifferenceCompletion.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlanarPositionDifferenceCompletion.OuterSingleton, Z_Construct_UClass_UPlanarPositionDifferenceCompletion_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlanarPositionDifferenceCompletion.OuterSingleton;
	}
	template<> LEARNINGAGENTSTRAINING_API UClass* StaticClass<UPlanarPositionDifferenceCompletion>()
	{
		return UPlanarPositionDifferenceCompletion::StaticClass();
	}
	UPlanarPositionDifferenceCompletion::UPlanarPositionDifferenceCompletion(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlanarPositionDifferenceCompletion);
	UPlanarPositionDifferenceCompletion::~UPlanarPositionDifferenceCompletion() {}
	DEFINE_FUNCTION(UPlanarPositionSimilarityCompletion::execSetPlanarPositionSimilarityCompletion)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AgentId);
		P_GET_STRUCT(FVector,Z_Param_Position0);
		P_GET_STRUCT(FVector,Z_Param_Position1);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlanarPositionSimilarityCompletion(Z_Param_AgentId,Z_Param_Position0,Z_Param_Position1);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlanarPositionSimilarityCompletion::execAddPlanarPositionSimilarityCompletion)
	{
		P_GET_OBJECT(ULearningAgentsTrainer,Z_Param_InAgentTrainer);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Threshold);
		P_GET_ENUM(ELearningAgentsCompletion,Z_Param_InCompletionMode);
		P_GET_STRUCT(FVector,Z_Param_Axis0);
		P_GET_STRUCT(FVector,Z_Param_Axis1);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlanarPositionSimilarityCompletion**)Z_Param__Result=UPlanarPositionSimilarityCompletion::AddPlanarPositionSimilarityCompletion(Z_Param_InAgentTrainer,Z_Param_Name,Z_Param_Threshold,ELearningAgentsCompletion(Z_Param_InCompletionMode),Z_Param_Axis0,Z_Param_Axis1);
		P_NATIVE_END;
	}
	void UPlanarPositionSimilarityCompletion::StaticRegisterNativesUPlanarPositionSimilarityCompletion()
	{
		UClass* Class = UPlanarPositionSimilarityCompletion::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPlanarPositionSimilarityCompletion", &UPlanarPositionSimilarityCompletion::execAddPlanarPositionSimilarityCompletion },
			{ "SetPlanarPositionSimilarityCompletion", &UPlanarPositionSimilarityCompletion::execSetPlanarPositionSimilarityCompletion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics
	{
		struct PlanarPositionSimilarityCompletion_eventAddPlanarPositionSimilarityCompletion_Parms
		{
			ULearningAgentsTrainer* InAgentTrainer;
			FName Name;
			float Threshold;
			ELearningAgentsCompletion InCompletionMode;
			FVector Axis0;
			FVector Axis1;
			UPlanarPositionSimilarityCompletion* ReturnValue;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Threshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Threshold;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InCompletionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCompletionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InCompletionMode;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::NewProp_InAgentTrainer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::NewProp_InAgentTrainer = { "InAgentTrainer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarPositionSimilarityCompletion_eventAddPlanarPositionSimilarityCompletion_Parms, InAgentTrainer), Z_Construct_UClass_ULearningAgentsTrainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::NewProp_InAgentTrainer_MetaData), Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::NewProp_InAgentTrainer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarPositionSimilarityCompletion_eventAddPlanarPositionSimilarityCompletion_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::NewProp_Threshold_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarPositionSimilarityCompletion_eventAddPlanarPositionSimilarityCompletion_Parms, Threshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::NewProp_Threshold_MetaData), Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::NewProp_Threshold_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::NewProp_InCompletionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::NewProp_InCompletionMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::NewProp_InCompletionMode = { "InCompletionMode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarPositionSimilarityCompletion_eventAddPlanarPositionSimilarityCompletion_Parms, InCompletionMode), Z_Construct_UEnum_LearningAgentsTraining_ELearningAgentsCompletion, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::NewProp_InCompletionMode_MetaData), Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::NewProp_InCompletionMode_MetaData) }; // 1079080398
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::NewProp_Axis0_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::NewProp_Axis0 = { "Axis0", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarPositionSimilarityCompletion_eventAddPlanarPositionSimilarityCompletion_Parms, Axis0), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::NewProp_Axis0_MetaData), Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::NewProp_Axis0_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::NewProp_Axis1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::NewProp_Axis1 = { "Axis1", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarPositionSimilarityCompletion_eventAddPlanarPositionSimilarityCompletion_Parms, Axis1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::NewProp_Axis1_MetaData), Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::NewProp_Axis1_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarPositionSimilarityCompletion_eventAddPlanarPositionSimilarityCompletion_Parms, ReturnValue), Z_Construct_UClass_UPlanarPositionSimilarityCompletion_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::NewProp_InAgentTrainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::NewProp_Threshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::NewProp_InCompletionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::NewProp_InCompletionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::NewProp_Axis0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::NewProp_Axis1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Adds a new planar position difference completion to the given trainer. The axis parameters define the plane.\n\x09 * Call during ULearningAgentsTrainer::SetupCompletions event.\n\x09 * @param InAgentTrainer The trainer to add this completion to.\n\x09 * @param Name The name of this new completion. Used for debugging.\n\x09 * @param Threshold If the distance becomes greater than this threshold, then the episode will complete.\n\x09 * @param InCompletionMode The completion mode.\n\x09 * @param Axis0 The forward axis of the plane.\n\x09 * @param Axis1 The right axis of the plane.\n\x09 * @return The newly created completion.\n\x09 */" },
		{ "CPP_Default_Axis0", "1.000000,0.000000,0.000000" },
		{ "CPP_Default_Axis1", "0.000000,1.000000,0.000000" },
		{ "CPP_Default_InCompletionMode", "Termination" },
		{ "CPP_Default_Name", "None" },
		{ "CPP_Default_Threshold", "100.000000" },
		{ "DefaultToSelf", "InAgentTrainer" },
		{ "ModuleRelativePath", "Public/LearningAgentsCompletions.h" },
		{ "ToolTip", "Adds a new planar position difference completion to the given trainer. The axis parameters define the plane.\nCall during ULearningAgentsTrainer::SetupCompletions event.\n@param InAgentTrainer The trainer to add this completion to.\n@param Name The name of this new completion. Used for debugging.\n@param Threshold If the distance becomes greater than this threshold, then the episode will complete.\n@param InCompletionMode The completion mode.\n@param Axis0 The forward axis of the plane.\n@param Axis1 The right axis of the plane.\n@return The newly created completion." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlanarPositionSimilarityCompletion, nullptr, "AddPlanarPositionSimilarityCompletion", nullptr, nullptr, Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::PlanarPositionSimilarityCompletion_eventAddPlanarPositionSimilarityCompletion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::PlanarPositionSimilarityCompletion_eventAddPlanarPositionSimilarityCompletion_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_SetPlanarPositionSimilarityCompletion_Statics
	{
		struct PlanarPositionSimilarityCompletion_eventSetPlanarPositionSimilarityCompletion_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_SetPlanarPositionSimilarityCompletion_Statics::NewProp_AgentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_SetPlanarPositionSimilarityCompletion_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarPositionSimilarityCompletion_eventSetPlanarPositionSimilarityCompletion_Parms, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_SetPlanarPositionSimilarityCompletion_Statics::NewProp_AgentId_MetaData), Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_SetPlanarPositionSimilarityCompletion_Statics::NewProp_AgentId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_SetPlanarPositionSimilarityCompletion_Statics::NewProp_Position0_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_SetPlanarPositionSimilarityCompletion_Statics::NewProp_Position0 = { "Position0", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarPositionSimilarityCompletion_eventSetPlanarPositionSimilarityCompletion_Parms, Position0), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_SetPlanarPositionSimilarityCompletion_Statics::NewProp_Position0_MetaData), Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_SetPlanarPositionSimilarityCompletion_Statics::NewProp_Position0_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_SetPlanarPositionSimilarityCompletion_Statics::NewProp_Position1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_SetPlanarPositionSimilarityCompletion_Statics::NewProp_Position1 = { "Position1", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarPositionSimilarityCompletion_eventSetPlanarPositionSimilarityCompletion_Parms, Position1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_SetPlanarPositionSimilarityCompletion_Statics::NewProp_Position1_MetaData), Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_SetPlanarPositionSimilarityCompletion_Statics::NewProp_Position1_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_SetPlanarPositionSimilarityCompletion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_SetPlanarPositionSimilarityCompletion_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_SetPlanarPositionSimilarityCompletion_Statics::NewProp_Position0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_SetPlanarPositionSimilarityCompletion_Statics::NewProp_Position1,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_SetPlanarPositionSimilarityCompletion_Statics::Function_MetaDataParams[] = {
		{ "AgentId", "-1" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Sets the data for this completion. Call during ULearningAgentsTrainer::SetCompletions event.\n\x09 * @param AgentId The agent id this data corresponds to.\n\x09 * @param Position0 The first position.\n\x09 * @param Position1 The second position.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsCompletions.h" },
		{ "ToolTip", "Sets the data for this completion. Call during ULearningAgentsTrainer::SetCompletions event.\n@param AgentId The agent id this data corresponds to.\n@param Position0 The first position.\n@param Position1 The second position." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_SetPlanarPositionSimilarityCompletion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlanarPositionSimilarityCompletion, nullptr, "SetPlanarPositionSimilarityCompletion", nullptr, nullptr, Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_SetPlanarPositionSimilarityCompletion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_SetPlanarPositionSimilarityCompletion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_SetPlanarPositionSimilarityCompletion_Statics::PlanarPositionSimilarityCompletion_eventSetPlanarPositionSimilarityCompletion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_SetPlanarPositionSimilarityCompletion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_SetPlanarPositionSimilarityCompletion_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_SetPlanarPositionSimilarityCompletion_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_SetPlanarPositionSimilarityCompletion_Statics::PlanarPositionSimilarityCompletion_eventSetPlanarPositionSimilarityCompletion_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_SetPlanarPositionSimilarityCompletion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_SetPlanarPositionSimilarityCompletion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlanarPositionSimilarityCompletion);
	UClass* Z_Construct_UClass_UPlanarPositionSimilarityCompletion_NoRegister()
	{
		return UPlanarPositionSimilarityCompletion::StaticClass();
	}
	struct Z_Construct_UClass_UPlanarPositionSimilarityCompletion_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlanarPositionSimilarityCompletion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULearningAgentsCompletion,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgentsTraining,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlanarPositionSimilarityCompletion_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlanarPositionSimilarityCompletion_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_AddPlanarPositionSimilarityCompletion, "AddPlanarPositionSimilarityCompletion" }, // 255014416
		{ &Z_Construct_UFunction_UPlanarPositionSimilarityCompletion_SetPlanarPositionSimilarityCompletion, "SetPlanarPositionSimilarityCompletion" }, // 2624290387
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlanarPositionSimilarityCompletion_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanarPositionSimilarityCompletion_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A completion for if two positions are near by some threshold in a plane, e.g. if the agent gets close to a position.\n */" },
		{ "IncludePath", "LearningAgentsCompletions.h" },
		{ "ModuleRelativePath", "Public/LearningAgentsCompletions.h" },
		{ "ToolTip", "A completion for if two positions are near by some threshold in a plane, e.g. if the agent gets close to a position." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlanarPositionSimilarityCompletion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlanarPositionSimilarityCompletion>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlanarPositionSimilarityCompletion_Statics::ClassParams = {
		&UPlanarPositionSimilarityCompletion::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlanarPositionSimilarityCompletion_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlanarPositionSimilarityCompletion_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPlanarPositionSimilarityCompletion()
	{
		if (!Z_Registration_Info_UClass_UPlanarPositionSimilarityCompletion.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlanarPositionSimilarityCompletion.OuterSingleton, Z_Construct_UClass_UPlanarPositionSimilarityCompletion_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlanarPositionSimilarityCompletion.OuterSingleton;
	}
	template<> LEARNINGAGENTSTRAINING_API UClass* StaticClass<UPlanarPositionSimilarityCompletion>()
	{
		return UPlanarPositionSimilarityCompletion::StaticClass();
	}
	UPlanarPositionSimilarityCompletion::UPlanarPositionSimilarityCompletion(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlanarPositionSimilarityCompletion);
	UPlanarPositionSimilarityCompletion::~UPlanarPositionSimilarityCompletion() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsCompletions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsCompletions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULearningAgentsCompletion, ULearningAgentsCompletion::StaticClass, TEXT("ULearningAgentsCompletion"), &Z_Registration_Info_UClass_ULearningAgentsCompletion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULearningAgentsCompletion), 1416271490U) },
		{ Z_Construct_UClass_UConditionalCompletion, UConditionalCompletion::StaticClass, TEXT("UConditionalCompletion"), &Z_Registration_Info_UClass_UConditionalCompletion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConditionalCompletion), 1682507656U) },
		{ Z_Construct_UClass_UTimeElapsedCompletion, UTimeElapsedCompletion::StaticClass, TEXT("UTimeElapsedCompletion"), &Z_Registration_Info_UClass_UTimeElapsedCompletion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTimeElapsedCompletion), 3630432525U) },
		{ Z_Construct_UClass_UPlanarPositionDifferenceCompletion, UPlanarPositionDifferenceCompletion::StaticClass, TEXT("UPlanarPositionDifferenceCompletion"), &Z_Registration_Info_UClass_UPlanarPositionDifferenceCompletion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlanarPositionDifferenceCompletion), 1743002731U) },
		{ Z_Construct_UClass_UPlanarPositionSimilarityCompletion, UPlanarPositionSimilarityCompletion::StaticClass, TEXT("UPlanarPositionSimilarityCompletion"), &Z_Registration_Info_UClass_UPlanarPositionSimilarityCompletion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlanarPositionSimilarityCompletion), 4000122732U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsCompletions_h_2692406953(TEXT("/Script/LearningAgentsTraining"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsCompletions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsCompletions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
