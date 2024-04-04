// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/RigUnit_AnimNextEndExecution.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMNEXT_RigUnit_AnimNextEndExecution_generated_h
#error "RigUnit_AnimNextEndExecution.generated.h already included, missing '#pragma once' in RigUnit_AnimNextEndExecution.h"
#endif
#define ANIMNEXT_RigUnit_AnimNextEndExecution_generated_h

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Graph_RigUnit_AnimNextEndExecution_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_AnimNextBase Super;


template<> ANIMNEXT_API UScriptStruct* StaticStruct<struct FRigUnit_AnimNextEndExecution>();


#define FRigUnit_AnimNextEndExecution_Bool_Execute() \
	void FRigUnit_AnimNextEndExecution_Bool::StaticExecute( \
		FAnimNextGraphExecuteContext& ExecuteContext, \
		const bool Result \
	)

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Graph_RigUnit_AnimNextEndExecution_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Bool_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FAnimNextGraphExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FAnimNextGraphExecuteContext& ExecuteContext, \
		const bool Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const bool Result = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextGraphExecuteContext>(), \
			Result \
		); \
	} \
	typedef FRigUnit_AnimNextEndExecution Super;


template<> ANIMNEXT_API UScriptStruct* StaticStruct<struct FRigUnit_AnimNextEndExecution_Bool>();


#define FRigUnit_AnimNextEndExecution_Float_Execute() \
	void FRigUnit_AnimNextEndExecution_Float::StaticExecute( \
		FAnimNextGraphExecuteContext& ExecuteContext, \
		const float Result \
	)

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Graph_RigUnit_AnimNextEndExecution_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Float_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FAnimNextGraphExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FAnimNextGraphExecuteContext& ExecuteContext, \
		const float Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Result = *(float*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextGraphExecuteContext>(), \
			Result \
		); \
	} \
	typedef FRigUnit_AnimNextEndExecution Super;


template<> ANIMNEXT_API UScriptStruct* StaticStruct<struct FRigUnit_AnimNextEndExecution_Float>();


#define FRigUnit_AnimNextEndExecution_LODPose_Execute() \
	void FRigUnit_AnimNextEndExecution_LODPose::StaticExecute( \
		FAnimNextGraphExecuteContext& ExecuteContext, \
		const FAnimNextGraphLODPose& Result \
	)

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Graph_RigUnit_AnimNextEndExecution_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_LODPose_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FAnimNextGraphExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FAnimNextGraphExecuteContext& ExecuteContext, \
		const FAnimNextGraphLODPose& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FAnimNextGraphLODPose& Result = *(FAnimNextGraphLODPose*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextGraphExecuteContext>(), \
			Result \
		); \
	} \
	typedef FRigUnit_AnimNextEndExecution Super;


template<> ANIMNEXT_API UScriptStruct* StaticStruct<struct FRigUnit_AnimNextEndExecution_LODPose>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Graph_RigUnit_AnimNextEndExecution_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
