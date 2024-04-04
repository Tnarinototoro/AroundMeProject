// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningAgentsNeuralNetwork.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLearningAgentsNeuralNetwork() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsNeuralNetwork();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsNeuralNetwork_NoRegister();
	LEARNINGAGENTS_API UEnum* Z_Construct_UEnum_LearningAgents_ELearningAgentsActivationFunction();
	UPackage* Z_Construct_UPackage__Script_LearningAgents();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELearningAgentsActivationFunction;
	static UEnum* ELearningAgentsActivationFunction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELearningAgentsActivationFunction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELearningAgentsActivationFunction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LearningAgents_ELearningAgentsActivationFunction, (UObject*)Z_Construct_UPackage__Script_LearningAgents(), TEXT("ELearningAgentsActivationFunction"));
		}
		return Z_Registration_Info_UEnum_ELearningAgentsActivationFunction.OuterSingleton;
	}
	template<> LEARNINGAGENTS_API UEnum* StaticEnum<ELearningAgentsActivationFunction>()
	{
		return ELearningAgentsActivationFunction_StaticEnum();
	}
	struct Z_Construct_UEnum_LearningAgents_ELearningAgentsActivationFunction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LearningAgents_ELearningAgentsActivationFunction_Statics::Enumerators[] = {
		{ "ELearningAgentsActivationFunction::ReLU", (int64)ELearningAgentsActivationFunction::ReLU },
		{ "ELearningAgentsActivationFunction::ELU", (int64)ELearningAgentsActivationFunction::ELU },
		{ "ELearningAgentsActivationFunction::TanH", (int64)ELearningAgentsActivationFunction::TanH },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LearningAgents_ELearningAgentsActivationFunction_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/** Activation functions for neural networks. */" },
		{ "ELU.Comment", "/** ELU Activation - Generally performs better than ReLU and is not prone to gradient collapse but slower to evaluate. */" },
		{ "ELU.DisplayName", "ELU" },
		{ "ELU.Name", "ELearningAgentsActivationFunction::ELU" },
		{ "ELU.ToolTip", "ELU Activation - Generally performs better than ReLU and is not prone to gradient collapse but slower to evaluate." },
		{ "ModuleRelativePath", "Public/LearningAgentsNeuralNetwork.h" },
		{ "ReLU.Comment", "/** ReLU Activation - Fast to train and evaluate but occasionally causes gradient collapse and untrainable networks. */" },
		{ "ReLU.DisplayName", "ReLU" },
		{ "ReLU.Name", "ELearningAgentsActivationFunction::ReLU" },
		{ "ReLU.ToolTip", "ReLU Activation - Fast to train and evaluate but occasionally causes gradient collapse and untrainable networks." },
		{ "TanH.Comment", "/** TanH Activation - Smooth activation function that is slower to train and evaluate but sometimes more stable for certain tasks. */" },
		{ "TanH.DisplayName", "TanH" },
		{ "TanH.Name", "ELearningAgentsActivationFunction::TanH" },
		{ "TanH.ToolTip", "TanH Activation - Smooth activation function that is slower to train and evaluate but sometimes more stable for certain tasks." },
		{ "ToolTip", "Activation functions for neural networks." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LearningAgents_ELearningAgentsActivationFunction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LearningAgents,
		nullptr,
		"ELearningAgentsActivationFunction",
		"ELearningAgentsActivationFunction",
		Z_Construct_UEnum_LearningAgents_ELearningAgentsActivationFunction_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LearningAgents_ELearningAgentsActivationFunction_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LearningAgents_ELearningAgentsActivationFunction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LearningAgents_ELearningAgentsActivationFunction_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_LearningAgents_ELearningAgentsActivationFunction()
	{
		if (!Z_Registration_Info_UEnum_ELearningAgentsActivationFunction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELearningAgentsActivationFunction.InnerSingleton, Z_Construct_UEnum_LearningAgents_ELearningAgentsActivationFunction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELearningAgentsActivationFunction.InnerSingleton;
	}
	DEFINE_FUNCTION(ULearningAgentsNeuralNetwork::execSaveNetworkToAsset)
	{
		P_GET_OBJECT(ULearningAgentsNeuralNetwork,Z_Param_NeuralNetworkAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveNetworkToAsset(Z_Param_NeuralNetworkAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsNeuralNetwork::execLoadNetworkFromAsset)
	{
		P_GET_OBJECT(ULearningAgentsNeuralNetwork,Z_Param_NeuralNetworkAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadNetworkFromAsset(Z_Param_NeuralNetworkAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsNeuralNetwork::execSaveNetworkToSnapshot)
	{
		P_GET_STRUCT_REF(FFilePath,Z_Param_Out_File);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveNetworkToSnapshot(Z_Param_Out_File);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsNeuralNetwork::execLoadNetworkFromSnapshot)
	{
		P_GET_STRUCT_REF(FFilePath,Z_Param_Out_File);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadNetworkFromSnapshot(Z_Param_Out_File);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsNeuralNetwork::execResetNetwork)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetNetwork();
		P_NATIVE_END;
	}
	void ULearningAgentsNeuralNetwork::StaticRegisterNativesULearningAgentsNeuralNetwork()
	{
		UClass* Class = ULearningAgentsNeuralNetwork::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadNetworkFromAsset", &ULearningAgentsNeuralNetwork::execLoadNetworkFromAsset },
			{ "LoadNetworkFromSnapshot", &ULearningAgentsNeuralNetwork::execLoadNetworkFromSnapshot },
			{ "ResetNetwork", &ULearningAgentsNeuralNetwork::execResetNetwork },
			{ "SaveNetworkToAsset", &ULearningAgentsNeuralNetwork::execSaveNetworkToAsset },
			{ "SaveNetworkToSnapshot", &ULearningAgentsNeuralNetwork::execSaveNetworkToSnapshot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULearningAgentsNeuralNetwork_LoadNetworkFromAsset_Statics
	{
		struct LearningAgentsNeuralNetwork_eventLoadNetworkFromAsset_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULearningAgentsNeuralNetwork_LoadNetworkFromAsset_Statics::NewProp_NeuralNetworkAsset = { "NeuralNetworkAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsNeuralNetwork_eventLoadNetworkFromAsset_Parms, NeuralNetworkAsset), Z_Construct_UClass_ULearningAgentsNeuralNetwork_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsNeuralNetwork_LoadNetworkFromAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsNeuralNetwork_LoadNetworkFromAsset_Statics::NewProp_NeuralNetworkAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsNeuralNetwork_LoadNetworkFromAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Copy another asset's network weights into this network. Network sizes must match.\n\x09 * @param NeuralNetworkAsset The asset to load from.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsNeuralNetwork.h" },
		{ "ToolTip", "Copy another asset's network weights into this network. Network sizes must match.\n@param NeuralNetworkAsset The asset to load from." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsNeuralNetwork_LoadNetworkFromAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsNeuralNetwork, nullptr, "LoadNetworkFromAsset", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsNeuralNetwork_LoadNetworkFromAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsNeuralNetwork_LoadNetworkFromAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsNeuralNetwork_LoadNetworkFromAsset_Statics::LearningAgentsNeuralNetwork_eventLoadNetworkFromAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsNeuralNetwork_LoadNetworkFromAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsNeuralNetwork_LoadNetworkFromAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsNeuralNetwork_LoadNetworkFromAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsNeuralNetwork_LoadNetworkFromAsset_Statics::LearningAgentsNeuralNetwork_eventLoadNetworkFromAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsNeuralNetwork_LoadNetworkFromAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsNeuralNetwork_LoadNetworkFromAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsNeuralNetwork_LoadNetworkFromSnapshot_Statics
	{
		struct FFilePath
		{
			FString FilePath;
		};

		struct LearningAgentsNeuralNetwork_eventLoadNetworkFromSnapshot_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsNeuralNetwork_LoadNetworkFromSnapshot_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULearningAgentsNeuralNetwork_LoadNetworkFromSnapshot_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsNeuralNetwork_eventLoadNetworkFromSnapshot_Parms, File), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsNeuralNetwork_LoadNetworkFromSnapshot_Statics::NewProp_File_MetaData), Z_Construct_UFunction_ULearningAgentsNeuralNetwork_LoadNetworkFromSnapshot_Statics::NewProp_File_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsNeuralNetwork_LoadNetworkFromSnapshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsNeuralNetwork_LoadNetworkFromSnapshot_Statics::NewProp_File,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsNeuralNetwork_LoadNetworkFromSnapshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Load this network from a snapshot.\n\x09 * @param File The snapshot file.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsNeuralNetwork.h" },
		{ "RelativePath", "" },
		{ "ToolTip", "Load this network from a snapshot.\n@param File The snapshot file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsNeuralNetwork_LoadNetworkFromSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsNeuralNetwork, nullptr, "LoadNetworkFromSnapshot", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsNeuralNetwork_LoadNetworkFromSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsNeuralNetwork_LoadNetworkFromSnapshot_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsNeuralNetwork_LoadNetworkFromSnapshot_Statics::LearningAgentsNeuralNetwork_eventLoadNetworkFromSnapshot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsNeuralNetwork_LoadNetworkFromSnapshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsNeuralNetwork_LoadNetworkFromSnapshot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsNeuralNetwork_LoadNetworkFromSnapshot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsNeuralNetwork_LoadNetworkFromSnapshot_Statics::LearningAgentsNeuralNetwork_eventLoadNetworkFromSnapshot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsNeuralNetwork_LoadNetworkFromSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsNeuralNetwork_LoadNetworkFromSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsNeuralNetwork_ResetNetwork_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsNeuralNetwork_ResetNetwork_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Resets this network asset to be empty.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsNeuralNetwork.h" },
		{ "ToolTip", "Resets this network asset to be empty." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsNeuralNetwork_ResetNetwork_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsNeuralNetwork, nullptr, "ResetNetwork", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsNeuralNetwork_ResetNetwork_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsNeuralNetwork_ResetNetwork_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULearningAgentsNeuralNetwork_ResetNetwork()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsNeuralNetwork_ResetNetwork_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsNeuralNetwork_SaveNetworkToAsset_Statics
	{
		struct LearningAgentsNeuralNetwork_eventSaveNetworkToAsset_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULearningAgentsNeuralNetwork_SaveNetworkToAsset_Statics::NewProp_NeuralNetworkAsset = { "NeuralNetworkAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsNeuralNetwork_eventSaveNetworkToAsset_Parms, NeuralNetworkAsset), Z_Construct_UClass_ULearningAgentsNeuralNetwork_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsNeuralNetwork_SaveNetworkToAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsNeuralNetwork_SaveNetworkToAsset_Statics::NewProp_NeuralNetworkAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsNeuralNetwork_SaveNetworkToAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Copy this network's weights to another asset. Network sizes must match.\n\x09 * @param NeuralNetworkAsset The asset to save to.\n\x09 */" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/LearningAgentsNeuralNetwork.h" },
		{ "ToolTip", "Copy this network's weights to another asset. Network sizes must match.\n@param NeuralNetworkAsset The asset to save to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsNeuralNetwork_SaveNetworkToAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsNeuralNetwork, nullptr, "SaveNetworkToAsset", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsNeuralNetwork_SaveNetworkToAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsNeuralNetwork_SaveNetworkToAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsNeuralNetwork_SaveNetworkToAsset_Statics::LearningAgentsNeuralNetwork_eventSaveNetworkToAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsNeuralNetwork_SaveNetworkToAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsNeuralNetwork_SaveNetworkToAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsNeuralNetwork_SaveNetworkToAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsNeuralNetwork_SaveNetworkToAsset_Statics::LearningAgentsNeuralNetwork_eventSaveNetworkToAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsNeuralNetwork_SaveNetworkToAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsNeuralNetwork_SaveNetworkToAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsNeuralNetwork_SaveNetworkToSnapshot_Statics
	{
		struct FFilePath
		{
			FString FilePath;
		};

		struct LearningAgentsNeuralNetwork_eventSaveNetworkToSnapshot_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsNeuralNetwork_SaveNetworkToSnapshot_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULearningAgentsNeuralNetwork_SaveNetworkToSnapshot_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsNeuralNetwork_eventSaveNetworkToSnapshot_Parms, File), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsNeuralNetwork_SaveNetworkToSnapshot_Statics::NewProp_File_MetaData), Z_Construct_UFunction_ULearningAgentsNeuralNetwork_SaveNetworkToSnapshot_Statics::NewProp_File_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsNeuralNetwork_SaveNetworkToSnapshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsNeuralNetwork_SaveNetworkToSnapshot_Statics::NewProp_File,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsNeuralNetwork_SaveNetworkToSnapshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Save this network into a snapshot.\n\x09 * @param File The snapshot file.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsNeuralNetwork.h" },
		{ "RelativePath", "" },
		{ "ToolTip", "Save this network into a snapshot.\n@param File The snapshot file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsNeuralNetwork_SaveNetworkToSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsNeuralNetwork, nullptr, "SaveNetworkToSnapshot", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsNeuralNetwork_SaveNetworkToSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsNeuralNetwork_SaveNetworkToSnapshot_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsNeuralNetwork_SaveNetworkToSnapshot_Statics::LearningAgentsNeuralNetwork_eventSaveNetworkToSnapshot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsNeuralNetwork_SaveNetworkToSnapshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsNeuralNetwork_SaveNetworkToSnapshot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsNeuralNetwork_SaveNetworkToSnapshot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsNeuralNetwork_SaveNetworkToSnapshot_Statics::LearningAgentsNeuralNetwork_eventSaveNetworkToSnapshot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsNeuralNetwork_SaveNetworkToSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsNeuralNetwork_SaveNetworkToSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULearningAgentsNeuralNetwork);
	UClass* Z_Construct_UClass_ULearningAgentsNeuralNetwork_NoRegister()
	{
		return ULearningAgentsNeuralNetwork::StaticClass();
	}
	struct Z_Construct_UClass_ULearningAgentsNeuralNetwork_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULearningAgentsNeuralNetwork_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgents,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsNeuralNetwork_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULearningAgentsNeuralNetwork_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULearningAgentsNeuralNetwork_LoadNetworkFromAsset, "LoadNetworkFromAsset" }, // 2176593126
		{ &Z_Construct_UFunction_ULearningAgentsNeuralNetwork_LoadNetworkFromSnapshot, "LoadNetworkFromSnapshot" }, // 332683808
		{ &Z_Construct_UFunction_ULearningAgentsNeuralNetwork_ResetNetwork, "ResetNetwork" }, // 3060842553
		{ &Z_Construct_UFunction_ULearningAgentsNeuralNetwork_SaveNetworkToAsset, "SaveNetworkToAsset" }, // 4122912171
		{ &Z_Construct_UFunction_ULearningAgentsNeuralNetwork_SaveNetworkToSnapshot, "SaveNetworkToSnapshot" }, // 82088215
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsNeuralNetwork_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsNeuralNetwork_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A neural network data asset. */" },
		{ "IncludePath", "LearningAgentsNeuralNetwork.h" },
		{ "ModuleRelativePath", "Public/LearningAgentsNeuralNetwork.h" },
		{ "ToolTip", "A neural network data asset." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULearningAgentsNeuralNetwork_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULearningAgentsNeuralNetwork>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULearningAgentsNeuralNetwork_Statics::ClassParams = {
		&ULearningAgentsNeuralNetwork::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsNeuralNetwork_Statics::Class_MetaDataParams), Z_Construct_UClass_ULearningAgentsNeuralNetwork_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULearningAgentsNeuralNetwork()
	{
		if (!Z_Registration_Info_UClass_ULearningAgentsNeuralNetwork.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULearningAgentsNeuralNetwork.OuterSingleton, Z_Construct_UClass_ULearningAgentsNeuralNetwork_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULearningAgentsNeuralNetwork.OuterSingleton;
	}
	template<> LEARNINGAGENTS_API UClass* StaticClass<ULearningAgentsNeuralNetwork>()
	{
		return ULearningAgentsNeuralNetwork::StaticClass();
	}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULearningAgentsNeuralNetwork)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsNeuralNetwork_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsNeuralNetwork_h_Statics::EnumInfo[] = {
		{ ELearningAgentsActivationFunction_StaticEnum, TEXT("ELearningAgentsActivationFunction"), &Z_Registration_Info_UEnum_ELearningAgentsActivationFunction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3592894623U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsNeuralNetwork_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULearningAgentsNeuralNetwork, ULearningAgentsNeuralNetwork::StaticClass, TEXT("ULearningAgentsNeuralNetwork"), &Z_Registration_Info_UClass_ULearningAgentsNeuralNetwork, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULearningAgentsNeuralNetwork), 1968629517U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsNeuralNetwork_h_1303876006(TEXT("/Script/LearningAgents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsNeuralNetwork_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsNeuralNetwork_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsNeuralNetwork_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsNeuralNetwork_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
