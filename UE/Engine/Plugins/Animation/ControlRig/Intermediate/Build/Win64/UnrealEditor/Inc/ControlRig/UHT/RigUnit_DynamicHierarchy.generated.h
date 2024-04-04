// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Execution/RigUnit_DynamicHierarchy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_DynamicHierarchy_generated_h
#error "RigUnit_DynamicHierarchy.generated.h already included, missing '#pragma once' in RigUnit_DynamicHierarchy.h"
#endif
#define CONTROLRIG_RigUnit_DynamicHierarchy_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DynamicHierarchyBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_DynamicHierarchyBase>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DynamicHierarchyBaseMutable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_DynamicHierarchyBaseMutable>();


#define FRigUnit_AddParent_Execute() \
	void FRigUnit_AddParent::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const FRigElementKey& Parent \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AddParent_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const FRigElementKey& Parent \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Child = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Child, \
			Parent \
		); \
	} \
	typedef FRigUnit_DynamicHierarchyBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_AddParent>();


#define FRigUnit_SetDefaultParent_Execute() \
	void FRigUnit_SetDefaultParent::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const FRigElementKey& Parent \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetDefaultParent_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const FRigElementKey& Parent \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Child = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Child, \
			Parent \
		); \
	} \
	typedef FRigUnit_DynamicHierarchyBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetDefaultParent>();


#define FRigUnit_SwitchParent_Execute() \
	void FRigUnit_SwitchParent::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const ERigSwitchParentMode Mode, \
		const FRigElementKey& Child, \
		const FRigElementKey& Parent, \
		const bool bMaintainGlobal \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_104_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SwitchParent_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const ERigSwitchParentMode Mode, \
		const FRigElementKey& Child, \
		const FRigElementKey& Parent, \
		const bool bMaintainGlobal \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const ERigSwitchParentMode Mode = *(ERigSwitchParentMode*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& Child = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[2].GetData(false); \
		const bool bMaintainGlobal = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Mode, \
			Child, \
			Parent, \
			bMaintainGlobal \
		); \
	} \
	typedef FRigUnit_DynamicHierarchyBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SwitchParent>();


#define FRigUnit_HierarchyGetParentWeights_Execute() \
	void FRigUnit_HierarchyGetParentWeights::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		TArray<FRigElementWeight>& Weights, \
		FRigElementKeyCollection& Parents \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_143_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeights_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		TArray<FRigElementWeight>& Weights, \
		FRigElementKeyCollection& Parents \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Child = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		TArray<FRigElementWeight>& Weights = *(TArray<FRigElementWeight>*)RigVMMemoryHandles[1].GetData(false); \
		FRigElementKeyCollection& Parents = *(FRigElementKeyCollection*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Child, \
			Weights, \
			Parents \
		); \
	} \
	typedef FRigUnit_DynamicHierarchyBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyGetParentWeights>();


#define FRigUnit_HierarchyGetParentWeightsArray_Execute() \
	void FRigUnit_HierarchyGetParentWeightsArray::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		TArray<FRigElementWeight>& Weights, \
		TArray<FRigElementKey>& Parents \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_181_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeightsArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		TArray<FRigElementWeight>& Weights, \
		TArray<FRigElementKey>& Parents \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Child = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		TArray<FRigElementWeight>& Weights = *(TArray<FRigElementWeight>*)RigVMMemoryHandles[1].GetData(false); \
		TArray<FRigElementKey>& Parents = *(TArray<FRigElementKey>*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Child, \
			Weights, \
			Parents \
		); \
	} \
	typedef FRigUnit_DynamicHierarchyBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyGetParentWeightsArray>();


#define FRigUnit_HierarchySetParentWeights_Execute() \
	void FRigUnit_HierarchySetParentWeights::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const TArrayView<const FRigElementWeight>& Weights \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_216_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchySetParentWeights_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const TArrayView<const FRigElementWeight>& Weights \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Child = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		TArray<FRigElementWeight>& Weights = *(TArray<FRigElementWeight>*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Child, \
			Weights \
		); \
	} \
	typedef FRigUnit_DynamicHierarchyBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchySetParentWeights>();


#define FRigUnit_HierarchyReset_Execute() \
	void FRigUnit_HierarchyReset::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_247_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyReset_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>() \
		); \
	} \
	typedef FRigUnit_DynamicHierarchyBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyReset>();


