// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h"
#include "Constraint.h"
#include "Rigs/RigHierarchyCache.h"
#include "Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_TransformConstraint() {}
// Cross Module References
	ANIMATIONCORE_API UEnum* Z_Construct_UEnum_AnimationCore_EEulerRotationOrder();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintData();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFilterOptionPerAxis();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FTransformFilter();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EConstraintInterpType();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ETransformSpaceMode();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintParent();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintTarget();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ParentConstraint();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PositionConstraint();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_RotationConstraint();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TransformConstraint();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConstraintTarget;
class UScriptStruct* FConstraintTarget::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintTarget.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConstraintTarget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintTarget, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ConstraintTarget"));
	}
	return Z_Registration_Info_UScriptStruct_ConstraintTarget.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FConstraintTarget>()
{
	return FConstraintTarget::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConstraintTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMaintainOffset_MetaData[];
#endif
		static void NewProp_bMaintainOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Filter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintTarget_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConstraintTarget_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintTarget>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintTarget_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "FConstraintTarget" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintTarget_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintTarget, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintTarget_Statics::NewProp_Transform_MetaData), Z_Construct_UScriptStruct_FConstraintTarget_Statics::NewProp_Transform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintTarget_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "FConstraintTarget" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintTarget_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintTarget, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintTarget_Statics::NewProp_Weight_MetaData), Z_Construct_UScriptStruct_FConstraintTarget_Statics::NewProp_Weight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintTarget_Statics::NewProp_bMaintainOffset_MetaData[] = {
		{ "Category", "FConstraintTarget" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintTarget_Statics::NewProp_bMaintainOffset_SetBit(void* Obj)
	{
		((FConstraintTarget*)Obj)->bMaintainOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintTarget_Statics::NewProp_bMaintainOffset = { "bMaintainOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FConstraintTarget), &Z_Construct_UScriptStruct_FConstraintTarget_Statics::NewProp_bMaintainOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintTarget_Statics::NewProp_bMaintainOffset_MetaData), Z_Construct_UScriptStruct_FConstraintTarget_Statics::NewProp_bMaintainOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintTarget_Statics::NewProp_Filter_MetaData[] = {
		{ "Category", "FConstraintTarget" },
		{ "Constant", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintTarget_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintTarget, Filter), Z_Construct_UScriptStruct_FTransformFilter, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintTarget_Statics::NewProp_Filter_MetaData), Z_Construct_UScriptStruct_FConstraintTarget_Statics::NewProp_Filter_MetaData) }; // 172385417
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstraintTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintTarget_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintTarget_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintTarget_Statics::NewProp_bMaintainOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintTarget_Statics::NewProp_Filter,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintTarget_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"ConstraintTarget",
		Z_Construct_UScriptStruct_FConstraintTarget_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintTarget_Statics::PropPointers),
		sizeof(FConstraintTarget),
		alignof(FConstraintTarget),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintTarget_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConstraintTarget_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintTarget_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FConstraintTarget()
	{
		if (!Z_Registration_Info_UScriptStruct_ConstraintTarget.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConstraintTarget.InnerSingleton, Z_Construct_UScriptStruct_FConstraintTarget_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConstraintTarget.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraint_WorkData;
class UScriptStruct* FRigUnit_TransformConstraint_WorkData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraint_WorkData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraint_WorkData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_TransformConstraint_WorkData"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraint_WorkData.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_TransformConstraint_WorkData>()
{
	return FRigUnit_TransformConstraint_WorkData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConstraintData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConstraintData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConstraintDataToTargets_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConstraintDataToTargets_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintDataToTargets_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ConstraintDataToTargets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_TransformConstraint_WorkData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::NewProp_ConstraintData_Inner = { "ConstraintData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConstraintData, METADATA_PARAMS(0, nullptr) }; // 1121052863
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::NewProp_ConstraintData_MetaData[] = {
		{ "Comment", "// note that Targets.Num () != ConstraintData.Num()\n" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "ToolTip", "note that Targets.Num () != ConstraintData.Num()" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::NewProp_ConstraintData = { "ConstraintData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TransformConstraint_WorkData, ConstraintData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::NewProp_ConstraintData_MetaData), Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::NewProp_ConstraintData_MetaData) }; // 1121052863
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::NewProp_ConstraintDataToTargets_ValueProp = { "ConstraintDataToTargets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::NewProp_ConstraintDataToTargets_Key_KeyProp = { "ConstraintDataToTargets_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::NewProp_ConstraintDataToTargets_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::NewProp_ConstraintDataToTargets = { "ConstraintDataToTargets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TransformConstraint_WorkData, ConstraintDataToTargets), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::NewProp_ConstraintDataToTargets_MetaData), Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::NewProp_ConstraintDataToTargets_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::NewProp_ConstraintData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::NewProp_ConstraintData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::NewProp_ConstraintDataToTargets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::NewProp_ConstraintDataToTargets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::NewProp_ConstraintDataToTargets,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigUnit_TransformConstraint_WorkData",
		Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::PropPointers),
		sizeof(FRigUnit_TransformConstraint_WorkData),
		alignof(FRigUnit_TransformConstraint_WorkData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraint_WorkData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraint_WorkData.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraint_WorkData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_TransformConstraint>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_TransformConstraint cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraint;
class UScriptStruct* FRigUnit_TransformConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_TransformConstraint, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_TransformConstraint"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_TransformConstraint_Execute;
		Arguments_FRigUnit_TransformConstraint_Execute.Emplace(TEXT("Bone"), TEXT("FName"));
		Arguments_FRigUnit_TransformConstraint_Execute.Emplace(TEXT("BaseTransformSpace"), TEXT("ETransformSpaceMode"));
		Arguments_FRigUnit_TransformConstraint_Execute.Emplace(TEXT("BaseTransform"), TEXT("FTransform"));
		Arguments_FRigUnit_TransformConstraint_Execute.Emplace(TEXT("BaseBone"), TEXT("FName"));
		Arguments_FRigUnit_TransformConstraint_Execute.Emplace(TEXT("Targets"), TEXT("TArray<FConstraintTarget>"));
		Arguments_FRigUnit_TransformConstraint_Execute.Emplace(TEXT("bUseInitialTransforms"), TEXT("bool"));
		Arguments_FRigUnit_TransformConstraint_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_TransformConstraint_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_TransformConstraint::Execute"), &FRigUnit_TransformConstraint::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraint.OuterSingleton, Arguments_FRigUnit_TransformConstraint_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraint.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_TransformConstraint>()
{
	return FRigUnit_TransformConstraint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Bone;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BaseTransformSpace_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseTransformSpace_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BaseTransformSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseBone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BaseBone;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Targets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseInitialTransforms_MetaData[];
#endif
		static void NewProp_bUseInitialTransforms_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseInitialTransforms;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Transforms" },
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Transform Constraint" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_TransformConstraint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_Bone_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TransformConstraint, Bone), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_Bone_MetaData), Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_Bone_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_BaseTransformSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_BaseTransformSpace_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_BaseTransformSpace = { "BaseTransformSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TransformConstraint, BaseTransformSpace), Z_Construct_UEnum_ControlRig_ETransformSpaceMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_BaseTransformSpace_MetaData), Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_BaseTransformSpace_MetaData) }; // 1414560775
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_BaseTransform_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "// Transform op option. Use if ETransformSpace is BaseTransform\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "ToolTip", "Transform op option. Use if ETransformSpace is BaseTransform" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_BaseTransform = { "BaseTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TransformConstraint, BaseTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_BaseTransform_MetaData), Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_BaseTransform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_BaseBone_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "// Transform op option. Use if ETransformSpace is BaseJoint\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "ToolTip", "Transform op option. Use if ETransformSpace is BaseJoint" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_BaseBone = { "BaseBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TransformConstraint, BaseBone), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_BaseBone_MetaData), Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_BaseBone_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConstraintTarget, METADATA_PARAMS(0, nullptr) }; // 3461522500
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_Targets_MetaData[] = {
		{ "Category", "Constraint" },
		{ "DefaultArraySize", "1" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TransformConstraint, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_Targets_MetaData), Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_Targets_MetaData) }; // 3461522500
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_bUseInitialTransforms_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "// If checked the initial transform will be used for the constraint data\n" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "ToolTip", "If checked the initial transform will be used for the constraint data" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_bUseInitialTransforms_SetBit(void* Obj)
	{
		((FRigUnit_TransformConstraint*)Obj)->bUseInitialTransforms = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_bUseInitialTransforms = { "bUseInitialTransforms", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_TransformConstraint), &Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_bUseInitialTransforms_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_bUseInitialTransforms_MetaData), Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_bUseInitialTransforms_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TransformConstraint, WorkData), Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_WorkData_MetaData), Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_WorkData_MetaData) }; // 1116485664
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_Bone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_BaseTransformSpace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_BaseTransformSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_BaseTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_BaseBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_Targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_Targets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_bUseInitialTransforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewProp_WorkData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_TransformConstraint",
		Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::PropPointers),
		sizeof(FRigUnit_TransformConstraint),
		alignof(FRigUnit_TransformConstraint),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TransformConstraint()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraint.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraint.InnerSingleton;
	}

