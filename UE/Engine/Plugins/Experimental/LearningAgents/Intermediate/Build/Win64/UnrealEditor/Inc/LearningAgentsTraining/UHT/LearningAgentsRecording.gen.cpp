// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningAgentsRecording.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLearningAgentsRecording() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_ULearningAgentsRecording();
	LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_ULearningAgentsRecording_NoRegister();
	LEARNINGAGENTSTRAINING_API UScriptStruct* Z_Construct_UScriptStruct_FLearningAgentsRecord();
	UPackage* Z_Construct_UPackage__Script_LearningAgentsTraining();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LearningAgentsRecord;
class UScriptStruct* FLearningAgentsRecord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LearningAgentsRecord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LearningAgentsRecord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLearningAgentsRecord, (UObject*)Z_Construct_UPackage__Script_LearningAgentsTraining(), TEXT("LearningAgentsRecord"));
	}
	return Z_Registration_Info_UScriptStruct_LearningAgentsRecord.OuterSingleton;
}
template<> LEARNINGAGENTSTRAINING_API UScriptStruct* StaticStruct<FLearningAgentsRecord>()
{
	return FLearningAgentsRecord::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLearningAgentsRecord_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SampleNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObservationDimNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ObservationDimNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionDimNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ActionDimNum;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsRecord_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A single recording of a series of observations and actions. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsRecording.h" },
		{ "ToolTip", "A single recording of a series of observations and actions." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLearningAgentsRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLearningAgentsRecord>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsRecord_Statics::NewProp_SampleNum_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** The number of observations and actions recorded. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsRecording.h" },
		{ "ToolTip", "The number of observations and actions recorded." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLearningAgentsRecord_Statics::NewProp_SampleNum = { "SampleNum", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsRecord, SampleNum), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsRecord_Statics::NewProp_SampleNum_MetaData), Z_Construct_UScriptStruct_FLearningAgentsRecord_Statics::NewProp_SampleNum_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsRecord_Statics::NewProp_ObservationDimNum_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** The number of dimensions in the observation vector for this record */" },
		{ "ModuleRelativePath", "Public/LearningAgentsRecording.h" },
		{ "ToolTip", "The number of dimensions in the observation vector for this record" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLearningAgentsRecord_Statics::NewProp_ObservationDimNum = { "ObservationDimNum", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsRecord, ObservationDimNum), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsRecord_Statics::NewProp_ObservationDimNum_MetaData), Z_Construct_UScriptStruct_FLearningAgentsRecord_Statics::NewProp_ObservationDimNum_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsRecord_Statics::NewProp_ActionDimNum_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** The number of dimensions in the action vector for this record */" },
		{ "ModuleRelativePath", "Public/LearningAgentsRecording.h" },
		{ "ToolTip", "The number of dimensions in the action vector for this record" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLearningAgentsRecord_Statics::NewProp_ActionDimNum = { "ActionDimNum", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsRecord, ActionDimNum), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsRecord_Statics::NewProp_ActionDimNum_MetaData), Z_Construct_UScriptStruct_FLearningAgentsRecord_Statics::NewProp_ActionDimNum_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLearningAgentsRecord_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsRecord_Statics::NewProp_SampleNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsRecord_Statics::NewProp_ObservationDimNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsRecord_Statics::NewProp_ActionDimNum,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLearningAgentsRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgentsTraining,
		nullptr,
		&NewStructOps,
		"LearningAgentsRecord",
		Z_Construct_UScriptStruct_FLearningAgentsRecord_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsRecord_Statics::PropPointers),
		sizeof(FLearningAgentsRecord),
		alignof(FLearningAgentsRecord),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsRecord_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLearningAgentsRecord_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsRecord_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLearningAgentsRecord()
	{
		if (!Z_Registration_Info_UScriptStruct_LearningAgentsRecord.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LearningAgentsRecord.InnerSingleton, Z_Construct_UScriptStruct_FLearningAgentsRecord_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LearningAgentsRecord.InnerSingleton;
	}
	DEFINE_FUNCTION(ULearningAgentsRecording::execAppendRecordingToAsset)
	{
		P_GET_OBJECT(ULearningAgentsRecording,Z_Param_RecordingAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AppendRecordingToAsset(Z_Param_RecordingAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsRecording::execSaveRecordingToAsset)
	{
		P_GET_OBJECT(ULearningAgentsRecording,Z_Param_RecordingAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveRecordingToAsset(Z_Param_RecordingAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsRecording::execLoadRecordingFromAsset)
	{
		P_GET_OBJECT(ULearningAgentsRecording,Z_Param_RecordingAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadRecordingFromAsset(Z_Param_RecordingAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsRecording::execAppendRecordingFromFile)
	{
		P_GET_STRUCT_REF(FFilePath,Z_Param_Out_File);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AppendRecordingFromFile(Z_Param_Out_File);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsRecording::execSaveRecordingToFile)
	{
		P_GET_STRUCT_REF(FFilePath,Z_Param_Out_File);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveRecordingToFile(Z_Param_Out_File);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsRecording::execLoadRecordingFromFile)
	{
		P_GET_STRUCT_REF(FFilePath,Z_Param_Out_File);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadRecordingFromFile(Z_Param_Out_File);
		P_NATIVE_END;
	}
	void ULearningAgentsRecording::StaticRegisterNativesULearningAgentsRecording()
	{
		UClass* Class = ULearningAgentsRecording::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AppendRecordingFromFile", &ULearningAgentsRecording::execAppendRecordingFromFile },
			{ "AppendRecordingToAsset", &ULearningAgentsRecording::execAppendRecordingToAsset },
			{ "LoadRecordingFromAsset", &ULearningAgentsRecording::execLoadRecordingFromAsset },
			{ "LoadRecordingFromFile", &ULearningAgentsRecording::execLoadRecordingFromFile },
			{ "SaveRecordingToAsset", &ULearningAgentsRecording::execSaveRecordingToAsset },
			{ "SaveRecordingToFile", &ULearningAgentsRecording::execSaveRecordingToFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULearningAgentsRecording_AppendRecordingFromFile_Statics
	{
		struct FFilePath
		{
			FString FilePath;
		};

		struct LearningAgentsRecording_eventAppendRecordingFromFile_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsRecording_AppendRecordingFromFile_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULearningAgentsRecording_AppendRecordingFromFile_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsRecording_eventAppendRecordingFromFile_Parms, File), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecording_AppendRecordingFromFile_Statics::NewProp_File_MetaData), Z_Construct_UFunction_ULearningAgentsRecording_AppendRecordingFromFile_Statics::NewProp_File_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsRecording_AppendRecordingFromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsRecording_AppendRecordingFromFile_Statics::NewProp_File,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsRecording_AppendRecordingFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** Append to this recording from a file. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsRecording.h" },
		{ "RelativePath", "" },
		{ "ToolTip", "Append to this recording from a file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsRecording_AppendRecordingFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsRecording, nullptr, "AppendRecordingFromFile", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsRecording_AppendRecordingFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecording_AppendRecordingFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsRecording_AppendRecordingFromFile_Statics::LearningAgentsRecording_eventAppendRecordingFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecording_AppendRecordingFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsRecording_AppendRecordingFromFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecording_AppendRecordingFromFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsRecording_AppendRecordingFromFile_Statics::LearningAgentsRecording_eventAppendRecordingFromFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsRecording_AppendRecordingFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsRecording_AppendRecordingFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsRecording_AppendRecordingToAsset_Statics
	{
		struct LearningAgentsRecording_eventAppendRecordingToAsset_Parms
		{
			ULearningAgentsRecording* RecordingAsset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RecordingAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULearningAgentsRecording_AppendRecordingToAsset_Statics::NewProp_RecordingAsset = { "RecordingAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsRecording_eventAppendRecordingToAsset_Parms, RecordingAsset), Z_Construct_UClass_ULearningAgentsRecording_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsRecording_AppendRecordingToAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsRecording_AppendRecordingToAsset_Statics::NewProp_RecordingAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsRecording_AppendRecordingToAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** Appends this recording to the given recording asset */" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/LearningAgentsRecording.h" },
		{ "ToolTip", "Appends this recording to the given recording asset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsRecording_AppendRecordingToAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsRecording, nullptr, "AppendRecordingToAsset", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsRecording_AppendRecordingToAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecording_AppendRecordingToAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsRecording_AppendRecordingToAsset_Statics::LearningAgentsRecording_eventAppendRecordingToAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecording_AppendRecordingToAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsRecording_AppendRecordingToAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecording_AppendRecordingToAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsRecording_AppendRecordingToAsset_Statics::LearningAgentsRecording_eventAppendRecordingToAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsRecording_AppendRecordingToAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsRecording_AppendRecordingToAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsRecording_LoadRecordingFromAsset_Statics
	{
		struct LearningAgentsRecording_eventLoadRecordingFromAsset_Parms
		{
			ULearningAgentsRecording* RecordingAsset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RecordingAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULearningAgentsRecording_LoadRecordingFromAsset_Statics::NewProp_RecordingAsset = { "RecordingAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsRecording_eventLoadRecordingFromAsset_Parms, RecordingAsset), Z_Construct_UClass_ULearningAgentsRecording_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsRecording_LoadRecordingFromAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsRecording_LoadRecordingFromAsset_Statics::NewProp_RecordingAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsRecording_LoadRecordingFromAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** Loads this recording from the given recording asset */" },
		{ "ModuleRelativePath", "Public/LearningAgentsRecording.h" },
		{ "ToolTip", "Loads this recording from the given recording asset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsRecording_LoadRecordingFromAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsRecording, nullptr, "LoadRecordingFromAsset", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsRecording_LoadRecordingFromAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecording_LoadRecordingFromAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsRecording_LoadRecordingFromAsset_Statics::LearningAgentsRecording_eventLoadRecordingFromAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecording_LoadRecordingFromAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsRecording_LoadRecordingFromAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecording_LoadRecordingFromAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsRecording_LoadRecordingFromAsset_Statics::LearningAgentsRecording_eventLoadRecordingFromAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsRecording_LoadRecordingFromAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsRecording_LoadRecordingFromAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsRecording_LoadRecordingFromFile_Statics
	{
		struct FFilePath
		{
			FString FilePath;
		};

		struct LearningAgentsRecording_eventLoadRecordingFromFile_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsRecording_LoadRecordingFromFile_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULearningAgentsRecording_LoadRecordingFromFile_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsRecording_eventLoadRecordingFromFile_Parms, File), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecording_LoadRecordingFromFile_Statics::NewProp_File_MetaData), Z_Construct_UFunction_ULearningAgentsRecording_LoadRecordingFromFile_Statics::NewProp_File_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsRecording_LoadRecordingFromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsRecording_LoadRecordingFromFile_Statics::NewProp_File,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsRecording_LoadRecordingFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** Load this recording from a file. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsRecording.h" },
		{ "RelativePath", "" },
		{ "ToolTip", "Load this recording from a file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsRecording_LoadRecordingFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsRecording, nullptr, "LoadRecordingFromFile", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsRecording_LoadRecordingFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecording_LoadRecordingFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsRecording_LoadRecordingFromFile_Statics::LearningAgentsRecording_eventLoadRecordingFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecording_LoadRecordingFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsRecording_LoadRecordingFromFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecording_LoadRecordingFromFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsRecording_LoadRecordingFromFile_Statics::LearningAgentsRecording_eventLoadRecordingFromFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsRecording_LoadRecordingFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsRecording_LoadRecordingFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsRecording_SaveRecordingToAsset_Statics
	{
		struct LearningAgentsRecording_eventSaveRecordingToAsset_Parms
		{
			ULearningAgentsRecording* RecordingAsset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RecordingAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULearningAgentsRecording_SaveRecordingToAsset_Statics::NewProp_RecordingAsset = { "RecordingAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsRecording_eventSaveRecordingToAsset_Parms, RecordingAsset), Z_Construct_UClass_ULearningAgentsRecording_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsRecording_SaveRecordingToAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsRecording_SaveRecordingToAsset_Statics::NewProp_RecordingAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsRecording_SaveRecordingToAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** Saves this recording to the given recording asset */" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/LearningAgentsRecording.h" },
		{ "ToolTip", "Saves this recording to the given recording asset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsRecording_SaveRecordingToAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsRecording, nullptr, "SaveRecordingToAsset", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsRecording_SaveRecordingToAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecording_SaveRecordingToAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsRecording_SaveRecordingToAsset_Statics::LearningAgentsRecording_eventSaveRecordingToAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecording_SaveRecordingToAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsRecording_SaveRecordingToAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecording_SaveRecordingToAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsRecording_SaveRecordingToAsset_Statics::LearningAgentsRecording_eventSaveRecordingToAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsRecording_SaveRecordingToAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsRecording_SaveRecordingToAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsRecording_SaveRecordingToFile_Statics
	{
		struct FFilePath
		{
			FString FilePath;
		};

		struct LearningAgentsRecording_eventSaveRecordingToFile_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsRecording_SaveRecordingToFile_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULearningAgentsRecording_SaveRecordingToFile_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsRecording_eventSaveRecordingToFile_Parms, File), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecording_SaveRecordingToFile_Statics::NewProp_File_MetaData), Z_Construct_UFunction_ULearningAgentsRecording_SaveRecordingToFile_Statics::NewProp_File_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsRecording_SaveRecordingToFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsRecording_SaveRecordingToFile_Statics::NewProp_File,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsRecording_SaveRecordingToFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** Save this recording to a file. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsRecording.h" },
		{ "RelativePath", "" },
		{ "ToolTip", "Save this recording to a file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsRecording_SaveRecordingToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsRecording, nullptr, "SaveRecordingToFile", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsRecording_SaveRecordingToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecording_SaveRecordingToFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsRecording_SaveRecordingToFile_Statics::LearningAgentsRecording_eventSaveRecordingToFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecording_SaveRecordingToFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsRecording_SaveRecordingToFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecording_SaveRecordingToFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsRecording_SaveRecordingToFile_Statics::LearningAgentsRecording_eventSaveRecordingToFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsRecording_SaveRecordingToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsRecording_SaveRecordingToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULearningAgentsRecording);
	UClass* Z_Construct_UClass_ULearningAgentsRecording_NoRegister()
	{
		return ULearningAgentsRecording::StaticClass();
	}
	struct Z_Construct_UClass_ULearningAgentsRecording_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Records_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Records_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Records;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULearningAgentsRecording_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgentsTraining,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsRecording_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULearningAgentsRecording_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULearningAgentsRecording_AppendRecordingFromFile, "AppendRecordingFromFile" }, // 996856938
		{ &Z_Construct_UFunction_ULearningAgentsRecording_AppendRecordingToAsset, "AppendRecordingToAsset" }, // 2394733953
		{ &Z_Construct_UFunction_ULearningAgentsRecording_LoadRecordingFromAsset, "LoadRecordingFromAsset" }, // 3451877441
		{ &Z_Construct_UFunction_ULearningAgentsRecording_LoadRecordingFromFile, "LoadRecordingFromFile" }, // 853907629
		{ &Z_Construct_UFunction_ULearningAgentsRecording_SaveRecordingToAsset, "SaveRecordingToAsset" }, // 3696167153
		{ &Z_Construct_UFunction_ULearningAgentsRecording_SaveRecordingToFile, "SaveRecordingToFile" }, // 1636607462
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsRecording_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsRecording_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Data asset representing an array of records. */" },
		{ "IncludePath", "LearningAgentsRecording.h" },
		{ "ModuleRelativePath", "Public/LearningAgentsRecording.h" },
		{ "ToolTip", "Data asset representing an array of records." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULearningAgentsRecording_Statics::NewProp_Records_Inner = { "Records", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLearningAgentsRecord, METADATA_PARAMS(0, nullptr) }; // 1979283601
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsRecording_Statics::NewProp_Records_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** Set of records. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsRecording.h" },
		{ "ToolTip", "Set of records." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULearningAgentsRecording_Statics::NewProp_Records = { "Records", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULearningAgentsRecording, Records), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsRecording_Statics::NewProp_Records_MetaData), Z_Construct_UClass_ULearningAgentsRecording_Statics::NewProp_Records_MetaData) }; // 1979283601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULearningAgentsRecording_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULearningAgentsRecording_Statics::NewProp_Records_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULearningAgentsRecording_Statics::NewProp_Records,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULearningAgentsRecording_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULearningAgentsRecording>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULearningAgentsRecording_Statics::ClassParams = {
		&ULearningAgentsRecording::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULearningAgentsRecording_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsRecording_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsRecording_Statics::Class_MetaDataParams), Z_Construct_UClass_ULearningAgentsRecording_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsRecording_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULearningAgentsRecording()
	{
		if (!Z_Registration_Info_UClass_ULearningAgentsRecording.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULearningAgentsRecording.OuterSingleton, Z_Construct_UClass_ULearningAgentsRecording_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULearningAgentsRecording.OuterSingleton;
	}
	template<> LEARNINGAGENTSTRAINING_API UClass* StaticClass<ULearningAgentsRecording>()
	{
		return ULearningAgentsRecording::StaticClass();
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecording_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecording_h_Statics::ScriptStructInfo[] = {
		{ FLearningAgentsRecord::StaticStruct, Z_Construct_UScriptStruct_FLearningAgentsRecord_Statics::NewStructOps, TEXT("LearningAgentsRecord"), &Z_Registration_Info_UScriptStruct_LearningAgentsRecord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLearningAgentsRecord), 1979283601U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecording_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULearningAgentsRecording, ULearningAgentsRecording::StaticClass, TEXT("ULearningAgentsRecording"), &Z_Registration_Info_UClass_ULearningAgentsRecording, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULearningAgentsRecording), 2038317221U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecording_h_1229647915(TEXT("/Script/LearningAgentsTraining"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecording_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecording_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecording_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecording_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
