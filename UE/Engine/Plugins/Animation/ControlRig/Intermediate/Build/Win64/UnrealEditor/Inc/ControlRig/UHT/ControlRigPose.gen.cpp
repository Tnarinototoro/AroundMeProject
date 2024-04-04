// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tools/ControlRigPose.h"
#include "Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigPose() {}
// Cross Module References
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRig_NoRegister();
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigPoseAsset();
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigPoseAsset_NoRegister();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigControlType();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigControlPose();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigControlCopy();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigControlValue();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigControlCopy;
class UScriptStruct* FRigControlCopy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigControlCopy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigControlCopy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigControlCopy, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigControlCopy"));
	}
	return Z_Registration_Info_UScriptStruct_RigControlCopy.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigControlCopy>()
{
	return FRigControlCopy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigControlCopy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ControlType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ControlType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlCopy_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* The Data Stored For Each Control in A Pose.\n*/" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigPose.h" },
		{ "ToolTip", "The Data Stored For Each Control in A Pose." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigControlCopy>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Names" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigPose.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlCopy, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewProp_ControlType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewProp_ControlType_MetaData[] = {
		{ "Category", "Type" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigPose.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewProp_ControlType = { "ControlType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlCopy, ControlType), Z_Construct_UEnum_ControlRig_ERigControlType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewProp_ControlType_MetaData), Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewProp_ControlType_MetaData) }; // 1869562694
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tools/ControlRigPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlCopy, Value), Z_Construct_UScriptStruct_FRigControlValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewProp_Value_MetaData), Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewProp_Value_MetaData) }; // 323570879
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewProp_ParentKey_MetaData[] = {
		{ "Category", "Names" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewProp_ParentKey = { "ParentKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlCopy, ParentKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewProp_ParentKey_MetaData), Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewProp_ParentKey_MetaData) }; // 422817336
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewProp_OffsetTransform_MetaData[] = {
		{ "Category", "Transforms" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewProp_OffsetTransform = { "OffsetTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlCopy, OffsetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewProp_OffsetTransform_MetaData), Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewProp_OffsetTransform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewProp_ParentTransform_MetaData[] = {
		{ "Category", "Transforms" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewProp_ParentTransform = { "ParentTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlCopy, ParentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewProp_ParentTransform_MetaData), Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewProp_ParentTransform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewProp_LocalTransform_MetaData[] = {
		{ "Category", "Transforms" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewProp_LocalTransform = { "LocalTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlCopy, LocalTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewProp_LocalTransform_MetaData), Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewProp_LocalTransform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewProp_GlobalTransform_MetaData[] = {
		{ "Category", "Transforms" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewProp_GlobalTransform = { "GlobalTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlCopy, GlobalTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewProp_GlobalTransform_MetaData), Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewProp_GlobalTransform_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigControlCopy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewProp_ControlType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewProp_ControlType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewProp_ParentKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewProp_OffsetTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewProp_ParentTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewProp_LocalTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewProp_GlobalTransform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigControlCopy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigControlCopy",
		Z_Construct_UScriptStruct_FRigControlCopy_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlCopy_Statics::PropPointers),
		sizeof(FRigControlCopy),
		alignof(FRigControlCopy),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlCopy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigControlCopy_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlCopy_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRigControlCopy()
	{
		if (!Z_Registration_Info_UScriptStruct_RigControlCopy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigControlCopy.InnerSingleton, Z_Construct_UScriptStruct_FRigControlCopy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigControlCopy.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigControlPose;
class UScriptStruct* FControlRigControlPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigControlPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigControlPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigControlPose, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ControlRigControlPose"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigControlPose.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FControlRigControlPose>()
{
	return FControlRigControlPose::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FControlRigControlPose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_CopyOfControls_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CopyOfControls_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CopyOfControls;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigControlPose_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* The Data Stored For Each Pose and associated Functions to Store and Paste It\n*/" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigPose.h" },
		{ "ToolTip", "The Data Stored For Each Pose and associated Functions to Store and Paste It" },
	};
#endif
	void* Z_Construct_UScriptStruct_FControlRigControlPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigControlPose>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FControlRigControlPose_Statics::NewProp_CopyOfControls_Inner = { "CopyOfControls", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigControlCopy, METADATA_PARAMS(0, nullptr) }; // 2727135705
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigControlPose_Statics::NewProp_CopyOfControls_MetaData[] = {
		{ "Category", "Controls" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigPose.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FControlRigControlPose_Statics::NewProp_CopyOfControls = { "CopyOfControls", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlRigControlPose, CopyOfControls), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigControlPose_Statics::NewProp_CopyOfControls_MetaData), Z_Construct_UScriptStruct_FControlRigControlPose_Statics::NewProp_CopyOfControls_MetaData) }; // 2727135705
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlRigControlPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigControlPose_Statics::NewProp_CopyOfControls_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigControlPose_Statics::NewProp_CopyOfControls,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigControlPose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"ControlRigControlPose",
		Z_Construct_UScriptStruct_FControlRigControlPose_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigControlPose_Statics::PropPointers),
		sizeof(FControlRigControlPose),
		alignof(FControlRigControlPose),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigControlPose_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FControlRigControlPose_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigControlPose_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FControlRigControlPose()
	{
		if (!Z_Registration_Info_UScriptStruct_ControlRigControlPose.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigControlPose.InnerSingleton, Z_Construct_UScriptStruct_FControlRigControlPose_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ControlRigControlPose.InnerSingleton;
	}
	DEFINE_FUNCTION(UControlRigPoseAsset::execDoesMirrorMatch)
	{
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ControlName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoesMirrorMatch(Z_Param_ControlRig,Z_Param_Out_ControlName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigPoseAsset::execReplaceControlName)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_CurrentName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_NewName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReplaceControlName(Z_Param_Out_CurrentName,Z_Param_Out_NewName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigPoseAsset::execGetControlNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetControlNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigPoseAsset::execGetCurrentPose)
	{
		P_GET_OBJECT(UControlRig,Z_Param_InControlRig);
		P_GET_STRUCT_REF(FControlRigControlPose,Z_Param_Out_OutPose);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCurrentPose(Z_Param_InControlRig,Z_Param_Out_OutPose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigPoseAsset::execSelectControls)
	{
		P_GET_OBJECT(UControlRig,Z_Param_InControlRig);
		P_GET_UBOOL(Z_Param_bDoMirror);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectControls(Z_Param_InControlRig,Z_Param_bDoMirror);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigPoseAsset::execPastePose)
	{
		P_GET_OBJECT(UControlRig,Z_Param_InControlRig);
		P_GET_UBOOL(Z_Param_bDoKey);
		P_GET_UBOOL(Z_Param_bDoMirror);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PastePose(Z_Param_InControlRig,Z_Param_bDoKey,Z_Param_bDoMirror);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigPoseAsset::execSavePose)
	{
		P_GET_OBJECT(UControlRig,Z_Param_InControlRig);
		P_GET_UBOOL(Z_Param_bUseAll);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SavePose(Z_Param_InControlRig,Z_Param_bUseAll);
		P_NATIVE_END;
	}
	void UControlRigPoseAsset::StaticRegisterNativesUControlRigPoseAsset()
	{
		UClass* Class = UControlRigPoseAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DoesMirrorMatch", &UControlRigPoseAsset::execDoesMirrorMatch },
			{ "GetControlNames", &UControlRigPoseAsset::execGetControlNames },
			{ "GetCurrentPose", &UControlRigPoseAsset::execGetCurrentPose },
			{ "PastePose", &UControlRigPoseAsset::execPastePose },
			{ "ReplaceControlName", &UControlRigPoseAsset::execReplaceControlName },
			{ "SavePose", &UControlRigPoseAsset::execSavePose },
			{ "SelectControls", &UControlRigPoseAsset::execSelectControls },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UControlRigPoseAsset_DoesMirrorMatch_Statics
	{
		struct ControlRigPoseAsset_eventDoesMirrorMatch_Parms
		{
			UControlRig* ControlRig;
			FName ControlName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigPoseAsset_DoesMirrorMatch_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigPoseAsset_eventDoesMirrorMatch_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigPoseAsset_DoesMirrorMatch_Statics::NewProp_ControlName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigPoseAsset_DoesMirrorMatch_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigPoseAsset_eventDoesMirrorMatch_Parms, ControlName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigPoseAsset_DoesMirrorMatch_Statics::NewProp_ControlName_MetaData), Z_Construct_UFunction_UControlRigPoseAsset_DoesMirrorMatch_Statics::NewProp_ControlName_MetaData) };
	void Z_Construct_UFunction_UControlRigPoseAsset_DoesMirrorMatch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ControlRigPoseAsset_eventDoesMirrorMatch_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigPoseAsset_DoesMirrorMatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ControlRigPoseAsset_eventDoesMirrorMatch_Parms), &Z_Construct_UFunction_UControlRigPoseAsset_DoesMirrorMatch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigPoseAsset_DoesMirrorMatch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigPoseAsset_DoesMirrorMatch_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigPoseAsset_DoesMirrorMatch_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigPoseAsset_DoesMirrorMatch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigPoseAsset_DoesMirrorMatch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pose" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigPose.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigPoseAsset_DoesMirrorMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigPoseAsset, nullptr, "DoesMirrorMatch", nullptr, nullptr, Z_Construct_UFunction_UControlRigPoseAsset_DoesMirrorMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigPoseAsset_DoesMirrorMatch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigPoseAsset_DoesMirrorMatch_Statics::ControlRigPoseAsset_eventDoesMirrorMatch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigPoseAsset_DoesMirrorMatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigPoseAsset_DoesMirrorMatch_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigPoseAsset_DoesMirrorMatch_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UControlRigPoseAsset_DoesMirrorMatch_Statics::ControlRigPoseAsset_eventDoesMirrorMatch_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UControlRigPoseAsset_DoesMirrorMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigPoseAsset_DoesMirrorMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigPoseAsset_GetControlNames_Statics
	{
		struct ControlRigPoseAsset_eventGetControlNames_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigPoseAsset_GetControlNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigPoseAsset_GetControlNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigPoseAsset_eventGetControlNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigPoseAsset_GetControlNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigPoseAsset_GetControlNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigPoseAsset_GetControlNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigPoseAsset_GetControlNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pose" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigPose.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigPoseAsset_GetControlNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigPoseAsset, nullptr, "GetControlNames", nullptr, nullptr, Z_Construct_UFunction_UControlRigPoseAsset_GetControlNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigPoseAsset_GetControlNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigPoseAsset_GetControlNames_Statics::ControlRigPoseAsset_eventGetControlNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigPoseAsset_GetControlNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigPoseAsset_GetControlNames_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigPoseAsset_GetControlNames_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UControlRigPoseAsset_GetControlNames_Statics::ControlRigPoseAsset_eventGetControlNames_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UControlRigPoseAsset_GetControlNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigPoseAsset_GetControlNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigPoseAsset_GetCurrentPose_Statics
	{
		struct ControlRigPoseAsset_eventGetCurrentPose_Parms
		{
			UControlRig* InControlRig;
			FControlRigControlPose OutPose;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InControlRig;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigPoseAsset_GetCurrentPose_Statics::NewProp_InControlRig = { "InControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigPoseAsset_eventGetCurrentPose_Parms, InControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigPoseAsset_GetCurrentPose_Statics::NewProp_OutPose = { "OutPose", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigPoseAsset_eventGetCurrentPose_Parms, OutPose), Z_Construct_UScriptStruct_FControlRigControlPose, METADATA_PARAMS(0, nullptr) }; // 4151962774
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigPoseAsset_GetCurrentPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigPoseAsset_GetCurrentPose_Statics::NewProp_InControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigPoseAsset_GetCurrentPose_Statics::NewProp_OutPose,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigPoseAsset_GetCurrentPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pose" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigPose.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigPoseAsset_GetCurrentPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigPoseAsset, nullptr, "GetCurrentPose", nullptr, nullptr, Z_Construct_UFunction_UControlRigPoseAsset_GetCurrentPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigPoseAsset_GetCurrentPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigPoseAsset_GetCurrentPose_Statics::ControlRigPoseAsset_eventGetCurrentPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigPoseAsset_GetCurrentPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigPoseAsset_GetCurrentPose_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigPoseAsset_GetCurrentPose_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UControlRigPoseAsset_GetCurrentPose_Statics::ControlRigPoseAsset_eventGetCurrentPose_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UControlRigPoseAsset_GetCurrentPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigPoseAsset_GetCurrentPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigPoseAsset_PastePose_Statics
	{
		struct ControlRigPoseAsset_eventPastePose_Parms
		{
			UControlRig* InControlRig;
			bool bDoKey;
			bool bDoMirror;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InControlRig;
		static void NewProp_bDoKey_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoKey;
		static void NewProp_bDoMirror_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoMirror;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigPoseAsset_PastePose_Statics::NewProp_InControlRig = { "InControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigPoseAsset_eventPastePose_Parms, InControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UControlRigPoseAsset_PastePose_Statics::NewProp_bDoKey_SetBit(void* Obj)
	{
		((ControlRigPoseAsset_eventPastePose_Parms*)Obj)->bDoKey = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigPoseAsset_PastePose_Statics::NewProp_bDoKey = { "bDoKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ControlRigPoseAsset_eventPastePose_Parms), &Z_Construct_UFunction_UControlRigPoseAsset_PastePose_Statics::NewProp_bDoKey_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UControlRigPoseAsset_PastePose_Statics::NewProp_bDoMirror_SetBit(void* Obj)
	{
		((ControlRigPoseAsset_eventPastePose_Parms*)Obj)->bDoMirror = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigPoseAsset_PastePose_Statics::NewProp_bDoMirror = { "bDoMirror", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ControlRigPoseAsset_eventPastePose_Parms), &Z_Construct_UFunction_UControlRigPoseAsset_PastePose_Statics::NewProp_bDoMirror_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigPoseAsset_PastePose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigPoseAsset_PastePose_Statics::NewProp_InControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigPoseAsset_PastePose_Statics::NewProp_bDoKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigPoseAsset_PastePose_Statics::NewProp_bDoMirror,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigPoseAsset_PastePose_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pose" },
		{ "CPP_Default_bDoKey", "false" },
		{ "CPP_Default_bDoMirror", "false" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigPose.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigPoseAsset_PastePose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigPoseAsset, nullptr, "PastePose", nullptr, nullptr, Z_Construct_UFunction_UControlRigPoseAsset_PastePose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigPoseAsset_PastePose_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigPoseAsset_PastePose_Statics::ControlRigPoseAsset_eventPastePose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigPoseAsset_PastePose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigPoseAsset_PastePose_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigPoseAsset_PastePose_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UControlRigPoseAsset_PastePose_Statics::ControlRigPoseAsset_eventPastePose_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UControlRigPoseAsset_PastePose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigPoseAsset_PastePose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigPoseAsset_ReplaceControlName_Statics
	{
		struct ControlRigPoseAsset_eventReplaceControlName_Parms
		{
			FName CurrentName;
			FName NewName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigPoseAsset_ReplaceControlName_Statics::NewProp_CurrentName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigPoseAsset_ReplaceControlName_Statics::NewProp_CurrentName = { "CurrentName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigPoseAsset_eventReplaceControlName_Parms, CurrentName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigPoseAsset_ReplaceControlName_Statics::NewProp_CurrentName_MetaData), Z_Construct_UFunction_UControlRigPoseAsset_ReplaceControlName_Statics::NewProp_CurrentName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigPoseAsset_ReplaceControlName_Statics::NewProp_NewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigPoseAsset_ReplaceControlName_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigPoseAsset_eventReplaceControlName_Parms, NewName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigPoseAsset_ReplaceControlName_Statics::NewProp_NewName_MetaData), Z_Construct_UFunction_UControlRigPoseAsset_ReplaceControlName_Statics::NewProp_NewName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigPoseAsset_ReplaceControlName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigPoseAsset_ReplaceControlName_Statics::NewProp_CurrentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigPoseAsset_ReplaceControlName_Statics::NewProp_NewName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigPoseAsset_ReplaceControlName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pose" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigPose.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigPoseAsset_ReplaceControlName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigPoseAsset, nullptr, "ReplaceControlName", nullptr, nullptr, Z_Construct_UFunction_UControlRigPoseAsset_ReplaceControlName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigPoseAsset_ReplaceControlName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigPoseAsset_ReplaceControlName_Statics::ControlRigPoseAsset_eventReplaceControlName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigPoseAsset_ReplaceControlName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigPoseAsset_ReplaceControlName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigPoseAsset_ReplaceControlName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UControlRigPoseAsset_ReplaceControlName_Statics::ControlRigPoseAsset_eventReplaceControlName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UControlRigPoseAsset_ReplaceControlName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigPoseAsset_ReplaceControlName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigPoseAsset_SavePose_Statics
	{
		struct ControlRigPoseAsset_eventSavePose_Parms
		{
			UControlRig* InControlRig;
			bool bUseAll;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InControlRig;
		static void NewProp_bUseAll_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAll;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigPoseAsset_SavePose_Statics::NewProp_InControlRig = { "InControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigPoseAsset_eventSavePose_Parms, InControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UControlRigPoseAsset_SavePose_Statics::NewProp_bUseAll_SetBit(void* Obj)
	{
		((ControlRigPoseAsset_eventSavePose_Parms*)Obj)->bUseAll = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigPoseAsset_SavePose_Statics::NewProp_bUseAll = { "bUseAll", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ControlRigPoseAsset_eventSavePose_Parms), &Z_Construct_UFunction_UControlRigPoseAsset_SavePose_Statics::NewProp_bUseAll_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigPoseAsset_SavePose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigPoseAsset_SavePose_Statics::NewProp_InControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigPoseAsset_SavePose_Statics::NewProp_bUseAll,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigPoseAsset_SavePose_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pose" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigPose.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigPoseAsset_SavePose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigPoseAsset, nullptr, "SavePose", nullptr, nullptr, Z_Construct_UFunction_UControlRigPoseAsset_SavePose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigPoseAsset_SavePose_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigPoseAsset_SavePose_Statics::ControlRigPoseAsset_eventSavePose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigPoseAsset_SavePose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigPoseAsset_SavePose_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigPoseAsset_SavePose_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UControlRigPoseAsset_SavePose_Statics::ControlRigPoseAsset_eventSavePose_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UControlRigPoseAsset_SavePose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigPoseAsset_SavePose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigPoseAsset_SelectControls_Statics
	{
		struct ControlRigPoseAsset_eventSelectControls_Parms
		{
			UControlRig* InControlRig;
			bool bDoMirror;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InControlRig;
		static void NewProp_bDoMirror_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoMirror;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigPoseAsset_SelectControls_Statics::NewProp_InControlRig = { "InControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigPoseAsset_eventSelectControls_Parms, InControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UControlRigPoseAsset_SelectControls_Statics::NewProp_bDoMirror_SetBit(void* Obj)
	{
		((ControlRigPoseAsset_eventSelectControls_Parms*)Obj)->bDoMirror = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigPoseAsset_SelectControls_Statics::NewProp_bDoMirror = { "bDoMirror", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ControlRigPoseAsset_eventSelectControls_Parms), &Z_Construct_UFunction_UControlRigPoseAsset_SelectControls_Statics::NewProp_bDoMirror_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigPoseAsset_SelectControls_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigPoseAsset_SelectControls_Statics::NewProp_InControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigPoseAsset_SelectControls_Statics::NewProp_bDoMirror,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigPoseAsset_SelectControls_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pose" },
		{ "CPP_Default_bDoMirror", "false" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigPose.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigPoseAsset_SelectControls_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigPoseAsset, nullptr, "SelectControls", nullptr, nullptr, Z_Construct_UFunction_UControlRigPoseAsset_SelectControls_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigPoseAsset_SelectControls_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigPoseAsset_SelectControls_Statics::ControlRigPoseAsset_eventSelectControls_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigPoseAsset_SelectControls_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigPoseAsset_SelectControls_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigPoseAsset_SelectControls_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UControlRigPoseAsset_SelectControls_Statics::ControlRigPoseAsset_eventSelectControls_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UControlRigPoseAsset_SelectControls()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigPoseAsset_SelectControls_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigPoseAsset);
	UClass* Z_Construct_UClass_UControlRigPoseAsset_NoRegister()
	{
		return UControlRigPoseAsset::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigPoseAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigPoseAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigPoseAsset_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UControlRigPoseAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UControlRigPoseAsset_DoesMirrorMatch, "DoesMirrorMatch" }, // 2539733281
		{ &Z_Construct_UFunction_UControlRigPoseAsset_GetControlNames, "GetControlNames" }, // 1638312312
		{ &Z_Construct_UFunction_UControlRigPoseAsset_GetCurrentPose, "GetCurrentPose" }, // 1957033760
		{ &Z_Construct_UFunction_UControlRigPoseAsset_PastePose, "PastePose" }, // 1096963515
		{ &Z_Construct_UFunction_UControlRigPoseAsset_ReplaceControlName, "ReplaceControlName" }, // 1153213117
		{ &Z_Construct_UFunction_UControlRigPoseAsset_SavePose, "SavePose" }, // 2138053242
		{ &Z_Construct_UFunction_UControlRigPoseAsset_SelectControls, "SelectControls" }, // 2041579814
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigPoseAsset_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigPoseAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* An individual Pose made of Control Rig Controls\n*/" },
		{ "IncludePath", "Tools/ControlRigPose.h" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigPose.h" },
		{ "ToolTip", "An individual Pose made of Control Rig Controls" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigPoseAsset_Statics::NewProp_Pose_MetaData[] = {
		{ "Category", "Pose" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigPoseAsset_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigPoseAsset, Pose), Z_Construct_UScriptStruct_FControlRigControlPose, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigPoseAsset_Statics::NewProp_Pose_MetaData), Z_Construct_UClass_UControlRigPoseAsset_Statics::NewProp_Pose_MetaData) }; // 4151962774
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigPoseAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigPoseAsset_Statics::NewProp_Pose,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigPoseAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigPoseAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigPoseAsset_Statics::ClassParams = {
		&UControlRigPoseAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UControlRigPoseAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigPoseAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigPoseAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UControlRigPoseAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigPoseAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UControlRigPoseAsset()
	{
		if (!Z_Registration_Info_UClass_UControlRigPoseAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigPoseAsset.OuterSingleton, Z_Construct_UClass_UControlRigPoseAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigPoseAsset.OuterSingleton;
	}
	template<> CONTROLRIG_API UClass* StaticClass<UControlRigPoseAsset>()
	{
		return UControlRigPoseAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigPoseAsset);
	UControlRigPoseAsset::~UControlRigPoseAsset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPose_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPose_h_Statics::ScriptStructInfo[] = {
		{ FRigControlCopy::StaticStruct, Z_Construct_UScriptStruct_FRigControlCopy_Statics::NewStructOps, TEXT("RigControlCopy"), &Z_Registration_Info_UScriptStruct_RigControlCopy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigControlCopy), 2727135705U) },
		{ FControlRigControlPose::StaticStruct, Z_Construct_UScriptStruct_FControlRigControlPose_Statics::NewStructOps, TEXT("ControlRigControlPose"), &Z_Registration_Info_UScriptStruct_ControlRigControlPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigControlPose), 4151962774U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPose_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigPoseAsset, UControlRigPoseAsset::StaticClass, TEXT("UControlRigPoseAsset"), &Z_Registration_Info_UClass_UControlRigPoseAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigPoseAsset), 1446297408U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPose_h_2282710959(TEXT("/Script/ControlRig"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPose_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPose_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPose_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPose_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