void FRigUnit_TransformConstraint::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_TransformConstraint::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FConstraintTarget> Targets_4_Array(Targets);
	
	StaticExecute(
		InExecuteContext,
		Bone,
		BaseTransformSpace,
		BaseTransform,
		BaseBone,
		Targets_4_Array,
		bUseInitialTransforms,
		WorkData
	);
}


static_assert(std::is_polymorphic<FRigUnit_TransformConstraintPerItem>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_TransformConstraintPerItem cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraintPerItem;
class UScriptStruct* FRigUnit_TransformConstraintPerItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraintPerItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraintPerItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_TransformConstraintPerItem"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_TransformConstraintPerItem_Execute;
		Arguments_FRigUnit_TransformConstraintPerItem_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_TransformConstraintPerItem_Execute.Emplace(TEXT("BaseTransformSpace"), TEXT("ETransformSpaceMode"));
		Arguments_FRigUnit_TransformConstraintPerItem_Execute.Emplace(TEXT("BaseTransform"), TEXT("FTransform"));
		Arguments_FRigUnit_TransformConstraintPerItem_Execute.Emplace(TEXT("BaseItem"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_TransformConstraintPerItem_Execute.Emplace(TEXT("Targets"), TEXT("TArray<FConstraintTarget>"));
		Arguments_FRigUnit_TransformConstraintPerItem_Execute.Emplace(TEXT("bUseInitialTransforms"), TEXT("bool"));
		Arguments_FRigUnit_TransformConstraintPerItem_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_TransformConstraint_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_TransformConstraintPerItem::Execute"), &FRigUnit_TransformConstraintPerItem::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraintPerItem.OuterSingleton, Arguments_FRigUnit_TransformConstraintPerItem_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraintPerItem.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_TransformConstraintPerItem>()
{
	return FRigUnit_TransformConstraintPerItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BaseTransformSpace_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseTransformSpace_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BaseTransformSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseItem_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseItem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Targets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseInitialTransforms_MetaData[];
#endif
		static void NewProp_bUseInitialTransforms_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseInitialTransforms;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Transforms" },
		{ "Comment", "/**\n * Constrains an item's transform to multiple items' transforms\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Transform Constraint" },
		{ "Keywords", "Parent,Orient,Scale" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "ToolTip", "Constrains an item's transform to multiple items' transforms" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_TransformConstraintPerItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_Item_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TransformConstraintPerItem, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_Item_MetaData), Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_Item_MetaData) }; // 422817336
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_BaseTransformSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_BaseTransformSpace_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_BaseTransformSpace = { "BaseTransformSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TransformConstraintPerItem, BaseTransformSpace), Z_Construct_UEnum_ControlRig_ETransformSpaceMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_BaseTransformSpace_MetaData), Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_BaseTransformSpace_MetaData) }; // 1414560775
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_BaseTransform_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "// Transform op option. Use if ETransformSpace is BaseTransform\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "ToolTip", "Transform op option. Use if ETransformSpace is BaseTransform" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_BaseTransform = { "BaseTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TransformConstraintPerItem, BaseTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_BaseTransform_MetaData), Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_BaseTransform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_BaseItem_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "// Transform op option. Use if ETransformSpace is BaseJoint\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "ToolTip", "Transform op option. Use if ETransformSpace is BaseJoint" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_BaseItem = { "BaseItem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TransformConstraintPerItem, BaseItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_BaseItem_MetaData), Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_BaseItem_MetaData) }; // 422817336
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConstraintTarget, METADATA_PARAMS(0, nullptr) }; // 3461522500
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_Targets_MetaData[] = {
		{ "Category", "Constraint" },
		{ "DefaultArraySize", "1" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TransformConstraintPerItem, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_Targets_MetaData), Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_Targets_MetaData) }; // 3461522500
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_bUseInitialTransforms_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "// If checked the initial transform will be used for the constraint data\n" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "ToolTip", "If checked the initial transform will be used for the constraint data" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_bUseInitialTransforms_SetBit(void* Obj)
	{
		((FRigUnit_TransformConstraintPerItem*)Obj)->bUseInitialTransforms = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_bUseInitialTransforms = { "bUseInitialTransforms", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_TransformConstraintPerItem), &Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_bUseInitialTransforms_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_bUseInitialTransforms_MetaData), Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_bUseInitialTransforms_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TransformConstraintPerItem, WorkData), Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_WorkData_MetaData), Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_WorkData_MetaData) }; // 1116485664
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_BaseTransformSpace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_BaseTransformSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_BaseTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_BaseItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_Targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_Targets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_bUseInitialTransforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewProp_WorkData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_TransformConstraintPerItem",
		Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::PropPointers),
		sizeof(FRigUnit_TransformConstraintPerItem),
		alignof(FRigUnit_TransformConstraintPerItem),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraintPerItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraintPerItem.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraintPerItem.InnerSingleton;
	}