#define FRigUnit_HierarchyImportFromSkeleton_Execute() \
	void FRigUnit_HierarchyImportFromSkeleton::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& NameSpace, \
		const bool bIncludeCurves, \
		TArray<FRigElementKey>& Items \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_264_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyImportFromSkeleton_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& NameSpace, \
		const bool bIncludeCurves, \
		TArray<FRigElementKey>& Items \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& NameSpace = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const bool bIncludeCurves = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			NameSpace, \
			bIncludeCurves, \
			Items \
		); \
	} \
	typedef FRigUnit_DynamicHierarchyBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyImportFromSkeleton>();


#define FRigUnit_HierarchyRemoveElement_Execute() \
	void FRigUnit_HierarchyRemoveElement::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		bool& bSuccess \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_292_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyRemoveElement_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		bool& bSuccess \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		bool& bSuccess = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			bSuccess \
		); \
	} \
	typedef FRigUnit_DynamicHierarchyBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyRemoveElement>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_319_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddElement_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_DynamicHierarchyBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddElement>();


#define FRigUnit_HierarchyAddBone_Execute() \
	void FRigUnit_HierarchyAddBone::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const ERigVMTransformSpace Space, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_355_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddBone_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const ERigVMTransformSpace Space, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[1].GetData(false); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[2].GetData(false); \
		const FName& Name = *(FName*)RigVMMemoryHandles[3].GetData(false); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Transform, \
			Space, \
			Parent, \
			Name, \
			Item \
		); \
	} \
	typedef FRigUnit_HierarchyAddElement Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddBone>();


#define FRigUnit_HierarchyAddNull_Execute() \
	void FRigUnit_HierarchyAddNull::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const ERigVMTransformSpace Space, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_389_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddNull_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const ERigVMTransformSpace Space, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[1].GetData(false); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[2].GetData(false); \
		const FName& Name = *(FName*)RigVMMemoryHandles[3].GetData(false); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Transform, \
			Space, \
			Parent, \
			Name, \
			Item \
		); \
	} \
	typedef FRigUnit_HierarchyAddElement Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddNull>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_419_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControl_Settings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddControl_Settings>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_435_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControl_ShapeSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddControl_ShapeSettings>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_462_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControl_ProxySettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddControl_ProxySettings>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_484_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlFloat_LimitSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddControlFloat_LimitSettings>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_511_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlFloat_Settings_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_HierarchyAddControl_Settings Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddControlFloat_Settings>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_542_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlElement_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_HierarchyAddElement Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddControlElement>();


#define FRigUnit_HierarchyAddControlFloat_Execute() \
	void FRigUnit_HierarchyAddControlFloat::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const float InitialValue, \
		const FRigUnit_HierarchyAddControlFloat_Settings& Settings, \
		const FTransform& OffsetTransform, \
		const ERigVMTransformSpace OffsetSpace, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_577_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlFloat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const float InitialValue, \
		const FRigUnit_HierarchyAddControlFloat_Settings& Settings, \
		const FTransform& OffsetTransform, \
		const ERigVMTransformSpace OffsetSpace, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float InitialValue = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const FRigUnit_HierarchyAddControlFloat_Settings& Settings = *(FRigUnit_HierarchyAddControlFloat_Settings*)RigVMMemoryHandles[1].GetData(false); \
		const FTransform& OffsetTransform = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		const ERigVMTransformSpace OffsetSpace = *(ERigVMTransformSpace*)RigVMMemoryHandles[3].GetData(false); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[4].GetData(false); \
		const FName& Name = *(FName*)RigVMMemoryHandles[5].GetData(false); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[6].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			InitialValue, \
			Settings, \
			OffsetTransform, \
			OffsetSpace, \
			Parent, \
			Name, \
			Item \
		); \
	} \
	typedef FRigUnit_HierarchyAddControlElement Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddControlFloat>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_605_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlInteger_LimitSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddControlInteger_LimitSettings>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_632_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlInteger_Settings_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_HierarchyAddControl_Settings Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddControlInteger_Settings>();


#define FRigUnit_HierarchyAddControlInteger_Execute() \
	void FRigUnit_HierarchyAddControlInteger::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const int32 InitialValue, \
		const FRigUnit_HierarchyAddControlInteger_Settings& Settings, \
		const FTransform& OffsetTransform, \
		const ERigVMTransformSpace OffsetSpace, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_662_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlInteger_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const int32 InitialValue, \
		const FRigUnit_HierarchyAddControlInteger_Settings& Settings, \
		const FTransform& OffsetTransform, \
		const ERigVMTransformSpace OffsetSpace, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const int32 InitialValue = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const FRigUnit_HierarchyAddControlInteger_Settings& Settings = *(FRigUnit_HierarchyAddControlInteger_Settings*)RigVMMemoryHandles[1].GetData(false); \
		const FTransform& OffsetTransform = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		const ERigVMTransformSpace OffsetSpace = *(ERigVMTransformSpace*)RigVMMemoryHandles[3].GetData(false); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[4].GetData(false); \
		const FName& Name = *(FName*)RigVMMemoryHandles[5].GetData(false); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[6].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			InitialValue, \
			Settings, \
			OffsetTransform, \
			OffsetSpace, \
			Parent, \
			Name, \
			Item \
		); \
	} \
	typedef FRigUnit_HierarchyAddControlElement Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddControlInteger>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_690_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlVector2D_LimitSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddControlVector2D_LimitSettings>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_721_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlVector2D_Settings_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_HierarchyAddControl_Settings Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddControlVector2D_Settings>();


