// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Param/RigUnit_AnimNextParametersBeginExecution.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMNEXT_RigUnit_AnimNextParametersBeginExecution_generated_h
#error "RigUnit_AnimNextParametersBeginExecution.generated.h already included, missing '#pragma once' in RigUnit_AnimNextParametersBeginExecution.h"
#endif
#define ANIMNEXT_RigUnit_AnimNextParametersBeginExecution_generated_h


#define FRigUnit_AnimNextParametersBeginExecution_Execute() \
	void FRigUnit_AnimNextParametersBeginExecution::StaticExecute( \
		FAnimNextParametersExecuteContext& ExecuteContext \
	)

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Param_RigUnit_AnimNextParametersBeginExecution_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AnimNextParametersBeginExecution_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FAnimNextParametersExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FAnimNextParametersExecuteContext& ExecuteContext \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextParametersExecuteContext>() \
		); \
	} \
	typedef FRigUnit_AnimNextParametersBase Super;


template<> ANIMNEXT_API UScriptStruct* StaticStruct<struct FRigUnit_AnimNextParametersBeginExecution>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Param_RigUnit_AnimNextParametersBeginExecution_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