void FRigUnit_TransformConstraintPerItem::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_TransformConstraintPerItem::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FConstraintTarget> Targets_4_Array(Targets);
	
	StaticExecute(
		InExecuteContext,
		Item,
		BaseTransformSpace,
		BaseTransform,
		BaseItem,
		Targets_4_Array,
		bUseInitialTransforms,
		WorkData
	);
}

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConstraintParent;
class UScriptStruct* FConstraintParent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintParent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConstraintParent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintParent, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ConstraintParent"));
	}
	return Z_Registration_Info_UScriptStruct_ConstraintParent.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FConstraintParent>()
{
	return FConstraintParent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConstraintParent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintParent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConstraintParent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintParent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintParent_Statics::NewProp_Item_MetaData[] = {
		{ "Category", "FConstraintParent" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintParent_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintParent, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintParent_Statics::NewProp_Item_MetaData), Z_Construct_UScriptStruct_FConstraintParent_Statics::NewProp_Item_MetaData) }; // 422817336
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintParent_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "FConstraintParent" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintParent_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintParent, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintParent_Statics::NewProp_Weight_MetaData), Z_Construct_UScriptStruct_FConstraintParent_Statics::NewProp_Weight_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstraintParent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintParent_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintParent_Statics::NewProp_Weight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintParent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"ConstraintParent",
		Z_Construct_UScriptStruct_FConstraintParent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintParent_Statics::PropPointers),
		sizeof(FConstraintParent),
		alignof(FConstraintParent),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintParent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConstraintParent_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintParent_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FConstraintParent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConstraintParent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConstraintParent.InnerSingleton, Z_Construct_UScriptStruct_FConstraintParent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConstraintParent.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConstraintInterpType;
	static UEnum* EConstraintInterpType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConstraintInterpType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConstraintInterpType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_EConstraintInterpType, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("EConstraintInterpType"));
		}
		return Z_Registration_Info_UEnum_EConstraintInterpType.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<EConstraintInterpType>()
	{
		return EConstraintInterpType_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_EConstraintInterpType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_EConstraintInterpType_Statics::Enumerators[] = {
		{ "EConstraintInterpType::Average", (int64)EConstraintInterpType::Average },
		{ "EConstraintInterpType::Shortest", (int64)EConstraintInterpType::Shortest },
		{ "EConstraintInterpType::Max", (int64)EConstraintInterpType::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_EConstraintInterpType_Statics::Enum_MetaDataParams[] = {
		{ "Average.Comment", "/** Weighted Average of Quaternions by their X,Y,Z,W values, The Shortest Route is Respected. The Order of Parents Doesn't Matter */" },
		{ "Average.DisplayName", "Average(Order Independent)" },
		{ "Average.Name", "EConstraintInterpType::Average" },
		{ "Average.ToolTip", "Weighted Average of Quaternions by their X,Y,Z,W values, The Shortest Route is Respected. The Order of Parents Doesn't Matter" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\x09Options for interpolating rotations\n*/" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "EConstraintInterpType::Max" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "Shortest.Comment", "/** Perform Quaternion Slerp in Sequence, Different Orders of Parents can Produce Different Results */" },
		{ "Shortest.DisplayName", "Shortest(Order Dependent)" },
		{ "Shortest.Name", "EConstraintInterpType::Shortest" },
		{ "Shortest.ToolTip", "Perform Quaternion Slerp in Sequence, Different Orders of Parents can Produce Different Results" },
		{ "ToolTip", "Options for interpolating rotations" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_EConstraintInterpType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"EConstraintInterpType",
		"EConstraintInterpType",
		Z_Construct_UEnum_ControlRig_EConstraintInterpType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EConstraintInterpType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EConstraintInterpType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ControlRig_EConstraintInterpType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ControlRig_EConstraintInterpType()
	{
		if (!Z_Registration_Info_UEnum_EConstraintInterpType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConstraintInterpType.InnerSingleton, Z_Construct_UEnum_ControlRig_EConstraintInterpType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConstraintInterpType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraint_AdvancedSettings;
class UScriptStruct* FRigUnit_ParentConstraint_AdvancedSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraint_AdvancedSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraint_AdvancedSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ParentConstraint_AdvancedSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraint_AdvancedSettings.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ParentConstraint_AdvancedSettings>()
{
	return FRigUnit_ParentConstraint_AdvancedSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_InterpolationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InterpolationType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationOrderForFilter_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationOrderForFilter_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationOrderForFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ParentConstraint_AdvancedSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics::NewProp_InterpolationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics::NewProp_InterpolationType_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "/**\n\x09*\x09Options for interpolating rotations\n\x09*/" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "ToolTip", "Options for interpolating rotations" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics::NewProp_InterpolationType = { "InterpolationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParentConstraint_AdvancedSettings, InterpolationType), Z_Construct_UEnum_ControlRig_EConstraintInterpType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics::NewProp_InterpolationType_MetaData), Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics::NewProp_InterpolationType_MetaData) }; // 1660339667
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics::NewProp_RotationOrderForFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics::NewProp_RotationOrderForFilter_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "/**\n\x09*\x09Rotation is converted to euler angles using the specified order such that individual axes can be filtered.\n\x09*/" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "ToolTip", "Rotation is converted to euler angles using the specified order such that individual axes can be filtered." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics::NewProp_RotationOrderForFilter = { "RotationOrderForFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParentConstraint_AdvancedSettings, RotationOrderForFilter), Z_Construct_UEnum_AnimationCore_EEulerRotationOrder, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics::NewProp_RotationOrderForFilter_MetaData), Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics::NewProp_RotationOrderForFilter_MetaData) }; // 943455862
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics::NewProp_InterpolationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics::NewProp_InterpolationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics::NewProp_RotationOrderForFilter_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics::NewProp_RotationOrderForFilter,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigUnit_ParentConstraint_AdvancedSettings",
		Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics::PropPointers),
		sizeof(FRigUnit_ParentConstraint_AdvancedSettings),
		alignof(FRigUnit_ParentConstraint_AdvancedSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraint_AdvancedSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraint_AdvancedSettings.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraint_AdvancedSettings.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_ParentConstraint>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_ParentConstraint cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraint;
class UScriptStruct* FRigUnit_ParentConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ParentConstraint, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ParentConstraint"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ParentConstraint_Execute;
		Arguments_FRigUnit_ParentConstraint_Execute.Emplace(TEXT("Child"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_ParentConstraint_Execute.Emplace(TEXT("bMaintainOffset"), TEXT("bool"));
		Arguments_FRigUnit_ParentConstraint_Execute.Emplace(TEXT("Filter"), TEXT("FTransformFilter"));
		Arguments_FRigUnit_ParentConstraint_Execute.Emplace(TEXT("Parents"), TEXT("TArray<FConstraintParent>"));
		Arguments_FRigUnit_ParentConstraint_Execute.Emplace(TEXT("AdvancedSettings"), TEXT("FRigUnit_ParentConstraint_AdvancedSettings"));
		Arguments_FRigUnit_ParentConstraint_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_ParentConstraint_Execute.Emplace(TEXT("ChildCache"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_ParentConstraint_Execute.Emplace(TEXT("ParentCaches"), TEXT("TArray<FCachedRigElement>"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ParentConstraint::Execute"), &FRigUnit_ParentConstraint::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraint.OuterSingleton, Arguments_FRigUnit_ParentConstraint_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraint.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ParentConstraint>()
{
	return FRigUnit_ParentConstraint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Child_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Child;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMaintainOffset_MetaData[];
#endif
		static void NewProp_bMaintainOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Filter;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Parents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdvancedSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildCache_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChildCache;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentCaches_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentCaches_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParentCaches;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/**\n* Constrains an item's transform to multiple items' transforms\n*/" },
		{ "DisplayName", "Parent Constraint" },
		{ "Keywords", "Parent,Orient,Scale" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "ToolTip", "Constrains an item's transform to multiple items' transforms" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ParentConstraint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_Child_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_Child = { "Child", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParentConstraint, Child), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_Child_MetaData), Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_Child_MetaData) }; // 422817336
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_bMaintainOffset_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_bMaintainOffset_SetBit(void* Obj)
	{
		((FRigUnit_ParentConstraint*)Obj)->bMaintainOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_bMaintainOffset = { "bMaintainOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_ParentConstraint), &Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_bMaintainOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_bMaintainOffset_MetaData), Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_bMaintainOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_Filter_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParentConstraint, Filter), Z_Construct_UScriptStruct_FTransformFilter, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_Filter_MetaData), Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_Filter_MetaData) }; // 172385417
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_Parents_Inner = { "Parents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConstraintParent, METADATA_PARAMS(0, nullptr) }; // 872784768
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_Parents_MetaData[] = {
		{ "Category", "Constraint" },
		{ "DefaultArraySize", "1" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_Parents = { "Parents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParentConstraint, Parents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_Parents_MetaData), Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_Parents_MetaData) }; // 872784768
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_AdvancedSettings_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_AdvancedSettings = { "AdvancedSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParentConstraint, AdvancedSettings), Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_AdvancedSettings_MetaData), Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_AdvancedSettings_MetaData) }; // 2011354463
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParentConstraint, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_Weight_MetaData), Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_Weight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_ChildCache_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_ChildCache = { "ChildCache", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParentConstraint, ChildCache), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_ChildCache_MetaData), Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_ChildCache_MetaData) }; // 968212372
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_ParentCaches_Inner = { "ParentCaches", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(0, nullptr) }; // 968212372
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_ParentCaches_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_ParentCaches = { "ParentCaches", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParentConstraint, ParentCaches), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_ParentCaches_MetaData), Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_ParentCaches_MetaData) }; // 968212372
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_Child,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_bMaintainOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_Filter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_Parents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_Parents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_AdvancedSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_ChildCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_ParentCaches_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewProp_ParentCaches,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_ParentConstraint",
		Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::PropPointers),
		sizeof(FRigUnit_ParentConstraint),
		alignof(FRigUnit_ParentConstraint),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ParentConstraint()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraint.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraint.InnerSingleton;
	}

void FRigUnit_ParentConstraint::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_ParentConstraint::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FConstraintParent> Parents_3_Array(Parents);
	
	StaticExecute(
		InExecuteContext,
		Child,
		bMaintainOffset,
		Filter,
		Parents_3_Array,
		AdvancedSettings,
		Weight,
		ChildCache,
		ParentCaches
	);
}


static_assert(std::is_polymorphic<FRigUnit_PositionConstraint>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_PositionConstraint cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_PositionConstraint;
class UScriptStruct* FRigUnit_PositionConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_PositionConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_PositionConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PositionConstraint, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_PositionConstraint"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_PositionConstraint_Execute;
		Arguments_FRigUnit_PositionConstraint_Execute.Emplace(TEXT("Child"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_PositionConstraint_Execute.Emplace(TEXT("bMaintainOffset"), TEXT("bool"));
		Arguments_FRigUnit_PositionConstraint_Execute.Emplace(TEXT("Filter"), TEXT("FFilterOptionPerAxis"));
		Arguments_FRigUnit_PositionConstraint_Execute.Emplace(TEXT("Parents"), TEXT("TArray<FConstraintParent>"));
		Arguments_FRigUnit_PositionConstraint_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_PositionConstraint::Execute"), &FRigUnit_PositionConstraint::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_PositionConstraint.OuterSingleton, Arguments_FRigUnit_PositionConstraint_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_PositionConstraint.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_PositionConstraint>()
{
	return FRigUnit_PositionConstraint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Child_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Child;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMaintainOffset_MetaData[];
#endif
		static void NewProp_bMaintainOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Filter;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Parents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/**\n* Constrains an item's position to multiple items' positions \n*/" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Position Constraint" },
		{ "Keywords", "Parent,Translation" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "ToolTip", "Constrains an item's position to multiple items' positions" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_PositionConstraint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_Child_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_Child = { "Child", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PositionConstraint, Child), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_Child_MetaData), Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_Child_MetaData) }; // 422817336
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_bMaintainOffset_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_bMaintainOffset_SetBit(void* Obj)
	{
		((FRigUnit_PositionConstraint*)Obj)->bMaintainOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_bMaintainOffset = { "bMaintainOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_PositionConstraint), &Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_bMaintainOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_bMaintainOffset_MetaData), Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_bMaintainOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_Filter_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PositionConstraint, Filter), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_Filter_MetaData), Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_Filter_MetaData) }; // 2587098508
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_Parents_Inner = { "Parents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConstraintParent, METADATA_PARAMS(0, nullptr) }; // 872784768
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_Parents_MetaData[] = {
		{ "Category", "Constraint" },
		{ "DefaultArraySize", "1" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_Parents = { "Parents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PositionConstraint, Parents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_Parents_MetaData), Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_Parents_MetaData) }; // 872784768
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PositionConstraint, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_Weight_MetaData), Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_Weight_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_Child,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_bMaintainOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_Filter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_Parents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_Parents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewProp_Weight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_PositionConstraint",
		Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::PropPointers),
		sizeof(FRigUnit_PositionConstraint),
		alignof(FRigUnit_PositionConstraint),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PositionConstraint()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_PositionConstraint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_PositionConstraint.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_PositionConstraint.InnerSingleton;
	}

void FRigUnit_PositionConstraint::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_PositionConstraint::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FConstraintParent> Parents_3_Array(Parents);
	
	StaticExecute(
		InExecuteContext,
		Child,
		bMaintainOffset,
		Filter,
		Parents_3_Array,
		Weight
	);
}


static_assert(std::is_polymorphic<FRigUnit_PositionConstraintLocalSpaceOffset>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_PositionConstraintLocalSpaceOffset cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_PositionConstraintLocalSpaceOffset;
class UScriptStruct* FRigUnit_PositionConstraintLocalSpaceOffset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_PositionConstraintLocalSpaceOffset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_PositionConstraintLocalSpaceOffset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_PositionConstraintLocalSpaceOffset"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_PositionConstraintLocalSpaceOffset_Execute;
		Arguments_FRigUnit_PositionConstraintLocalSpaceOffset_Execute.Emplace(TEXT("Child"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_PositionConstraintLocalSpaceOffset_Execute.Emplace(TEXT("bMaintainOffset"), TEXT("bool"));
		Arguments_FRigUnit_PositionConstraintLocalSpaceOffset_Execute.Emplace(TEXT("Filter"), TEXT("FFilterOptionPerAxis"));
		Arguments_FRigUnit_PositionConstraintLocalSpaceOffset_Execute.Emplace(TEXT("Parents"), TEXT("TArray<FConstraintParent>"));
		Arguments_FRigUnit_PositionConstraintLocalSpaceOffset_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_PositionConstraintLocalSpaceOffset_Execute.Emplace(TEXT("ChildCache"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_PositionConstraintLocalSpaceOffset_Execute.Emplace(TEXT("ParentCaches"), TEXT("TArray<FCachedRigElement>"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_PositionConstraintLocalSpaceOffset::Execute"), &FRigUnit_PositionConstraintLocalSpaceOffset::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_PositionConstraintLocalSpaceOffset.OuterSingleton, Arguments_FRigUnit_PositionConstraintLocalSpaceOffset_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_PositionConstraintLocalSpaceOffset.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_PositionConstraintLocalSpaceOffset>()
{
	return FRigUnit_PositionConstraintLocalSpaceOffset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Child_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Child;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMaintainOffset_MetaData[];
#endif
		static void NewProp_bMaintainOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Filter;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Parents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildCache_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChildCache;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentCaches_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentCaches_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParentCaches;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/**\n* Constrains an item's position to multiple items' positions \n*/" },
		{ "DisplayName", "Position Constraint" },
		{ "Keywords", "Parent,Translation" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "ToolTip", "Constrains an item's position to multiple items' positions" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_PositionConstraintLocalSpaceOffset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_Child_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_Child = { "Child", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PositionConstraintLocalSpaceOffset, Child), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_Child_MetaData), Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_Child_MetaData) }; // 422817336
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_bMaintainOffset_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_bMaintainOffset_SetBit(void* Obj)
	{
		((FRigUnit_PositionConstraintLocalSpaceOffset*)Obj)->bMaintainOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_bMaintainOffset = { "bMaintainOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_PositionConstraintLocalSpaceOffset), &Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_bMaintainOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_bMaintainOffset_MetaData), Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_bMaintainOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_Filter_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PositionConstraintLocalSpaceOffset, Filter), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_Filter_MetaData), Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_Filter_MetaData) }; // 2587098508
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_Parents_Inner = { "Parents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConstraintParent, METADATA_PARAMS(0, nullptr) }; // 872784768
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_Parents_MetaData[] = {
		{ "Category", "Constraint" },
		{ "DefaultArraySize", "1" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_Parents = { "Parents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PositionConstraintLocalSpaceOffset, Parents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_Parents_MetaData), Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_Parents_MetaData) }; // 872784768
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PositionConstraintLocalSpaceOffset, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_Weight_MetaData), Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_Weight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_ChildCache_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_ChildCache = { "ChildCache", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PositionConstraintLocalSpaceOffset, ChildCache), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_ChildCache_MetaData), Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_ChildCache_MetaData) }; // 968212372
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_ParentCaches_Inner = { "ParentCaches", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(0, nullptr) }; // 968212372
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_ParentCaches_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_ParentCaches = { "ParentCaches", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PositionConstraintLocalSpaceOffset, ParentCaches), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_ParentCaches_MetaData), Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_ParentCaches_MetaData) }; // 968212372
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_Child,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_bMaintainOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_Filter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_Parents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_Parents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_ChildCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_ParentCaches_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewProp_ParentCaches,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_PositionConstraintLocalSpaceOffset",
		Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::PropPointers),
		sizeof(FRigUnit_PositionConstraintLocalSpaceOffset),
		alignof(FRigUnit_PositionConstraintLocalSpaceOffset),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_PositionConstraintLocalSpaceOffset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_PositionConstraintLocalSpaceOffset.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_PositionConstraintLocalSpaceOffset.InnerSingleton;
	}

void FRigUnit_PositionConstraintLocalSpaceOffset::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_PositionConstraintLocalSpaceOffset::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FConstraintParent> Parents_3_Array(Parents);
	
	StaticExecute(
		InExecuteContext,
		Child,
		bMaintainOffset,
		Filter,
		Parents_3_Array,
		Weight,
		ChildCache,
		ParentCaches
	);
}

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraint_AdvancedSettings;
class UScriptStruct* FRigUnit_RotationConstraint_AdvancedSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraint_AdvancedSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraint_AdvancedSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_RotationConstraint_AdvancedSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraint_AdvancedSettings.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_RotationConstraint_AdvancedSettings>()
{
	return FRigUnit_RotationConstraint_AdvancedSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_InterpolationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InterpolationType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationOrderForFilter_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationOrderForFilter_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationOrderForFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_RotationConstraint_AdvancedSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics::NewProp_InterpolationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics::NewProp_InterpolationType_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "/**\n\x09*\x09Options for interpolating rotations\n\x09*/" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "ToolTip", "Options for interpolating rotations" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics::NewProp_InterpolationType = { "InterpolationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RotationConstraint_AdvancedSettings, InterpolationType), Z_Construct_UEnum_ControlRig_EConstraintInterpType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics::NewProp_InterpolationType_MetaData), Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics::NewProp_InterpolationType_MetaData) }; // 1660339667
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics::NewProp_RotationOrderForFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics::NewProp_RotationOrderForFilter_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "/**\n\x09*\x09Rotation is converted to euler angles using the specified order such that individual axes can be filtered.\n\x09*/" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "ToolTip", "Rotation is converted to euler angles using the specified order such that individual axes can be filtered." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics::NewProp_RotationOrderForFilter = { "RotationOrderForFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RotationConstraint_AdvancedSettings, RotationOrderForFilter), Z_Construct_UEnum_AnimationCore_EEulerRotationOrder, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics::NewProp_RotationOrderForFilter_MetaData), Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics::NewProp_RotationOrderForFilter_MetaData) }; // 943455862
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics::NewProp_InterpolationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics::NewProp_InterpolationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics::NewProp_RotationOrderForFilter_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics::NewProp_RotationOrderForFilter,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigUnit_RotationConstraint_AdvancedSettings",
		Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics::PropPointers),
		sizeof(FRigUnit_RotationConstraint_AdvancedSettings),
		alignof(FRigUnit_RotationConstraint_AdvancedSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraint_AdvancedSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraint_AdvancedSettings.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraint_AdvancedSettings.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_RotationConstraint>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_RotationConstraint cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraint;
class UScriptStruct* FRigUnit_RotationConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_RotationConstraint, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_RotationConstraint"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_RotationConstraint_Execute;
		Arguments_FRigUnit_RotationConstraint_Execute.Emplace(TEXT("Child"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_RotationConstraint_Execute.Emplace(TEXT("bMaintainOffset"), TEXT("bool"));
		Arguments_FRigUnit_RotationConstraint_Execute.Emplace(TEXT("Filter"), TEXT("FFilterOptionPerAxis"));
		Arguments_FRigUnit_RotationConstraint_Execute.Emplace(TEXT("Parents"), TEXT("TArray<FConstraintParent>"));
		Arguments_FRigUnit_RotationConstraint_Execute.Emplace(TEXT("AdvancedSettings"), TEXT("FRigUnit_RotationConstraint_AdvancedSettings"));
		Arguments_FRigUnit_RotationConstraint_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_RotationConstraint::Execute"), &FRigUnit_RotationConstraint::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraint.OuterSingleton, Arguments_FRigUnit_RotationConstraint_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraint.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_RotationConstraint>()
{
	return FRigUnit_RotationConstraint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Child_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Child;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMaintainOffset_MetaData[];
#endif
		static void NewProp_bMaintainOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Filter;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Parents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdvancedSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/**\n* Constrains an item's rotation to multiple items' rotations \n*/" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Rotation Constraint" },
		{ "Keywords", "Parent,Orientation,Orient,Rotate" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "ToolTip", "Constrains an item's rotation to multiple items' rotations" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_RotationConstraint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_Child_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_Child = { "Child", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RotationConstraint, Child), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_Child_MetaData), Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_Child_MetaData) }; // 422817336
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_bMaintainOffset_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_bMaintainOffset_SetBit(void* Obj)
	{
		((FRigUnit_RotationConstraint*)Obj)->bMaintainOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_bMaintainOffset = { "bMaintainOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_RotationConstraint), &Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_bMaintainOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_bMaintainOffset_MetaData), Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_bMaintainOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_Filter_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RotationConstraint, Filter), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_Filter_MetaData), Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_Filter_MetaData) }; // 2587098508
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_Parents_Inner = { "Parents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConstraintParent, METADATA_PARAMS(0, nullptr) }; // 872784768
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_Parents_MetaData[] = {
		{ "Category", "Constraint" },
		{ "DefaultArraySize", "1" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_Parents = { "Parents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RotationConstraint, Parents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_Parents_MetaData), Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_Parents_MetaData) }; // 872784768
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_AdvancedSettings_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_AdvancedSettings = { "AdvancedSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RotationConstraint, AdvancedSettings), Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_AdvancedSettings_MetaData), Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_AdvancedSettings_MetaData) }; // 2808428142
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RotationConstraint, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_Weight_MetaData), Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_Weight_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_Child,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_bMaintainOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_Filter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_Parents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_Parents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_AdvancedSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewProp_Weight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_RotationConstraint",
		Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::PropPointers),
		sizeof(FRigUnit_RotationConstraint),
		alignof(FRigUnit_RotationConstraint),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_RotationConstraint()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraint.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraint.InnerSingleton;
	}

void FRigUnit_RotationConstraint::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_RotationConstraint::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FConstraintParent> Parents_3_Array(Parents);
	
	StaticExecute(
		InExecuteContext,
		Child,
		bMaintainOffset,
		Filter,
		Parents_3_Array,
		AdvancedSettings,
		Weight
	);
}


static_assert(std::is_polymorphic<FRigUnit_RotationConstraintLocalSpaceOffset>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_RotationConstraintLocalSpaceOffset cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraintLocalSpaceOffset;
class UScriptStruct* FRigUnit_RotationConstraintLocalSpaceOffset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraintLocalSpaceOffset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraintLocalSpaceOffset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_RotationConstraintLocalSpaceOffset"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_RotationConstraintLocalSpaceOffset_Execute;
		Arguments_FRigUnit_RotationConstraintLocalSpaceOffset_Execute.Emplace(TEXT("Child"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_RotationConstraintLocalSpaceOffset_Execute.Emplace(TEXT("bMaintainOffset"), TEXT("bool"));
		Arguments_FRigUnit_RotationConstraintLocalSpaceOffset_Execute.Emplace(TEXT("Filter"), TEXT("FFilterOptionPerAxis"));
		Arguments_FRigUnit_RotationConstraintLocalSpaceOffset_Execute.Emplace(TEXT("Parents"), TEXT("TArray<FConstraintParent>"));
		Arguments_FRigUnit_RotationConstraintLocalSpaceOffset_Execute.Emplace(TEXT("AdvancedSettings"), TEXT("FRigUnit_RotationConstraint_AdvancedSettings"));
		Arguments_FRigUnit_RotationConstraintLocalSpaceOffset_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_RotationConstraintLocalSpaceOffset_Execute.Emplace(TEXT("ChildCache"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_RotationConstraintLocalSpaceOffset_Execute.Emplace(TEXT("ParentCaches"), TEXT("TArray<FCachedRigElement>"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_RotationConstraintLocalSpaceOffset::Execute"), &FRigUnit_RotationConstraintLocalSpaceOffset::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraintLocalSpaceOffset.OuterSingleton, Arguments_FRigUnit_RotationConstraintLocalSpaceOffset_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraintLocalSpaceOffset.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_RotationConstraintLocalSpaceOffset>()
{
	return FRigUnit_RotationConstraintLocalSpaceOffset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Child_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Child;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMaintainOffset_MetaData[];
#endif
		static void NewProp_bMaintainOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Filter;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Parents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdvancedSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildCache_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChildCache;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentCaches_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentCaches_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParentCaches;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/**\n* Constrains an item's rotation to multiple items' rotations \n*/" },
		{ "DisplayName", "Rotation Constraint" },
		{ "Keywords", "Parent,Orientation,Orient,Rotate" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "ToolTip", "Constrains an item's rotation to multiple items' rotations" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_RotationConstraintLocalSpaceOffset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_Child_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_Child = { "Child", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RotationConstraintLocalSpaceOffset, Child), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_Child_MetaData), Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_Child_MetaData) }; // 422817336
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_bMaintainOffset_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_bMaintainOffset_SetBit(void* Obj)
	{
		((FRigUnit_RotationConstraintLocalSpaceOffset*)Obj)->bMaintainOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_bMaintainOffset = { "bMaintainOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_RotationConstraintLocalSpaceOffset), &Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_bMaintainOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_bMaintainOffset_MetaData), Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_bMaintainOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_Filter_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RotationConstraintLocalSpaceOffset, Filter), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_Filter_MetaData), Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_Filter_MetaData) }; // 2587098508
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_Parents_Inner = { "Parents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConstraintParent, METADATA_PARAMS(0, nullptr) }; // 872784768
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_Parents_MetaData[] = {
		{ "Category", "Constraint" },
		{ "DefaultArraySize", "1" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_Parents = { "Parents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RotationConstraintLocalSpaceOffset, Parents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_Parents_MetaData), Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_Parents_MetaData) }; // 872784768
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_AdvancedSettings_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_AdvancedSettings = { "AdvancedSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RotationConstraintLocalSpaceOffset, AdvancedSettings), Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_AdvancedSettings_MetaData), Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_AdvancedSettings_MetaData) }; // 2808428142
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RotationConstraintLocalSpaceOffset, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_Weight_MetaData), Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_Weight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_ChildCache_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_ChildCache = { "ChildCache", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RotationConstraintLocalSpaceOffset, ChildCache), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_ChildCache_MetaData), Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_ChildCache_MetaData) }; // 968212372
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_ParentCaches_Inner = { "ParentCaches", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(0, nullptr) }; // 968212372
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_ParentCaches_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_ParentCaches = { "ParentCaches", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RotationConstraintLocalSpaceOffset, ParentCaches), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_ParentCaches_MetaData), Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_ParentCaches_MetaData) }; // 968212372
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_Child,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_bMaintainOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_Filter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_Parents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_Parents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_AdvancedSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_ChildCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_ParentCaches_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewProp_ParentCaches,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_RotationConstraintLocalSpaceOffset",
		Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::PropPointers),
		sizeof(FRigUnit_RotationConstraintLocalSpaceOffset),
		alignof(FRigUnit_RotationConstraintLocalSpaceOffset),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraintLocalSpaceOffset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraintLocalSpaceOffset.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraintLocalSpaceOffset.InnerSingleton;
	}

void FRigUnit_RotationConstraintLocalSpaceOffset::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_RotationConstraintLocalSpaceOffset::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FConstraintParent> Parents_3_Array(Parents);
	
	StaticExecute(
		InExecuteContext,
		Child,
		bMaintainOffset,
		Filter,
		Parents_3_Array,
		AdvancedSettings,
		Weight,
		ChildCache,
		ParentCaches
	);
}


static_assert(std::is_polymorphic<FRigUnit_ScaleConstraint>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_ScaleConstraint cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ScaleConstraint;
class UScriptStruct* FRigUnit_ScaleConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ScaleConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ScaleConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ScaleConstraint"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ScaleConstraint_Execute;
		Arguments_FRigUnit_ScaleConstraint_Execute.Emplace(TEXT("Child"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_ScaleConstraint_Execute.Emplace(TEXT("bMaintainOffset"), TEXT("bool"));
		Arguments_FRigUnit_ScaleConstraint_Execute.Emplace(TEXT("Filter"), TEXT("FFilterOptionPerAxis"));
		Arguments_FRigUnit_ScaleConstraint_Execute.Emplace(TEXT("Parents"), TEXT("TArray<FConstraintParent>"));
		Arguments_FRigUnit_ScaleConstraint_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ScaleConstraint::Execute"), &FRigUnit_ScaleConstraint::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ScaleConstraint.OuterSingleton, Arguments_FRigUnit_ScaleConstraint_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ScaleConstraint.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ScaleConstraint>()
{
	return FRigUnit_ScaleConstraint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Child_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Child;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMaintainOffset_MetaData[];
#endif
		static void NewProp_bMaintainOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Filter;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Parents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/**\n* Constrains an item's scale to multiple items' scales\n*/" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Scale Constraint" },
		{ "Keywords", "Parent, Size" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "ToolTip", "Constrains an item's scale to multiple items' scales" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ScaleConstraint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_Child_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_Child = { "Child", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ScaleConstraint, Child), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_Child_MetaData), Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_Child_MetaData) }; // 422817336
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_bMaintainOffset_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_bMaintainOffset_SetBit(void* Obj)
	{
		((FRigUnit_ScaleConstraint*)Obj)->bMaintainOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_bMaintainOffset = { "bMaintainOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_ScaleConstraint), &Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_bMaintainOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_bMaintainOffset_MetaData), Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_bMaintainOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_Filter_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ScaleConstraint, Filter), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_Filter_MetaData), Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_Filter_MetaData) }; // 2587098508
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_Parents_Inner = { "Parents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConstraintParent, METADATA_PARAMS(0, nullptr) }; // 872784768
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_Parents_MetaData[] = {
		{ "Category", "Constraint" },
		{ "DefaultArraySize", "1" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_Parents = { "Parents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ScaleConstraint, Parents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_Parents_MetaData), Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_Parents_MetaData) }; // 872784768
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ScaleConstraint, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_Weight_MetaData), Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_Weight_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_Child,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_bMaintainOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_Filter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_Parents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_Parents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewProp_Weight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_ScaleConstraint",
		Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::PropPointers),
		sizeof(FRigUnit_ScaleConstraint),
		alignof(FRigUnit_ScaleConstraint),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ScaleConstraint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ScaleConstraint.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ScaleConstraint.InnerSingleton;
	}

void FRigUnit_ScaleConstraint::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_ScaleConstraint::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FConstraintParent> Parents_3_Array(Parents);
	
	StaticExecute(
		InExecuteContext,
		Child,
		bMaintainOffset,
		Filter,
		Parents_3_Array,
		Weight
	);
}


static_assert(std::is_polymorphic<FRigUnit_ScaleConstraintLocalSpaceOffset>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_ScaleConstraintLocalSpaceOffset cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ScaleConstraintLocalSpaceOffset;
class UScriptStruct* FRigUnit_ScaleConstraintLocalSpaceOffset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ScaleConstraintLocalSpaceOffset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ScaleConstraintLocalSpaceOffset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ScaleConstraintLocalSpaceOffset"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ScaleConstraintLocalSpaceOffset_Execute;
		Arguments_FRigUnit_ScaleConstraintLocalSpaceOffset_Execute.Emplace(TEXT("Child"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_ScaleConstraintLocalSpaceOffset_Execute.Emplace(TEXT("bMaintainOffset"), TEXT("bool"));
		Arguments_FRigUnit_ScaleConstraintLocalSpaceOffset_Execute.Emplace(TEXT("Filter"), TEXT("FFilterOptionPerAxis"));
		Arguments_FRigUnit_ScaleConstraintLocalSpaceOffset_Execute.Emplace(TEXT("Parents"), TEXT("TArray<FConstraintParent>"));
		Arguments_FRigUnit_ScaleConstraintLocalSpaceOffset_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_ScaleConstraintLocalSpaceOffset_Execute.Emplace(TEXT("ChildCache"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_ScaleConstraintLocalSpaceOffset_Execute.Emplace(TEXT("ParentCaches"), TEXT("TArray<FCachedRigElement>"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ScaleConstraintLocalSpaceOffset::Execute"), &FRigUnit_ScaleConstraintLocalSpaceOffset::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ScaleConstraintLocalSpaceOffset.OuterSingleton, Arguments_FRigUnit_ScaleConstraintLocalSpaceOffset_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ScaleConstraintLocalSpaceOffset.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ScaleConstraintLocalSpaceOffset>()
{
	return FRigUnit_ScaleConstraintLocalSpaceOffset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Child_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Child;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMaintainOffset_MetaData[];
#endif
		static void NewProp_bMaintainOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Filter;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Parents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildCache_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChildCache;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentCaches_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentCaches_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParentCaches;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/**\n* Constrains an item's scale to multiple items' scales\n*/" },
		{ "DisplayName", "Scale Constraint" },
		{ "Keywords", "Parent, Size" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
		{ "ToolTip", "Constrains an item's scale to multiple items' scales" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ScaleConstraintLocalSpaceOffset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_Child_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_Child = { "Child", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ScaleConstraintLocalSpaceOffset, Child), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_Child_MetaData), Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_Child_MetaData) }; // 422817336
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_bMaintainOffset_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_bMaintainOffset_SetBit(void* Obj)
	{
		((FRigUnit_ScaleConstraintLocalSpaceOffset*)Obj)->bMaintainOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_bMaintainOffset = { "bMaintainOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_ScaleConstraintLocalSpaceOffset), &Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_bMaintainOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_bMaintainOffset_MetaData), Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_bMaintainOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_Filter_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ScaleConstraintLocalSpaceOffset, Filter), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_Filter_MetaData), Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_Filter_MetaData) }; // 2587098508
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_Parents_Inner = { "Parents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConstraintParent, METADATA_PARAMS(0, nullptr) }; // 872784768
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_Parents_MetaData[] = {
		{ "Category", "Constraint" },
		{ "DefaultArraySize", "1" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_Parents = { "Parents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ScaleConstraintLocalSpaceOffset, Parents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_Parents_MetaData), Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_Parents_MetaData) }; // 872784768
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ScaleConstraintLocalSpaceOffset, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_Weight_MetaData), Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_Weight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_ChildCache_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_ChildCache = { "ChildCache", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ScaleConstraintLocalSpaceOffset, ChildCache), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_ChildCache_MetaData), Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_ChildCache_MetaData) }; // 968212372
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_ParentCaches_Inner = { "ParentCaches", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(0, nullptr) }; // 968212372
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_ParentCaches_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_ParentCaches = { "ParentCaches", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ScaleConstraintLocalSpaceOffset, ParentCaches), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_ParentCaches_MetaData), Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_ParentCaches_MetaData) }; // 968212372
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_Child,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_bMaintainOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_Filter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_Parents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_Parents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_ChildCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_ParentCaches_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewProp_ParentCaches,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_ScaleConstraintLocalSpaceOffset",
		Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::PropPointers),
		sizeof(FRigUnit_ScaleConstraintLocalSpaceOffset),
		alignof(FRigUnit_ScaleConstraintLocalSpaceOffset),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ScaleConstraintLocalSpaceOffset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ScaleConstraintLocalSpaceOffset.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ScaleConstraintLocalSpaceOffset.InnerSingleton;
	}

void FRigUnit_ScaleConstraintLocalSpaceOffset::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_ScaleConstraintLocalSpaceOffset::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FConstraintParent> Parents_3_Array(Parents);
	
	StaticExecute(
		InExecuteContext,
		Child,
		bMaintainOffset,
		Filter,
		Parents_3_Array,
		Weight,
		ChildCache,
		ParentCaches
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_Statics::EnumInfo[] = {
		{ EConstraintInterpType_StaticEnum, TEXT("EConstraintInterpType"), &Z_Registration_Info_UEnum_EConstraintInterpType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1660339667U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_Statics::ScriptStructInfo[] = {
		{ FConstraintTarget::StaticStruct, Z_Construct_UScriptStruct_FConstraintTarget_Statics::NewStructOps, TEXT("ConstraintTarget"), &Z_Registration_Info_UScriptStruct_ConstraintTarget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConstraintTarget), 3461522500U) },
		{ FRigUnit_TransformConstraint_WorkData::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics::NewStructOps, TEXT("RigUnit_TransformConstraint_WorkData"), &Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraint_WorkData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_TransformConstraint_WorkData), 1116485664U) },
		{ FRigUnit_TransformConstraint::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::NewStructOps, TEXT("RigUnit_TransformConstraint"), &Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_TransformConstraint), 833651740U) },
		{ FRigUnit_TransformConstraintPerItem::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::NewStructOps, TEXT("RigUnit_TransformConstraintPerItem"), &Z_Registration_Info_UScriptStruct_RigUnit_TransformConstraintPerItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_TransformConstraintPerItem), 3881738696U) },
		{ FConstraintParent::StaticStruct, Z_Construct_UScriptStruct_FConstraintParent_Statics::NewStructOps, TEXT("ConstraintParent"), &Z_Registration_Info_UScriptStruct_ConstraintParent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConstraintParent), 872784768U) },
		{ FRigUnit_ParentConstraint_AdvancedSettings::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics::NewStructOps, TEXT("RigUnit_ParentConstraint_AdvancedSettings"), &Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraint_AdvancedSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ParentConstraint_AdvancedSettings), 2011354463U) },
		{ FRigUnit_ParentConstraint::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics::NewStructOps, TEXT("RigUnit_ParentConstraint"), &Z_Registration_Info_UScriptStruct_RigUnit_ParentConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ParentConstraint), 185131562U) },
		{ FRigUnit_PositionConstraint::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::NewStructOps, TEXT("RigUnit_PositionConstraint"), &Z_Registration_Info_UScriptStruct_RigUnit_PositionConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_PositionConstraint), 947797560U) },
		{ FRigUnit_PositionConstraintLocalSpaceOffset::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::NewStructOps, TEXT("RigUnit_PositionConstraintLocalSpaceOffset"), &Z_Registration_Info_UScriptStruct_RigUnit_PositionConstraintLocalSpaceOffset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_PositionConstraintLocalSpaceOffset), 1080769952U) },
		{ FRigUnit_RotationConstraint_AdvancedSettings::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics::NewStructOps, TEXT("RigUnit_RotationConstraint_AdvancedSettings"), &Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraint_AdvancedSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_RotationConstraint_AdvancedSettings), 2808428142U) },
		{ FRigUnit_RotationConstraint::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::NewStructOps, TEXT("RigUnit_RotationConstraint"), &Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_RotationConstraint), 2780058480U) },
		{ FRigUnit_RotationConstraintLocalSpaceOffset::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::NewStructOps, TEXT("RigUnit_RotationConstraintLocalSpaceOffset"), &Z_Registration_Info_UScriptStruct_RigUnit_RotationConstraintLocalSpaceOffset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_RotationConstraintLocalSpaceOffset), 2808934209U) },
		{ FRigUnit_ScaleConstraint::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::NewStructOps, TEXT("RigUnit_ScaleConstraint"), &Z_Registration_Info_UScriptStruct_RigUnit_ScaleConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ScaleConstraint), 2660926689U) },
		{ FRigUnit_ScaleConstraintLocalSpaceOffset::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::NewStructOps, TEXT("RigUnit_ScaleConstraintLocalSpaceOffset"), &Z_Registration_Info_UScriptStruct_RigUnit_ScaleConstraintLocalSpaceOffset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ScaleConstraintLocalSpaceOffset), 2290216469U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_803197570(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
