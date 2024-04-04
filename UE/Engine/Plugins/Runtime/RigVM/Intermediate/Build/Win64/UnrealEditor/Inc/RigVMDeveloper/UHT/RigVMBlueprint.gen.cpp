// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMBlueprint.h"
#include "RigVMCompiler/RigVMCompiler.h"
#include "RigVMCore/RigVMExecuteContext.h"
#include "RigVMCore/RigVMGraphFunctionDefinition.h"
#include "RigVMCore/RigVMMemoryCommon.h"
#include "RigVMModel/RigVMBuildData.h"
#include "RigVMModel/RigVMClient.h"
#include "RigVMModel/RigVMVariableDescription.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMBlueprint() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	RIGVM_API UClass* Z_Construct_UClass_URigVMHost_NoRegister();
	RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMPinDirection();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMOperand();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMRuntimeSettings();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMBlueprint();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMBlueprint_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMClientHost_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMController_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMEdGraph_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMFunctionLibrary_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMGraph_NoRegister();
	RIGVMDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMClient();
	RIGVMDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMCompileSettings();
	RIGVMDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings();
	RIGVMDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphVariableDescription();
	RIGVMDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg();
	RIGVMDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData();
	RIGVMDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMPythonSettings();
	RIGVMDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMReferenceNodeData();
	UPackage* Z_Construct_UPackage__Script_RigVMDeveloper();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMPythonSettings;