#define FRigUnit_HierarchyAddControlVector2D_Execute() \
	void FRigUnit_HierarchyAddControlVector2D::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FVector2D& InitialValue, \
		const FRigUnit_HierarchyAddControlVector2D_Settings& Settings, \
		const FTransform& OffsetTransform, \
		const ERigVMTransformSpace OffsetSpace, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_756_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlVector2D_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FVector2D& InitialValue, \
		const FRigUnit_HierarchyAddControlVector2D_Settings& Settings, \
		const FTransform& OffsetTransform, \
		const ERigVMTransformSpace OffsetSpace, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector2D& InitialValue = *(FVector2D*)RigVMMemoryHandles[0].GetData(false); \
		const FRigUnit_HierarchyAddControlVector2D_Settings& Settings = *(FRigUnit_HierarchyAddControlVector2D_Settings*)RigVMMemoryHandles[1].GetData(false); \
		const FTransform& OffsetTransform = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		const ERigVMTransformSpace OffsetSpace = *(ERigVMTransformSpace*)RigVMMemoryHandles[3].GetData(false); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[4].GetData(false); \
		const FName& Name = *(FName*)RigVMMemoryHandles[5].GetData(false); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[6].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			InitialValue, \
			Settings, \
			OffsetTransform, \
			OffsetSpace, \
			Parent, \
			Name, \
			Item \
		); \
	} \
	typedef FRigUnit_HierarchyAddControlElement Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddControlVector2D>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_784_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlVector_LimitSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddControlVector_LimitSettings>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_819_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlVector_Settings_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_HierarchyAddControl_Settings Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddControlVector_Settings>();


#define FRigUnit_HierarchyAddControlVector_Execute() \
	void FRigUnit_HierarchyAddControlVector::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FVector& InitialValue, \
		const FRigUnit_HierarchyAddControlVector_Settings& Settings, \
		const FTransform& OffsetTransform, \
		const ERigVMTransformSpace OffsetSpace, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_858_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FVector& InitialValue, \
		const FRigUnit_HierarchyAddControlVector_Settings& Settings, \
		const FTransform& OffsetTransform, \
		const ERigVMTransformSpace OffsetSpace, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& InitialValue = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FRigUnit_HierarchyAddControlVector_Settings& Settings = *(FRigUnit_HierarchyAddControlVector_Settings*)RigVMMemoryHandles[1].GetData(false); \
		const FTransform& OffsetTransform = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		const ERigVMTransformSpace OffsetSpace = *(ERigVMTransformSpace*)RigVMMemoryHandles[3].GetData(false); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[4].GetData(false); \
		const FName& Name = *(FName*)RigVMMemoryHandles[5].GetData(false); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[6].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			InitialValue, \
			Settings, \
			OffsetTransform, \
			OffsetSpace, \
			Parent, \
			Name, \
			Item \
		); \
	} \
	typedef FRigUnit_HierarchyAddControlElement Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddControlVector>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_889_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlRotator_LimitSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddControlRotator_LimitSettings>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_924_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlRotator_Settings_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_HierarchyAddControl_Settings Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddControlRotator_Settings>();


