// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/RigUnit_AnimNextBeginExecution.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMNEXT_RigUnit_AnimNextBeginExecution_generated_h
#error "RigUnit_AnimNextBeginExecution.generated.h already included, missing '#pragma once' in RigUnit_AnimNextBeginExecution.h"
#endif
#define ANIMNEXT_RigUnit_AnimNextBeginExecution_generated_h


#define FRigUnit_AnimNextBeginExecution_Execute() \
	void FRigUnit_AnimNextBeginExecution::StaticExecute( \
		FAnimNextGraphExecuteContext& ExecuteContext \
	)

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Graph_RigUnit_AnimNextBeginExecution_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AnimNextBeginExecution_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FAnimNextGraphExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FAnimNextGraphExecuteContext& ExecuteContext \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextGraphExecuteContext>() \
		); \
	} \
	typedef FRigUnit_AnimNextBase Super;


template<> ANIMNEXT_API UScriptStruct* StaticStruct<struct FRigUnit_AnimNextBeginExecution>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Graph_RigUnit_AnimNextBeginExecution_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
