// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContextualAnimTypes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimSequence.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContextualAnimTypes() {}
// Cross Module References
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSceneActorComponent_NoRegister();
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister();
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSelectionCriterion_NoRegister();
	CONTEXTUALANIMATION_API UEnum* Z_Construct_UEnum_ContextualAnimation_EContextualAnimIKTargetProvider();
	CONTEXTUALANIMATION_API UEnum* Z_Construct_UEnum_ContextualAnimation_EContextualAnimJoinRule();
	CONTEXTUALANIMATION_API UEnum* Z_Construct_UEnum_ContextualAnimation_EContextualAnimWarpPointDefinitionMode();
	CONTEXTUALANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimAlignmentTrackContainer();
	CONTEXTUALANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimIKTarget();
	CONTEXTUALANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimIKTargetDefContainer();
	CONTEXTUALANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition();
	CONTEXTUALANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimQueryParams();
	CONTEXTUALANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimQueryResult();
	CONTEXTUALANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimRoleDefinition();
	CONTEXTUALANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimSceneBinding();
	CONTEXTUALANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext();
	CONTEXTUALANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimSceneBindings();
	CONTEXTUALANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimStartSceneParams();
	CONTEXTUALANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimTrack();
	CONTEXTUALANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimWarpPoint();
	CONTEXTUALANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimWarpPointCustomParams();
	CONTEXTUALANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimWarpPointDefinition();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSequenceTrackContainer();
	UPackage* Z_Construct_UPackage__Script_ContextualAnimation();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContextualAnimAlignmentTrackContainer;
class UScriptStruct* FContextualAnimAlignmentTrackContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContextualAnimAlignmentTrackContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContextualAnimAlignmentTrackContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContextualAnimAlignmentTrackContainer, (UObject*)Z_Construct_UPackage__Script_ContextualAnimation(), TEXT("ContextualAnimAlignmentTrackContainer"));
	}
	return Z_Registration_Info_UScriptStruct_ContextualAnimAlignmentTrackContainer.OuterSingleton;
}
template<> CONTEXTUALANIMATION_API UScriptStruct* StaticStruct<FContextualAnimAlignmentTrackContainer>()
{
	return FContextualAnimAlignmentTrackContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FContextualAnimAlignmentTrackContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tracks_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tracks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SampleInterval;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimAlignmentTrackContainer_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Container for alignment tracks */" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
		{ "ToolTip", "Container for alignment tracks" },
	};
#endif
	void* Z_Construct_UScriptStruct_FContextualAnimAlignmentTrackContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContextualAnimAlignmentTrackContainer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimAlignmentTrackContainer_Statics::NewProp_Tracks_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FContextualAnimAlignmentTrackContainer_Statics::NewProp_Tracks = { "Tracks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimAlignmentTrackContainer, Tracks), Z_Construct_UScriptStruct_FAnimSequenceTrackContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimAlignmentTrackContainer_Statics::NewProp_Tracks_MetaData), Z_Construct_UScriptStruct_FContextualAnimAlignmentTrackContainer_Statics::NewProp_Tracks_MetaData) }; // 4191034757
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimAlignmentTrackContainer_Statics::NewProp_SampleInterval_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FContextualAnimAlignmentTrackContainer_Statics::NewProp_SampleInterval = { "SampleInterval", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimAlignmentTrackContainer, SampleInterval), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimAlignmentTrackContainer_Statics::NewProp_SampleInterval_MetaData), Z_Construct_UScriptStruct_FContextualAnimAlignmentTrackContainer_Statics::NewProp_SampleInterval_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FContextualAnimAlignmentTrackContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimAlignmentTrackContainer_Statics::NewProp_Tracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimAlignmentTrackContainer_Statics::NewProp_SampleInterval,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContextualAnimAlignmentTrackContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContextualAnimation,
		nullptr,
		&NewStructOps,
		"ContextualAnimAlignmentTrackContainer",
		Z_Construct_UScriptStruct_FContextualAnimAlignmentTrackContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimAlignmentTrackContainer_Statics::PropPointers),
		sizeof(FContextualAnimAlignmentTrackContainer),
		alignof(FContextualAnimAlignmentTrackContainer),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimAlignmentTrackContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FContextualAnimAlignmentTrackContainer_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimAlignmentTrackContainer_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimAlignmentTrackContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_ContextualAnimAlignmentTrackContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContextualAnimAlignmentTrackContainer.InnerSingleton, Z_Construct_UScriptStruct_FContextualAnimAlignmentTrackContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ContextualAnimAlignmentTrackContainer.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContextualAnimTrack;
