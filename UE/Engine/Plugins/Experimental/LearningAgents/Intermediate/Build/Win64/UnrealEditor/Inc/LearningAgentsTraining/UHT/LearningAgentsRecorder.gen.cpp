// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningAgentsRecorder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLearningAgentsRecorder() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsInteractor_NoRegister();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsManagerComponent();
	LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_ULearningAgentsRecorder();
	LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_ULearningAgentsRecorder_NoRegister();
	LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_ULearningAgentsRecording_NoRegister();
	LEARNINGAGENTSTRAINING_API UScriptStruct* Z_Construct_UScriptStruct_FLearningAgentsRecorderPathSettings();
	UPackage* Z_Construct_UPackage__Script_LearningAgentsTraining();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LearningAgentsRecorderPathSettings;
class UScriptStruct* FLearningAgentsRecorderPathSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LearningAgentsRecorderPathSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LearningAgentsRecorderPathSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLearningAgentsRecorderPathSettings, (UObject*)Z_Construct_UPackage__Script_LearningAgentsTraining(), TEXT("LearningAgentsRecorderPathSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LearningAgentsRecorderPathSettings.OuterSingleton;
}
template<> LEARNINGAGENTSTRAINING_API UScriptStruct* StaticStruct<FLearningAgentsRecorderPathSettings>()
{
	return FLearningAgentsRecorderPathSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLearningAgentsRecorderPathSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntermediateRelativePath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IntermediateRelativePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecordingsSubdirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RecordingsSubdirectory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsRecorderPathSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LearningAgents" },
		{ "Comment", "/** The path settings for the recorder. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsRecorder.h" },
		{ "ToolTip", "The path settings for the recorder." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLearningAgentsRecorderPathSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLearningAgentsRecorderPathSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsRecorderPathSettings_Statics::NewProp_IntermediateRelativePath_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** The relative path to the Intermediate directory. Defaults to FPaths::ProjectIntermediateDir. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsRecorder.h" },
		{ "RelativePath", "" },
		{ "ToolTip", "The relative path to the Intermediate directory. Defaults to FPaths::ProjectIntermediateDir." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLearningAgentsRecorderPathSettings_Statics::NewProp_IntermediateRelativePath = { "IntermediateRelativePath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsRecorderPathSettings, IntermediateRelativePath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsRecorderPathSettings_Statics::NewProp_IntermediateRelativePath_MetaData), Z_Construct_UScriptStruct_FLearningAgentsRecorderPathSettings_Statics::NewProp_IntermediateRelativePath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLearningAgentsRecorderPathSettings_Statics::NewProp_RecordingsSubdirectory_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** The name of the sub-directory to use in the intermediate directory */" },
		{ "ModuleRelativePath", "Public/LearningAgentsRecorder.h" },
		{ "RelativePath", "" },
		{ "ToolTip", "The name of the sub-directory to use in the intermediate directory" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLearningAgentsRecorderPathSettings_Statics::NewProp_RecordingsSubdirectory = { "RecordingsSubdirectory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLearningAgentsRecorderPathSettings, RecordingsSubdirectory), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsRecorderPathSettings_Statics::NewProp_RecordingsSubdirectory_MetaData), Z_Construct_UScriptStruct_FLearningAgentsRecorderPathSettings_Statics::NewProp_RecordingsSubdirectory_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLearningAgentsRecorderPathSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsRecorderPathSettings_Statics::NewProp_IntermediateRelativePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLearningAgentsRecorderPathSettings_Statics::NewProp_RecordingsSubdirectory,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLearningAgentsRecorderPathSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgentsTraining,
		nullptr,
		&NewStructOps,
		"LearningAgentsRecorderPathSettings",
		Z_Construct_UScriptStruct_FLearningAgentsRecorderPathSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsRecorderPathSettings_Statics::PropPointers),
		sizeof(FLearningAgentsRecorderPathSettings),
		alignof(FLearningAgentsRecorderPathSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsRecorderPathSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLearningAgentsRecorderPathSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLearningAgentsRecorderPathSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLearningAgentsRecorderPathSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LearningAgentsRecorderPathSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LearningAgentsRecorderPathSettings.InnerSingleton, Z_Construct_UScriptStruct_FLearningAgentsRecorderPathSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LearningAgentsRecorderPathSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(ULearningAgentsRecorder::execAppendRecordingToAsset)
	{
		P_GET_OBJECT(ULearningAgentsRecording,Z_Param_RecordingAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AppendRecordingToAsset(Z_Param_RecordingAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsRecorder::execSaveRecordingToAsset)
	{
		P_GET_OBJECT(ULearningAgentsRecording,Z_Param_RecordingAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveRecordingToAsset(Z_Param_RecordingAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsRecorder::execLoadRecordingFromAsset)
	{
		P_GET_OBJECT(ULearningAgentsRecording,Z_Param_RecordingAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadRecordingFromAsset(Z_Param_RecordingAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsRecorder::execUseRecordingAsset)
	{
		P_GET_OBJECT(ULearningAgentsRecording,Z_Param_RecordingAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UseRecordingAsset(Z_Param_RecordingAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsRecorder::execAppendRecordingFromFile)
	{
		P_GET_STRUCT_REF(FFilePath,Z_Param_Out_File);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AppendRecordingFromFile(Z_Param_Out_File);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsRecorder::execSaveRecordingToFile)
	{
		P_GET_STRUCT_REF(FFilePath,Z_Param_Out_File);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveRecordingToFile(Z_Param_Out_File);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsRecorder::execLoadRecordingFromFile)
	{
		P_GET_STRUCT_REF(FFilePath,Z_Param_Out_File);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadRecordingFromFile(Z_Param_Out_File);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsRecorder::execGetCurrentRecording)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const ULearningAgentsRecording**)Z_Param__Result=P_THIS->GetCurrentRecording();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsRecorder::execAddExperience)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddExperience();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsRecorder::execIsRecording)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRecording();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsRecorder::execEndRecording)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndRecording();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsRecorder::execBeginRecording)
	{
		P_GET_UBOOL(Z_Param_bReinitializeRecording);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginRecording(Z_Param_bReinitializeRecording);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULearningAgentsRecorder::execSetupRecorder)
	{
		P_GET_OBJECT(ULearningAgentsInteractor,Z_Param_InInteractor);
		P_GET_STRUCT_REF(FLearningAgentsRecorderPathSettings,Z_Param_Out_RecorderPathSettings);
		P_GET_OBJECT(ULearningAgentsRecording,Z_Param_RecordingAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupRecorder(Z_Param_InInteractor,Z_Param_Out_RecorderPathSettings,Z_Param_RecordingAsset);
		P_NATIVE_END;
	}
	void ULearningAgentsRecorder::StaticRegisterNativesULearningAgentsRecorder()
	{
		UClass* Class = ULearningAgentsRecorder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddExperience", &ULearningAgentsRecorder::execAddExperience },
			{ "AppendRecordingFromFile", &ULearningAgentsRecorder::execAppendRecordingFromFile },
			{ "AppendRecordingToAsset", &ULearningAgentsRecorder::execAppendRecordingToAsset },
			{ "BeginRecording", &ULearningAgentsRecorder::execBeginRecording },
			{ "EndRecording", &ULearningAgentsRecorder::execEndRecording },
			{ "GetCurrentRecording", &ULearningAgentsRecorder::execGetCurrentRecording },
			{ "IsRecording", &ULearningAgentsRecorder::execIsRecording },
			{ "LoadRecordingFromAsset", &ULearningAgentsRecorder::execLoadRecordingFromAsset },
			{ "LoadRecordingFromFile", &ULearningAgentsRecorder::execLoadRecordingFromFile },
			{ "SaveRecordingToAsset", &ULearningAgentsRecorder::execSaveRecordingToAsset },
			{ "SaveRecordingToFile", &ULearningAgentsRecorder::execSaveRecordingToFile },
			{ "SetupRecorder", &ULearningAgentsRecorder::execSetupRecorder },
			{ "UseRecordingAsset", &ULearningAgentsRecorder::execUseRecordingAsset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULearningAgentsRecorder_AddExperience_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsRecorder_AddExperience_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * While recording, adds the current observations and actions of the added agents to the internal buffer. Call this \n\x09 * after ULearningAgentsInteractor::EncodeObservations and either ULearningAgentsController::EncodeActions (if \n\x09 * recording a human/AI demonstration) or ULearningAgentsInteractor::DecodeActions (if recording another policy).\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsRecorder.h" },
		{ "ToolTip", "While recording, adds the current observations and actions of the added agents to the internal buffer. Call this\nafter ULearningAgentsInteractor::EncodeObservations and either ULearningAgentsController::EncodeActions (if\nrecording a human/AI demonstration) or ULearningAgentsInteractor::DecodeActions (if recording another policy)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsRecorder_AddExperience_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsRecorder, nullptr, "AddExperience", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecorder_AddExperience_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsRecorder_AddExperience_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULearningAgentsRecorder_AddExperience()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsRecorder_AddExperience_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsRecorder_AppendRecordingFromFile_Statics
	{
		struct FFilePath
		{
			FString FilePath;
		};

		struct LearningAgentsRecorder_eventAppendRecordingFromFile_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsRecorder_AppendRecordingFromFile_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULearningAgentsRecorder_AppendRecordingFromFile_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsRecorder_eventAppendRecordingFromFile_Parms, File), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecorder_AppendRecordingFromFile_Statics::NewProp_File_MetaData), Z_Construct_UFunction_ULearningAgentsRecorder_AppendRecordingFromFile_Statics::NewProp_File_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsRecorder_AppendRecordingFromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsRecorder_AppendRecordingFromFile_Statics::NewProp_File,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsRecorder_AppendRecordingFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** Append to the current recording object from a file. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsRecorder.h" },
		{ "RelativePath", "" },
		{ "ToolTip", "Append to the current recording object from a file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsRecorder_AppendRecordingFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsRecorder, nullptr, "AppendRecordingFromFile", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsRecorder_AppendRecordingFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecorder_AppendRecordingFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsRecorder_AppendRecordingFromFile_Statics::LearningAgentsRecorder_eventAppendRecordingFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecorder_AppendRecordingFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsRecorder_AppendRecordingFromFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecorder_AppendRecordingFromFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsRecorder_AppendRecordingFromFile_Statics::LearningAgentsRecorder_eventAppendRecordingFromFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsRecorder_AppendRecordingFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsRecorder_AppendRecordingFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsRecorder_AppendRecordingToAsset_Statics
	{
		struct LearningAgentsRecorder_eventAppendRecordingToAsset_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULearningAgentsRecorder_AppendRecordingToAsset_Statics::NewProp_RecordingAsset = { "RecordingAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsRecorder_eventAppendRecordingToAsset_Parms, RecordingAsset), Z_Construct_UClass_ULearningAgentsRecording_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsRecorder_AppendRecordingToAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsRecorder_AppendRecordingToAsset_Statics::NewProp_RecordingAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsRecorder_AppendRecordingToAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** Appends the current recording object to the given recording asset */" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/LearningAgentsRecorder.h" },
		{ "ToolTip", "Appends the current recording object to the given recording asset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsRecorder_AppendRecordingToAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsRecorder, nullptr, "AppendRecordingToAsset", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsRecorder_AppendRecordingToAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecorder_AppendRecordingToAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsRecorder_AppendRecordingToAsset_Statics::LearningAgentsRecorder_eventAppendRecordingToAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecorder_AppendRecordingToAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsRecorder_AppendRecordingToAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecorder_AppendRecordingToAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsRecorder_AppendRecordingToAsset_Statics::LearningAgentsRecorder_eventAppendRecordingToAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsRecorder_AppendRecordingToAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsRecorder_AppendRecordingToAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsRecorder_BeginRecording_Statics
	{
		struct LearningAgentsRecorder_eventBeginRecording_Parms
		{
			bool bReinitializeRecording;
		};
		static void NewProp_bReinitializeRecording_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReinitializeRecording;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULearningAgentsRecorder_BeginRecording_Statics::NewProp_bReinitializeRecording_SetBit(void* Obj)
	{
		((LearningAgentsRecorder_eventBeginRecording_Parms*)Obj)->bReinitializeRecording = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULearningAgentsRecorder_BeginRecording_Statics::NewProp_bReinitializeRecording = { "bReinitializeRecording", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LearningAgentsRecorder_eventBeginRecording_Parms), &Z_Construct_UFunction_ULearningAgentsRecorder_BeginRecording_Statics::NewProp_bReinitializeRecording_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsRecorder_BeginRecording_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsRecorder_BeginRecording_Statics::NewProp_bReinitializeRecording,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsRecorder_BeginRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Begins the recording of the observations and actions of each added agent.\n\x09 * @param bReinitializeRecording If to clear all records from the recording object in use at the start of recording.\n\x09 */" },
		{ "CPP_Default_bReinitializeRecording", "true" },
		{ "ModuleRelativePath", "Public/LearningAgentsRecorder.h" },
		{ "ToolTip", "Begins the recording of the observations and actions of each added agent.\n@param bReinitializeRecording If to clear all records from the recording object in use at the start of recording." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsRecorder_BeginRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsRecorder, nullptr, "BeginRecording", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsRecorder_BeginRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecorder_BeginRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsRecorder_BeginRecording_Statics::LearningAgentsRecorder_eventBeginRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecorder_BeginRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsRecorder_BeginRecording_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecorder_BeginRecording_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsRecorder_BeginRecording_Statics::LearningAgentsRecorder_eventBeginRecording_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsRecorder_BeginRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsRecorder_BeginRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsRecorder_EndRecording_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsRecorder_EndRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Ends the recording of the observations and actions of each agent and stores them in the current recording object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LearningAgentsRecorder.h" },
		{ "ToolTip", "Ends the recording of the observations and actions of each agent and stores them in the current recording object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsRecorder_EndRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsRecorder, nullptr, "EndRecording", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecorder_EndRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsRecorder_EndRecording_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULearningAgentsRecorder_EndRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsRecorder_EndRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsRecorder_GetCurrentRecording_Statics
	{
		struct LearningAgentsRecorder_eventGetCurrentRecording_Parms
		{
			const ULearningAgentsRecording* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsRecorder_GetCurrentRecording_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULearningAgentsRecorder_GetCurrentRecording_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsRecorder_eventGetCurrentRecording_Parms, ReturnValue), Z_Construct_UClass_ULearningAgentsRecording_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecorder_GetCurrentRecording_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ULearningAgentsRecorder_GetCurrentRecording_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsRecorder_GetCurrentRecording_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsRecorder_GetCurrentRecording_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsRecorder_GetCurrentRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** Gets the current recording object. Note: this may be empty until EndRecording has been called. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsRecorder.h" },
		{ "ToolTip", "Gets the current recording object. Note: this may be empty until EndRecording has been called." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsRecorder_GetCurrentRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsRecorder, nullptr, "GetCurrentRecording", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsRecorder_GetCurrentRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecorder_GetCurrentRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsRecorder_GetCurrentRecording_Statics::LearningAgentsRecorder_eventGetCurrentRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecorder_GetCurrentRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsRecorder_GetCurrentRecording_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecorder_GetCurrentRecording_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsRecorder_GetCurrentRecording_Statics::LearningAgentsRecorder_eventGetCurrentRecording_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsRecorder_GetCurrentRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsRecorder_GetCurrentRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsRecorder_IsRecording_Statics
	{
		struct LearningAgentsRecorder_eventIsRecording_Parms
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
	void Z_Construct_UFunction_ULearningAgentsRecorder_IsRecording_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LearningAgentsRecorder_eventIsRecording_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULearningAgentsRecorder_IsRecording_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LearningAgentsRecorder_eventIsRecording_Parms), &Z_Construct_UFunction_ULearningAgentsRecorder_IsRecording_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsRecorder_IsRecording_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsRecorder_IsRecording_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsRecorder_IsRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** Returns true if recording is active; Otherwise, false. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsRecorder.h" },
		{ "ToolTip", "Returns true if recording is active; Otherwise, false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsRecorder_IsRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsRecorder, nullptr, "IsRecording", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsRecorder_IsRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecorder_IsRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsRecorder_IsRecording_Statics::LearningAgentsRecorder_eventIsRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecorder_IsRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsRecorder_IsRecording_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecorder_IsRecording_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsRecorder_IsRecording_Statics::LearningAgentsRecorder_eventIsRecording_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsRecorder_IsRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsRecorder_IsRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsRecorder_LoadRecordingFromAsset_Statics
	{
		struct LearningAgentsRecorder_eventLoadRecordingFromAsset_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULearningAgentsRecorder_LoadRecordingFromAsset_Statics::NewProp_RecordingAsset = { "RecordingAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsRecorder_eventLoadRecordingFromAsset_Parms, RecordingAsset), Z_Construct_UClass_ULearningAgentsRecording_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsRecorder_LoadRecordingFromAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsRecorder_LoadRecordingFromAsset_Statics::NewProp_RecordingAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsRecorder_LoadRecordingFromAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** Loads the current recording object from the given recording asset */" },
		{ "ModuleRelativePath", "Public/LearningAgentsRecorder.h" },
		{ "ToolTip", "Loads the current recording object from the given recording asset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsRecorder_LoadRecordingFromAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsRecorder, nullptr, "LoadRecordingFromAsset", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsRecorder_LoadRecordingFromAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecorder_LoadRecordingFromAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsRecorder_LoadRecordingFromAsset_Statics::LearningAgentsRecorder_eventLoadRecordingFromAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecorder_LoadRecordingFromAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsRecorder_LoadRecordingFromAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecorder_LoadRecordingFromAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsRecorder_LoadRecordingFromAsset_Statics::LearningAgentsRecorder_eventLoadRecordingFromAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsRecorder_LoadRecordingFromAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsRecorder_LoadRecordingFromAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsRecorder_LoadRecordingFromFile_Statics
	{
		struct FFilePath
		{
			FString FilePath;
		};

		struct LearningAgentsRecorder_eventLoadRecordingFromFile_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsRecorder_LoadRecordingFromFile_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULearningAgentsRecorder_LoadRecordingFromFile_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsRecorder_eventLoadRecordingFromFile_Parms, File), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecorder_LoadRecordingFromFile_Statics::NewProp_File_MetaData), Z_Construct_UFunction_ULearningAgentsRecorder_LoadRecordingFromFile_Statics::NewProp_File_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsRecorder_LoadRecordingFromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsRecorder_LoadRecordingFromFile_Statics::NewProp_File,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsRecorder_LoadRecordingFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** Loads the current recording object from a file */" },
		{ "ModuleRelativePath", "Public/LearningAgentsRecorder.h" },
		{ "RelativePath", "" },
		{ "ToolTip", "Loads the current recording object from a file" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsRecorder_LoadRecordingFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsRecorder, nullptr, "LoadRecordingFromFile", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsRecorder_LoadRecordingFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecorder_LoadRecordingFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsRecorder_LoadRecordingFromFile_Statics::LearningAgentsRecorder_eventLoadRecordingFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecorder_LoadRecordingFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsRecorder_LoadRecordingFromFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecorder_LoadRecordingFromFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsRecorder_LoadRecordingFromFile_Statics::LearningAgentsRecorder_eventLoadRecordingFromFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsRecorder_LoadRecordingFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsRecorder_LoadRecordingFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsRecorder_SaveRecordingToAsset_Statics
	{
		struct LearningAgentsRecorder_eventSaveRecordingToAsset_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULearningAgentsRecorder_SaveRecordingToAsset_Statics::NewProp_RecordingAsset = { "RecordingAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsRecorder_eventSaveRecordingToAsset_Parms, RecordingAsset), Z_Construct_UClass_ULearningAgentsRecording_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsRecorder_SaveRecordingToAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsRecorder_SaveRecordingToAsset_Statics::NewProp_RecordingAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsRecorder_SaveRecordingToAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** Saves the current recording object to the given recording asset */" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/LearningAgentsRecorder.h" },
		{ "ToolTip", "Saves the current recording object to the given recording asset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsRecorder_SaveRecordingToAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsRecorder, nullptr, "SaveRecordingToAsset", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsRecorder_SaveRecordingToAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecorder_SaveRecordingToAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsRecorder_SaveRecordingToAsset_Statics::LearningAgentsRecorder_eventSaveRecordingToAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecorder_SaveRecordingToAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsRecorder_SaveRecordingToAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecorder_SaveRecordingToAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsRecorder_SaveRecordingToAsset_Statics::LearningAgentsRecorder_eventSaveRecordingToAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsRecorder_SaveRecordingToAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsRecorder_SaveRecordingToAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsRecorder_SaveRecordingToFile_Statics
	{
		struct FFilePath
		{
			FString FilePath;
		};

		struct LearningAgentsRecorder_eventSaveRecordingToFile_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsRecorder_SaveRecordingToFile_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULearningAgentsRecorder_SaveRecordingToFile_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsRecorder_eventSaveRecordingToFile_Parms, File), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecorder_SaveRecordingToFile_Statics::NewProp_File_MetaData), Z_Construct_UFunction_ULearningAgentsRecorder_SaveRecordingToFile_Statics::NewProp_File_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsRecorder_SaveRecordingToFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsRecorder_SaveRecordingToFile_Statics::NewProp_File,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsRecorder_SaveRecordingToFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** Saves the current recording object to a file */" },
		{ "ModuleRelativePath", "Public/LearningAgentsRecorder.h" },
		{ "RelativePath", "" },
		{ "ToolTip", "Saves the current recording object to a file" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsRecorder_SaveRecordingToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsRecorder, nullptr, "SaveRecordingToFile", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsRecorder_SaveRecordingToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecorder_SaveRecordingToFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsRecorder_SaveRecordingToFile_Statics::LearningAgentsRecorder_eventSaveRecordingToFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecorder_SaveRecordingToFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsRecorder_SaveRecordingToFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecorder_SaveRecordingToFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsRecorder_SaveRecordingToFile_Statics::LearningAgentsRecorder_eventSaveRecordingToFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsRecorder_SaveRecordingToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsRecorder_SaveRecordingToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsRecorder_SetupRecorder_Statics
	{
		struct LearningAgentsRecorder_eventSetupRecorder_Parms
		{
			ULearningAgentsInteractor* InInteractor;
			FLearningAgentsRecorderPathSettings RecorderPathSettings;
			ULearningAgentsRecording* RecordingAsset;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInteractor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInteractor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecorderPathSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RecorderPathSettings;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RecordingAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsRecorder_SetupRecorder_Statics::NewProp_InInteractor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULearningAgentsRecorder_SetupRecorder_Statics::NewProp_InInteractor = { "InInteractor", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsRecorder_eventSetupRecorder_Parms, InInteractor), Z_Construct_UClass_ULearningAgentsInteractor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecorder_SetupRecorder_Statics::NewProp_InInteractor_MetaData), Z_Construct_UFunction_ULearningAgentsRecorder_SetupRecorder_Statics::NewProp_InInteractor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsRecorder_SetupRecorder_Statics::NewProp_RecorderPathSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULearningAgentsRecorder_SetupRecorder_Statics::NewProp_RecorderPathSettings = { "RecorderPathSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsRecorder_eventSetupRecorder_Parms, RecorderPathSettings), Z_Construct_UScriptStruct_FLearningAgentsRecorderPathSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecorder_SetupRecorder_Statics::NewProp_RecorderPathSettings_MetaData), Z_Construct_UFunction_ULearningAgentsRecorder_SetupRecorder_Statics::NewProp_RecorderPathSettings_MetaData) }; // 1705730150
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULearningAgentsRecorder_SetupRecorder_Statics::NewProp_RecordingAsset = { "RecordingAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsRecorder_eventSetupRecorder_Parms, RecordingAsset), Z_Construct_UClass_ULearningAgentsRecording_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsRecorder_SetupRecorder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsRecorder_SetupRecorder_Statics::NewProp_InInteractor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsRecorder_SetupRecorder_Statics::NewProp_RecorderPathSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsRecorder_SetupRecorder_Statics::NewProp_RecordingAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsRecorder_SetupRecorder_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/**\n\x09 * Initializes this object and runs the setup functions for the underlying data storage.\n\x09 * @param InInteractor The agent interactor we are recording with.\n\x09 * @param RecorderPathSettings The path settings used by the recorder.\n\x09 * @param RecordingAsset Optional recording asset to use. If not provided then a new recording object will be \n\x09 * created.\n\x09 */" },
		{ "CPP_Default_RecorderPathSettings", "()" },
		{ "CPP_Default_RecordingAsset", "None" },
		{ "ModuleRelativePath", "Public/LearningAgentsRecorder.h" },
		{ "ToolTip", "Initializes this object and runs the setup functions for the underlying data storage.\n@param InInteractor The agent interactor we are recording with.\n@param RecorderPathSettings The path settings used by the recorder.\n@param RecordingAsset Optional recording asset to use. If not provided then a new recording object will be\ncreated." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsRecorder_SetupRecorder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsRecorder, nullptr, "SetupRecorder", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsRecorder_SetupRecorder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecorder_SetupRecorder_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsRecorder_SetupRecorder_Statics::LearningAgentsRecorder_eventSetupRecorder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecorder_SetupRecorder_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsRecorder_SetupRecorder_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecorder_SetupRecorder_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsRecorder_SetupRecorder_Statics::LearningAgentsRecorder_eventSetupRecorder_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsRecorder_SetupRecorder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsRecorder_SetupRecorder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsRecorder_UseRecordingAsset_Statics
	{
		struct LearningAgentsRecorder_eventUseRecordingAsset_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULearningAgentsRecorder_UseRecordingAsset_Statics::NewProp_RecordingAsset = { "RecordingAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsRecorder_eventUseRecordingAsset_Parms, RecordingAsset), Z_Construct_UClass_ULearningAgentsRecording_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsRecorder_UseRecordingAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsRecorder_UseRecordingAsset_Statics::NewProp_RecordingAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsRecorder_UseRecordingAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** Uses the given recording asset. New recordings will be appended to this. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsRecorder.h" },
		{ "ToolTip", "Uses the given recording asset. New recordings will be appended to this." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsRecorder_UseRecordingAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsRecorder, nullptr, "UseRecordingAsset", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsRecorder_UseRecordingAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecorder_UseRecordingAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULearningAgentsRecorder_UseRecordingAsset_Statics::LearningAgentsRecorder_eventUseRecordingAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecorder_UseRecordingAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsRecorder_UseRecordingAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsRecorder_UseRecordingAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULearningAgentsRecorder_UseRecordingAsset_Statics::LearningAgentsRecorder_eventUseRecordingAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsRecorder_UseRecordingAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsRecorder_UseRecordingAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULearningAgentsRecorder);
	UClass* Z_Construct_UClass_ULearningAgentsRecorder_NoRegister()
	{
		return ULearningAgentsRecorder::StaticClass();
	}
	struct Z_Construct_UClass_ULearningAgentsRecorder_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Recording_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Recording;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRecording_MetaData[];
#endif
		static void NewProp_bIsRecording_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRecording;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULearningAgentsRecorder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULearningAgentsManagerComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgentsTraining,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsRecorder_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULearningAgentsRecorder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULearningAgentsRecorder_AddExperience, "AddExperience" }, // 3043539454
		{ &Z_Construct_UFunction_ULearningAgentsRecorder_AppendRecordingFromFile, "AppendRecordingFromFile" }, // 3267522429
		{ &Z_Construct_UFunction_ULearningAgentsRecorder_AppendRecordingToAsset, "AppendRecordingToAsset" }, // 3537254053
		{ &Z_Construct_UFunction_ULearningAgentsRecorder_BeginRecording, "BeginRecording" }, // 1824556677
		{ &Z_Construct_UFunction_ULearningAgentsRecorder_EndRecording, "EndRecording" }, // 4262962351
		{ &Z_Construct_UFunction_ULearningAgentsRecorder_GetCurrentRecording, "GetCurrentRecording" }, // 3212290364
		{ &Z_Construct_UFunction_ULearningAgentsRecorder_IsRecording, "IsRecording" }, // 3049203565
		{ &Z_Construct_UFunction_ULearningAgentsRecorder_LoadRecordingFromAsset, "LoadRecordingFromAsset" }, // 3839307167
		{ &Z_Construct_UFunction_ULearningAgentsRecorder_LoadRecordingFromFile, "LoadRecordingFromFile" }, // 2948641802
		{ &Z_Construct_UFunction_ULearningAgentsRecorder_SaveRecordingToAsset, "SaveRecordingToAsset" }, // 3657029486
		{ &Z_Construct_UFunction_ULearningAgentsRecorder_SaveRecordingToFile, "SaveRecordingToFile" }, // 1382260982
		{ &Z_Construct_UFunction_ULearningAgentsRecorder_SetupRecorder, "SetupRecorder" }, // 353713219
		{ &Z_Construct_UFunction_ULearningAgentsRecorder_UseRecordingAsset, "UseRecordingAsset" }, // 661759988
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsRecorder_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsRecorder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A component that can be used to create recordings of training data for imitation learning. */" },
		{ "IncludePath", "LearningAgentsRecorder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LearningAgentsRecorder.h" },
		{ "ToolTip", "A component that can be used to create recordings of training data for imitation learning." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsRecorder_Statics::NewProp_Interactor_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** The agent interactor this recorder is associated with. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LearningAgentsRecorder.h" },
		{ "ToolTip", "The agent interactor this recorder is associated with." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULearningAgentsRecorder_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x00440000000a2009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULearningAgentsRecorder, Interactor), Z_Construct_UClass_ULearningAgentsInteractor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsRecorder_Statics::NewProp_Interactor_MetaData), Z_Construct_UClass_ULearningAgentsRecorder_Statics::NewProp_Interactor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsRecorder_Statics::NewProp_Recording_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** The current recording object. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsRecorder.h" },
		{ "ToolTip", "The current recording object." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULearningAgentsRecorder_Statics::NewProp_Recording = { "Recording", nullptr, (EPropertyFlags)0x0044000000022001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULearningAgentsRecorder, Recording), Z_Construct_UClass_ULearningAgentsRecording_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsRecorder_Statics::NewProp_Recording_MetaData), Z_Construct_UClass_ULearningAgentsRecorder_Statics::NewProp_Recording_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsRecorder_Statics::NewProp_bIsRecording_MetaData[] = {
		{ "Category", "LearningAgents" },
		{ "Comment", "/** True if recording is currently in-progress. Otherwise, false. */" },
		{ "ModuleRelativePath", "Public/LearningAgentsRecorder.h" },
		{ "ToolTip", "True if recording is currently in-progress. Otherwise, false." },
	};
#endif
	void Z_Construct_UClass_ULearningAgentsRecorder_Statics::NewProp_bIsRecording_SetBit(void* Obj)
	{
		((ULearningAgentsRecorder*)Obj)->bIsRecording = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULearningAgentsRecorder_Statics::NewProp_bIsRecording = { "bIsRecording", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULearningAgentsRecorder), &Z_Construct_UClass_ULearningAgentsRecorder_Statics::NewProp_bIsRecording_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsRecorder_Statics::NewProp_bIsRecording_MetaData), Z_Construct_UClass_ULearningAgentsRecorder_Statics::NewProp_bIsRecording_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULearningAgentsRecorder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULearningAgentsRecorder_Statics::NewProp_Interactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULearningAgentsRecorder_Statics::NewProp_Recording,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULearningAgentsRecorder_Statics::NewProp_bIsRecording,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULearningAgentsRecorder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULearningAgentsRecorder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULearningAgentsRecorder_Statics::ClassParams = {
		&ULearningAgentsRecorder::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULearningAgentsRecorder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsRecorder_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsRecorder_Statics::Class_MetaDataParams), Z_Construct_UClass_ULearningAgentsRecorder_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsRecorder_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULearningAgentsRecorder()
	{
		if (!Z_Registration_Info_UClass_ULearningAgentsRecorder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULearningAgentsRecorder.OuterSingleton, Z_Construct_UClass_ULearningAgentsRecorder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULearningAgentsRecorder.OuterSingleton;
	}
	template<> LEARNINGAGENTSTRAINING_API UClass* StaticClass<ULearningAgentsRecorder>()
	{
		return ULearningAgentsRecorder::StaticClass();
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecorder_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecorder_h_Statics::ScriptStructInfo[] = {
		{ FLearningAgentsRecorderPathSettings::StaticStruct, Z_Construct_UScriptStruct_FLearningAgentsRecorderPathSettings_Statics::NewStructOps, TEXT("LearningAgentsRecorderPathSettings"), &Z_Registration_Info_UScriptStruct_LearningAgentsRecorderPathSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLearningAgentsRecorderPathSettings), 1705730150U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecorder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULearningAgentsRecorder, ULearningAgentsRecorder::StaticClass, TEXT("ULearningAgentsRecorder"), &Z_Registration_Info_UClass_ULearningAgentsRecorder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULearningAgentsRecorder), 3866423317U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecorder_h_2453049841(TEXT("/Script/LearningAgentsTraining"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecorder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecorder_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecorder_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecorder_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