class UScriptStruct* FRigVMPythonSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMPythonSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMPythonSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMPythonSettings, (UObject*)Z_Construct_UPackage__Script_RigVMDeveloper(), TEXT("RigVMPythonSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMPythonSettings.OuterSingleton;
}
template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<FRigVMPythonSettings>()
{
	return FRigVMPythonSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMPythonSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMPythonSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMPythonSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMPythonSettings>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMPythonSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
		nullptr,
		&NewStructOps,
		"RigVMPythonSettings",
		nullptr,
		0,
		sizeof(FRigVMPythonSettings),
		alignof(FRigVMPythonSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMPythonSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMPythonSettings_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMPythonSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMPythonSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMPythonSettings.InnerSingleton, Z_Construct_UScriptStruct_FRigVMPythonSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMPythonSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMEdGraphDisplaySettings;
class UScriptStruct* FRigVMEdGraphDisplaySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMEdGraphDisplaySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMEdGraphDisplaySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings, (UObject*)Z_Construct_UPackage__Script_RigVMDeveloper(), TEXT("RigVMEdGraphDisplaySettings"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMEdGraphDisplaySettings.OuterSingleton;
}
template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<FRigVMEdGraphDisplaySettings>()
{
	return FRigVMEdGraphDisplaySettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowNodeInstructionIndex_MetaData[];
#endif
		static void NewProp_bShowNodeInstructionIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowNodeInstructionIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowNodeRunCounts_MetaData[];
#endif
		static void NewProp_bShowNodeRunCounts_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowNodeRunCounts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeRunLowerBound_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeRunLowerBound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeRunLimit_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeRunLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinMicroSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MinMicroSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxMicroSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxMicroSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalMicroSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_TotalMicroSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDetermineRange_MetaData[];
#endif
		static void NewProp_bAutoDetermineRange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDetermineRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastMinMicroSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_LastMinMicroSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastMaxMicroSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_LastMaxMicroSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinDurationColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinDurationColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDurationColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxDurationColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMEdGraphDisplaySettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_bShowNodeInstructionIndex_MetaData[] = {
		{ "Category", "Graph Display Settings" },
		{ "Comment", "// When enabled shows the first node instruction index\n// matching the execution stack window.\n" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
		{ "ToolTip", "When enabled shows the first node instruction index\nmatching the execution stack window." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_bShowNodeInstructionIndex_SetBit(void* Obj)
	{
		((FRigVMEdGraphDisplaySettings*)Obj)->bShowNodeInstructionIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_bShowNodeInstructionIndex = { "bShowNodeInstructionIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigVMEdGraphDisplaySettings), &Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_bShowNodeInstructionIndex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_bShowNodeInstructionIndex_MetaData), Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_bShowNodeInstructionIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_bShowNodeRunCounts_MetaData[] = {
		{ "Category", "Graph Display Settings" },
		{ "Comment", "// When enabled shows the node counts both in the graph view as\n// we as in the execution stack window.\n// The number on each node represents how often the node has been run.\n// Keep in mind when looking at nodes in a function the count\n// represents the sum of all counts for each node based on all\n// references of the function currently running.\n" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
		{ "ToolTip", "When enabled shows the node counts both in the graph view as\nwe as in the execution stack window.\nThe number on each node represents how often the node has been run.\nKeep in mind when looking at nodes in a function the count\nrepresents the sum of all counts for each node based on all\nreferences of the function currently running." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_bShowNodeRunCounts_SetBit(void* Obj)
	{
		((FRigVMEdGraphDisplaySettings*)Obj)->bShowNodeRunCounts = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_bShowNodeRunCounts = { "bShowNodeRunCounts", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigVMEdGraphDisplaySettings), &Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_bShowNodeRunCounts_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_bShowNodeRunCounts_MetaData), Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_bShowNodeRunCounts_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_NodeRunLowerBound_MetaData[] = {
		{ "Category", "Graph Display Settings" },
		{ "Comment", "// A lower limit for counts for nodes used for debugging.\n// Any node lower than this count won't show the run count.\n" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
		{ "ToolTip", "A lower limit for counts for nodes used for debugging.\nAny node lower than this count won't show the run count." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_NodeRunLowerBound = { "NodeRunLowerBound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMEdGraphDisplaySettings, NodeRunLowerBound), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_NodeRunLowerBound_MetaData), Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_NodeRunLowerBound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_NodeRunLimit_MetaData[] = {
		{ "Category", "Graph Display Settings" },
		{ "Comment", "// A upper limit for counts for nodes used for debugging.\n// If a node reaches this count a warning will be issued for the\n// node and displayed both in the execution stack as well as in the\n// graph. Setting this to <= 1 disables the warning.\n// Note: The count limit doesn't apply to functions / collapse nodes.\n" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
		{ "ToolTip", "A upper limit for counts for nodes used for debugging.\nIf a node reaches this count a warning will be issued for the\nnode and displayed both in the execution stack as well as in the\ngraph. Setting this to <= 1 disables the warning.\nNote: The count limit doesn't apply to functions / collapse nodes." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_NodeRunLimit = { "NodeRunLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMEdGraphDisplaySettings, NodeRunLimit), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_NodeRunLimit_MetaData), Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_NodeRunLimit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_MinMicroSeconds_MetaData[] = {
		{ "Category", "Graph Display Settings" },
		{ "Comment", "// The duration in microseconds of the fastest instruction / node\n" },
		{ "EditCondition", "!bAutoDetermineRange" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
		{ "ToolTip", "The duration in microseconds of the fastest instruction / node" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_MinMicroSeconds = { "MinMicroSeconds", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMEdGraphDisplaySettings, MinMicroSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_MinMicroSeconds_MetaData), Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_MinMicroSeconds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_MaxMicroSeconds_MetaData[] = {
		{ "Category", "Graph Display Settings" },
		{ "Comment", "// The duration in microseconds of the slowest instruction / node\n" },
		{ "EditCondition", "!bAutoDetermineRange" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
		{ "ToolTip", "The duration in microseconds of the slowest instruction / node" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_MaxMicroSeconds = { "MaxMicroSeconds", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMEdGraphDisplaySettings, MaxMicroSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_MaxMicroSeconds_MetaData), Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_MaxMicroSeconds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_TotalMicroSeconds_MetaData[] = {
		{ "Category", "Graph Display Settings" },
		{ "Comment", "// The total duration of the last execution of the rig\n" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
		{ "ToolTip", "The total duration of the last execution of the rig" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_TotalMicroSeconds = { "TotalMicroSeconds", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMEdGraphDisplaySettings, TotalMicroSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_TotalMicroSeconds_MetaData), Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_TotalMicroSeconds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_bAutoDetermineRange_MetaData[] = {
		{ "Category", "Graph Display Settings" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_bAutoDetermineRange_SetBit(void* Obj)
	{
		((FRigVMEdGraphDisplaySettings*)Obj)->bAutoDetermineRange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_bAutoDetermineRange = { "bAutoDetermineRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigVMEdGraphDisplaySettings), &Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_bAutoDetermineRange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_bAutoDetermineRange_MetaData), Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_bAutoDetermineRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_LastMinMicroSeconds_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_LastMinMicroSeconds = { "LastMinMicroSeconds", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMEdGraphDisplaySettings, LastMinMicroSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_LastMinMicroSeconds_MetaData), Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_LastMinMicroSeconds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_LastMaxMicroSeconds_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_LastMaxMicroSeconds = { "LastMaxMicroSeconds", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMEdGraphDisplaySettings, LastMaxMicroSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_LastMaxMicroSeconds_MetaData), Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_LastMaxMicroSeconds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_MinDurationColor_MetaData[] = {
		{ "Category", "Graph Display Settings" },
		{ "Comment", "// The color of the fastest instruction / node\n" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
		{ "ToolTip", "The color of the fastest instruction / node" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_MinDurationColor = { "MinDurationColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMEdGraphDisplaySettings, MinDurationColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_MinDurationColor_MetaData), Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_MinDurationColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_MaxDurationColor_MetaData[] = {
		{ "Category", "Graph Display Settings" },
		{ "Comment", "// The color of the slowest instruction / node\n" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
		{ "ToolTip", "The color of the slowest instruction / node" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_MaxDurationColor = { "MaxDurationColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMEdGraphDisplaySettings, MaxDurationColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_MaxDurationColor_MetaData), Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_MaxDurationColor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_bShowNodeInstructionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_bShowNodeRunCounts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_NodeRunLowerBound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_NodeRunLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_MinMicroSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_MaxMicroSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_TotalMicroSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_bAutoDetermineRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_LastMinMicroSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_LastMaxMicroSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_MinDurationColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewProp_MaxDurationColor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
		nullptr,
		&NewStructOps,
		"RigVMEdGraphDisplaySettings",
		Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::PropPointers),
		sizeof(FRigVMEdGraphDisplaySettings),
		alignof(FRigVMEdGraphDisplaySettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMEdGraphDisplaySettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMEdGraphDisplaySettings.InnerSingleton, Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMEdGraphDisplaySettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMOldPublicFunctionArg;
class UScriptStruct* FRigVMOldPublicFunctionArg::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMOldPublicFunctionArg.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMOldPublicFunctionArg.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg, (UObject*)Z_Construct_UPackage__Script_RigVMDeveloper(), TEXT("RigVMOldPublicFunctionArg"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMOldPublicFunctionArg.OuterSingleton;
}
template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<FRigVMOldPublicFunctionArg>()
{
	return FRigVMOldPublicFunctionArg::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CPPType_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CPPType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CPPTypeObjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CPPTypeObjectPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsArray_MetaData[];
#endif
		static void NewProp_bIsArray_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsArray;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics::Struct_MetaDataParams[] = {
		{ "Deprecated", "5.2" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMOldPublicFunctionArg>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMOldPublicFunctionArg, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics::NewProp_CPPType_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics::NewProp_CPPType = { "CPPType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMOldPublicFunctionArg, CPPType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics::NewProp_CPPType_MetaData), Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics::NewProp_CPPType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics::NewProp_CPPTypeObjectPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics::NewProp_CPPTypeObjectPath = { "CPPTypeObjectPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMOldPublicFunctionArg, CPPTypeObjectPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics::NewProp_CPPTypeObjectPath_MetaData), Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics::NewProp_CPPTypeObjectPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics::NewProp_bIsArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics::NewProp_bIsArray_SetBit(void* Obj)
	{
		((FRigVMOldPublicFunctionArg*)Obj)->bIsArray = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics::NewProp_bIsArray = { "bIsArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigVMOldPublicFunctionArg), &Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics::NewProp_bIsArray_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics::NewProp_bIsArray_MetaData), Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics::NewProp_bIsArray_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics::NewProp_Direction_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMOldPublicFunctionArg, Direction), Z_Construct_UEnum_RigVM_ERigVMPinDirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics::NewProp_Direction_MetaData), Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics::NewProp_Direction_MetaData) }; // 2363232148
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics::NewProp_CPPType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics::NewProp_CPPTypeObjectPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics::NewProp_bIsArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics::NewProp_Direction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics::NewProp_Direction,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
		nullptr,
		&NewStructOps,
		"RigVMOldPublicFunctionArg",
		Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics::PropPointers),
		sizeof(FRigVMOldPublicFunctionArg),
		alignof(FRigVMOldPublicFunctionArg),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMOldPublicFunctionArg.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMOldPublicFunctionArg.InnerSingleton, Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMOldPublicFunctionArg.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMOldPublicFunctionData;
class UScriptStruct* FRigVMOldPublicFunctionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMOldPublicFunctionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMOldPublicFunctionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData, (UObject*)Z_Construct_UPackage__Script_RigVMDeveloper(), TEXT("RigVMOldPublicFunctionData"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMOldPublicFunctionData.OuterSingleton;
}
template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<FRigVMOldPublicFunctionData>()
{
	return FRigVMOldPublicFunctionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Keywords_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Keywords;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Arguments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Arguments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Arguments;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::Struct_MetaDataParams[] = {
		{ "Deprecated", "5.2" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMOldPublicFunctionData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMOldPublicFunctionData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::NewProp_DisplayName_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMOldPublicFunctionData, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::NewProp_DisplayName_MetaData), Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::NewProp_DisplayName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::NewProp_Category_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMOldPublicFunctionData, Category), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::NewProp_Category_MetaData), Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::NewProp_Category_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::NewProp_Keywords_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::NewProp_Keywords = { "Keywords", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMOldPublicFunctionData, Keywords), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::NewProp_Keywords_MetaData), Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::NewProp_Keywords_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMOldPublicFunctionData, ReturnValue), Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::NewProp_ReturnValue_MetaData) }; // 3946286820
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::NewProp_Arguments_Inner = { "Arguments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg, METADATA_PARAMS(0, nullptr) }; // 3946286820
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::NewProp_Arguments_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::NewProp_Arguments = { "Arguments", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMOldPublicFunctionData, Arguments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::NewProp_Arguments_MetaData), Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::NewProp_Arguments_MetaData) }; // 3946286820
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::NewProp_Keywords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::NewProp_ReturnValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::NewProp_Arguments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::NewProp_Arguments,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
		nullptr,
		&NewStructOps,
		"RigVMOldPublicFunctionData",
		Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::PropPointers),
		sizeof(FRigVMOldPublicFunctionData),
		alignof(FRigVMOldPublicFunctionData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMOldPublicFunctionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMOldPublicFunctionData.InnerSingleton, Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMOldPublicFunctionData.InnerSingleton;
	}
	DEFINE_FUNCTION(URigVMBlueprint::execGetAvailableRigVMStructs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UStruct*>*)Z_Param__Result=P_THIS->GetAvailableRigVMStructs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMBlueprint::execCreateRigVMHost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMHost**)Z_Param__Result=P_THIS->CreateRigVMHost();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMBlueprint::execGetRigVMHostClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=P_THIS->GetRigVMHostClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMBlueprint::execGeneratePythonCommands)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InNewBlueprintName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GeneratePythonCommands(Z_Param_InNewBlueprintName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMBlueprint::execGetOrCreateController)
	{
		P_GET_OBJECT(URigVMGraph,Z_Param_InGraph);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMController**)Z_Param__Result=P_THIS->GetOrCreateController(Z_Param_InGraph);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMBlueprint::execGetControllerByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InGraphName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMController**)Z_Param__Result=P_THIS->GetControllerByName(Z_Param_InGraphName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMBlueprint::execGetController)
	{
		P_GET_OBJECT(URigVMGraph,Z_Param_InGraph);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMController**)Z_Param__Result=P_THIS->GetController(Z_Param_InGraph);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMBlueprint::execGetFocusedModel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMGraph**)Z_Param__Result=P_THIS->GetFocusedModel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMBlueprint::execRemoveModel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InName);
		P_GET_UBOOL(Z_Param_bSetupUndoRedo);
		P_GET_UBOOL(Z_Param_bPrintPythonCommand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveModel(Z_Param_InName,Z_Param_bSetupUndoRedo,Z_Param_bPrintPythonCommand);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMBlueprint::execAddModel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InName);
		P_GET_UBOOL(Z_Param_bSetupUndoRedo);
		P_GET_UBOOL(Z_Param_bPrintPythonCommand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMGraph**)Z_Param__Result=P_THIS->AddModel(Z_Param_InName,Z_Param_bSetupUndoRedo,Z_Param_bPrintPythonCommand);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMBlueprint::execGetLocalFunctionLibrary)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMFunctionLibrary**)Z_Param__Result=P_THIS->GetLocalFunctionLibrary();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMBlueprint::execGetAllModels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<URigVMGraph*>*)Z_Param__Result=P_THIS->GetAllModels();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMBlueprint::execGetDefaultModel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMGraph**)Z_Param__Result=P_THIS->GetDefaultModel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMBlueprint::execGetModel)
	{
		P_GET_OBJECT(UEdGraph,Z_Param_InEdGraph);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMGraph**)Z_Param__Result=P_THIS->GetModel(Z_Param_InEdGraph);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMBlueprint::execRequestRigVMInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestRigVMInit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMBlueprint::execGetAutoVMRecompile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAutoVMRecompile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMBlueprint::execSetAutoVMRecompile)
	{
		P_GET_UBOOL(Z_Param_bAutoRecompile);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAutoVMRecompile(Z_Param_bAutoRecompile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMBlueprint::execRequestAutoVMRecompilation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestAutoVMRecompilation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMBlueprint::execRecompileVMIfRequired)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RecompileVMIfRequired();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMBlueprint::execRecompileVM)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RecompileVM();
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(URigVMBlueprint::execSuspendNotifications)
	{
		P_GET_UBOOL(Z_Param_bSuspendNotifs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SuspendNotifications(Z_Param_bSuspendNotifs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMBlueprint::execChangeMemberVariableType)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InCPPType);
		P_GET_UBOOL(Z_Param_bIsPublic);
		P_GET_UBOOL(Z_Param_bIsReadOnly);
		P_GET_PROPERTY(FStrProperty,Z_Param_InDefaultValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ChangeMemberVariableType(Z_Param_Out_InName,Z_Param_InCPPType,Z_Param_bIsPublic,Z_Param_bIsReadOnly,Z_Param_InDefaultValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMBlueprint::execRenameMemberVariable)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InOldName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InNewName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RenameMemberVariable(Z_Param_Out_InOldName,Z_Param_Out_InNewName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMBlueprint::execRemoveMemberVariable)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveMemberVariable(Z_Param_Out_InName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMBlueprint::execAddMemberVariable)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InCPPType);
		P_GET_UBOOL(Z_Param_bIsPublic);
		P_GET_UBOOL(Z_Param_bIsReadOnly);
		P_GET_PROPERTY(FStrProperty,Z_Param_InDefaultValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->AddMemberVariable(Z_Param_Out_InName,Z_Param_InCPPType,Z_Param_bIsPublic,Z_Param_bIsReadOnly,Z_Param_InDefaultValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMBlueprint::execGetMemberVariables)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FRigVMGraphVariableDescription>*)Z_Param__Result=P_THIS->GetMemberVariables();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void URigVMBlueprint::StaticRegisterNativesURigVMBlueprint()
	{
		UClass* Class = URigVMBlueprint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
#if WITH_EDITOR
			{ "AddMemberVariable", &URigVMBlueprint::execAddMemberVariable },
#endif // WITH_EDITOR
			{ "AddModel", &URigVMBlueprint::execAddModel },
#if WITH_EDITOR
			{ "ChangeMemberVariableType", &URigVMBlueprint::execChangeMemberVariableType },
#endif // WITH_EDITOR
			{ "CreateRigVMHost", &URigVMBlueprint::execCreateRigVMHost },
			{ "GeneratePythonCommands", &URigVMBlueprint::execGeneratePythonCommands },
			{ "GetAllModels", &URigVMBlueprint::execGetAllModels },
			{ "GetAutoVMRecompile", &URigVMBlueprint::execGetAutoVMRecompile },
			{ "GetAvailableRigVMStructs", &URigVMBlueprint::execGetAvailableRigVMStructs },
			{ "GetController", &URigVMBlueprint::execGetController },
			{ "GetControllerByName", &URigVMBlueprint::execGetControllerByName },
			{ "GetDefaultModel", &URigVMBlueprint::execGetDefaultModel },
			{ "GetFocusedModel", &URigVMBlueprint::execGetFocusedModel },
			{ "GetLocalFunctionLibrary", &URigVMBlueprint::execGetLocalFunctionLibrary },
#if WITH_EDITOR
			{ "GetMemberVariables", &URigVMBlueprint::execGetMemberVariables },
#endif // WITH_EDITOR
			{ "GetModel", &URigVMBlueprint::execGetModel },
			{ "GetOrCreateController", &URigVMBlueprint::execGetOrCreateController },
			{ "GetRigVMHostClass", &URigVMBlueprint::execGetRigVMHostClass },
			{ "RecompileVM", &URigVMBlueprint::execRecompileVM },
			{ "RecompileVMIfRequired", &URigVMBlueprint::execRecompileVMIfRequired },
#if WITH_EDITOR
			{ "RemoveMemberVariable", &URigVMBlueprint::execRemoveMemberVariable },
#endif // WITH_EDITOR
			{ "RemoveModel", &URigVMBlueprint::execRemoveModel },
#if WITH_EDITOR
			{ "RenameMemberVariable", &URigVMBlueprint::execRenameMemberVariable },
#endif // WITH_EDITOR
			{ "RequestAutoVMRecompilation", &URigVMBlueprint::execRequestAutoVMRecompilation },
			{ "RequestRigVMInit", &URigVMBlueprint::execRequestRigVMInit },
			{ "SetAutoVMRecompile", &URigVMBlueprint::execSetAutoVMRecompile },
#if WITH_EDITOR
			{ "SuspendNotifications", &URigVMBlueprint::execSuspendNotifications },
#endif // WITH_EDITOR
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_URigVMBlueprint_AddMemberVariable_Statics
	{
		struct RigVMBlueprint_eventAddMemberVariable_Parms
		{
			FName InName;
			FString InCPPType;
			bool bIsPublic;
			bool bIsReadOnly;
			FString InDefaultValue;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCPPType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InCPPType;
		static void NewProp_bIsPublic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPublic;
		static void NewProp_bIsReadOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReadOnly;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InDefaultValue;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMBlueprint_AddMemberVariable_Statics::NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMBlueprint_AddMemberVariable_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMBlueprint_eventAddMemberVariable_Parms, InName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_AddMemberVariable_Statics::NewProp_InName_MetaData), Z_Construct_UFunction_URigVMBlueprint_AddMemberVariable_Statics::NewProp_InName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMBlueprint_AddMemberVariable_Statics::NewProp_InCPPType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVMBlueprint_AddMemberVariable_Statics::NewProp_InCPPType = { "InCPPType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMBlueprint_eventAddMemberVariable_Parms, InCPPType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_AddMemberVariable_Statics::NewProp_InCPPType_MetaData), Z_Construct_UFunction_URigVMBlueprint_AddMemberVariable_Statics::NewProp_InCPPType_MetaData) };
	void Z_Construct_UFunction_URigVMBlueprint_AddMemberVariable_Statics::NewProp_bIsPublic_SetBit(void* Obj)
	{
		((RigVMBlueprint_eventAddMemberVariable_Parms*)Obj)->bIsPublic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMBlueprint_AddMemberVariable_Statics::NewProp_bIsPublic = { "bIsPublic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigVMBlueprint_eventAddMemberVariable_Parms), &Z_Construct_UFunction_URigVMBlueprint_AddMemberVariable_Statics::NewProp_bIsPublic_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URigVMBlueprint_AddMemberVariable_Statics::NewProp_bIsReadOnly_SetBit(void* Obj)
	{
		((RigVMBlueprint_eventAddMemberVariable_Parms*)Obj)->bIsReadOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMBlueprint_AddMemberVariable_Statics::NewProp_bIsReadOnly = { "bIsReadOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigVMBlueprint_eventAddMemberVariable_Parms), &Z_Construct_UFunction_URigVMBlueprint_AddMemberVariable_Statics::NewProp_bIsReadOnly_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVMBlueprint_AddMemberVariable_Statics::NewProp_InDefaultValue = { "InDefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMBlueprint_eventAddMemberVariable_Parms, InDefaultValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMBlueprint_AddMemberVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMBlueprint_eventAddMemberVariable_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMBlueprint_AddMemberVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_AddMemberVariable_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_AddMemberVariable_Statics::NewProp_InCPPType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_AddMemberVariable_Statics::NewProp_bIsPublic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_AddMemberVariable_Statics::NewProp_bIsReadOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_AddMemberVariable_Statics::NewProp_InDefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_AddMemberVariable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMBlueprint_AddMemberVariable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variables" },
		{ "CPP_Default_bIsPublic", "false" },
		{ "CPP_Default_bIsReadOnly", "false" },
		{ "CPP_Default_InDefaultValue", "" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMBlueprint_AddMemberVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMBlueprint, nullptr, "AddMemberVariable", nullptr, nullptr, Z_Construct_UFunction_URigVMBlueprint_AddMemberVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_AddMemberVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMBlueprint_AddMemberVariable_Statics::RigVMBlueprint_eventAddMemberVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_AddMemberVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMBlueprint_AddMemberVariable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_AddMemberVariable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URigVMBlueprint_AddMemberVariable_Statics::RigVMBlueprint_eventAddMemberVariable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URigVMBlueprint_AddMemberVariable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMBlueprint_AddMemberVariable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_URigVMBlueprint_AddModel_Statics
	{
		struct RigVMBlueprint_eventAddModel_Parms
		{
			FString InName;
			bool bSetupUndoRedo;
			bool bPrintPythonCommand;
			URigVMGraph* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InName;
		static void NewProp_bSetupUndoRedo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndoRedo;
		static void NewProp_bPrintPythonCommand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommand;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVMBlueprint_AddModel_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMBlueprint_eventAddModel_Parms, InName), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URigVMBlueprint_AddModel_Statics::NewProp_bSetupUndoRedo_SetBit(void* Obj)
	{
		((RigVMBlueprint_eventAddModel_Parms*)Obj)->bSetupUndoRedo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMBlueprint_AddModel_Statics::NewProp_bSetupUndoRedo = { "bSetupUndoRedo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigVMBlueprint_eventAddModel_Parms), &Z_Construct_UFunction_URigVMBlueprint_AddModel_Statics::NewProp_bSetupUndoRedo_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URigVMBlueprint_AddModel_Statics::NewProp_bPrintPythonCommand_SetBit(void* Obj)
	{
		((RigVMBlueprint_eventAddModel_Parms*)Obj)->bPrintPythonCommand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMBlueprint_AddModel_Statics::NewProp_bPrintPythonCommand = { "bPrintPythonCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigVMBlueprint_eventAddModel_Parms), &Z_Construct_UFunction_URigVMBlueprint_AddModel_Statics::NewProp_bPrintPythonCommand_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMBlueprint_AddModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMBlueprint_eventAddModel_Parms, ReturnValue), Z_Construct_UClass_URigVMGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMBlueprint_AddModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_AddModel_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_AddModel_Statics::NewProp_bSetupUndoRedo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_AddModel_Statics::NewProp_bPrintPythonCommand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_AddModel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMBlueprint_AddModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM Blueprint" },
		{ "CPP_Default_bPrintPythonCommand", "true" },
		{ "CPP_Default_bSetupUndoRedo", "true" },
		{ "CPP_Default_InName", "Rig Graph" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMBlueprint_AddModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMBlueprint, nullptr, "AddModel", nullptr, nullptr, Z_Construct_UFunction_URigVMBlueprint_AddModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_AddModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMBlueprint_AddModel_Statics::RigVMBlueprint_eventAddModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_AddModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMBlueprint_AddModel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_AddModel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URigVMBlueprint_AddModel_Statics::RigVMBlueprint_eventAddModel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URigVMBlueprint_AddModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMBlueprint_AddModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_URigVMBlueprint_ChangeMemberVariableType_Statics
	{
		struct RigVMBlueprint_eventChangeMemberVariableType_Parms
		{
			FName InName;
			FString InCPPType;
			bool bIsPublic;
			bool bIsReadOnly;
			FString InDefaultValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCPPType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InCPPType;
		static void NewProp_bIsPublic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPublic;
		static void NewProp_bIsReadOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReadOnly;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InDefaultValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMBlueprint_ChangeMemberVariableType_Statics::NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMBlueprint_ChangeMemberVariableType_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMBlueprint_eventChangeMemberVariableType_Parms, InName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_ChangeMemberVariableType_Statics::NewProp_InName_MetaData), Z_Construct_UFunction_URigVMBlueprint_ChangeMemberVariableType_Statics::NewProp_InName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMBlueprint_ChangeMemberVariableType_Statics::NewProp_InCPPType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVMBlueprint_ChangeMemberVariableType_Statics::NewProp_InCPPType = { "InCPPType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMBlueprint_eventChangeMemberVariableType_Parms, InCPPType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_ChangeMemberVariableType_Statics::NewProp_InCPPType_MetaData), Z_Construct_UFunction_URigVMBlueprint_ChangeMemberVariableType_Statics::NewProp_InCPPType_MetaData) };
	void Z_Construct_UFunction_URigVMBlueprint_ChangeMemberVariableType_Statics::NewProp_bIsPublic_SetBit(void* Obj)
	{
		((RigVMBlueprint_eventChangeMemberVariableType_Parms*)Obj)->bIsPublic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMBlueprint_ChangeMemberVariableType_Statics::NewProp_bIsPublic = { "bIsPublic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigVMBlueprint_eventChangeMemberVariableType_Parms), &Z_Construct_UFunction_URigVMBlueprint_ChangeMemberVariableType_Statics::NewProp_bIsPublic_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URigVMBlueprint_ChangeMemberVariableType_Statics::NewProp_bIsReadOnly_SetBit(void* Obj)
	{
		((RigVMBlueprint_eventChangeMemberVariableType_Parms*)Obj)->bIsReadOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMBlueprint_ChangeMemberVariableType_Statics::NewProp_bIsReadOnly = { "bIsReadOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigVMBlueprint_eventChangeMemberVariableType_Parms), &Z_Construct_UFunction_URigVMBlueprint_ChangeMemberVariableType_Statics::NewProp_bIsReadOnly_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVMBlueprint_ChangeMemberVariableType_Statics::NewProp_InDefaultValue = { "InDefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMBlueprint_eventChangeMemberVariableType_Parms, InDefaultValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URigVMBlueprint_ChangeMemberVariableType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMBlueprint_eventChangeMemberVariableType_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMBlueprint_ChangeMemberVariableType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigVMBlueprint_eventChangeMemberVariableType_Parms), &Z_Construct_UFunction_URigVMBlueprint_ChangeMemberVariableType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMBlueprint_ChangeMemberVariableType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_ChangeMemberVariableType_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_ChangeMemberVariableType_Statics::NewProp_InCPPType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_ChangeMemberVariableType_Statics::NewProp_bIsPublic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_ChangeMemberVariableType_Statics::NewProp_bIsReadOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_ChangeMemberVariableType_Statics::NewProp_InDefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_ChangeMemberVariableType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMBlueprint_ChangeMemberVariableType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variables" },
		{ "CPP_Default_bIsPublic", "false" },
		{ "CPP_Default_bIsReadOnly", "false" },
		{ "CPP_Default_InDefaultValue", "" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMBlueprint_ChangeMemberVariableType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMBlueprint, nullptr, "ChangeMemberVariableType", nullptr, nullptr, Z_Construct_UFunction_URigVMBlueprint_ChangeMemberVariableType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_ChangeMemberVariableType_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMBlueprint_ChangeMemberVariableType_Statics::RigVMBlueprint_eventChangeMemberVariableType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_ChangeMemberVariableType_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMBlueprint_ChangeMemberVariableType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_ChangeMemberVariableType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URigVMBlueprint_ChangeMemberVariableType_Statics::RigVMBlueprint_eventChangeMemberVariableType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URigVMBlueprint_ChangeMemberVariableType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMBlueprint_ChangeMemberVariableType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_URigVMBlueprint_CreateRigVMHost_Statics
	{
		struct RigVMBlueprint_eventCreateRigVMHost_Parms
		{
			URigVMHost* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMBlueprint_CreateRigVMHost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMBlueprint_eventCreateRigVMHost_Parms, ReturnValue), Z_Construct_UClass_URigVMHost_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMBlueprint_CreateRigVMHost_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_CreateRigVMHost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMBlueprint_CreateRigVMHost_Statics::Function_MetaDataParams[] = {
		{ "Category", "VM" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMBlueprint_CreateRigVMHost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMBlueprint, nullptr, "CreateRigVMHost", nullptr, nullptr, Z_Construct_UFunction_URigVMBlueprint_CreateRigVMHost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_CreateRigVMHost_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMBlueprint_CreateRigVMHost_Statics::RigVMBlueprint_eventCreateRigVMHost_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_CreateRigVMHost_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMBlueprint_CreateRigVMHost_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_CreateRigVMHost_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URigVMBlueprint_CreateRigVMHost_Statics::RigVMBlueprint_eventCreateRigVMHost_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URigVMBlueprint_CreateRigVMHost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMBlueprint_CreateRigVMHost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMBlueprint_GeneratePythonCommands_Statics
	{
		struct RigVMBlueprint_eventGeneratePythonCommands_Parms
		{
			FString InNewBlueprintName;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNewBlueprintName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InNewBlueprintName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMBlueprint_GeneratePythonCommands_Statics::NewProp_InNewBlueprintName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVMBlueprint_GeneratePythonCommands_Statics::NewProp_InNewBlueprintName = { "InNewBlueprintName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMBlueprint_eventGeneratePythonCommands_Parms, InNewBlueprintName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GeneratePythonCommands_Statics::NewProp_InNewBlueprintName_MetaData), Z_Construct_UFunction_URigVMBlueprint_GeneratePythonCommands_Statics::NewProp_InNewBlueprintName_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVMBlueprint_GeneratePythonCommands_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigVMBlueprint_GeneratePythonCommands_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMBlueprint_eventGeneratePythonCommands_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMBlueprint_GeneratePythonCommands_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_GeneratePythonCommands_Statics::NewProp_InNewBlueprintName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_GeneratePythonCommands_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_GeneratePythonCommands_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMBlueprint_GeneratePythonCommands_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM Blueprint" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMBlueprint_GeneratePythonCommands_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMBlueprint, nullptr, "GeneratePythonCommands", nullptr, nullptr, Z_Construct_UFunction_URigVMBlueprint_GeneratePythonCommands_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GeneratePythonCommands_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMBlueprint_GeneratePythonCommands_Statics::RigVMBlueprint_eventGeneratePythonCommands_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GeneratePythonCommands_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMBlueprint_GeneratePythonCommands_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GeneratePythonCommands_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URigVMBlueprint_GeneratePythonCommands_Statics::RigVMBlueprint_eventGeneratePythonCommands_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URigVMBlueprint_GeneratePythonCommands()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMBlueprint_GeneratePythonCommands_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMBlueprint_GetAllModels_Statics
	{
		struct RigVMBlueprint_eventGetAllModels_Parms
		{
			TArray<URigVMGraph*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMBlueprint_GetAllModels_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URigVMGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigVMBlueprint_GetAllModels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMBlueprint_eventGetAllModels_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMBlueprint_GetAllModels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_GetAllModels_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_GetAllModels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMBlueprint_GetAllModels_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM Blueprint" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMBlueprint_GetAllModels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMBlueprint, nullptr, "GetAllModels", nullptr, nullptr, Z_Construct_UFunction_URigVMBlueprint_GetAllModels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GetAllModels_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMBlueprint_GetAllModels_Statics::RigVMBlueprint_eventGetAllModels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GetAllModels_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMBlueprint_GetAllModels_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GetAllModels_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URigVMBlueprint_GetAllModels_Statics::RigVMBlueprint_eventGetAllModels_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URigVMBlueprint_GetAllModels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMBlueprint_GetAllModels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMBlueprint_GetAutoVMRecompile_Statics
	{
		struct RigVMBlueprint_eventGetAutoVMRecompile_Parms
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
	void Z_Construct_UFunction_URigVMBlueprint_GetAutoVMRecompile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMBlueprint_eventGetAutoVMRecompile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMBlueprint_GetAutoVMRecompile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigVMBlueprint_eventGetAutoVMRecompile_Parms), &Z_Construct_UFunction_URigVMBlueprint_GetAutoVMRecompile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMBlueprint_GetAutoVMRecompile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_GetAutoVMRecompile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMBlueprint_GetAutoVMRecompile_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM Blueprint" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMBlueprint_GetAutoVMRecompile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMBlueprint, nullptr, "GetAutoVMRecompile", nullptr, nullptr, Z_Construct_UFunction_URigVMBlueprint_GetAutoVMRecompile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GetAutoVMRecompile_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMBlueprint_GetAutoVMRecompile_Statics::RigVMBlueprint_eventGetAutoVMRecompile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GetAutoVMRecompile_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMBlueprint_GetAutoVMRecompile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GetAutoVMRecompile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URigVMBlueprint_GetAutoVMRecompile_Statics::RigVMBlueprint_eventGetAutoVMRecompile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URigVMBlueprint_GetAutoVMRecompile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMBlueprint_GetAutoVMRecompile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMBlueprint_GetAvailableRigVMStructs_Statics
	{
		struct RigVMBlueprint_eventGetAvailableRigVMStructs_Parms
		{
			TArray<UStruct*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMBlueprint_GetAvailableRigVMStructs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStruct, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigVMBlueprint_GetAvailableRigVMStructs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMBlueprint_eventGetAvailableRigVMStructs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMBlueprint_GetAvailableRigVMStructs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_GetAvailableRigVMStructs_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_GetAvailableRigVMStructs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMBlueprint_GetAvailableRigVMStructs_Statics::Function_MetaDataParams[] = {
		{ "Category", "VM" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMBlueprint_GetAvailableRigVMStructs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMBlueprint, nullptr, "GetAvailableRigVMStructs", nullptr, nullptr, Z_Construct_UFunction_URigVMBlueprint_GetAvailableRigVMStructs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GetAvailableRigVMStructs_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMBlueprint_GetAvailableRigVMStructs_Statics::RigVMBlueprint_eventGetAvailableRigVMStructs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GetAvailableRigVMStructs_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMBlueprint_GetAvailableRigVMStructs_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GetAvailableRigVMStructs_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URigVMBlueprint_GetAvailableRigVMStructs_Statics::RigVMBlueprint_eventGetAvailableRigVMStructs_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URigVMBlueprint_GetAvailableRigVMStructs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMBlueprint_GetAvailableRigVMStructs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMBlueprint_GetController_Statics
	{
		struct RigVMBlueprint_eventGetController_Parms
		{
			const URigVMGraph* InGraph;
			URigVMController* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InGraph;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMBlueprint_GetController_Statics::NewProp_InGraph_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMBlueprint_GetController_Statics::NewProp_InGraph = { "InGraph", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMBlueprint_eventGetController_Parms, InGraph), Z_Construct_UClass_URigVMGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GetController_Statics::NewProp_InGraph_MetaData), Z_Construct_UFunction_URigVMBlueprint_GetController_Statics::NewProp_InGraph_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMBlueprint_GetController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMBlueprint_eventGetController_Parms, ReturnValue), Z_Construct_UClass_URigVMController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMBlueprint_GetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_GetController_Statics::NewProp_InGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_GetController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMBlueprint_GetController_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM Blueprint" },
		{ "CPP_Default_InGraph", "None" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMBlueprint_GetController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMBlueprint, nullptr, "GetController", nullptr, nullptr, Z_Construct_UFunction_URigVMBlueprint_GetController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GetController_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMBlueprint_GetController_Statics::RigVMBlueprint_eventGetController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GetController_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMBlueprint_GetController_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GetController_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URigVMBlueprint_GetController_Statics::RigVMBlueprint_eventGetController_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URigVMBlueprint_GetController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMBlueprint_GetController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMBlueprint_GetControllerByName_Statics
	{
		struct RigVMBlueprint_eventGetControllerByName_Parms
		{
			FString InGraphName;
			URigVMController* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InGraphName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InGraphName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMBlueprint_GetControllerByName_Statics::NewProp_InGraphName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVMBlueprint_GetControllerByName_Statics::NewProp_InGraphName = { "InGraphName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMBlueprint_eventGetControllerByName_Parms, InGraphName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GetControllerByName_Statics::NewProp_InGraphName_MetaData), Z_Construct_UFunction_URigVMBlueprint_GetControllerByName_Statics::NewProp_InGraphName_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMBlueprint_GetControllerByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMBlueprint_eventGetControllerByName_Parms, ReturnValue), Z_Construct_UClass_URigVMController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMBlueprint_GetControllerByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_GetControllerByName_Statics::NewProp_InGraphName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_GetControllerByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMBlueprint_GetControllerByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM Blueprint" },
		{ "CPP_Default_InGraphName", "" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMBlueprint_GetControllerByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMBlueprint, nullptr, "GetControllerByName", nullptr, nullptr, Z_Construct_UFunction_URigVMBlueprint_GetControllerByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GetControllerByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMBlueprint_GetControllerByName_Statics::RigVMBlueprint_eventGetControllerByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GetControllerByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMBlueprint_GetControllerByName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GetControllerByName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URigVMBlueprint_GetControllerByName_Statics::RigVMBlueprint_eventGetControllerByName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URigVMBlueprint_GetControllerByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMBlueprint_GetControllerByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMBlueprint_GetDefaultModel_Statics
	{
		struct RigVMBlueprint_eventGetDefaultModel_Parms
		{
			URigVMGraph* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMBlueprint_GetDefaultModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMBlueprint_eventGetDefaultModel_Parms, ReturnValue), Z_Construct_UClass_URigVMGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMBlueprint_GetDefaultModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_GetDefaultModel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMBlueprint_GetDefaultModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM Blueprint" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMBlueprint_GetDefaultModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMBlueprint, nullptr, "GetDefaultModel", nullptr, nullptr, Z_Construct_UFunction_URigVMBlueprint_GetDefaultModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GetDefaultModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMBlueprint_GetDefaultModel_Statics::RigVMBlueprint_eventGetDefaultModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GetDefaultModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMBlueprint_GetDefaultModel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GetDefaultModel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URigVMBlueprint_GetDefaultModel_Statics::RigVMBlueprint_eventGetDefaultModel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URigVMBlueprint_GetDefaultModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMBlueprint_GetDefaultModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMBlueprint_GetFocusedModel_Statics
	{
		struct RigVMBlueprint_eventGetFocusedModel_Parms
		{
			URigVMGraph* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMBlueprint_GetFocusedModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMBlueprint_eventGetFocusedModel_Parms, ReturnValue), Z_Construct_UClass_URigVMGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMBlueprint_GetFocusedModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_GetFocusedModel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMBlueprint_GetFocusedModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM Blueprint" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMBlueprint_GetFocusedModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMBlueprint, nullptr, "GetFocusedModel", nullptr, nullptr, Z_Construct_UFunction_URigVMBlueprint_GetFocusedModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GetFocusedModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMBlueprint_GetFocusedModel_Statics::RigVMBlueprint_eventGetFocusedModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GetFocusedModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMBlueprint_GetFocusedModel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GetFocusedModel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URigVMBlueprint_GetFocusedModel_Statics::RigVMBlueprint_eventGetFocusedModel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URigVMBlueprint_GetFocusedModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMBlueprint_GetFocusedModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMBlueprint_GetLocalFunctionLibrary_Statics
	{
		struct RigVMBlueprint_eventGetLocalFunctionLibrary_Parms
		{
			URigVMFunctionLibrary* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMBlueprint_GetLocalFunctionLibrary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMBlueprint_eventGetLocalFunctionLibrary_Parms, ReturnValue), Z_Construct_UClass_URigVMFunctionLibrary_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMBlueprint_GetLocalFunctionLibrary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_GetLocalFunctionLibrary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMBlueprint_GetLocalFunctionLibrary_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM Blueprint" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMBlueprint_GetLocalFunctionLibrary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMBlueprint, nullptr, "GetLocalFunctionLibrary", nullptr, nullptr, Z_Construct_UFunction_URigVMBlueprint_GetLocalFunctionLibrary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GetLocalFunctionLibrary_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMBlueprint_GetLocalFunctionLibrary_Statics::RigVMBlueprint_eventGetLocalFunctionLibrary_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GetLocalFunctionLibrary_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMBlueprint_GetLocalFunctionLibrary_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GetLocalFunctionLibrary_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URigVMBlueprint_GetLocalFunctionLibrary_Statics::RigVMBlueprint_eventGetLocalFunctionLibrary_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URigVMBlueprint_GetLocalFunctionLibrary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMBlueprint_GetLocalFunctionLibrary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_URigVMBlueprint_GetMemberVariables_Statics
	{
		struct RigVMBlueprint_eventGetMemberVariables_Parms
		{
			TArray<FRigVMGraphVariableDescription> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigVMBlueprint_GetMemberVariables_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigVMGraphVariableDescription, METADATA_PARAMS(0, nullptr) }; // 222165837
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigVMBlueprint_GetMemberVariables_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMBlueprint_eventGetMemberVariables_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 222165837
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMBlueprint_GetMemberVariables_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_GetMemberVariables_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_GetMemberVariables_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMBlueprint_GetMemberVariables_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMBlueprint_GetMemberVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMBlueprint, nullptr, "GetMemberVariables", nullptr, nullptr, Z_Construct_UFunction_URigVMBlueprint_GetMemberVariables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GetMemberVariables_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMBlueprint_GetMemberVariables_Statics::RigVMBlueprint_eventGetMemberVariables_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x74020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GetMemberVariables_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMBlueprint_GetMemberVariables_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GetMemberVariables_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URigVMBlueprint_GetMemberVariables_Statics::RigVMBlueprint_eventGetMemberVariables_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URigVMBlueprint_GetMemberVariables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMBlueprint_GetMemberVariables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_URigVMBlueprint_GetModel_Statics
	{
		struct RigVMBlueprint_eventGetModel_Parms
		{
			const UEdGraph* InEdGraph;
			URigVMGraph* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEdGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InEdGraph;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMBlueprint_GetModel_Statics::NewProp_InEdGraph_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMBlueprint_GetModel_Statics::NewProp_InEdGraph = { "InEdGraph", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMBlueprint_eventGetModel_Parms, InEdGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GetModel_Statics::NewProp_InEdGraph_MetaData), Z_Construct_UFunction_URigVMBlueprint_GetModel_Statics::NewProp_InEdGraph_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMBlueprint_GetModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMBlueprint_eventGetModel_Parms, ReturnValue), Z_Construct_UClass_URigVMGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMBlueprint_GetModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_GetModel_Statics::NewProp_InEdGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_GetModel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMBlueprint_GetModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM Blueprint" },
		{ "CPP_Default_InEdGraph", "None" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMBlueprint_GetModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMBlueprint, nullptr, "GetModel", nullptr, nullptr, Z_Construct_UFunction_URigVMBlueprint_GetModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GetModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMBlueprint_GetModel_Statics::RigVMBlueprint_eventGetModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GetModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMBlueprint_GetModel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GetModel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URigVMBlueprint_GetModel_Statics::RigVMBlueprint_eventGetModel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URigVMBlueprint_GetModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMBlueprint_GetModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMBlueprint_GetOrCreateController_Statics
	{
		struct RigVMBlueprint_eventGetOrCreateController_Parms
		{
			URigVMGraph* InGraph;
			URigVMController* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InGraph;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMBlueprint_GetOrCreateController_Statics::NewProp_InGraph = { "InGraph", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMBlueprint_eventGetOrCreateController_Parms, InGraph), Z_Construct_UClass_URigVMGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMBlueprint_GetOrCreateController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMBlueprint_eventGetOrCreateController_Parms, ReturnValue), Z_Construct_UClass_URigVMController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMBlueprint_GetOrCreateController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_GetOrCreateController_Statics::NewProp_InGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_GetOrCreateController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMBlueprint_GetOrCreateController_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM Blueprint" },
		{ "CPP_Default_InGraph", "None" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMBlueprint_GetOrCreateController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMBlueprint, nullptr, "GetOrCreateController", nullptr, nullptr, Z_Construct_UFunction_URigVMBlueprint_GetOrCreateController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GetOrCreateController_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMBlueprint_GetOrCreateController_Statics::RigVMBlueprint_eventGetOrCreateController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GetOrCreateController_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMBlueprint_GetOrCreateController_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GetOrCreateController_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URigVMBlueprint_GetOrCreateController_Statics::RigVMBlueprint_eventGetOrCreateController_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URigVMBlueprint_GetOrCreateController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMBlueprint_GetOrCreateController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMBlueprint_GetRigVMHostClass_Statics
	{
		struct RigVMBlueprint_eventGetRigVMHostClass_Parms
		{
			UClass* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URigVMBlueprint_GetRigVMHostClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMBlueprint_eventGetRigVMHostClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMBlueprint_GetRigVMHostClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_GetRigVMHostClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMBlueprint_GetRigVMHostClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "VM" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMBlueprint_GetRigVMHostClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMBlueprint, nullptr, "GetRigVMHostClass", nullptr, nullptr, Z_Construct_UFunction_URigVMBlueprint_GetRigVMHostClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GetRigVMHostClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMBlueprint_GetRigVMHostClass_Statics::RigVMBlueprint_eventGetRigVMHostClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GetRigVMHostClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMBlueprint_GetRigVMHostClass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_GetRigVMHostClass_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URigVMBlueprint_GetRigVMHostClass_Statics::RigVMBlueprint_eventGetRigVMHostClass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URigVMBlueprint_GetRigVMHostClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMBlueprint_GetRigVMHostClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMBlueprint_RecompileVM_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMBlueprint_RecompileVM_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM Blueprint" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMBlueprint_RecompileVM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMBlueprint, nullptr, "RecompileVM", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_RecompileVM_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMBlueprint_RecompileVM_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_URigVMBlueprint_RecompileVM()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMBlueprint_RecompileVM_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMBlueprint_RecompileVMIfRequired_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMBlueprint_RecompileVMIfRequired_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM Blueprint" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMBlueprint_RecompileVMIfRequired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMBlueprint, nullptr, "RecompileVMIfRequired", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_RecompileVMIfRequired_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMBlueprint_RecompileVMIfRequired_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_URigVMBlueprint_RecompileVMIfRequired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMBlueprint_RecompileVMIfRequired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_URigVMBlueprint_RemoveMemberVariable_Statics
	{
		struct RigVMBlueprint_eventRemoveMemberVariable_Parms
		{
			FName InName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMBlueprint_RemoveMemberVariable_Statics::NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMBlueprint_RemoveMemberVariable_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMBlueprint_eventRemoveMemberVariable_Parms, InName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_RemoveMemberVariable_Statics::NewProp_InName_MetaData), Z_Construct_UFunction_URigVMBlueprint_RemoveMemberVariable_Statics::NewProp_InName_MetaData) };
	void Z_Construct_UFunction_URigVMBlueprint_RemoveMemberVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMBlueprint_eventRemoveMemberVariable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMBlueprint_RemoveMemberVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigVMBlueprint_eventRemoveMemberVariable_Parms), &Z_Construct_UFunction_URigVMBlueprint_RemoveMemberVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMBlueprint_RemoveMemberVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_RemoveMemberVariable_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_RemoveMemberVariable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMBlueprint_RemoveMemberVariable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMBlueprint_RemoveMemberVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMBlueprint, nullptr, "RemoveMemberVariable", nullptr, nullptr, Z_Construct_UFunction_URigVMBlueprint_RemoveMemberVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_RemoveMemberVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMBlueprint_RemoveMemberVariable_Statics::RigVMBlueprint_eventRemoveMemberVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_RemoveMemberVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMBlueprint_RemoveMemberVariable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_RemoveMemberVariable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URigVMBlueprint_RemoveMemberVariable_Statics::RigVMBlueprint_eventRemoveMemberVariable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URigVMBlueprint_RemoveMemberVariable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMBlueprint_RemoveMemberVariable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_URigVMBlueprint_RemoveModel_Statics
	{
		struct RigVMBlueprint_eventRemoveModel_Parms
		{
			FString InName;
			bool bSetupUndoRedo;
			bool bPrintPythonCommand;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InName;
		static void NewProp_bSetupUndoRedo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndoRedo;
		static void NewProp_bPrintPythonCommand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommand;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVMBlueprint_RemoveModel_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMBlueprint_eventRemoveModel_Parms, InName), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URigVMBlueprint_RemoveModel_Statics::NewProp_bSetupUndoRedo_SetBit(void* Obj)
	{
		((RigVMBlueprint_eventRemoveModel_Parms*)Obj)->bSetupUndoRedo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMBlueprint_RemoveModel_Statics::NewProp_bSetupUndoRedo = { "bSetupUndoRedo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigVMBlueprint_eventRemoveModel_Parms), &Z_Construct_UFunction_URigVMBlueprint_RemoveModel_Statics::NewProp_bSetupUndoRedo_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URigVMBlueprint_RemoveModel_Statics::NewProp_bPrintPythonCommand_SetBit(void* Obj)
	{
		((RigVMBlueprint_eventRemoveModel_Parms*)Obj)->bPrintPythonCommand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMBlueprint_RemoveModel_Statics::NewProp_bPrintPythonCommand = { "bPrintPythonCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigVMBlueprint_eventRemoveModel_Parms), &Z_Construct_UFunction_URigVMBlueprint_RemoveModel_Statics::NewProp_bPrintPythonCommand_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URigVMBlueprint_RemoveModel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMBlueprint_eventRemoveModel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMBlueprint_RemoveModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigVMBlueprint_eventRemoveModel_Parms), &Z_Construct_UFunction_URigVMBlueprint_RemoveModel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMBlueprint_RemoveModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_RemoveModel_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_RemoveModel_Statics::NewProp_bSetupUndoRedo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_RemoveModel_Statics::NewProp_bPrintPythonCommand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_RemoveModel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMBlueprint_RemoveModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM Blueprint" },
		{ "CPP_Default_bPrintPythonCommand", "true" },
		{ "CPP_Default_bSetupUndoRedo", "true" },
		{ "CPP_Default_InName", "Rig Graph" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMBlueprint_RemoveModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMBlueprint, nullptr, "RemoveModel", nullptr, nullptr, Z_Construct_UFunction_URigVMBlueprint_RemoveModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_RemoveModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMBlueprint_RemoveModel_Statics::RigVMBlueprint_eventRemoveModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_RemoveModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMBlueprint_RemoveModel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_RemoveModel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URigVMBlueprint_RemoveModel_Statics::RigVMBlueprint_eventRemoveModel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URigVMBlueprint_RemoveModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMBlueprint_RemoveModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_URigVMBlueprint_RenameMemberVariable_Statics
	{
		struct RigVMBlueprint_eventRenameMemberVariable_Parms
		{
			FName InOldName;
			FName InNewName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InOldName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InOldName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNewName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InNewName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMBlueprint_RenameMemberVariable_Statics::NewProp_InOldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMBlueprint_RenameMemberVariable_Statics::NewProp_InOldName = { "InOldName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMBlueprint_eventRenameMemberVariable_Parms, InOldName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_RenameMemberVariable_Statics::NewProp_InOldName_MetaData), Z_Construct_UFunction_URigVMBlueprint_RenameMemberVariable_Statics::NewProp_InOldName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMBlueprint_RenameMemberVariable_Statics::NewProp_InNewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMBlueprint_RenameMemberVariable_Statics::NewProp_InNewName = { "InNewName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMBlueprint_eventRenameMemberVariable_Parms, InNewName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_RenameMemberVariable_Statics::NewProp_InNewName_MetaData), Z_Construct_UFunction_URigVMBlueprint_RenameMemberVariable_Statics::NewProp_InNewName_MetaData) };
	void Z_Construct_UFunction_URigVMBlueprint_RenameMemberVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMBlueprint_eventRenameMemberVariable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMBlueprint_RenameMemberVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigVMBlueprint_eventRenameMemberVariable_Parms), &Z_Construct_UFunction_URigVMBlueprint_RenameMemberVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMBlueprint_RenameMemberVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_RenameMemberVariable_Statics::NewProp_InOldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_RenameMemberVariable_Statics::NewProp_InNewName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_RenameMemberVariable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMBlueprint_RenameMemberVariable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMBlueprint_RenameMemberVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMBlueprint, nullptr, "RenameMemberVariable", nullptr, nullptr, Z_Construct_UFunction_URigVMBlueprint_RenameMemberVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_RenameMemberVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMBlueprint_RenameMemberVariable_Statics::RigVMBlueprint_eventRenameMemberVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_RenameMemberVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMBlueprint_RenameMemberVariable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_RenameMemberVariable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URigVMBlueprint_RenameMemberVariable_Statics::RigVMBlueprint_eventRenameMemberVariable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URigVMBlueprint_RenameMemberVariable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMBlueprint_RenameMemberVariable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_URigVMBlueprint_RequestAutoVMRecompilation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMBlueprint_RequestAutoVMRecompilation_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM Blueprint" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMBlueprint_RequestAutoVMRecompilation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMBlueprint, nullptr, "RequestAutoVMRecompilation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_RequestAutoVMRecompilation_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMBlueprint_RequestAutoVMRecompilation_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_URigVMBlueprint_RequestAutoVMRecompilation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMBlueprint_RequestAutoVMRecompilation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMBlueprint_RequestRigVMInit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMBlueprint_RequestRigVMInit_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM Blueprint" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMBlueprint_RequestRigVMInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMBlueprint, nullptr, "RequestRigVMInit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_RequestRigVMInit_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMBlueprint_RequestRigVMInit_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_URigVMBlueprint_RequestRigVMInit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMBlueprint_RequestRigVMInit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMBlueprint_SetAutoVMRecompile_Statics
	{
		struct RigVMBlueprint_eventSetAutoVMRecompile_Parms
		{
			bool bAutoRecompile;
		};
		static void NewProp_bAutoRecompile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRecompile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URigVMBlueprint_SetAutoVMRecompile_Statics::NewProp_bAutoRecompile_SetBit(void* Obj)
	{
		((RigVMBlueprint_eventSetAutoVMRecompile_Parms*)Obj)->bAutoRecompile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMBlueprint_SetAutoVMRecompile_Statics::NewProp_bAutoRecompile = { "bAutoRecompile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigVMBlueprint_eventSetAutoVMRecompile_Parms), &Z_Construct_UFunction_URigVMBlueprint_SetAutoVMRecompile_Statics::NewProp_bAutoRecompile_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMBlueprint_SetAutoVMRecompile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_SetAutoVMRecompile_Statics::NewProp_bAutoRecompile,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMBlueprint_SetAutoVMRecompile_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM Blueprint" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMBlueprint_SetAutoVMRecompile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMBlueprint, nullptr, "SetAutoVMRecompile", nullptr, nullptr, Z_Construct_UFunction_URigVMBlueprint_SetAutoVMRecompile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_SetAutoVMRecompile_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMBlueprint_SetAutoVMRecompile_Statics::RigVMBlueprint_eventSetAutoVMRecompile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_SetAutoVMRecompile_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMBlueprint_SetAutoVMRecompile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_SetAutoVMRecompile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URigVMBlueprint_SetAutoVMRecompile_Statics::RigVMBlueprint_eventSetAutoVMRecompile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URigVMBlueprint_SetAutoVMRecompile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMBlueprint_SetAutoVMRecompile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_URigVMBlueprint_SuspendNotifications_Statics
	{
		struct RigVMBlueprint_eventSuspendNotifications_Parms
		{
			bool bSuspendNotifs;
		};
		static void NewProp_bSuspendNotifs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuspendNotifs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URigVMBlueprint_SuspendNotifications_Statics::NewProp_bSuspendNotifs_SetBit(void* Obj)
	{
		((RigVMBlueprint_eventSuspendNotifications_Parms*)Obj)->bSuspendNotifs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMBlueprint_SuspendNotifications_Statics::NewProp_bSuspendNotifs = { "bSuspendNotifs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigVMBlueprint_eventSuspendNotifications_Parms), &Z_Construct_UFunction_URigVMBlueprint_SuspendNotifications_Statics::NewProp_bSuspendNotifs_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMBlueprint_SuspendNotifications_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMBlueprint_SuspendNotifications_Statics::NewProp_bSuspendNotifs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMBlueprint_SuspendNotifications_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM Blueprint" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMBlueprint_SuspendNotifications_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMBlueprint, nullptr, "SuspendNotifications", nullptr, nullptr, Z_Construct_UFunction_URigVMBlueprint_SuspendNotifications_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_SuspendNotifications_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMBlueprint_SuspendNotifications_Statics::RigVMBlueprint_eventSuspendNotifications_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_SuspendNotifications_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMBlueprint_SuspendNotifications_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMBlueprint_SuspendNotifications_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URigVMBlueprint_SuspendNotifications_Statics::RigVMBlueprint_eventSuspendNotifications_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URigVMBlueprint_SuspendNotifications()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMBlueprint_SuspendNotifications_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMBlueprint);
	UClass* Z_Construct_UClass_URigVMBlueprint_NoRegister()
	{
		return URigVMBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_URigVMBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionLibraryEdGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FunctionLibraryEdGraph;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RigGraphDisplaySettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RigGraphDisplaySettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VMRuntimeSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VMRuntimeSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VMCompileSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VMCompileSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PythonLogSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PythonLogSettings;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Model;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionLibrary_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FunctionLibrary;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RigVMClient_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RigVMClient;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedObjectPathsStored_MetaData[];
#endif
		static void NewProp_ReferencedObjectPathsStored_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReferencedObjectPathsStored;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferencedObjectPaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedObjectPaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReferencedObjectPaths;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublicGraphFunctions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PublicGraphFunctions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PublicGraphFunctions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FunctionReferenceNodeData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionReferenceNodeData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FunctionReferenceNodeData;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateModel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TemplateModel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TemplateController;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_PinToOperandMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PinToOperandMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinToOperandMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PinToOperandMap;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SupportedEventNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportedEventNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SupportedEventNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoRecompileVM_MetaData[];
#endif
		static void NewProp_bAutoRecompileVM_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRecompileVM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVMRecompilationRequired_MetaData[];
#endif
		static void NewProp_bVMRecompilationRequired_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVMRecompilationRequired;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCompiling_MetaData[];
#endif
		static void NewProp_bIsCompiling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCompiling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VMRecompilationBracket_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VMRecompilationBracket;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMBlueprint_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_URigVMBlueprint_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_URigVMBlueprint_AddMemberVariable, "AddMemberVariable" }, // 1163431896
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_URigVMBlueprint_AddModel, "AddModel" }, // 3917528530
#if WITH_EDITOR
		{ &Z_Construct_UFunction_URigVMBlueprint_ChangeMemberVariableType, "ChangeMemberVariableType" }, // 2346442397
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_URigVMBlueprint_CreateRigVMHost, "CreateRigVMHost" }, // 654224066
		{ &Z_Construct_UFunction_URigVMBlueprint_GeneratePythonCommands, "GeneratePythonCommands" }, // 1296768731
		{ &Z_Construct_UFunction_URigVMBlueprint_GetAllModels, "GetAllModels" }, // 3576752797
		{ &Z_Construct_UFunction_URigVMBlueprint_GetAutoVMRecompile, "GetAutoVMRecompile" }, // 1293780616
		{ &Z_Construct_UFunction_URigVMBlueprint_GetAvailableRigVMStructs, "GetAvailableRigVMStructs" }, // 397957012
		{ &Z_Construct_UFunction_URigVMBlueprint_GetController, "GetController" }, // 2578578211
		{ &Z_Construct_UFunction_URigVMBlueprint_GetControllerByName, "GetControllerByName" }, // 3527293794
		{ &Z_Construct_UFunction_URigVMBlueprint_GetDefaultModel, "GetDefaultModel" }, // 541383335
		{ &Z_Construct_UFunction_URigVMBlueprint_GetFocusedModel, "GetFocusedModel" }, // 675001457
		{ &Z_Construct_UFunction_URigVMBlueprint_GetLocalFunctionLibrary, "GetLocalFunctionLibrary" }, // 2550786787
#if WITH_EDITOR
		{ &Z_Construct_UFunction_URigVMBlueprint_GetMemberVariables, "GetMemberVariables" }, // 1313558838
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_URigVMBlueprint_GetModel, "GetModel" }, // 150508052
		{ &Z_Construct_UFunction_URigVMBlueprint_GetOrCreateController, "GetOrCreateController" }, // 362522730
		{ &Z_Construct_UFunction_URigVMBlueprint_GetRigVMHostClass, "GetRigVMHostClass" }, // 205851444
		{ &Z_Construct_UFunction_URigVMBlueprint_RecompileVM, "RecompileVM" }, // 2151406318
		{ &Z_Construct_UFunction_URigVMBlueprint_RecompileVMIfRequired, "RecompileVMIfRequired" }, // 828332318
#if WITH_EDITOR
		{ &Z_Construct_UFunction_URigVMBlueprint_RemoveMemberVariable, "RemoveMemberVariable" }, // 1237020726
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_URigVMBlueprint_RemoveModel, "RemoveModel" }, // 3111321484
#if WITH_EDITOR
		{ &Z_Construct_UFunction_URigVMBlueprint_RenameMemberVariable, "RenameMemberVariable" }, // 2647725035
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_URigVMBlueprint_RequestAutoVMRecompilation, "RequestAutoVMRecompilation" }, // 3714328013
		{ &Z_Construct_UFunction_URigVMBlueprint_RequestRigVMInit, "RequestRigVMInit" }, // 290774123
		{ &Z_Construct_UFunction_URigVMBlueprint_SetAutoVMRecompile, "SetAutoVMRecompile" }, // 2228616604
#if WITH_EDITOR
		{ &Z_Construct_UFunction_URigVMBlueprint_SuspendNotifications, "SuspendNotifications" }, // 492966592
#endif //WITH_EDITOR
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMBlueprint_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMBlueprint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IgnoreClassThumbnail", "" },
		{ "IncludePath", "RigVMBlueprint.h" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_FunctionLibraryEdGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_FunctionLibraryEdGraph = { "FunctionLibraryEdGraph", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMBlueprint, FunctionLibraryEdGraph), Z_Construct_UClass_URigVMEdGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_FunctionLibraryEdGraph_MetaData), Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_FunctionLibraryEdGraph_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_RigGraphDisplaySettings_MetaData[] = {
		{ "Category", "User Interface" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_RigGraphDisplaySettings = { "RigGraphDisplaySettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMBlueprint, RigGraphDisplaySettings), Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_RigGraphDisplaySettings_MetaData), Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_RigGraphDisplaySettings_MetaData) }; // 258900512
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_VMRuntimeSettings_MetaData[] = {
		{ "Category", "VM" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_VMRuntimeSettings = { "VMRuntimeSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMBlueprint, VMRuntimeSettings), Z_Construct_UScriptStruct_FRigVMRuntimeSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_VMRuntimeSettings_MetaData), Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_VMRuntimeSettings_MetaData) }; // 2055583755
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_VMCompileSettings_MetaData[] = {
		{ "Category", "VM" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_VMCompileSettings = { "VMCompileSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMBlueprint, VMCompileSettings), Z_Construct_UScriptStruct_FRigVMCompileSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_VMCompileSettings_MetaData), Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_VMCompileSettings_MetaData) }; // 1268903359
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_PythonLogSettings_MetaData[] = {
		{ "Category", "Python Log Settings" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_PythonLogSettings = { "PythonLogSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMBlueprint, PythonLogSettings), Z_Construct_UScriptStruct_FRigVMPythonSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_PythonLogSettings_MetaData), Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_PythonLogSettings_MetaData) }; // 3643949212
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_Model_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0024080820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMBlueprint, Model_DEPRECATED), Z_Construct_UClass_URigVMGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_Model_MetaData), Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_Model_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_FunctionLibrary_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_FunctionLibrary = { "FunctionLibrary", nullptr, (EPropertyFlags)0x0024080820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMBlueprint, FunctionLibrary_DEPRECATED), Z_Construct_UClass_URigVMFunctionLibrary_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_FunctionLibrary_MetaData), Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_FunctionLibrary_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_RigVMClient_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_RigVMClient = { "RigVMClient", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMBlueprint, RigVMClient), Z_Construct_UScriptStruct_FRigVMClient, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_RigVMClient_MetaData), Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_RigVMClient_MetaData) }; // 2430807336
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_ReferencedObjectPathsStored_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	void Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_ReferencedObjectPathsStored_SetBit(void* Obj)
	{
		((URigVMBlueprint*)Obj)->ReferencedObjectPathsStored = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_ReferencedObjectPathsStored = { "ReferencedObjectPathsStored", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URigVMBlueprint), &Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_ReferencedObjectPathsStored_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_ReferencedObjectPathsStored_MetaData), Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_ReferencedObjectPathsStored_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_ReferencedObjectPaths_Inner = { "ReferencedObjectPaths", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_ReferencedObjectPaths_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_ReferencedObjectPaths = { "ReferencedObjectPaths", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMBlueprint, ReferencedObjectPaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_ReferencedObjectPaths_MetaData), Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_ReferencedObjectPaths_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_PublicGraphFunctions_Inner = { "PublicGraphFunctions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader, METADATA_PARAMS(0, nullptr) }; // 1196129345
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_PublicGraphFunctions_MetaData[] = {
		{ "Comment", "/** Asset searchable information about exposed public functions on this rig */" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
		{ "ToolTip", "Asset searchable information about exposed public functions on this rig" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_PublicGraphFunctions = { "PublicGraphFunctions", nullptr, (EPropertyFlags)0x0020090000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMBlueprint, PublicGraphFunctions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_PublicGraphFunctions_MetaData), Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_PublicGraphFunctions_MetaData) }; // 1196129345
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_FunctionReferenceNodeData_Inner = { "FunctionReferenceNodeData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigVMReferenceNodeData, METADATA_PARAMS(0, nullptr) }; // 2160289158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_FunctionReferenceNodeData_MetaData[] = {
		{ "Comment", "/** Asset searchable information function references in this rig */" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
		{ "ToolTip", "Asset searchable information function references in this rig" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_FunctionReferenceNodeData = { "FunctionReferenceNodeData", nullptr, (EPropertyFlags)0x0020090000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMBlueprint, FunctionReferenceNodeData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_FunctionReferenceNodeData_MetaData), Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_FunctionReferenceNodeData_MetaData) }; // 2160289158
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_TemplateModel_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_TemplateModel = { "TemplateModel", nullptr, (EPropertyFlags)0x0024080800202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMBlueprint, TemplateModel), Z_Construct_UClass_URigVMGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_TemplateModel_MetaData), Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_TemplateModel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_TemplateController_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_TemplateController = { "TemplateController", nullptr, (EPropertyFlags)0x0024080800202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMBlueprint, TemplateController), Z_Construct_UClass_URigVMController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_TemplateController_MetaData), Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_TemplateController_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_PinToOperandMap_ValueProp = { "PinToOperandMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FRigVMOperand, METADATA_PARAMS(0, nullptr) }; // 3848891530
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_PinToOperandMap_Key_KeyProp = { "PinToOperandMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_PinToOperandMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_PinToOperandMap = { "PinToOperandMap", nullptr, (EPropertyFlags)0x0010000000202000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMBlueprint, PinToOperandMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_PinToOperandMap_MetaData), Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_PinToOperandMap_MetaData) }; // 3848891530
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_SupportedEventNames_Inner = { "SupportedEventNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_SupportedEventNames_MetaData[] = {
		{ "Comment", "/** The event names this rigvm blueprint contains */" },
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
		{ "ToolTip", "The event names this rigvm blueprint contains" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_SupportedEventNames = { "SupportedEventNames", nullptr, (EPropertyFlags)0x0040010000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMBlueprint, SupportedEventNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_SupportedEventNames_MetaData), Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_SupportedEventNames_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_bAutoRecompileVM_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	void Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_bAutoRecompileVM_SetBit(void* Obj)
	{
		((URigVMBlueprint*)Obj)->bAutoRecompileVM = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_bAutoRecompileVM = { "bAutoRecompileVM", nullptr, (EPropertyFlags)0x0040000000202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URigVMBlueprint), &Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_bAutoRecompileVM_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_bAutoRecompileVM_MetaData), Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_bAutoRecompileVM_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_bVMRecompilationRequired_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	void Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_bVMRecompilationRequired_SetBit(void* Obj)
	{
		((URigVMBlueprint*)Obj)->bVMRecompilationRequired = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_bVMRecompilationRequired = { "bVMRecompilationRequired", nullptr, (EPropertyFlags)0x0040000000202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URigVMBlueprint), &Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_bVMRecompilationRequired_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_bVMRecompilationRequired_MetaData), Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_bVMRecompilationRequired_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_bIsCompiling_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	void Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_bIsCompiling_SetBit(void* Obj)
	{
		((URigVMBlueprint*)Obj)->bIsCompiling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_bIsCompiling = { "bIsCompiling", nullptr, (EPropertyFlags)0x0040000000202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URigVMBlueprint), &Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_bIsCompiling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_bIsCompiling_MetaData), Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_bIsCompiling_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_VMRecompilationBracket_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_VMRecompilationBracket = { "VMRecompilationBracket", nullptr, (EPropertyFlags)0x0040000000202000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMBlueprint, VMRecompilationBracket), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_VMRecompilationBracket_MetaData), Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_VMRecompilationBracket_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URigVMBlueprint_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_FunctionLibraryEdGraph,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_RigGraphDisplaySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_VMRuntimeSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_VMCompileSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_PythonLogSettings,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_Model,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_FunctionLibrary,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_RigVMClient,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_ReferencedObjectPathsStored,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_ReferencedObjectPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_ReferencedObjectPaths,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_PublicGraphFunctions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_PublicGraphFunctions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_FunctionReferenceNodeData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_FunctionReferenceNodeData,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_TemplateModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_TemplateController,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_PinToOperandMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_PinToOperandMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_PinToOperandMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_SupportedEventNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_SupportedEventNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_bAutoRecompileVM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_bVMRecompilationRequired,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_bIsCompiling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMBlueprint_Statics::NewProp_VMRecompilationBracket,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_URigVMBlueprint_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_URigVMClientHost_NoRegister, (int32)VTABLE_OFFSET(URigVMBlueprint, IRigVMClientHost), false },  // 812804782
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMBlueprint_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMBlueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMBlueprint_Statics::ClassParams = {
		&URigVMBlueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URigVMBlueprint_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URigVMBlueprint_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMBlueprint_Statics::Class_MetaDataParams), Z_Construct_UClass_URigVMBlueprint_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMBlueprint_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_URigVMBlueprint()
	{
		if (!Z_Registration_Info_UClass_URigVMBlueprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMBlueprint.OuterSingleton, Z_Construct_UClass_URigVMBlueprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMBlueprint.OuterSingleton;
	}
	template<> RIGVMDEVELOPER_API UClass* StaticClass<URigVMBlueprint>()
	{
		return URigVMBlueprint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMBlueprint);
	URigVMBlueprint::~URigVMBlueprint() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(URigVMBlueprint)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprint_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprint_h_Statics::ScriptStructInfo[] = {
		{ FRigVMPythonSettings::StaticStruct, Z_Construct_UScriptStruct_FRigVMPythonSettings_Statics::NewStructOps, TEXT("RigVMPythonSettings"), &Z_Registration_Info_UScriptStruct_RigVMPythonSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMPythonSettings), 3643949212U) },
		{ FRigVMEdGraphDisplaySettings::StaticStruct, Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics::NewStructOps, TEXT("RigVMEdGraphDisplaySettings"), &Z_Registration_Info_UScriptStruct_RigVMEdGraphDisplaySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMEdGraphDisplaySettings), 258900512U) },
		{ FRigVMOldPublicFunctionArg::StaticStruct, Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics::NewStructOps, TEXT("RigVMOldPublicFunctionArg"), &Z_Registration_Info_UScriptStruct_RigVMOldPublicFunctionArg, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMOldPublicFunctionArg), 3946286820U) },
		{ FRigVMOldPublicFunctionData::StaticStruct, Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics::NewStructOps, TEXT("RigVMOldPublicFunctionData"), &Z_Registration_Info_UScriptStruct_RigVMOldPublicFunctionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMOldPublicFunctionData), 3956944550U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMBlueprint, URigVMBlueprint::StaticClass, TEXT("URigVMBlueprint"), &Z_Registration_Info_UClass_URigVMBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMBlueprint), 927566695U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprint_h_1242910658(TEXT("/Script/RigVMDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprint_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprint_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprint_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