class UScriptStruct* FContextualAnimTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContextualAnimTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContextualAnimTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContextualAnimTrack, (UObject*)Z_Construct_UPackage__Script_ContextualAnimation(), TEXT("ContextualAnimTrack"));
	}
	return Z_Registration_Info_UScriptStruct_ContextualAnimTrack.OuterSingleton;
}
template<> CONTEXTUALANIMATION_API UScriptStruct* StaticStruct<FContextualAnimTrack>()
{
	return FContextualAnimTrack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FContextualAnimTrack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Animation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimMaxStartTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimMaxStartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequireFlyingMode_MetaData[];
#endif
		static void NewProp_bRequireFlyingMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireFlyingMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOptional_MetaData[];
#endif
		static void NewProp_bOptional_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOptional;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlignmentData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlignmentData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IKTargetData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IKTargetData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionCriteria_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectionCriteria_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionCriteria_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectionCriteria;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshToScene_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshToScene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Role;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionIdx_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIdx;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSetIdx_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AnimSetIdx;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimTrackIdx_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AnimTrackIdx;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContextualAnimTrack>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_Animation_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimTrack, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_Animation_MetaData), Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_Animation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_AnimMaxStartTime_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_AnimMaxStartTime = { "AnimMaxStartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimTrack, AnimMaxStartTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_AnimMaxStartTime_MetaData), Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_AnimMaxStartTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_bRequireFlyingMode_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_bRequireFlyingMode_SetBit(void* Obj)
	{
		((FContextualAnimTrack*)Obj)->bRequireFlyingMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_bRequireFlyingMode = { "bRequireFlyingMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FContextualAnimTrack), &Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_bRequireFlyingMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_bRequireFlyingMode_MetaData), Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_bRequireFlyingMode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_bOptional_MetaData[] = {
		{ "Category", "Defaults" },
		{ "Comment", "/** Whether the actor that should play this animation is optional */" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
		{ "ToolTip", "Whether the actor that should play this animation is optional" },
	};
#endif
	void Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_bOptional_SetBit(void* Obj)
	{
		((FContextualAnimTrack*)Obj)->bOptional = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_bOptional = { "bOptional", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FContextualAnimTrack), &Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_bOptional_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_bOptional_MetaData), Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_bOptional_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_AlignmentData_MetaData[] = {
		{ "Comment", "/** Container for alignment tracks */" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
		{ "ToolTip", "Container for alignment tracks" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_AlignmentData = { "AlignmentData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimTrack, AlignmentData), Z_Construct_UScriptStruct_FContextualAnimAlignmentTrackContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_AlignmentData_MetaData), Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_AlignmentData_MetaData) }; // 3406712126
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_IKTargetData_MetaData[] = {
		{ "Comment", "/** Container for auto generate IK Target Tracks */" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
		{ "ToolTip", "Container for auto generate IK Target Tracks" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_IKTargetData = { "IKTargetData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimTrack, IKTargetData), Z_Construct_UScriptStruct_FContextualAnimAlignmentTrackContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_IKTargetData_MetaData), Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_IKTargetData_MetaData) }; // 3406712126
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_SelectionCriteria_Inner_MetaData[] = {
		{ "Category", "Defaults" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_SelectionCriteria_Inner = { "SelectionCriteria", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UContextualAnimSelectionCriterion_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_SelectionCriteria_Inner_MetaData), Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_SelectionCriteria_Inner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_SelectionCriteria_MetaData[] = {
		{ "Category", "Defaults" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_SelectionCriteria = { "SelectionCriteria", nullptr, (EPropertyFlags)0x0014008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimTrack, SelectionCriteria), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_SelectionCriteria_MetaData), Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_SelectionCriteria_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_MeshToScene_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_MeshToScene = { "MeshToScene", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimTrack, MeshToScene), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_MeshToScene_MetaData), Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_MeshToScene_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_Role_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimTrack, Role), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_Role_MetaData), Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_Role_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_SectionIdx_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_SectionIdx = { "SectionIdx", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimTrack, SectionIdx), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_SectionIdx_MetaData), Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_SectionIdx_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_AnimSetIdx_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_AnimSetIdx = { "AnimSetIdx", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimTrack, AnimSetIdx), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_AnimSetIdx_MetaData), Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_AnimSetIdx_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_AnimTrackIdx_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_AnimTrackIdx = { "AnimTrackIdx", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimTrack, AnimTrackIdx), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_AnimTrackIdx_MetaData), Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_AnimTrackIdx_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_Animation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_AnimMaxStartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_bRequireFlyingMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_bOptional,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_AlignmentData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_IKTargetData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_SelectionCriteria_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_SelectionCriteria,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_MeshToScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_Role,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_SectionIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_AnimSetIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewProp_AnimTrackIdx,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContextualAnimation,
		nullptr,
		&NewStructOps,
		"ContextualAnimTrack",
		Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::PropPointers),
		sizeof(FContextualAnimTrack),
		alignof(FContextualAnimTrack),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimTrack()
	{
		if (!Z_Registration_Info_UScriptStruct_ContextualAnimTrack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContextualAnimTrack.InnerSingleton, Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ContextualAnimTrack.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EContextualAnimJoinRule;
	static UEnum* EContextualAnimJoinRule_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EContextualAnimJoinRule.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EContextualAnimJoinRule.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ContextualAnimation_EContextualAnimJoinRule, (UObject*)Z_Construct_UPackage__Script_ContextualAnimation(), TEXT("EContextualAnimJoinRule"));
		}
		return Z_Registration_Info_UEnum_EContextualAnimJoinRule.OuterSingleton;
	}
	template<> CONTEXTUALANIMATION_API UEnum* StaticEnum<EContextualAnimJoinRule>()
	{
		return EContextualAnimJoinRule_StaticEnum();
	}
	struct Z_Construct_UEnum_ContextualAnimation_EContextualAnimJoinRule_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ContextualAnimation_EContextualAnimJoinRule_Statics::Enumerators[] = {
		{ "EContextualAnimJoinRule::Default", (int64)EContextualAnimJoinRule::Default },
		{ "EContextualAnimJoinRule::Late", (int64)EContextualAnimJoinRule::Late },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ContextualAnimation_EContextualAnimJoinRule_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Defines when the actor should start playing the animation */" },
		{ "Default.Name", "EContextualAnimJoinRule::Default" },
		{ "Late.Name", "EContextualAnimJoinRule::Late" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
		{ "ToolTip", "Defines when the actor should start playing the animation" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ContextualAnimation_EContextualAnimJoinRule_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ContextualAnimation,
		nullptr,
		"EContextualAnimJoinRule",
		"EContextualAnimJoinRule",
		Z_Construct_UEnum_ContextualAnimation_EContextualAnimJoinRule_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ContextualAnimation_EContextualAnimJoinRule_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ContextualAnimation_EContextualAnimJoinRule_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ContextualAnimation_EContextualAnimJoinRule_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ContextualAnimation_EContextualAnimJoinRule()
	{
		if (!Z_Registration_Info_UEnum_EContextualAnimJoinRule.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EContextualAnimJoinRule.InnerSingleton, Z_Construct_UEnum_ContextualAnimation_EContextualAnimJoinRule_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EContextualAnimJoinRule.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EContextualAnimIKTargetProvider;
	static UEnum* EContextualAnimIKTargetProvider_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EContextualAnimIKTargetProvider.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EContextualAnimIKTargetProvider.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ContextualAnimation_EContextualAnimIKTargetProvider, (UObject*)Z_Construct_UPackage__Script_ContextualAnimation(), TEXT("EContextualAnimIKTargetProvider"));
		}
		return Z_Registration_Info_UEnum_EContextualAnimIKTargetProvider.OuterSingleton;
	}
	template<> CONTEXTUALANIMATION_API UEnum* StaticEnum<EContextualAnimIKTargetProvider>()
	{
		return EContextualAnimIKTargetProvider_StaticEnum();
	}
	struct Z_Construct_UEnum_ContextualAnimation_EContextualAnimIKTargetProvider_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ContextualAnimation_EContextualAnimIKTargetProvider_Statics::Enumerators[] = {
		{ "EContextualAnimIKTargetProvider::Autogenerated", (int64)EContextualAnimIKTargetProvider::Autogenerated },
		{ "EContextualAnimIKTargetProvider::Bone", (int64)EContextualAnimIKTargetProvider::Bone },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ContextualAnimation_EContextualAnimIKTargetProvider_Statics::Enum_MetaDataParams[] = {
		{ "Autogenerated.Comment", "/** \n\x09 * IK Targets are auto generated from the animations \n\x09 * @see: UContextualAnimSceneAssetBase::GenerateIKTargetTracks\n\x09 */" },
		{ "Autogenerated.Name", "EContextualAnimIKTargetProvider::Autogenerated" },
		{ "Autogenerated.ToolTip", "IK Targets are auto generated from the animations\n@see: UContextualAnimSceneAssetBase::GenerateIKTargetTracks" },
		{ "BlueprintType", "true" },
		{ "Bone.Comment", "/** IK Target defined by a bone or a socket in the animation */" },
		{ "Bone.Name", "EContextualAnimIKTargetProvider::Bone" },
		{ "Bone.ToolTip", "IK Target defined by a bone or a socket in the animation" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ContextualAnimation_EContextualAnimIKTargetProvider_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ContextualAnimation,
		nullptr,
		"EContextualAnimIKTargetProvider",
		"EContextualAnimIKTargetProvider",
		Z_Construct_UEnum_ContextualAnimation_EContextualAnimIKTargetProvider_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ContextualAnimation_EContextualAnimIKTargetProvider_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ContextualAnimation_EContextualAnimIKTargetProvider_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ContextualAnimation_EContextualAnimIKTargetProvider_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ContextualAnimation_EContextualAnimIKTargetProvider()
	{
		if (!Z_Registration_Info_UEnum_EContextualAnimIKTargetProvider.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EContextualAnimIKTargetProvider.InnerSingleton, Z_Construct_UEnum_ContextualAnimation_EContextualAnimIKTargetProvider_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EContextualAnimIKTargetProvider.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContextualAnimIKTargetDefinition;
class UScriptStruct* FContextualAnimIKTargetDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContextualAnimIKTargetDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContextualAnimIKTargetDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition, (UObject*)Z_Construct_UPackage__Script_ContextualAnimation(), TEXT("ContextualAnimIKTargetDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_ContextualAnimIKTargetDefinition.OuterSingleton;
}
template<> CONTEXTUALANIMATION_API UScriptStruct* StaticStruct<FContextualAnimIKTargetDefinition>()
{
	return FContextualAnimIKTargetDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoalName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GoalName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Provider_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Provider_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Provider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetRoleName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetRoleName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetBoneName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContextualAnimIKTargetDefinition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition_Statics::NewProp_GoalName_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition_Statics::NewProp_GoalName = { "GoalName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimIKTargetDefinition, GoalName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition_Statics::NewProp_GoalName_MetaData), Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition_Statics::NewProp_GoalName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimIKTargetDefinition, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition_Statics::NewProp_BoneName_MetaData), Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition_Statics::NewProp_BoneName_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition_Statics::NewProp_Provider_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition_Statics::NewProp_Provider_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition_Statics::NewProp_Provider = { "Provider", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimIKTargetDefinition, Provider), Z_Construct_UEnum_ContextualAnimation_EContextualAnimIKTargetProvider, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition_Statics::NewProp_Provider_MetaData), Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition_Statics::NewProp_Provider_MetaData) }; // 3278809219
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition_Statics::NewProp_TargetRoleName_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition_Statics::NewProp_TargetRoleName = { "TargetRoleName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimIKTargetDefinition, TargetRoleName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition_Statics::NewProp_TargetRoleName_MetaData), Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition_Statics::NewProp_TargetRoleName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition_Statics::NewProp_TargetBoneName_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition_Statics::NewProp_TargetBoneName = { "TargetBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimIKTargetDefinition, TargetBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition_Statics::NewProp_TargetBoneName_MetaData), Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition_Statics::NewProp_TargetBoneName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition_Statics::NewProp_GoalName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition_Statics::NewProp_Provider_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition_Statics::NewProp_Provider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition_Statics::NewProp_TargetRoleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition_Statics::NewProp_TargetBoneName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContextualAnimation,
		nullptr,
		&NewStructOps,
		"ContextualAnimIKTargetDefinition",
		Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition_Statics::PropPointers),
		sizeof(FContextualAnimIKTargetDefinition),
		alignof(FContextualAnimIKTargetDefinition),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_ContextualAnimIKTargetDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContextualAnimIKTargetDefinition.InnerSingleton, Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ContextualAnimIKTargetDefinition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContextualAnimIKTarget;
class UScriptStruct* FContextualAnimIKTarget::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContextualAnimIKTarget.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContextualAnimIKTarget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContextualAnimIKTarget, (UObject*)Z_Construct_UPackage__Script_ContextualAnimation(), TEXT("ContextualAnimIKTarget"));
	}
	return Z_Registration_Info_UScriptStruct_ContextualAnimIKTarget.OuterSingleton;
}
template<> CONTEXTUALANIMATION_API UScriptStruct* StaticStruct<FContextualAnimIKTarget>()
{
	return FContextualAnimIKTarget::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FContextualAnimIKTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoalName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GoalName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimIKTarget_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FContextualAnimIKTarget_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContextualAnimIKTarget>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimIKTarget_Statics::NewProp_GoalName_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FContextualAnimIKTarget_Statics::NewProp_GoalName = { "GoalName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimIKTarget, GoalName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimIKTarget_Statics::NewProp_GoalName_MetaData), Z_Construct_UScriptStruct_FContextualAnimIKTarget_Statics::NewProp_GoalName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimIKTarget_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FContextualAnimIKTarget_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimIKTarget, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimIKTarget_Statics::NewProp_Alpha_MetaData), Z_Construct_UScriptStruct_FContextualAnimIKTarget_Statics::NewProp_Alpha_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimIKTarget_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FContextualAnimIKTarget_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimIKTarget, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimIKTarget_Statics::NewProp_Transform_MetaData), Z_Construct_UScriptStruct_FContextualAnimIKTarget_Statics::NewProp_Transform_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FContextualAnimIKTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimIKTarget_Statics::NewProp_GoalName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimIKTarget_Statics::NewProp_Alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimIKTarget_Statics::NewProp_Transform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContextualAnimIKTarget_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContextualAnimation,
		nullptr,
		&NewStructOps,
		"ContextualAnimIKTarget",
		Z_Construct_UScriptStruct_FContextualAnimIKTarget_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimIKTarget_Statics::PropPointers),
		sizeof(FContextualAnimIKTarget),
		alignof(FContextualAnimIKTarget),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimIKTarget_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FContextualAnimIKTarget_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimIKTarget_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimIKTarget()
	{
		if (!Z_Registration_Info_UScriptStruct_ContextualAnimIKTarget.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContextualAnimIKTarget.InnerSingleton, Z_Construct_UScriptStruct_FContextualAnimIKTarget_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ContextualAnimIKTarget.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContextualAnimIKTargetDefContainer;
class UScriptStruct* FContextualAnimIKTargetDefContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContextualAnimIKTargetDefContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContextualAnimIKTargetDefContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContextualAnimIKTargetDefContainer, (UObject*)Z_Construct_UPackage__Script_ContextualAnimation(), TEXT("ContextualAnimIKTargetDefContainer"));
	}
	return Z_Registration_Info_UScriptStruct_ContextualAnimIKTargetDefContainer.OuterSingleton;
}
template<> CONTEXTUALANIMATION_API UScriptStruct* StaticStruct<FContextualAnimIKTargetDefContainer>()
{
	return FContextualAnimIKTargetDefContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FContextualAnimIKTargetDefContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_IKTargetDefs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IKTargetDefs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IKTargetDefs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimIKTargetDefContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FContextualAnimIKTargetDefContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContextualAnimIKTargetDefContainer>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FContextualAnimIKTargetDefContainer_Statics::NewProp_IKTargetDefs_Inner = { "IKTargetDefs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition, METADATA_PARAMS(0, nullptr) }; // 1514616738
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimIKTargetDefContainer_Statics::NewProp_IKTargetDefs_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FContextualAnimIKTargetDefContainer_Statics::NewProp_IKTargetDefs = { "IKTargetDefs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimIKTargetDefContainer, IKTargetDefs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimIKTargetDefContainer_Statics::NewProp_IKTargetDefs_MetaData), Z_Construct_UScriptStruct_FContextualAnimIKTargetDefContainer_Statics::NewProp_IKTargetDefs_MetaData) }; // 1514616738
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FContextualAnimIKTargetDefContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimIKTargetDefContainer_Statics::NewProp_IKTargetDefs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimIKTargetDefContainer_Statics::NewProp_IKTargetDefs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContextualAnimIKTargetDefContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContextualAnimation,
		nullptr,
		&NewStructOps,
		"ContextualAnimIKTargetDefContainer",
		Z_Construct_UScriptStruct_FContextualAnimIKTargetDefContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimIKTargetDefContainer_Statics::PropPointers),
		sizeof(FContextualAnimIKTargetDefContainer),
		alignof(FContextualAnimIKTargetDefContainer),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimIKTargetDefContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FContextualAnimIKTargetDefContainer_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimIKTargetDefContainer_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimIKTargetDefContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_ContextualAnimIKTargetDefContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContextualAnimIKTargetDefContainer.InnerSingleton, Z_Construct_UScriptStruct_FContextualAnimIKTargetDefContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ContextualAnimIKTargetDefContainer.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContextualAnimRoleDefinition;
class UScriptStruct* FContextualAnimRoleDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContextualAnimRoleDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContextualAnimRoleDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContextualAnimRoleDefinition, (UObject*)Z_Construct_UPackage__Script_ContextualAnimation(), TEXT("ContextualAnimRoleDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_ContextualAnimRoleDefinition.OuterSingleton;
}
template<> CONTEXTUALANIMATION_API UScriptStruct* StaticStruct<FContextualAnimRoleDefinition>()
{
	return FContextualAnimRoleDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FContextualAnimRoleDefinition_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCharacter_MetaData[];
#endif
		static void NewProp_bIsCharacter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshToComponent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshToComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimRoleDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// FContextualAnimRoleDefinition\n///////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
		{ "ToolTip", "FContextualAnimRoleDefinition" },
	};
#endif
	void* Z_Construct_UScriptStruct_FContextualAnimRoleDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContextualAnimRoleDefinition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimRoleDefinition_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FContextualAnimRoleDefinition_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimRoleDefinition, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimRoleDefinition_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FContextualAnimRoleDefinition_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimRoleDefinition_Statics::NewProp_bIsCharacter_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FContextualAnimRoleDefinition_Statics::NewProp_bIsCharacter_SetBit(void* Obj)
	{
		((FContextualAnimRoleDefinition*)Obj)->bIsCharacter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FContextualAnimRoleDefinition_Statics::NewProp_bIsCharacter = { "bIsCharacter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FContextualAnimRoleDefinition), &Z_Construct_UScriptStruct_FContextualAnimRoleDefinition_Statics::NewProp_bIsCharacter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimRoleDefinition_Statics::NewProp_bIsCharacter_MetaData), Z_Construct_UScriptStruct_FContextualAnimRoleDefinition_Statics::NewProp_bIsCharacter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimRoleDefinition_Statics::NewProp_MeshToComponent_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FContextualAnimRoleDefinition_Statics::NewProp_MeshToComponent = { "MeshToComponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimRoleDefinition, MeshToComponent), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimRoleDefinition_Statics::NewProp_MeshToComponent_MetaData), Z_Construct_UScriptStruct_FContextualAnimRoleDefinition_Statics::NewProp_MeshToComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FContextualAnimRoleDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimRoleDefinition_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimRoleDefinition_Statics::NewProp_bIsCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimRoleDefinition_Statics::NewProp_MeshToComponent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContextualAnimRoleDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContextualAnimation,
		nullptr,
		&NewStructOps,
		"ContextualAnimRoleDefinition",
		Z_Construct_UScriptStruct_FContextualAnimRoleDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimRoleDefinition_Statics::PropPointers),
		sizeof(FContextualAnimRoleDefinition),
		alignof(FContextualAnimRoleDefinition),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimRoleDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FContextualAnimRoleDefinition_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimRoleDefinition_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimRoleDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_ContextualAnimRoleDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContextualAnimRoleDefinition.InnerSingleton, Z_Construct_UScriptStruct_FContextualAnimRoleDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ContextualAnimRoleDefinition.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EContextualAnimWarpPointDefinitionMode;
	static UEnum* EContextualAnimWarpPointDefinitionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EContextualAnimWarpPointDefinitionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EContextualAnimWarpPointDefinitionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ContextualAnimation_EContextualAnimWarpPointDefinitionMode, (UObject*)Z_Construct_UPackage__Script_ContextualAnimation(), TEXT("EContextualAnimWarpPointDefinitionMode"));
		}
		return Z_Registration_Info_UEnum_EContextualAnimWarpPointDefinitionMode.OuterSingleton;
	}
	template<> CONTEXTUALANIMATION_API UEnum* StaticEnum<EContextualAnimWarpPointDefinitionMode>()
	{
		return EContextualAnimWarpPointDefinitionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ContextualAnimation_EContextualAnimWarpPointDefinitionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ContextualAnimation_EContextualAnimWarpPointDefinitionMode_Statics::Enumerators[] = {
		{ "EContextualAnimWarpPointDefinitionMode::PrimaryActor", (int64)EContextualAnimWarpPointDefinitionMode::PrimaryActor },
		{ "EContextualAnimWarpPointDefinitionMode::Socket", (int64)EContextualAnimWarpPointDefinitionMode::Socket },
		{ "EContextualAnimWarpPointDefinitionMode::Custom", (int64)EContextualAnimWarpPointDefinitionMode::Custom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ContextualAnimation_EContextualAnimWarpPointDefinitionMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Different modes for defining warp points */" },
		{ "Custom.Comment", "/**\n\x09 * Warp point will be calculated based on a set of rules.\n\x09 * Commonly used when we want actors to align at some point between them\n\x09*/" },
		{ "Custom.Name", "EContextualAnimWarpPointDefinitionMode::Custom" },
		{ "Custom.ToolTip", "Warp point will be calculated based on a set of rules.\nCommonly used when we want actors to align at some point between them" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
		{ "PrimaryActor.Comment", "/** \n\x09 * Warp point will be at the location/rotation of the primary actor. \n\x09 * Commonly used when interacting with static objects \n\x09*/" },
		{ "PrimaryActor.Name", "EContextualAnimWarpPointDefinitionMode::PrimaryActor" },
		{ "PrimaryActor.ToolTip", "Warp point will be at the location/rotation of the primary actor.\nCommonly used when interacting with static objects" },
		{ "Socket.Comment", "/** \n\x09 * Warp point will be at the location/rotation of a socket on the primary actor. \n\x09 * Commonly used when re-using the same interaction animations to interact with objects with different proportions \n\x09*/" },
		{ "Socket.Name", "EContextualAnimWarpPointDefinitionMode::Socket" },
		{ "Socket.ToolTip", "Warp point will be at the location/rotation of a socket on the primary actor.\nCommonly used when re-using the same interaction animations to interact with objects with different proportions" },
		{ "ToolTip", "Different modes for defining warp points" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ContextualAnimation_EContextualAnimWarpPointDefinitionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ContextualAnimation,
		nullptr,
		"EContextualAnimWarpPointDefinitionMode",
		"EContextualAnimWarpPointDefinitionMode",
		Z_Construct_UEnum_ContextualAnimation_EContextualAnimWarpPointDefinitionMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ContextualAnimation_EContextualAnimWarpPointDefinitionMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ContextualAnimation_EContextualAnimWarpPointDefinitionMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ContextualAnimation_EContextualAnimWarpPointDefinitionMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ContextualAnimation_EContextualAnimWarpPointDefinitionMode()
	{
		if (!Z_Registration_Info_UEnum_EContextualAnimWarpPointDefinitionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EContextualAnimWarpPointDefinitionMode.InnerSingleton, Z_Construct_UEnum_ContextualAnimation_EContextualAnimWarpPointDefinitionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EContextualAnimWarpPointDefinitionMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContextualAnimWarpPointCustomParams;
class UScriptStruct* FContextualAnimWarpPointCustomParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContextualAnimWarpPointCustomParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContextualAnimWarpPointCustomParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContextualAnimWarpPointCustomParams, (UObject*)Z_Construct_UPackage__Script_ContextualAnimation(), TEXT("ContextualAnimWarpPointCustomParams"));
	}
	return Z_Registration_Info_UScriptStruct_ContextualAnimWarpPointCustomParams.OuterSingleton;
}
template<> CONTEXTUALANIMATION_API UScriptStruct* StaticStruct<FContextualAnimWarpPointCustomParams>()
{
	return FContextualAnimWarpPointCustomParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FContextualAnimWarpPointCustomParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Origin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlongClosestDistance_MetaData[];
#endif
		static void NewProp_bAlongClosestDistance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlongClosestDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherRole_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OtherRole;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimWarpPointCustomParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Parameters used to calculate a warp point when using 'Custom' mode */" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
		{ "ToolTip", "Parameters used to calculate a warp point when using 'Custom' mode" },
	};
#endif
	void* Z_Construct_UScriptStruct_FContextualAnimWarpPointCustomParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContextualAnimWarpPointCustomParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimWarpPointCustomParams_Statics::NewProp_Origin_MetaData[] = {
		{ "Category", "Defaults" },
		{ "GetOptions", "GetRoles" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FContextualAnimWarpPointCustomParams_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimWarpPointCustomParams, Origin), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimWarpPointCustomParams_Statics::NewProp_Origin_MetaData), Z_Construct_UScriptStruct_FContextualAnimWarpPointCustomParams_Statics::NewProp_Origin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimWarpPointCustomParams_Statics::NewProp_bAlongClosestDistance_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FContextualAnimWarpPointCustomParams_Statics::NewProp_bAlongClosestDistance_SetBit(void* Obj)
	{
		((FContextualAnimWarpPointCustomParams*)Obj)->bAlongClosestDistance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FContextualAnimWarpPointCustomParams_Statics::NewProp_bAlongClosestDistance = { "bAlongClosestDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FContextualAnimWarpPointCustomParams), &Z_Construct_UScriptStruct_FContextualAnimWarpPointCustomParams_Statics::NewProp_bAlongClosestDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimWarpPointCustomParams_Statics::NewProp_bAlongClosestDistance_MetaData), Z_Construct_UScriptStruct_FContextualAnimWarpPointCustomParams_Statics::NewProp_bAlongClosestDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimWarpPointCustomParams_Statics::NewProp_OtherRole_MetaData[] = {
		{ "Category", "Defaults" },
		{ "EditCondition", "bAlongClosestDistance" },
		{ "GetOptions", "GetRoles" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FContextualAnimWarpPointCustomParams_Statics::NewProp_OtherRole = { "OtherRole", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimWarpPointCustomParams, OtherRole), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimWarpPointCustomParams_Statics::NewProp_OtherRole_MetaData), Z_Construct_UScriptStruct_FContextualAnimWarpPointCustomParams_Statics::NewProp_OtherRole_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimWarpPointCustomParams_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bAlongClosestDistance" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FContextualAnimWarpPointCustomParams_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimWarpPointCustomParams, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimWarpPointCustomParams_Statics::NewProp_Weight_MetaData), Z_Construct_UScriptStruct_FContextualAnimWarpPointCustomParams_Statics::NewProp_Weight_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FContextualAnimWarpPointCustomParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimWarpPointCustomParams_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimWarpPointCustomParams_Statics::NewProp_bAlongClosestDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimWarpPointCustomParams_Statics::NewProp_OtherRole,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimWarpPointCustomParams_Statics::NewProp_Weight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContextualAnimWarpPointCustomParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContextualAnimation,
		nullptr,
		&NewStructOps,
		"ContextualAnimWarpPointCustomParams",
		Z_Construct_UScriptStruct_FContextualAnimWarpPointCustomParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimWarpPointCustomParams_Statics::PropPointers),
		sizeof(FContextualAnimWarpPointCustomParams),
		alignof(FContextualAnimWarpPointCustomParams),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimWarpPointCustomParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FContextualAnimWarpPointCustomParams_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimWarpPointCustomParams_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimWarpPointCustomParams()
	{
		if (!Z_Registration_Info_UScriptStruct_ContextualAnimWarpPointCustomParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContextualAnimWarpPointCustomParams.InnerSingleton, Z_Construct_UScriptStruct_FContextualAnimWarpPointCustomParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ContextualAnimWarpPointCustomParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContextualAnimWarpPointDefinition;
class UScriptStruct* FContextualAnimWarpPointDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContextualAnimWarpPointDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContextualAnimWarpPointDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContextualAnimWarpPointDefinition, (UObject*)Z_Construct_UPackage__Script_ContextualAnimation(), TEXT("ContextualAnimWarpPointDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_ContextualAnimWarpPointDefinition.OuterSingleton;
}
template<> CONTEXTUALANIMATION_API UScriptStruct* StaticStruct<FContextualAnimWarpPointDefinition>()
{
	return FContextualAnimWarpPointDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FContextualAnimWarpPointDefinition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarpTargetName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WarpTargetName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimWarpPointDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Contain the params necessary to calculate a warp point for the scene. \n * A warp point is a transform in the scene that can be used as reference to calculate alignment between actors\n*/" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
		{ "ToolTip", "Contain the params necessary to calculate a warp point for the scene.\nA warp point is a transform in the scene that can be used as reference to calculate alignment between actors" },
	};
#endif
	void* Z_Construct_UScriptStruct_FContextualAnimWarpPointDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContextualAnimWarpPointDefinition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimWarpPointDefinition_Statics::NewProp_WarpTargetName_MetaData[] = {
		{ "Category", "Defaults" },
		{ "Comment", "/** Name of the warp target in the warping window this warp point is for */" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
		{ "ToolTip", "Name of the warp target in the warping window this warp point is for" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FContextualAnimWarpPointDefinition_Statics::NewProp_WarpTargetName = { "WarpTargetName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimWarpPointDefinition, WarpTargetName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimWarpPointDefinition_Statics::NewProp_WarpTargetName_MetaData), Z_Construct_UScriptStruct_FContextualAnimWarpPointDefinition_Statics::NewProp_WarpTargetName_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FContextualAnimWarpPointDefinition_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimWarpPointDefinition_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Defaults" },
		{ "Comment", "/** Method used to calculate this warp point */" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
		{ "ToolTip", "Method used to calculate this warp point" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FContextualAnimWarpPointDefinition_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimWarpPointDefinition, Mode), Z_Construct_UEnum_ContextualAnimation_EContextualAnimWarpPointDefinitionMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimWarpPointDefinition_Statics::NewProp_Mode_MetaData), Z_Construct_UScriptStruct_FContextualAnimWarpPointDefinition_Statics::NewProp_Mode_MetaData) }; // 943365455
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimWarpPointDefinition_Statics::NewProp_SocketName_MetaData[] = {
		{ "Category", "Defaults" },
		{ "Comment", "/** Name of the socket in the primary actor acting as warping point. Only relevant when Mode is Socket */" },
		{ "EditCondition", "Mode==EContextualAnimWarpPointDefinitionMode::Socket" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
		{ "ToolTip", "Name of the socket in the primary actor acting as warping point. Only relevant when Mode is Socket" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FContextualAnimWarpPointDefinition_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimWarpPointDefinition, SocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimWarpPointDefinition_Statics::NewProp_SocketName_MetaData), Z_Construct_UScriptStruct_FContextualAnimWarpPointDefinition_Statics::NewProp_SocketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimWarpPointDefinition_Statics::NewProp_Params_MetaData[] = {
		{ "Category", "Defaults" },
		{ "Comment", "/** Set of rules used to calculate the warp point. Only relevant when Mode is Custom */" },
		{ "EditCondition", "Mode==EContextualAnimWarpPointDefinitionMode::Custom" },
		{ "EditConditionHides", "" },
		{ "FullyExpand", "true" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
		{ "ToolTip", "Set of rules used to calculate the warp point. Only relevant when Mode is Custom" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FContextualAnimWarpPointDefinition_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimWarpPointDefinition, Params), Z_Construct_UScriptStruct_FContextualAnimWarpPointCustomParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimWarpPointDefinition_Statics::NewProp_Params_MetaData), Z_Construct_UScriptStruct_FContextualAnimWarpPointDefinition_Statics::NewProp_Params_MetaData) }; // 2682121719
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FContextualAnimWarpPointDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimWarpPointDefinition_Statics::NewProp_WarpTargetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimWarpPointDefinition_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimWarpPointDefinition_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimWarpPointDefinition_Statics::NewProp_SocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimWarpPointDefinition_Statics::NewProp_Params,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContextualAnimWarpPointDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContextualAnimation,
		nullptr,
		&NewStructOps,
		"ContextualAnimWarpPointDefinition",
		Z_Construct_UScriptStruct_FContextualAnimWarpPointDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimWarpPointDefinition_Statics::PropPointers),
		sizeof(FContextualAnimWarpPointDefinition),
		alignof(FContextualAnimWarpPointDefinition),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimWarpPointDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FContextualAnimWarpPointDefinition_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimWarpPointDefinition_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimWarpPointDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_ContextualAnimWarpPointDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContextualAnimWarpPointDefinition.InnerSingleton, Z_Construct_UScriptStruct_FContextualAnimWarpPointDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ContextualAnimWarpPointDefinition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContextualAnimWarpPoint;
class UScriptStruct* FContextualAnimWarpPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContextualAnimWarpPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContextualAnimWarpPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContextualAnimWarpPoint, (UObject*)Z_Construct_UPackage__Script_ContextualAnimation(), TEXT("ContextualAnimWarpPoint"));
	}
	return Z_Registration_Info_UScriptStruct_ContextualAnimWarpPoint.OuterSingleton;
}
template<> CONTEXTUALANIMATION_API UScriptStruct* StaticStruct<FContextualAnimWarpPoint>()
{
	return FContextualAnimWarpPoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FContextualAnimWarpPoint_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimWarpPoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// FContextualAnimWarpPoint\n///////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
		{ "ToolTip", "FContextualAnimWarpPoint" },
	};
#endif
	void* Z_Construct_UScriptStruct_FContextualAnimWarpPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContextualAnimWarpPoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimWarpPoint_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FContextualAnimWarpPoint_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimWarpPoint, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimWarpPoint_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FContextualAnimWarpPoint_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimWarpPoint_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FContextualAnimWarpPoint_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimWarpPoint, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimWarpPoint_Statics::NewProp_Transform_MetaData), Z_Construct_UScriptStruct_FContextualAnimWarpPoint_Statics::NewProp_Transform_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FContextualAnimWarpPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimWarpPoint_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimWarpPoint_Statics::NewProp_Transform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContextualAnimWarpPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContextualAnimation,
		nullptr,
		&NewStructOps,
		"ContextualAnimWarpPoint",
		Z_Construct_UScriptStruct_FContextualAnimWarpPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimWarpPoint_Statics::PropPointers),
		sizeof(FContextualAnimWarpPoint),
		alignof(FContextualAnimWarpPoint),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimWarpPoint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FContextualAnimWarpPoint_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimWarpPoint_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimWarpPoint()
	{
		if (!Z_Registration_Info_UScriptStruct_ContextualAnimWarpPoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContextualAnimWarpPoint.InnerSingleton, Z_Construct_UScriptStruct_FContextualAnimWarpPoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ContextualAnimWarpPoint.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContextualAnimSceneBindingContext;
class UScriptStruct* FContextualAnimSceneBindingContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContextualAnimSceneBindingContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContextualAnimSceneBindingContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext, (UObject*)Z_Construct_UPackage__Script_ContextualAnimation(), TEXT("ContextualAnimSceneBindingContext"));
	}
	return Z_Registration_Info_UScriptStruct_ContextualAnimSceneBindingContext.OuterSingleton;
}
template<> CONTEXTUALANIMATION_API UScriptStruct* StaticStruct<FContextualAnimSceneBindingContext>()
{
	return FContextualAnimSceneBindingContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedSceneActorComp_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CachedSceneActorComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedAnimInstance_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CachedAnimInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CachedSkeletalMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// FContextualAnimSceneBindingContext\n///////////////////////////////////////////////////////////////////////\n" },
		{ "HasNativeMake", "/Script/ContextualAnimation.ContextualAnimUtilities:BP_SceneBindingContext_MakeFromActor" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
		{ "ToolTip", "FContextualAnimSceneBindingContext" },
	};
#endif
	void* Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContextualAnimSceneBindingContext>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext_Statics::NewProp_Actor_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimSceneBindingContext, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext_Statics::NewProp_Actor_MetaData), Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext_Statics::NewProp_Actor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext_Statics::NewProp_CachedSceneActorComp_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext_Statics::NewProp_CachedSceneActorComp = { "CachedSceneActorComp", nullptr, (EPropertyFlags)0x0044000080080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimSceneBindingContext, CachedSceneActorComp), Z_Construct_UClass_UContextualAnimSceneActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext_Statics::NewProp_CachedSceneActorComp_MetaData), Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext_Statics::NewProp_CachedSceneActorComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext_Statics::NewProp_CachedAnimInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext_Statics::NewProp_CachedAnimInstance = { "CachedAnimInstance", nullptr, (EPropertyFlags)0x0044000080000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimSceneBindingContext, CachedAnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext_Statics::NewProp_CachedAnimInstance_MetaData), Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext_Statics::NewProp_CachedAnimInstance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext_Statics::NewProp_CachedSkeletalMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext_Statics::NewProp_CachedSkeletalMesh = { "CachedSkeletalMesh", nullptr, (EPropertyFlags)0x0044000080080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimSceneBindingContext, CachedSkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext_Statics::NewProp_CachedSkeletalMesh_MetaData), Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext_Statics::NewProp_CachedSkeletalMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext_Statics::NewProp_CachedSceneActorComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext_Statics::NewProp_CachedAnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext_Statics::NewProp_CachedSkeletalMesh,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContextualAnimation,
		nullptr,
		&NewStructOps,
		"ContextualAnimSceneBindingContext",
		Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext_Statics::PropPointers),
		sizeof(FContextualAnimSceneBindingContext),
		alignof(FContextualAnimSceneBindingContext),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext()
	{
		if (!Z_Registration_Info_UScriptStruct_ContextualAnimSceneBindingContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContextualAnimSceneBindingContext.InnerSingleton, Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ContextualAnimSceneBindingContext.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContextualAnimSceneBinding;
class UScriptStruct* FContextualAnimSceneBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContextualAnimSceneBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContextualAnimSceneBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContextualAnimSceneBinding, (UObject*)Z_Construct_UPackage__Script_ContextualAnimation(), TEXT("ContextualAnimSceneBinding"));
	}
	return Z_Registration_Info_UScriptStruct_ContextualAnimSceneBinding.OuterSingleton;
}
template<> CONTEXTUALANIMATION_API UScriptStruct* StaticStruct<FContextualAnimSceneBinding>()
{
	return FContextualAnimSceneBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FContextualAnimSceneBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimTrackIdx_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AnimTrackIdx;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimSceneBinding_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Represent an actor bound to a role in the scene */" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
		{ "ToolTip", "Represent an actor bound to a role in the scene" },
	};
#endif
	void* Z_Construct_UScriptStruct_FContextualAnimSceneBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContextualAnimSceneBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimSceneBinding_Statics::NewProp_Context_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FContextualAnimSceneBinding_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimSceneBinding, Context), Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimSceneBinding_Statics::NewProp_Context_MetaData), Z_Construct_UScriptStruct_FContextualAnimSceneBinding_Statics::NewProp_Context_MetaData) }; // 3998329344
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimSceneBinding_Statics::NewProp_AnimTrackIdx_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FContextualAnimSceneBinding_Statics::NewProp_AnimTrackIdx = { "AnimTrackIdx", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimSceneBinding, AnimTrackIdx), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimSceneBinding_Statics::NewProp_AnimTrackIdx_MetaData), Z_Construct_UScriptStruct_FContextualAnimSceneBinding_Statics::NewProp_AnimTrackIdx_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FContextualAnimSceneBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimSceneBinding_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimSceneBinding_Statics::NewProp_AnimTrackIdx,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContextualAnimSceneBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContextualAnimation,
		nullptr,
		&NewStructOps,
		"ContextualAnimSceneBinding",
		Z_Construct_UScriptStruct_FContextualAnimSceneBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimSceneBinding_Statics::PropPointers),
		sizeof(FContextualAnimSceneBinding),
		alignof(FContextualAnimSceneBinding),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimSceneBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FContextualAnimSceneBinding_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimSceneBinding_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimSceneBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_ContextualAnimSceneBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContextualAnimSceneBinding.InnerSingleton, Z_Construct_UScriptStruct_FContextualAnimSceneBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ContextualAnimSceneBinding.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContextualAnimSceneBindings;
class UScriptStruct* FContextualAnimSceneBindings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContextualAnimSceneBindings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContextualAnimSceneBindings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContextualAnimSceneBindings, (UObject*)Z_Construct_UPackage__Script_ContextualAnimation(), TEXT("ContextualAnimSceneBindings"));
	}
	return Z_Registration_Info_UScriptStruct_ContextualAnimSceneBindings.OuterSingleton;
}
template<> CONTEXTUALANIMATION_API UScriptStruct* StaticStruct<FContextualAnimSceneBindings>()
{
	return FContextualAnimSceneBindings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FContextualAnimSceneBindings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SceneAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionIdx_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIdx;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSetIdx_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AnimSetIdx;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimSceneBindings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FContextualAnimSceneBindings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContextualAnimSceneBindings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimSceneBindings_Statics::NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FContextualAnimSceneBindings_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimSceneBindings, Id), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimSceneBindings_Statics::NewProp_Id_MetaData), Z_Construct_UScriptStruct_FContextualAnimSceneBindings_Statics::NewProp_Id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimSceneBindings_Statics::NewProp_SceneAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FContextualAnimSceneBindings_Statics::NewProp_SceneAsset = { "SceneAsset", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimSceneBindings, SceneAsset), Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimSceneBindings_Statics::NewProp_SceneAsset_MetaData), Z_Construct_UScriptStruct_FContextualAnimSceneBindings_Statics::NewProp_SceneAsset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimSceneBindings_Statics::NewProp_SectionIdx_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FContextualAnimSceneBindings_Statics::NewProp_SectionIdx = { "SectionIdx", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimSceneBindings, SectionIdx), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimSceneBindings_Statics::NewProp_SectionIdx_MetaData), Z_Construct_UScriptStruct_FContextualAnimSceneBindings_Statics::NewProp_SectionIdx_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimSceneBindings_Statics::NewProp_AnimSetIdx_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FContextualAnimSceneBindings_Statics::NewProp_AnimSetIdx = { "AnimSetIdx", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimSceneBindings, AnimSetIdx), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimSceneBindings_Statics::NewProp_AnimSetIdx_MetaData), Z_Construct_UScriptStruct_FContextualAnimSceneBindings_Statics::NewProp_AnimSetIdx_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FContextualAnimSceneBindings_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FContextualAnimSceneBinding, METADATA_PARAMS(0, nullptr) }; // 1121174425
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimSceneBindings_Statics::NewProp_Data_MetaData[] = {
		{ "Comment", "/** List of actors bound to each role in the SceneAsset */" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
		{ "ToolTip", "List of actors bound to each role in the SceneAsset" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FContextualAnimSceneBindings_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimSceneBindings, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimSceneBindings_Statics::NewProp_Data_MetaData), Z_Construct_UScriptStruct_FContextualAnimSceneBindings_Statics::NewProp_Data_MetaData) }; // 1121174425
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FContextualAnimSceneBindings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimSceneBindings_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimSceneBindings_Statics::NewProp_SceneAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimSceneBindings_Statics::NewProp_SectionIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimSceneBindings_Statics::NewProp_AnimSetIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimSceneBindings_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimSceneBindings_Statics::NewProp_Data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContextualAnimSceneBindings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContextualAnimation,
		nullptr,
		&NewStructOps,
		"ContextualAnimSceneBindings",
		Z_Construct_UScriptStruct_FContextualAnimSceneBindings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimSceneBindings_Statics::PropPointers),
		sizeof(FContextualAnimSceneBindings),
		alignof(FContextualAnimSceneBindings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimSceneBindings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FContextualAnimSceneBindings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimSceneBindings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimSceneBindings()
	{
		if (!Z_Registration_Info_UScriptStruct_ContextualAnimSceneBindings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContextualAnimSceneBindings.InnerSingleton, Z_Construct_UScriptStruct_FContextualAnimSceneBindings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ContextualAnimSceneBindings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContextualAnimStartSceneParams;
class UScriptStruct* FContextualAnimStartSceneParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContextualAnimStartSceneParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContextualAnimStartSceneParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContextualAnimStartSceneParams, (UObject*)Z_Construct_UPackage__Script_ContextualAnimation(), TEXT("ContextualAnimStartSceneParams"));
	}
	return Z_Registration_Info_UScriptStruct_ContextualAnimStartSceneParams.OuterSingleton;
}
template<> CONTEXTUALANIMATION_API UScriptStruct* StaticStruct<FContextualAnimStartSceneParams>()
{
	return FContextualAnimStartSceneParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FContextualAnimStartSceneParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_RoleToActorMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RoleToActorMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoleToActorMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RoleToActorMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionIdx_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIdx;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSetIdx_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AnimSetIdx;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimStartSceneParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// DEPRECATED: Kept around only to do not break existing content. It will go away in the future.\n" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
		{ "ToolTip", "DEPRECATED: Kept around only to do not break existing content. It will go away in the future." },
	};
