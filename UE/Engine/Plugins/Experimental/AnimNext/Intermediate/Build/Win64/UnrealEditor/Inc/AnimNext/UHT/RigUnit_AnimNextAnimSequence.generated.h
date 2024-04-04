// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/RigUnit_AnimNextAnimSequence.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMNEXT_RigUnit_AnimNextAnimSequence_generated_h
#error "RigUnit_AnimNextAnimSequence.generated.h already included, missing '#pragma once' in RigUnit_AnimNextAnimSequence.h"
#endif
#define ANIMNEXT_RigUnit_AnimNextAnimSequence_generated_h

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Private_Graph_RigUnit_AnimNextAnimSequence_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNextGraph_AnimSequence_Statics; \
	ANIMNEXT_API static class UScriptStruct* StaticStruct();


template<> ANIMNEXT_API UScriptStruct* StaticStruct<struct FAnimNextGraph_AnimSequence>();


#define FRigUnit_AnimNext_AnimSequenceAsset_Execute() \
	void FRigUnit_AnimNext_AnimSequenceAsset::StaticExecute( \
		const FAnimNextGraphExecuteContext& ExecuteContext, \
		FAnimNextGraph_AnimSequence& Sequence \
	)

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Private_Graph_RigUnit_AnimNextAnimSequence_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequenceAsset_Statics; \
	ANIMNEXT_API static class UScriptStruct* StaticStruct(); \
	void Execute(const FAnimNextGraphExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FAnimNextGraphExecuteContext& ExecuteContext, \
		FAnimNextGraph_AnimSequence& Sequence \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FAnimNextGraph_AnimSequence& Sequence = *(FAnimNextGraph_AnimSequence*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextGraphExecuteContext>(), \
			Sequence \
		); \
	} \
	typedef FRigUnit_AnimNextBase Super;


template<> ANIMNEXT_API UScriptStruct* StaticStruct<struct FRigUnit_AnimNext_AnimSequenceAsset>();

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Private_Graph_RigUnit_AnimNextAnimSequence_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics; \
	ANIMNEXT_API static class UScriptStruct* StaticStruct();


template<> ANIMNEXT_API UScriptStruct* StaticStruct<struct FAnimSequenceParameters>();


#define FRigUnit_AnimNext_AnimSequencePlayer_Initialize() \
	void FRigUnit_AnimNext_AnimSequencePlayer::StaticInitialize( \
		const FAnimNextGraphExecuteContext& ExecuteContext, \
		const FAnimSequenceParameters& Parameters, \
		const FAnimNextGraph_AnimSequence& Sequence, \
		FAnimNextGraphLODPose& LODPose \
	)
#define FRigUnit_AnimNext_AnimSequencePlayer_Execute() \
	void FRigUnit_AnimNext_AnimSequencePlayer::StaticExecute( \
		const FAnimNextGraphExecuteContext& ExecuteContext, \
		const FAnimSequenceParameters& Parameters, \
		const FAnimNextGraph_AnimSequence& Sequence, \
		FAnimNextGraphLODPose& LODPose \
	)

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Private_Graph_RigUnit_AnimNextAnimSequence_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequencePlayer_Statics; \
	ANIMNEXT_API static class UScriptStruct* StaticStruct(); \
	void Initialize(const FAnimNextGraphExecuteContext& InExecuteContext); \
	static void StaticInitialize( \
		const FAnimNextGraphExecuteContext& ExecuteContext, \
		const FAnimSequenceParameters& Parameters, \
		const FAnimNextGraph_AnimSequence& Sequence, \
		FAnimNextGraphLODPose& LODPose \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMInitialize( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FAnimSequenceParameters& Parameters = *(FAnimSequenceParameters*)RigVMMemoryHandles[0].GetData(false); \
		const FAnimNextGraph_AnimSequence& Sequence = *(FAnimNextGraph_AnimSequence*)RigVMMemoryHandles[1].GetData(false); \
		FAnimNextGraphLODPose& LODPose = *(FAnimNextGraphLODPose*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticInitialize( \
			RigVMExecuteContext.GetPublicData<FAnimNextGraphExecuteContext>(), \
			Parameters, \
			Sequence, \
			LODPose \
		); \
	} \
	void Execute(const FAnimNextGraphExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FAnimNextGraphExecuteContext& ExecuteContext, \
		const FAnimSequenceParameters& Parameters, \
		const FAnimNextGraph_AnimSequence& Sequence, \
		FAnimNextGraphLODPose& LODPose \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FAnimSequenceParameters& Parameters = *(FAnimSequenceParameters*)RigVMMemoryHandles[0].GetData(false); \
		const FAnimNextGraph_AnimSequence& Sequence = *(FAnimNextGraph_AnimSequence*)RigVMMemoryHandles[1].GetData(false); \
		FAnimNextGraphLODPose& LODPose = *(FAnimNextGraphLODPose*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextGraphExecuteContext>(), \
			Parameters, \
			Sequence, \
			LODPose \
		); \
	} \
	typedef FRigUnit_AnimNextBase Super;


template<> ANIMNEXT_API UScriptStruct* StaticStruct<struct FRigUnit_AnimNext_AnimSequencePlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Private_Graph_RigUnit_AnimNextAnimSequence_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