#define FRigUnit_HierarchyAddControlRotator_Execute() \
	void FRigUnit_HierarchyAddControlRotator::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRotator& InitialValue, \
		const FRigUnit_HierarchyAddControlRotator_Settings& Settings, \
		const FTransform& OffsetTransform, \
		const ERigVMTransformSpace OffsetSpace, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_959_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlRotator_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRotator& InitialValue, \
		const FRigUnit_HierarchyAddControlRotator_Settings& Settings, \
		const FTransform& OffsetTransform, \
		const ERigVMTransformSpace OffsetSpace, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRotator& InitialValue = *(FRotator*)RigVMMemoryHandles[0].GetData(false); \
		const FRigUnit_HierarchyAddControlRotator_Settings& Settings = *(FRigUnit_HierarchyAddControlRotator_Settings*)RigVMMemoryHandles[1].GetData(false); \
		const FTransform& OffsetTransform = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		const ERigVMTransformSpace OffsetSpace = *(ERigVMTransformSpace*)RigVMMemoryHandles[3].GetData(false); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[4].GetData(false); \
		const FName& Name = *(FName*)RigVMMemoryHandles[5].GetData(false); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[6].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			InitialValue, \
			Settings, \
			OffsetTransform, \
			OffsetSpace, \
			Parent, \
			Name, \
			Item \
		); \
	} \
	typedef FRigUnit_HierarchyAddControlElement Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddControlRotator>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_987_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlTransform_Settings_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_HierarchyAddControl_Settings Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddControlTransform_Settings>();


#define FRigUnit_HierarchyAddControlTransform_Execute() \
	void FRigUnit_HierarchyAddControlTransform::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& InitialValue, \
		const FRigUnit_HierarchyAddControlTransform_Settings& Settings, \
		const FTransform& OffsetTransform, \
		const ERigVMTransformSpace OffsetSpace, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_1019_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& InitialValue, \
		const FRigUnit_HierarchyAddControlTransform_Settings& Settings, \
		const FTransform& OffsetTransform, \
		const ERigVMTransformSpace OffsetSpace, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& InitialValue = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const FRigUnit_HierarchyAddControlTransform_Settings& Settings = *(FRigUnit_HierarchyAddControlTransform_Settings*)RigVMMemoryHandles[1].GetData(false); \
		const FTransform& OffsetTransform = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		const ERigVMTransformSpace OffsetSpace = *(ERigVMTransformSpace*)RigVMMemoryHandles[3].GetData(false); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[4].GetData(false); \
		const FName& Name = *(FName*)RigVMMemoryHandles[5].GetData(false); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[6].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			InitialValue, \
			Settings, \
			OffsetTransform, \
			OffsetSpace, \
			Parent, \
			Name, \
			Item \
		); \
	} \
	typedef FRigUnit_HierarchyAddControlElement Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddControlTransform>();


#define FRigUnit_HierarchyAddAnimationChannelBool_Execute() \
	void FRigUnit_HierarchyAddAnimationChannelBool::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const bool InitialValue, \
		const bool MinimumValue, \
		const bool MaximumValue, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_1051_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelBool_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const bool InitialValue, \
		const bool MinimumValue, \
		const bool MaximumValue, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const bool InitialValue = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		const bool MinimumValue = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		const bool MaximumValue = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[3].GetData(false); \
		const FName& Name = *(FName*)RigVMMemoryHandles[4].GetData(false); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[5].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			InitialValue, \
			MinimumValue, \
			MaximumValue, \
			Parent, \
			Name, \
			Item \
		); \
	} \
	typedef FRigUnit_HierarchyAddElement Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddAnimationChannelBool>();


#define FRigUnit_HierarchyAddAnimationChannelFloat_Execute() \
	void FRigUnit_HierarchyAddAnimationChannelFloat::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const float InitialValue, \
		const float MinimumValue, \
		const float MaximumValue, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_1090_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelFloat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const float InitialValue, \
		const float MinimumValue, \
		const float MaximumValue, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float InitialValue = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float MinimumValue = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const float MaximumValue = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[3].GetData(false); \
		const FName& Name = *(FName*)RigVMMemoryHandles[4].GetData(false); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[5].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			InitialValue, \
			MinimumValue, \
			MaximumValue, \
			Parent, \
			Name, \
			Item \
		); \
	} \
	typedef FRigUnit_HierarchyAddElement Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddAnimationChannelFloat>();


#define FRigUnit_HierarchyAddAnimationChannelInteger_Execute() \
	void FRigUnit_HierarchyAddAnimationChannelInteger::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const int32 InitialValue, \
		const int32 MinimumValue, \
		const int32 MaximumValue, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_1129_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelInteger_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const int32 InitialValue, \
		const int32 MinimumValue, \
		const int32 MaximumValue, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const int32 InitialValue = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const int32 MinimumValue = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		const int32 MaximumValue = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[3].GetData(false); \
		const FName& Name = *(FName*)RigVMMemoryHandles[4].GetData(false); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[5].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			InitialValue, \
			MinimumValue, \
			MaximumValue, \
			Parent, \
			Name, \
			Item \
		); \
	} \
	typedef FRigUnit_HierarchyAddElement Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddAnimationChannelInteger>();