#endif
	void* Z_Construct_UScriptStruct_FContextualAnimStartSceneParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContextualAnimStartSceneParams>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FContextualAnimStartSceneParams_Statics::NewProp_RoleToActorMap_ValueProp = { "RoleToActorMap", nullptr, (EPropertyFlags)0x0000008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext, METADATA_PARAMS(0, nullptr) }; // 3998329344
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FContextualAnimStartSceneParams_Statics::NewProp_RoleToActorMap_Key_KeyProp = { "RoleToActorMap_Key", nullptr, (EPropertyFlags)0x0000008000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimStartSceneParams_Statics::NewProp_RoleToActorMap_MetaData[] = {
		{ "Category", "Defaults" },
		{ "Comment", "/** Map with actors to bind to each role in the scene */" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
		{ "ToolTip", "Map with actors to bind to each role in the scene" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FContextualAnimStartSceneParams_Statics::NewProp_RoleToActorMap = { "RoleToActorMap", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimStartSceneParams, RoleToActorMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimStartSceneParams_Statics::NewProp_RoleToActorMap_MetaData), Z_Construct_UScriptStruct_FContextualAnimStartSceneParams_Statics::NewProp_RoleToActorMap_MetaData) }; // 3998329344
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimStartSceneParams_Statics::NewProp_SectionIdx_MetaData[] = {
		{ "Category", "Defaults" },
		{ "Comment", "/** Desired section. If INDEX_NONE the Manager will use or find best set in the first section. */" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
		{ "ToolTip", "Desired section. If INDEX_NONE the Manager will use or find best set in the first section." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FContextualAnimStartSceneParams_Statics::NewProp_SectionIdx = { "SectionIdx", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimStartSceneParams, SectionIdx), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimStartSceneParams_Statics::NewProp_SectionIdx_MetaData), Z_Construct_UScriptStruct_FContextualAnimStartSceneParams_Statics::NewProp_SectionIdx_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimStartSceneParams_Statics::NewProp_AnimSetIdx_MetaData[] = {
		{ "Category", "Defaults" },
		{ "Comment", "/** Desired set. If INDEX_NONE the Manager will attempt to find the best set to use by running the selection criteria.\n\x09 * The selection will be performed in the section specified by SectionIdx or in the first section if SectionIdx == INDEX_NONE.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
		{ "ToolTip", "Desired set. If INDEX_NONE the Manager will attempt to find the best set to use by running the selection criteria.\nThe selection will be performed in the section specified by SectionIdx or in the first section if SectionIdx == INDEX_NONE." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FContextualAnimStartSceneParams_Statics::NewProp_AnimSetIdx = { "AnimSetIdx", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimStartSceneParams, AnimSetIdx), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimStartSceneParams_Statics::NewProp_AnimSetIdx_MetaData), Z_Construct_UScriptStruct_FContextualAnimStartSceneParams_Statics::NewProp_AnimSetIdx_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FContextualAnimStartSceneParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimStartSceneParams_Statics::NewProp_RoleToActorMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimStartSceneParams_Statics::NewProp_RoleToActorMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimStartSceneParams_Statics::NewProp_RoleToActorMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimStartSceneParams_Statics::NewProp_SectionIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimStartSceneParams_Statics::NewProp_AnimSetIdx,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContextualAnimStartSceneParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContextualAnimation,
		nullptr,
		&NewStructOps,
		"ContextualAnimStartSceneParams",
		Z_Construct_UScriptStruct_FContextualAnimStartSceneParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimStartSceneParams_Statics::PropPointers),
		sizeof(FContextualAnimStartSceneParams),
		alignof(FContextualAnimStartSceneParams),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimStartSceneParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FContextualAnimStartSceneParams_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimStartSceneParams_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimStartSceneParams()
	{
		if (!Z_Registration_Info_UScriptStruct_ContextualAnimStartSceneParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContextualAnimStartSceneParams.InnerSingleton, Z_Construct_UScriptStruct_FContextualAnimStartSceneParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ContextualAnimStartSceneParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContextualAnimQueryResult;
class UScriptStruct* FContextualAnimQueryResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContextualAnimQueryResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContextualAnimQueryResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContextualAnimQueryResult, (UObject*)Z_Construct_UPackage__Script_ContextualAnimation(), TEXT("ContextualAnimQueryResult"));
	}
	return Z_Registration_Info_UScriptStruct_ContextualAnimQueryResult.OuterSingleton;
}
template<> CONTEXTUALANIMATION_API UScriptStruct* StaticStruct<FContextualAnimQueryResult>()
{
	return FContextualAnimQueryResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FContextualAnimQueryResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Animation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EntryTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SyncTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SyncTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimStartTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimStartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSetIdx_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AnimSetIdx;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimQueryResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Stores the result of a query function \n * @TODO: Only used by UContextualAnimSceneAsset::Query. Kept around only to do not break existing content. It will go away in the future.\n */" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
		{ "ToolTip", "Stores the result of a query function\n@TODO: Only used by UContextualAnimSceneAsset::Query. Kept around only to do not break existing content. It will go away in the future." },
	};
#endif
	void* Z_Construct_UScriptStruct_FContextualAnimQueryResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContextualAnimQueryResult>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimQueryResult_Statics::NewProp_Animation_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FContextualAnimQueryResult_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimQueryResult, Animation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimQueryResult_Statics::NewProp_Animation_MetaData), Z_Construct_UScriptStruct_FContextualAnimQueryResult_Statics::NewProp_Animation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimQueryResult_Statics::NewProp_EntryTransform_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FContextualAnimQueryResult_Statics::NewProp_EntryTransform = { "EntryTransform", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimQueryResult, EntryTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimQueryResult_Statics::NewProp_EntryTransform_MetaData), Z_Construct_UScriptStruct_FContextualAnimQueryResult_Statics::NewProp_EntryTransform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimQueryResult_Statics::NewProp_SyncTransform_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FContextualAnimQueryResult_Statics::NewProp_SyncTransform = { "SyncTransform", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimQueryResult, SyncTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimQueryResult_Statics::NewProp_SyncTransform_MetaData), Z_Construct_UScriptStruct_FContextualAnimQueryResult_Statics::NewProp_SyncTransform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimQueryResult_Statics::NewProp_AnimStartTime_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FContextualAnimQueryResult_Statics::NewProp_AnimStartTime = { "AnimStartTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimQueryResult, AnimStartTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimQueryResult_Statics::NewProp_AnimStartTime_MetaData), Z_Construct_UScriptStruct_FContextualAnimQueryResult_Statics::NewProp_AnimStartTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimQueryResult_Statics::NewProp_AnimSetIdx_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FContextualAnimQueryResult_Statics::NewProp_AnimSetIdx = { "AnimSetIdx", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimQueryResult, AnimSetIdx), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimQueryResult_Statics::NewProp_AnimSetIdx_MetaData), Z_Construct_UScriptStruct_FContextualAnimQueryResult_Statics::NewProp_AnimSetIdx_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FContextualAnimQueryResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimQueryResult_Statics::NewProp_Animation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimQueryResult_Statics::NewProp_EntryTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimQueryResult_Statics::NewProp_SyncTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimQueryResult_Statics::NewProp_AnimStartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimQueryResult_Statics::NewProp_AnimSetIdx,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContextualAnimQueryResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContextualAnimation,
		nullptr,
		&NewStructOps,
		"ContextualAnimQueryResult",
		Z_Construct_UScriptStruct_FContextualAnimQueryResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimQueryResult_Statics::PropPointers),
		sizeof(FContextualAnimQueryResult),
		alignof(FContextualAnimQueryResult),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimQueryResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FContextualAnimQueryResult_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimQueryResult_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimQueryResult()
	{
		if (!Z_Registration_Info_UScriptStruct_ContextualAnimQueryResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContextualAnimQueryResult.InnerSingleton, Z_Construct_UScriptStruct_FContextualAnimQueryResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ContextualAnimQueryResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContextualAnimQueryParams;
class UScriptStruct* FContextualAnimQueryParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContextualAnimQueryParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContextualAnimQueryParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContextualAnimQueryParams, (UObject*)Z_Construct_UPackage__Script_ContextualAnimation(), TEXT("ContextualAnimQueryParams"));
	}
	return Z_Registration_Info_UScriptStruct_ContextualAnimQueryParams.OuterSingleton;
}
template<> CONTEXTUALANIMATION_API UScriptStruct* StaticStruct<FContextualAnimQueryParams>()
{
	return FContextualAnimQueryParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FContextualAnimQueryParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Querier_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Querier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QueryTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bComplexQuery_MetaData[];
#endif
		static void NewProp_bComplexQuery_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bComplexQuery;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFindAnimStartTime_MetaData[];
#endif
		static void NewProp_bFindAnimStartTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFindAnimStartTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimQueryParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Stores the parameters passed into query function \n * @TODO: Only used by UContextualAnimSceneAsset::Query. Kept around only to do not break existing content. It will go away in the future.\n */" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
		{ "ToolTip", "Stores the parameters passed into query function\n@TODO: Only used by UContextualAnimSceneAsset::Query. Kept around only to do not break existing content. It will go away in the future." },
	};
#endif
	void* Z_Construct_UScriptStruct_FContextualAnimQueryParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContextualAnimQueryParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimQueryParams_Statics::NewProp_Querier_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FContextualAnimQueryParams_Statics::NewProp_Querier = { "Querier", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimQueryParams, Querier), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimQueryParams_Statics::NewProp_Querier_MetaData), Z_Construct_UScriptStruct_FContextualAnimQueryParams_Statics::NewProp_Querier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimQueryParams_Statics::NewProp_QueryTransform_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FContextualAnimQueryParams_Statics::NewProp_QueryTransform = { "QueryTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextualAnimQueryParams, QueryTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimQueryParams_Statics::NewProp_QueryTransform_MetaData), Z_Construct_UScriptStruct_FContextualAnimQueryParams_Statics::NewProp_QueryTransform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimQueryParams_Statics::NewProp_bComplexQuery_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FContextualAnimQueryParams_Statics::NewProp_bComplexQuery_SetBit(void* Obj)
	{
		((FContextualAnimQueryParams*)Obj)->bComplexQuery = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FContextualAnimQueryParams_Statics::NewProp_bComplexQuery = { "bComplexQuery", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FContextualAnimQueryParams), &Z_Construct_UScriptStruct_FContextualAnimQueryParams_Statics::NewProp_bComplexQuery_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimQueryParams_Statics::NewProp_bComplexQuery_MetaData), Z_Construct_UScriptStruct_FContextualAnimQueryParams_Statics::NewProp_bComplexQuery_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimQueryParams_Statics::NewProp_bFindAnimStartTime_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ContextualAnimTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FContextualAnimQueryParams_Statics::NewProp_bFindAnimStartTime_SetBit(void* Obj)
	{
		((FContextualAnimQueryParams*)Obj)->bFindAnimStartTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FContextualAnimQueryParams_Statics::NewProp_bFindAnimStartTime = { "bFindAnimStartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FContextualAnimQueryParams), &Z_Construct_UScriptStruct_FContextualAnimQueryParams_Statics::NewProp_bFindAnimStartTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimQueryParams_Statics::NewProp_bFindAnimStartTime_MetaData), Z_Construct_UScriptStruct_FContextualAnimQueryParams_Statics::NewProp_bFindAnimStartTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FContextualAnimQueryParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimQueryParams_Statics::NewProp_Querier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimQueryParams_Statics::NewProp_QueryTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimQueryParams_Statics::NewProp_bComplexQuery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimQueryParams_Statics::NewProp_bFindAnimStartTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContextualAnimQueryParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContextualAnimation,
		nullptr,
		&NewStructOps,
		"ContextualAnimQueryParams",
		Z_Construct_UScriptStruct_FContextualAnimQueryParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimQueryParams_Statics::PropPointers),
		sizeof(FContextualAnimQueryParams),
		alignof(FContextualAnimQueryParams),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimQueryParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FContextualAnimQueryParams_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimQueryParams_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimQueryParams()
	{
		if (!Z_Registration_Info_UScriptStruct_ContextualAnimQueryParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContextualAnimQueryParams.InnerSingleton, Z_Construct_UScriptStruct_FContextualAnimQueryParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ContextualAnimQueryParams.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimTypes_h_Statics::EnumInfo[] = {
		{ EContextualAnimJoinRule_StaticEnum, TEXT("EContextualAnimJoinRule"), &Z_Registration_Info_UEnum_EContextualAnimJoinRule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3732599812U) },
		{ EContextualAnimIKTargetProvider_StaticEnum, TEXT("EContextualAnimIKTargetProvider"), &Z_Registration_Info_UEnum_EContextualAnimIKTargetProvider, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3278809219U) },
		{ EContextualAnimWarpPointDefinitionMode_StaticEnum, TEXT("EContextualAnimWarpPointDefinitionMode"), &Z_Registration_Info_UEnum_EContextualAnimWarpPointDefinitionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 943365455U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimTypes_h_Statics::ScriptStructInfo[] = {
		{ FContextualAnimAlignmentTrackContainer::StaticStruct, Z_Construct_UScriptStruct_FContextualAnimAlignmentTrackContainer_Statics::NewStructOps, TEXT("ContextualAnimAlignmentTrackContainer"), &Z_Registration_Info_UScriptStruct_ContextualAnimAlignmentTrackContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContextualAnimAlignmentTrackContainer), 3406712126U) },
		{ FContextualAnimTrack::StaticStruct, Z_Construct_UScriptStruct_FContextualAnimTrack_Statics::NewStructOps, TEXT("ContextualAnimTrack"), &Z_Registration_Info_UScriptStruct_ContextualAnimTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContextualAnimTrack), 3273488711U) },
		{ FContextualAnimIKTargetDefinition::StaticStruct, Z_Construct_UScriptStruct_FContextualAnimIKTargetDefinition_Statics::NewStructOps, TEXT("ContextualAnimIKTargetDefinition"), &Z_Registration_Info_UScriptStruct_ContextualAnimIKTargetDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContextualAnimIKTargetDefinition), 1514616738U) },
		{ FContextualAnimIKTarget::StaticStruct, Z_Construct_UScriptStruct_FContextualAnimIKTarget_Statics::NewStructOps, TEXT("ContextualAnimIKTarget"), &Z_Registration_Info_UScriptStruct_ContextualAnimIKTarget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContextualAnimIKTarget), 3093399137U) },
		{ FContextualAnimIKTargetDefContainer::StaticStruct, Z_Construct_UScriptStruct_FContextualAnimIKTargetDefContainer_Statics::NewStructOps, TEXT("ContextualAnimIKTargetDefContainer"), &Z_Registration_Info_UScriptStruct_ContextualAnimIKTargetDefContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContextualAnimIKTargetDefContainer), 3827079075U) },
		{ FContextualAnimRoleDefinition::StaticStruct, Z_Construct_UScriptStruct_FContextualAnimRoleDefinition_Statics::NewStructOps, TEXT("ContextualAnimRoleDefinition"), &Z_Registration_Info_UScriptStruct_ContextualAnimRoleDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContextualAnimRoleDefinition), 1518945462U) },
		{ FContextualAnimWarpPointCustomParams::StaticStruct, Z_Construct_UScriptStruct_FContextualAnimWarpPointCustomParams_Statics::NewStructOps, TEXT("ContextualAnimWarpPointCustomParams"), &Z_Registration_Info_UScriptStruct_ContextualAnimWarpPointCustomParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContextualAnimWarpPointCustomParams), 2682121719U) },
		{ FContextualAnimWarpPointDefinition::StaticStruct, Z_Construct_UScriptStruct_FContextualAnimWarpPointDefinition_Statics::NewStructOps, TEXT("ContextualAnimWarpPointDefinition"), &Z_Registration_Info_UScriptStruct_ContextualAnimWarpPointDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContextualAnimWarpPointDefinition), 1698324490U) },
		{ FContextualAnimWarpPoint::StaticStruct, Z_Construct_UScriptStruct_FContextualAnimWarpPoint_Statics::NewStructOps, TEXT("ContextualAnimWarpPoint"), &Z_Registration_Info_UScriptStruct_ContextualAnimWarpPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContextualAnimWarpPoint), 3160298044U) },
		{ FContextualAnimSceneBindingContext::StaticStruct, Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext_Statics::NewStructOps, TEXT("ContextualAnimSceneBindingContext"), &Z_Registration_Info_UScriptStruct_ContextualAnimSceneBindingContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContextualAnimSceneBindingContext), 3998329344U) },
		{ FContextualAnimSceneBinding::StaticStruct, Z_Construct_UScriptStruct_FContextualAnimSceneBinding_Statics::NewStructOps, TEXT("ContextualAnimSceneBinding"), &Z_Registration_Info_UScriptStruct_ContextualAnimSceneBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContextualAnimSceneBinding), 1121174425U) },
		{ FContextualAnimSceneBindings::StaticStruct, Z_Construct_UScriptStruct_FContextualAnimSceneBindings_Statics::NewStructOps, TEXT("ContextualAnimSceneBindings"), &Z_Registration_Info_UScriptStruct_ContextualAnimSceneBindings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContextualAnimSceneBindings), 1403808521U) },
		{ FContextualAnimStartSceneParams::StaticStruct, Z_Construct_UScriptStruct_FContextualAnimStartSceneParams_Statics::NewStructOps, TEXT("ContextualAnimStartSceneParams"), &Z_Registration_Info_UScriptStruct_ContextualAnimStartSceneParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContextualAnimStartSceneParams), 419706654U) },
		{ FContextualAnimQueryResult::StaticStruct, Z_Construct_UScriptStruct_FContextualAnimQueryResult_Statics::NewStructOps, TEXT("ContextualAnimQueryResult"), &Z_Registration_Info_UScriptStruct_ContextualAnimQueryResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContextualAnimQueryResult), 570087066U) },
		{ FContextualAnimQueryParams::StaticStruct, Z_Construct_UScriptStruct_FContextualAnimQueryParams_Statics::NewStructOps, TEXT("ContextualAnimQueryParams"), &Z_Registration_Info_UScriptStruct_ContextualAnimQueryParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContextualAnimQueryParams), 1071138827U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimTypes_h_4082149148(TEXT("/Script/ContextualAnimation"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