#define FRigUnit_HierarchyAddAnimationChannelVector2D_Execute() \
	void FRigUnit_HierarchyAddAnimationChannelVector2D::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FVector2D& InitialValue, \
		const FVector2D& MinimumValue, \
		const FVector2D& MaximumValue, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_1168_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelVector2D_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FVector2D& InitialValue, \
		const FVector2D& MinimumValue, \
		const FVector2D& MaximumValue, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector2D& InitialValue = *(FVector2D*)RigVMMemoryHandles[0].GetData(false); \
		const FVector2D& MinimumValue = *(FVector2D*)RigVMMemoryHandles[1].GetData(false); \
		const FVector2D& MaximumValue = *(FVector2D*)RigVMMemoryHandles[2].GetData(false); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[3].GetData(false); \
		const FName& Name = *(FName*)RigVMMemoryHandles[4].GetData(false); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[5].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			InitialValue, \
			MinimumValue, \
			MaximumValue, \
			Parent, \
			Name, \
			Item \
		); \
	} \
	typedef FRigUnit_HierarchyAddElement Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddAnimationChannelVector2D>();


#define FRigUnit_HierarchyAddAnimationChannelVector_Execute() \
	void FRigUnit_HierarchyAddAnimationChannelVector::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FVector& InitialValue, \
		const FVector& MinimumValue, \
		const FVector& MaximumValue, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_1207_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FVector& InitialValue, \
		const FVector& MinimumValue, \
		const FVector& MaximumValue, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& InitialValue = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& MinimumValue = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const FVector& MaximumValue = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[3].GetData(false); \
		const FName& Name = *(FName*)RigVMMemoryHandles[4].GetData(false); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[5].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			InitialValue, \
			MinimumValue, \
			MaximumValue, \
			Parent, \
			Name, \
			Item \
		); \
	} \
	typedef FRigUnit_HierarchyAddElement Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddAnimationChannelVector>();


#define FRigUnit_HierarchyAddAnimationChannelRotator_Execute() \
	void FRigUnit_HierarchyAddAnimationChannelRotator::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRotator& InitialValue, \
		const FRotator& MinimumValue, \
		const FRotator& MaximumValue, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_1246_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelRotator_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRotator& InitialValue, \
		const FRotator& MinimumValue, \
		const FRotator& MaximumValue, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRotator& InitialValue = *(FRotator*)RigVMMemoryHandles[0].GetData(false); \
		const FRotator& MinimumValue = *(FRotator*)RigVMMemoryHandles[1].GetData(false); \
		const FRotator& MaximumValue = *(FRotator*)RigVMMemoryHandles[2].GetData(false); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[3].GetData(false); \
		const FName& Name = *(FName*)RigVMMemoryHandles[4].GetData(false); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[5].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			InitialValue, \
			MinimumValue, \
			MaximumValue, \
			Parent, \
			Name, \
			Item \
		); \
	} \
	typedef FRigUnit_HierarchyAddElement Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddAnimationChannelRotator>();


#define FRigUnit_HierarchyGetShapeSettings_Execute() \
	void FRigUnit_HierarchyGetShapeSettings::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		FRigUnit_HierarchyAddControl_ShapeSettings& Settings \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_1284_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyGetShapeSettings_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		FRigUnit_HierarchyAddControl_ShapeSettings& Settings \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		FRigUnit_HierarchyAddControl_ShapeSettings& Settings = *(FRigUnit_HierarchyAddControl_ShapeSettings*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Settings \
		); \
	} \
	typedef FRigUnit_DynamicHierarchyBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyGetShapeSettings>();


#define FRigUnit_HierarchySetShapeSettings_Execute() \
	void FRigUnit_HierarchySetShapeSettings::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FRigUnit_HierarchyAddControl_ShapeSettings& Settings \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_1314_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchySetShapeSettings_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FRigUnit_HierarchyAddControl_ShapeSettings& Settings \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const FRigUnit_HierarchyAddControl_ShapeSettings& Settings = *(FRigUnit_HierarchyAddControl_ShapeSettings*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Settings \
		); \
	} \
	typedef FRigUnit_DynamicHierarchyBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchySetShapeSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h


#define FOREACH_ENUM_ERIGSWITCHPARENTMODE(op) \
	op(ERigSwitchParentMode::World) \
	op(ERigSwitchParentMode::DefaultParent) \
	op(ERigSwitchParentMode::ParentItem) 

enum class ERigSwitchParentMode : uint8;
template<> struct TIsUEnumClass<ERigSwitchParentMode> { enum { Value = true }; };
template<> CONTROLRIG_API UEnum* StaticEnum<ERigSwitchParentMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
