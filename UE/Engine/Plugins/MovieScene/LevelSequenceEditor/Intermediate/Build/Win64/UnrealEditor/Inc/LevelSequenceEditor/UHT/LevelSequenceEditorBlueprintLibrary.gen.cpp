// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelSequenceEditorBlueprintLibrary.h"
#include "MovieSceneBindingProxy.h"
#include "MovieSceneObjectBindingID.h"
#include "MovieSceneSequencePlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceEditorBlueprintLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	LEVELSEQUENCEEDITOR_API UClass* Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary();
	LEVELSEQUENCEEDITOR_API UClass* Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary_NoRegister();
	LEVELSEQUENCEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSequencerChannelProxy();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneFolder_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSubSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBindingProxy();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams();
	UPackage* Z_Construct_UPackage__Script_LevelSequenceEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SequencerChannelProxy;
class UScriptStruct* FSequencerChannelProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SequencerChannelProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SequencerChannelProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSequencerChannelProxy, (UObject*)Z_Construct_UPackage__Script_LevelSequenceEditor(), TEXT("SequencerChannelProxy"));
	}
	return Z_Registration_Info_UScriptStruct_SequencerChannelProxy.OuterSingleton;
}
template<> LEVELSEQUENCEEDITOR_API UScriptStruct* StaticStruct<FSequencerChannelProxy>()
{
	return FSequencerChannelProxy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSequencerChannelProxy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ChannelName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Section;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequencerChannelProxy_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSequencerChannelProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSequencerChannelProxy>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequencerChannelProxy_Statics::NewProp_ChannelName_MetaData[] = {
		{ "Category", "Channel" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSequencerChannelProxy_Statics::NewProp_ChannelName = { "ChannelName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSequencerChannelProxy, ChannelName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequencerChannelProxy_Statics::NewProp_ChannelName_MetaData), Z_Construct_UScriptStruct_FSequencerChannelProxy_Statics::NewProp_ChannelName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequencerChannelProxy_Statics::NewProp_Section_MetaData[] = {
		{ "Category", "Channel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSequencerChannelProxy_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x001400000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSequencerChannelProxy, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequencerChannelProxy_Statics::NewProp_Section_MetaData), Z_Construct_UScriptStruct_FSequencerChannelProxy_Statics::NewProp_Section_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSequencerChannelProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequencerChannelProxy_Statics::NewProp_ChannelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequencerChannelProxy_Statics::NewProp_Section,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSequencerChannelProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequenceEditor,
		nullptr,
		&NewStructOps,
		"SequencerChannelProxy",
		Z_Construct_UScriptStruct_FSequencerChannelProxy_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequencerChannelProxy_Statics::PropPointers),
		sizeof(FSequencerChannelProxy),
		alignof(FSequencerChannelProxy),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequencerChannelProxy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSequencerChannelProxy_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequencerChannelProxy_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSequencerChannelProxy()
	{
		if (!Z_Registration_Info_UScriptStruct_SequencerChannelProxy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SequencerChannelProxy.InnerSingleton, Z_Construct_UScriptStruct_FSequencerChannelProxy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SequencerChannelProxy.InnerSingleton;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execDeleteColorForChannels)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULevelSequenceEditorBlueprintLibrary::DeleteColorForChannels(Z_Param_Class,Z_Param_Out_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execSetRandomColorForChannels)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Identifiers);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULevelSequenceEditorBlueprintLibrary::SetRandomColorForChannels(Z_Param_Class,Z_Param_Out_Identifiers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execSetCustomColorForChannels)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Identifiers);
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_NewColors);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULevelSequenceEditorBlueprintLibrary::SetCustomColorForChannels(Z_Param_Class,Z_Param_Out_Identifiers,Z_Param_Out_NewColors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execSetCustomColorForChannel)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_NewColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULevelSequenceEditorBlueprintLibrary::SetCustomColorForChannel(Z_Param_Class,Z_Param_Identifier,Z_Param_Out_NewColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execGetCustomColorForChannel)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=ULevelSequenceEditorBlueprintLibrary::GetCustomColorForChannel(Z_Param_Class,Z_Param_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execHasCustomColorForChannel)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULevelSequenceEditorBlueprintLibrary::HasCustomColorForChannel(Z_Param_Class,Z_Param_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execGetTrackFilterNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FText>*)Z_Param__Result=ULevelSequenceEditorBlueprintLibrary::GetTrackFilterNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execSetTrackFilterEnabled)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_TrackFilterName);
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULevelSequenceEditorBlueprintLibrary::SetTrackFilterEnabled(Z_Param_Out_TrackFilterName,Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execIsTrackFilterEnabled)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_TrackFilterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULevelSequenceEditorBlueprintLibrary::IsTrackFilterEnabled(Z_Param_Out_TrackFilterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execSetLockCameraCutToViewport)
	{
		P_GET_UBOOL(Z_Param_bLock);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULevelSequenceEditorBlueprintLibrary::SetLockCameraCutToViewport(Z_Param_bLock);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execIsCameraCutLockedToViewport)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULevelSequenceEditorBlueprintLibrary::IsCameraCutLockedToViewport();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execSetLockLevelSequence)
	{
		P_GET_UBOOL(Z_Param_bLock);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULevelSequenceEditorBlueprintLibrary::SetLockLevelSequence(Z_Param_bLock);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execIsLevelSequenceLocked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULevelSequenceEditorBlueprintLibrary::IsLevelSequenceLocked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execGetBoundObjects)
	{
		P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_ObjectBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObject*>*)Z_Param__Result=ULevelSequenceEditorBlueprintLibrary::GetBoundObjects(Z_Param_ObjectBinding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execRefreshCurrentLevelSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		ULevelSequenceEditorBlueprintLibrary::RefreshCurrentLevelSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execGetSelectionRangeEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=ULevelSequenceEditorBlueprintLibrary::GetSelectionRangeEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execGetSelectionRangeStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=ULevelSequenceEditorBlueprintLibrary::GetSelectionRangeStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execSetSelectionRangeEnd)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewFrame);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULevelSequenceEditorBlueprintLibrary::SetSelectionRangeEnd(Z_Param_NewFrame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execSetSelectionRangeStart)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewFrame);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULevelSequenceEditorBlueprintLibrary::SetSelectionRangeStart(Z_Param_NewFrame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execEmptySelection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		ULevelSequenceEditorBlueprintLibrary::EmptySelection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execSelectBindings)
	{
		P_GET_TARRAY_REF(FMovieSceneBindingProxy,Z_Param_Out_ObjectBindings);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULevelSequenceEditorBlueprintLibrary::SelectBindings(Z_Param_Out_ObjectBindings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execSelectObjects)
	{
		P_GET_TARRAY(FGuid,Z_Param_ObjectBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULevelSequenceEditorBlueprintLibrary::SelectObjects(Z_Param_ObjectBinding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execSelectFolders)
	{
		P_GET_TARRAY_REF(UMovieSceneFolder*,Z_Param_Out_Folders);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULevelSequenceEditorBlueprintLibrary::SelectFolders(Z_Param_Out_Folders);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execSelectChannels)
	{
		P_GET_TARRAY_REF(FSequencerChannelProxy,Z_Param_Out_Channels);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULevelSequenceEditorBlueprintLibrary::SelectChannels(Z_Param_Out_Channels);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execSelectSections)
	{
		P_GET_TARRAY_REF(UMovieSceneSection*,Z_Param_Out_Sections);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULevelSequenceEditorBlueprintLibrary::SelectSections(Z_Param_Out_Sections);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execSelectTracks)
	{
		P_GET_TARRAY_REF(UMovieSceneTrack*,Z_Param_Out_Tracks);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULevelSequenceEditorBlueprintLibrary::SelectTracks(Z_Param_Out_Tracks);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execGetSelectedBindings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FMovieSceneBindingProxy>*)Z_Param__Result=ULevelSequenceEditorBlueprintLibrary::GetSelectedBindings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execGetSelectedObjects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FGuid>*)Z_Param__Result=ULevelSequenceEditorBlueprintLibrary::GetSelectedObjects();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execGetSelectedFolders)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMovieSceneFolder*>*)Z_Param__Result=ULevelSequenceEditorBlueprintLibrary::GetSelectedFolders();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execGetSelectedChannels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSequencerChannelProxy>*)Z_Param__Result=ULevelSequenceEditorBlueprintLibrary::GetSelectedChannels();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execGetSelectedSections)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMovieSceneSection*>*)Z_Param__Result=ULevelSequenceEditorBlueprintLibrary::GetSelectedSections();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execGetSelectedTracks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMovieSceneTrack*>*)Z_Param__Result=ULevelSequenceEditorBlueprintLibrary::GetSelectedTracks();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execIsPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULevelSequenceEditorBlueprintLibrary::IsPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execPlayTo)
	{
		P_GET_STRUCT(FMovieSceneSequencePlaybackParams,Z_Param_PlaybackParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULevelSequenceEditorBlueprintLibrary::PlayTo(Z_Param_PlaybackParams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execGetPlaybackSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=ULevelSequenceEditorBlueprintLibrary::GetPlaybackSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execSetPlaybackSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewPlaybackSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULevelSequenceEditorBlueprintLibrary::SetPlaybackSpeed(Z_Param_NewPlaybackSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execGetCurrentLocalTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=ULevelSequenceEditorBlueprintLibrary::GetCurrentLocalTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execSetCurrentLocalTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewFrame);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULevelSequenceEditorBlueprintLibrary::SetCurrentLocalTime(Z_Param_NewFrame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execGetCurrentTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=ULevelSequenceEditorBlueprintLibrary::GetCurrentTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execSetCurrentTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewFrame);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULevelSequenceEditorBlueprintLibrary::SetCurrentTime(Z_Param_NewFrame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execPause)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		ULevelSequenceEditorBlueprintLibrary::Pause();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		ULevelSequenceEditorBlueprintLibrary::Play();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execCloseLevelSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		ULevelSequenceEditorBlueprintLibrary::CloseLevelSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execGetSubSequenceHierarchy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMovieSceneSubSection*>*)Z_Param__Result=ULevelSequenceEditorBlueprintLibrary::GetSubSequenceHierarchy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execFocusParentSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		ULevelSequenceEditorBlueprintLibrary::FocusParentSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execFocusLevelSequence)
	{
		P_GET_OBJECT(UMovieSceneSubSection,Z_Param_SubSection);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULevelSequenceEditorBlueprintLibrary::FocusLevelSequence(Z_Param_SubSection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execGetFocusedLevelSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevelSequence**)Z_Param__Result=ULevelSequenceEditorBlueprintLibrary::GetFocusedLevelSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execGetCurrentLevelSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevelSequence**)Z_Param__Result=ULevelSequenceEditorBlueprintLibrary::GetCurrentLevelSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorBlueprintLibrary::execOpenLevelSequence)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULevelSequenceEditorBlueprintLibrary::OpenLevelSequence(Z_Param_LevelSequence);
		P_NATIVE_END;
	}
	void ULevelSequenceEditorBlueprintLibrary::StaticRegisterNativesULevelSequenceEditorBlueprintLibrary()
	{
		UClass* Class = ULevelSequenceEditorBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseLevelSequence", &ULevelSequenceEditorBlueprintLibrary::execCloseLevelSequence },
			{ "DeleteColorForChannels", &ULevelSequenceEditorBlueprintLibrary::execDeleteColorForChannels },
			{ "EmptySelection", &ULevelSequenceEditorBlueprintLibrary::execEmptySelection },
			{ "FocusLevelSequence", &ULevelSequenceEditorBlueprintLibrary::execFocusLevelSequence },
			{ "FocusParentSequence", &ULevelSequenceEditorBlueprintLibrary::execFocusParentSequence },
			{ "GetBoundObjects", &ULevelSequenceEditorBlueprintLibrary::execGetBoundObjects },
			{ "GetCurrentLevelSequence", &ULevelSequenceEditorBlueprintLibrary::execGetCurrentLevelSequence },
			{ "GetCurrentLocalTime", &ULevelSequenceEditorBlueprintLibrary::execGetCurrentLocalTime },
			{ "GetCurrentTime", &ULevelSequenceEditorBlueprintLibrary::execGetCurrentTime },
			{ "GetCustomColorForChannel", &ULevelSequenceEditorBlueprintLibrary::execGetCustomColorForChannel },
			{ "GetFocusedLevelSequence", &ULevelSequenceEditorBlueprintLibrary::execGetFocusedLevelSequence },
			{ "GetPlaybackSpeed", &ULevelSequenceEditorBlueprintLibrary::execGetPlaybackSpeed },
			{ "GetSelectedBindings", &ULevelSequenceEditorBlueprintLibrary::execGetSelectedBindings },
			{ "GetSelectedChannels", &ULevelSequenceEditorBlueprintLibrary::execGetSelectedChannels },
			{ "GetSelectedFolders", &ULevelSequenceEditorBlueprintLibrary::execGetSelectedFolders },
			{ "GetSelectedObjects", &ULevelSequenceEditorBlueprintLibrary::execGetSelectedObjects },
			{ "GetSelectedSections", &ULevelSequenceEditorBlueprintLibrary::execGetSelectedSections },
			{ "GetSelectedTracks", &ULevelSequenceEditorBlueprintLibrary::execGetSelectedTracks },
			{ "GetSelectionRangeEnd", &ULevelSequenceEditorBlueprintLibrary::execGetSelectionRangeEnd },
			{ "GetSelectionRangeStart", &ULevelSequenceEditorBlueprintLibrary::execGetSelectionRangeStart },
			{ "GetSubSequenceHierarchy", &ULevelSequenceEditorBlueprintLibrary::execGetSubSequenceHierarchy },
			{ "GetTrackFilterNames", &ULevelSequenceEditorBlueprintLibrary::execGetTrackFilterNames },
			{ "HasCustomColorForChannel", &ULevelSequenceEditorBlueprintLibrary::execHasCustomColorForChannel },
			{ "IsCameraCutLockedToViewport", &ULevelSequenceEditorBlueprintLibrary::execIsCameraCutLockedToViewport },
			{ "IsLevelSequenceLocked", &ULevelSequenceEditorBlueprintLibrary::execIsLevelSequenceLocked },
			{ "IsPlaying", &ULevelSequenceEditorBlueprintLibrary::execIsPlaying },
			{ "IsTrackFilterEnabled", &ULevelSequenceEditorBlueprintLibrary::execIsTrackFilterEnabled },
			{ "OpenLevelSequence", &ULevelSequenceEditorBlueprintLibrary::execOpenLevelSequence },
			{ "Pause", &ULevelSequenceEditorBlueprintLibrary::execPause },
			{ "Play", &ULevelSequenceEditorBlueprintLibrary::execPlay },
			{ "PlayTo", &ULevelSequenceEditorBlueprintLibrary::execPlayTo },
			{ "RefreshCurrentLevelSequence", &ULevelSequenceEditorBlueprintLibrary::execRefreshCurrentLevelSequence },
			{ "SelectBindings", &ULevelSequenceEditorBlueprintLibrary::execSelectBindings },
			{ "SelectChannels", &ULevelSequenceEditorBlueprintLibrary::execSelectChannels },
			{ "SelectFolders", &ULevelSequenceEditorBlueprintLibrary::execSelectFolders },
			{ "SelectObjects", &ULevelSequenceEditorBlueprintLibrary::execSelectObjects },
			{ "SelectSections", &ULevelSequenceEditorBlueprintLibrary::execSelectSections },
			{ "SelectTracks", &ULevelSequenceEditorBlueprintLibrary::execSelectTracks },
			{ "SetCurrentLocalTime", &ULevelSequenceEditorBlueprintLibrary::execSetCurrentLocalTime },
			{ "SetCurrentTime", &ULevelSequenceEditorBlueprintLibrary::execSetCurrentTime },
			{ "SetCustomColorForChannel", &ULevelSequenceEditorBlueprintLibrary::execSetCustomColorForChannel },
			{ "SetCustomColorForChannels", &ULevelSequenceEditorBlueprintLibrary::execSetCustomColorForChannels },
			{ "SetLockCameraCutToViewport", &ULevelSequenceEditorBlueprintLibrary::execSetLockCameraCutToViewport },
			{ "SetLockLevelSequence", &ULevelSequenceEditorBlueprintLibrary::execSetLockLevelSequence },
			{ "SetPlaybackSpeed", &ULevelSequenceEditorBlueprintLibrary::execSetPlaybackSpeed },
			{ "SetRandomColorForChannels", &ULevelSequenceEditorBlueprintLibrary::execSetRandomColorForChannels },
			{ "SetSelectionRangeEnd", &ULevelSequenceEditorBlueprintLibrary::execSetSelectionRangeEnd },
			{ "SetSelectionRangeStart", &ULevelSequenceEditorBlueprintLibrary::execSetSelectionRangeStart },
			{ "SetTrackFilterEnabled", &ULevelSequenceEditorBlueprintLibrary::execSetTrackFilterEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_CloseLevelSequence_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_CloseLevelSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/*\n\x09 * Close\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "* Close" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_CloseLevelSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "CloseLevelSequence", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_CloseLevelSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_CloseLevelSequence_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_CloseLevelSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_CloseLevelSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_DeleteColorForChannels_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventDeleteColorForChannels_Parms
		{
			UClass* Class;
			FString Identifier;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_DeleteColorForChannels_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventDeleteColorForChannels_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_DeleteColorForChannels_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventDeleteColorForChannels_Parms, Identifier), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_DeleteColorForChannels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_DeleteColorForChannels_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_DeleteColorForChannels_Statics::NewProp_Identifier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_DeleteColorForChannels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Delete for specified channel idendified by it's class and identifier.*/" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "Delete for specified channel idendified by it's class and identifier." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_DeleteColorForChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "DeleteColorForChannels", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_DeleteColorForChannels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_DeleteColorForChannels_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_DeleteColorForChannels_Statics::LevelSequenceEditorBlueprintLibrary_eventDeleteColorForChannels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_DeleteColorForChannels_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_DeleteColorForChannels_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_DeleteColorForChannels_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_DeleteColorForChannels_Statics::LevelSequenceEditorBlueprintLibrary_eventDeleteColorForChannels_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_DeleteColorForChannels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_DeleteColorForChannels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_EmptySelection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_EmptySelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Empties the current selection. */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "Empties the current selection." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_EmptySelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "EmptySelection", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_EmptySelection_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_EmptySelection_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_EmptySelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_EmptySelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_FocusLevelSequence_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventFocusLevelSequence_Parms
		{
			UMovieSceneSubSection* SubSection;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubSection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SubSection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_FocusLevelSequence_Statics::NewProp_SubSection_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_FocusLevelSequence_Statics::NewProp_SubSection = { "SubSection", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventFocusLevelSequence_Parms, SubSection), Z_Construct_UClass_UMovieSceneSubSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_FocusLevelSequence_Statics::NewProp_SubSection_MetaData), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_FocusLevelSequence_Statics::NewProp_SubSection_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_FocusLevelSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_FocusLevelSequence_Statics::NewProp_SubSection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_FocusLevelSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/*\n\x09 * Focus/view the sequence associated to the given sub sequence section.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "* Focus/view the sequence associated to the given sub sequence section." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_FocusLevelSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "FocusLevelSequence", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_FocusLevelSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_FocusLevelSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_FocusLevelSequence_Statics::LevelSequenceEditorBlueprintLibrary_eventFocusLevelSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_FocusLevelSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_FocusLevelSequence_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_FocusLevelSequence_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_FocusLevelSequence_Statics::LevelSequenceEditorBlueprintLibrary_eventFocusLevelSequence_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_FocusLevelSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_FocusLevelSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_FocusParentSequence_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_FocusParentSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/*\n\x09 * Focus/view the parent sequence, popping out of the current sub sequence section.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "* Focus/view the parent sequence, popping out of the current sub sequence section." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_FocusParentSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "FocusParentSequence", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_FocusParentSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_FocusParentSequence_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_FocusParentSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_FocusParentSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetBoundObjects_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventGetBoundObjects_Parms
		{
			FMovieSceneObjectBindingID ObjectBinding;
			TArray<UObject*> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectBinding;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetBoundObjects_Statics::NewProp_ObjectBinding = { "ObjectBinding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventGetBoundObjects_Parms, ObjectBinding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(0, nullptr) }; // 2002097097
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetBoundObjects_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetBoundObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventGetBoundObjects_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetBoundObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetBoundObjects_Statics::NewProp_ObjectBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetBoundObjects_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetBoundObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetBoundObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Get the object bound to the given binding ID with the current level sequence editor */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "Get the object bound to the given binding ID with the current level sequence editor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetBoundObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "GetBoundObjects", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetBoundObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetBoundObjects_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetBoundObjects_Statics::LevelSequenceEditorBlueprintLibrary_eventGetBoundObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetBoundObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetBoundObjects_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetBoundObjects_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetBoundObjects_Statics::LevelSequenceEditorBlueprintLibrary_eventGetBoundObjects_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetBoundObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetBoundObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentLevelSequence_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventGetCurrentLevelSequence_Parms
		{
			ULevelSequence* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentLevelSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventGetCurrentLevelSequence_Parms, ReturnValue), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentLevelSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentLevelSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentLevelSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/*\n\x09 * Get the currently opened root level sequence asset\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "* Get the currently opened root level sequence asset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentLevelSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "GetCurrentLevelSequence", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentLevelSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentLevelSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentLevelSequence_Statics::LevelSequenceEditorBlueprintLibrary_eventGetCurrentLevelSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentLevelSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentLevelSequence_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentLevelSequence_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentLevelSequence_Statics::LevelSequenceEditorBlueprintLibrary_eventGetCurrentLevelSequence_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentLevelSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentLevelSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentLocalTime_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventGetCurrentLocalTime_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentLocalTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventGetCurrentLocalTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentLocalTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentLocalTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentLocalTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/**\n\x09 * Get the current local playback position in frames\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "Get the current local playback position in frames" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentLocalTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "GetCurrentLocalTime", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentLocalTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentLocalTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentLocalTime_Statics::LevelSequenceEditorBlueprintLibrary_eventGetCurrentLocalTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentLocalTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentLocalTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentLocalTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentLocalTime_Statics::LevelSequenceEditorBlueprintLibrary_eventGetCurrentLocalTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentLocalTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentLocalTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentTime_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventGetCurrentTime_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventGetCurrentTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/**\n\x09 * Get the current global playback position in frames\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "Get the current global playback position in frames" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "GetCurrentTime", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentTime_Statics::LevelSequenceEditorBlueprintLibrary_eventGetCurrentTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentTime_Statics::LevelSequenceEditorBlueprintLibrary_eventGetCurrentTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCustomColorForChannel_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventGetCustomColorForChannel_Parms
		{
			UClass* Class;
			FString Identifier;
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCustomColorForChannel_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventGetCustomColorForChannel_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCustomColorForChannel_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCustomColorForChannel_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventGetCustomColorForChannel_Parms, Identifier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCustomColorForChannel_Statics::NewProp_Identifier_MetaData), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCustomColorForChannel_Statics::NewProp_Identifier_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCustomColorForChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventGetCustomColorForChannel_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCustomColorForChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCustomColorForChannel_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCustomColorForChannel_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCustomColorForChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCustomColorForChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Get custom color for specified channel idendified by it's class and identifier,if none exists will return white*/" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "Get custom color for specified channel idendified by it's class and identifier,if none exists will return white" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCustomColorForChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "GetCustomColorForChannel", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCustomColorForChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCustomColorForChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCustomColorForChannel_Statics::LevelSequenceEditorBlueprintLibrary_eventGetCustomColorForChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCustomColorForChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCustomColorForChannel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCustomColorForChannel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCustomColorForChannel_Statics::LevelSequenceEditorBlueprintLibrary_eventGetCustomColorForChannel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCustomColorForChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCustomColorForChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetFocusedLevelSequence_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventGetFocusedLevelSequence_Parms
		{
			ULevelSequence* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetFocusedLevelSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventGetFocusedLevelSequence_Parms, ReturnValue), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetFocusedLevelSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetFocusedLevelSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetFocusedLevelSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/*\n\x09 * Get the currently focused/viewed level sequence asset if there is a hierarchy of sequences.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "* Get the currently focused/viewed level sequence asset if there is a hierarchy of sequences." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetFocusedLevelSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "GetFocusedLevelSequence", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetFocusedLevelSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetFocusedLevelSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetFocusedLevelSequence_Statics::LevelSequenceEditorBlueprintLibrary_eventGetFocusedLevelSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetFocusedLevelSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetFocusedLevelSequence_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetFocusedLevelSequence_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetFocusedLevelSequence_Statics::LevelSequenceEditorBlueprintLibrary_eventGetFocusedLevelSequence_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetFocusedLevelSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetFocusedLevelSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetPlaybackSpeed_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventGetPlaybackSpeed_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetPlaybackSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventGetPlaybackSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetPlaybackSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetPlaybackSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetPlaybackSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/**\n\x09 * Get playback speed of the current level sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "Get playback speed of the current level sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetPlaybackSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "GetPlaybackSpeed", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetPlaybackSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetPlaybackSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetPlaybackSpeed_Statics::LevelSequenceEditorBlueprintLibrary_eventGetPlaybackSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetPlaybackSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetPlaybackSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetPlaybackSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetPlaybackSpeed_Statics::LevelSequenceEditorBlueprintLibrary_eventGetPlaybackSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetPlaybackSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetPlaybackSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedBindings_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventGetSelectedBindings_Parms
		{
			TArray<FMovieSceneBindingProxy> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedBindings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(0, nullptr) }; // 4121699848
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedBindings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventGetSelectedBindings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4121699848
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedBindings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedBindings_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedBindings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedBindings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Gets the currently selected object bindings */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "Gets the currently selected object bindings" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "GetSelectedBindings", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedBindings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedBindings_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedBindings_Statics::LevelSequenceEditorBlueprintLibrary_eventGetSelectedBindings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedBindings_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedBindings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedBindings_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedBindings_Statics::LevelSequenceEditorBlueprintLibrary_eventGetSelectedBindings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedBindings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedBindings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedChannels_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventGetSelectedChannels_Parms
		{
			TArray<FSequencerChannelProxy> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedChannels_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSequencerChannelProxy, METADATA_PARAMS(0, nullptr) }; // 2301359050
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedChannels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventGetSelectedChannels_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2301359050
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedChannels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedChannels_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedChannels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedChannels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Gets the currently selected channels. */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "Gets the currently selected channels." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "GetSelectedChannels", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedChannels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedChannels_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedChannels_Statics::LevelSequenceEditorBlueprintLibrary_eventGetSelectedChannels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedChannels_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedChannels_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedChannels_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedChannels_Statics::LevelSequenceEditorBlueprintLibrary_eventGetSelectedChannels_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedChannels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedChannels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedFolders_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventGetSelectedFolders_Parms
		{
			TArray<UMovieSceneFolder*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedFolders_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneFolder_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedFolders_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedFolders_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventGetSelectedFolders_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedFolders_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedFolders_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedFolders_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedFolders_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedFolders_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedFolders_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Gets the currently selected folders. */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "Gets the currently selected folders." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedFolders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "GetSelectedFolders", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedFolders_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedFolders_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedFolders_Statics::LevelSequenceEditorBlueprintLibrary_eventGetSelectedFolders_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedFolders_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedFolders_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedFolders_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedFolders_Statics::LevelSequenceEditorBlueprintLibrary_eventGetSelectedFolders_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedFolders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedFolders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedObjects_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventGetSelectedObjects_Parms
		{
			TArray<FGuid> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedObjects_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventGetSelectedObjects_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedObjects_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetSelectedObjects is deprecated, please use GetSelectedBindings which returns an array of FMovieSceneBindingProxy" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "GetSelectedObjects", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedObjects_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedObjects_Statics::LevelSequenceEditorBlueprintLibrary_eventGetSelectedObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedObjects_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedObjects_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedObjects_Statics::LevelSequenceEditorBlueprintLibrary_eventGetSelectedObjects_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedSections_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventGetSelectedSections_Parms
		{
			TArray<UMovieSceneSection*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedSections_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedSections_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedSections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventGetSelectedSections_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedSections_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedSections_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedSections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedSections_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedSections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedSections_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Gets the currently selected sections. */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "Gets the currently selected sections." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedSections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "GetSelectedSections", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedSections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedSections_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedSections_Statics::LevelSequenceEditorBlueprintLibrary_eventGetSelectedSections_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedSections_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedSections_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedSections_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedSections_Statics::LevelSequenceEditorBlueprintLibrary_eventGetSelectedSections_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedSections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedSections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedTracks_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventGetSelectedTracks_Parms
		{
			TArray<UMovieSceneTrack*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedTracks_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedTracks_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedTracks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventGetSelectedTracks_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedTracks_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedTracks_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedTracks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedTracks_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedTracks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedTracks_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Gets the currently selected tracks. */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "Gets the currently selected tracks." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedTracks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "GetSelectedTracks", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedTracks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedTracks_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedTracks_Statics::LevelSequenceEditorBlueprintLibrary_eventGetSelectedTracks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedTracks_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedTracks_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedTracks_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedTracks_Statics::LevelSequenceEditorBlueprintLibrary_eventGetSelectedTracks_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedTracks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedTracks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectionRangeEnd_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventGetSelectionRangeEnd_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectionRangeEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventGetSelectionRangeEnd_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectionRangeEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectionRangeEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectionRangeEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Get the selection range end frame. */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "Get the selection range end frame." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectionRangeEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "GetSelectionRangeEnd", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectionRangeEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectionRangeEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectionRangeEnd_Statics::LevelSequenceEditorBlueprintLibrary_eventGetSelectionRangeEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectionRangeEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectionRangeEnd_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectionRangeEnd_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectionRangeEnd_Statics::LevelSequenceEditorBlueprintLibrary_eventGetSelectionRangeEnd_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectionRangeEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectionRangeEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectionRangeStart_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventGetSelectionRangeStart_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectionRangeStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventGetSelectionRangeStart_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectionRangeStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectionRangeStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectionRangeStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Get the selection range start frame. */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "Get the selection range start frame." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectionRangeStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "GetSelectionRangeStart", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectionRangeStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectionRangeStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectionRangeStart_Statics::LevelSequenceEditorBlueprintLibrary_eventGetSelectionRangeStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectionRangeStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectionRangeStart_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectionRangeStart_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectionRangeStart_Statics::LevelSequenceEditorBlueprintLibrary_eventGetSelectionRangeStart_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectionRangeStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectionRangeStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSubSequenceHierarchy_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventGetSubSequenceHierarchy_Parms
		{
			TArray<UMovieSceneSubSection*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSubSequenceHierarchy_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneSubSection_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSubSequenceHierarchy_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSubSequenceHierarchy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventGetSubSequenceHierarchy_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSubSequenceHierarchy_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSubSequenceHierarchy_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSubSequenceHierarchy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSubSequenceHierarchy_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSubSequenceHierarchy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSubSequenceHierarchy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/*\n\x09 * Get the current sub section hierarchy from the current sequence to the section associated with the focused sequence.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "* Get the current sub section hierarchy from the current sequence to the section associated with the focused sequence." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSubSequenceHierarchy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "GetSubSequenceHierarchy", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSubSequenceHierarchy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSubSequenceHierarchy_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSubSequenceHierarchy_Statics::LevelSequenceEditorBlueprintLibrary_eventGetSubSequenceHierarchy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSubSequenceHierarchy_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSubSequenceHierarchy_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSubSequenceHierarchy_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSubSequenceHierarchy_Statics::LevelSequenceEditorBlueprintLibrary_eventGetSubSequenceHierarchy_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSubSequenceHierarchy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSubSequenceHierarchy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetTrackFilterNames_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventGetTrackFilterNames_Parms
		{
			TArray<FText> ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetTrackFilterNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetTrackFilterNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventGetTrackFilterNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetTrackFilterNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetTrackFilterNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetTrackFilterNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetTrackFilterNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Gets all the available track filter names */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "Gets all the available track filter names" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetTrackFilterNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "GetTrackFilterNames", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetTrackFilterNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetTrackFilterNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetTrackFilterNames_Statics::LevelSequenceEditorBlueprintLibrary_eventGetTrackFilterNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetTrackFilterNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetTrackFilterNames_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetTrackFilterNames_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetTrackFilterNames_Statics::LevelSequenceEditorBlueprintLibrary_eventGetTrackFilterNames_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetTrackFilterNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetTrackFilterNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_HasCustomColorForChannel_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventHasCustomColorForChannel_Parms
		{
			UClass* Class;
			FString Identifier;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_HasCustomColorForChannel_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventHasCustomColorForChannel_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_HasCustomColorForChannel_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_HasCustomColorForChannel_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventHasCustomColorForChannel_Parms, Identifier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_HasCustomColorForChannel_Statics::NewProp_Identifier_MetaData), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_HasCustomColorForChannel_Statics::NewProp_Identifier_MetaData) };
	void Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_HasCustomColorForChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelSequenceEditorBlueprintLibrary_eventHasCustomColorForChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_HasCustomColorForChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LevelSequenceEditorBlueprintLibrary_eventHasCustomColorForChannel_Parms), &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_HasCustomColorForChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_HasCustomColorForChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_HasCustomColorForChannel_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_HasCustomColorForChannel_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_HasCustomColorForChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_HasCustomColorForChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Get if a custom color for specified channel idendified by it's class and identifier exists */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "Get if a custom color for specified channel idendified by it's class and identifier exists" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_HasCustomColorForChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "HasCustomColorForChannel", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_HasCustomColorForChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_HasCustomColorForChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_HasCustomColorForChannel_Statics::LevelSequenceEditorBlueprintLibrary_eventHasCustomColorForChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_HasCustomColorForChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_HasCustomColorForChannel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_HasCustomColorForChannel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_HasCustomColorForChannel_Statics::LevelSequenceEditorBlueprintLibrary_eventHasCustomColorForChannel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_HasCustomColorForChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_HasCustomColorForChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsCameraCutLockedToViewport_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventIsCameraCutLockedToViewport_Parms
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
	void Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsCameraCutLockedToViewport_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelSequenceEditorBlueprintLibrary_eventIsCameraCutLockedToViewport_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsCameraCutLockedToViewport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LevelSequenceEditorBlueprintLibrary_eventIsCameraCutLockedToViewport_Parms), &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsCameraCutLockedToViewport_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsCameraCutLockedToViewport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsCameraCutLockedToViewport_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsCameraCutLockedToViewport_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Check whether the lock for the viewport to the camera cuts is enabled. */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "Check whether the lock for the viewport to the camera cuts is enabled." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsCameraCutLockedToViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "IsCameraCutLockedToViewport", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsCameraCutLockedToViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsCameraCutLockedToViewport_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsCameraCutLockedToViewport_Statics::LevelSequenceEditorBlueprintLibrary_eventIsCameraCutLockedToViewport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsCameraCutLockedToViewport_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsCameraCutLockedToViewport_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsCameraCutLockedToViewport_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsCameraCutLockedToViewport_Statics::LevelSequenceEditorBlueprintLibrary_eventIsCameraCutLockedToViewport_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsCameraCutLockedToViewport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsCameraCutLockedToViewport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsLevelSequenceLocked_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventIsLevelSequenceLocked_Parms
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
	void Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsLevelSequenceLocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelSequenceEditorBlueprintLibrary_eventIsLevelSequenceLocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsLevelSequenceLocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LevelSequenceEditorBlueprintLibrary_eventIsLevelSequenceLocked_Parms), &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsLevelSequenceLocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsLevelSequenceLocked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsLevelSequenceLocked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsLevelSequenceLocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Check whether the current level sequence and its descendants are locked for editing. */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "Check whether the current level sequence and its descendants are locked for editing." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsLevelSequenceLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "IsLevelSequenceLocked", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsLevelSequenceLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsLevelSequenceLocked_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsLevelSequenceLocked_Statics::LevelSequenceEditorBlueprintLibrary_eventIsLevelSequenceLocked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsLevelSequenceLocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsLevelSequenceLocked_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsLevelSequenceLocked_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsLevelSequenceLocked_Statics::LevelSequenceEditorBlueprintLibrary_eventIsLevelSequenceLocked_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsLevelSequenceLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsLevelSequenceLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsPlaying_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventIsPlaying_Parms
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
	void Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelSequenceEditorBlueprintLibrary_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LevelSequenceEditorBlueprintLibrary_eventIsPlaying_Parms), &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsPlaying_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Check whether the sequence is actively playing. */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "Check whether the sequence is actively playing." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "IsPlaying", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsPlaying_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsPlaying_Statics::LevelSequenceEditorBlueprintLibrary_eventIsPlaying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsPlaying_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsPlaying_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsPlaying_Statics::LevelSequenceEditorBlueprintLibrary_eventIsPlaying_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsTrackFilterEnabled_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventIsTrackFilterEnabled_Parms
		{
			FText TrackFilterName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackFilterName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TrackFilterName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsTrackFilterEnabled_Statics::NewProp_TrackFilterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsTrackFilterEnabled_Statics::NewProp_TrackFilterName = { "TrackFilterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventIsTrackFilterEnabled_Parms, TrackFilterName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsTrackFilterEnabled_Statics::NewProp_TrackFilterName_MetaData), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsTrackFilterEnabled_Statics::NewProp_TrackFilterName_MetaData) };
	void Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsTrackFilterEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelSequenceEditorBlueprintLibrary_eventIsTrackFilterEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsTrackFilterEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LevelSequenceEditorBlueprintLibrary_eventIsTrackFilterEnabled_Parms), &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsTrackFilterEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsTrackFilterEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsTrackFilterEnabled_Statics::NewProp_TrackFilterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsTrackFilterEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsTrackFilterEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Gets whether the specified track filter is on/off */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "Gets whether the specified track filter is on/off" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsTrackFilterEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "IsTrackFilterEnabled", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsTrackFilterEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsTrackFilterEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsTrackFilterEnabled_Statics::LevelSequenceEditorBlueprintLibrary_eventIsTrackFilterEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsTrackFilterEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsTrackFilterEnabled_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsTrackFilterEnabled_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsTrackFilterEnabled_Statics::LevelSequenceEditorBlueprintLibrary_eventIsTrackFilterEnabled_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsTrackFilterEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsTrackFilterEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_OpenLevelSequence_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventOpenLevelSequence_Parms
		{
			ULevelSequence* LevelSequence;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_OpenLevelSequence_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventOpenLevelSequence_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_OpenLevelSequence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelSequenceEditorBlueprintLibrary_eventOpenLevelSequence_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_OpenLevelSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LevelSequenceEditorBlueprintLibrary_eventOpenLevelSequence_Parms), &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_OpenLevelSequence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_OpenLevelSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_OpenLevelSequence_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_OpenLevelSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_OpenLevelSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/*\n\x09 * Open a level sequence asset\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "* Open a level sequence asset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_OpenLevelSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "OpenLevelSequence", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_OpenLevelSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_OpenLevelSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_OpenLevelSequence_Statics::LevelSequenceEditorBlueprintLibrary_eventOpenLevelSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_OpenLevelSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_OpenLevelSequence_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_OpenLevelSequence_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_OpenLevelSequence_Statics::LevelSequenceEditorBlueprintLibrary_eventOpenLevelSequence_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_OpenLevelSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_OpenLevelSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_Pause_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_Pause_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/**\n\x09 * Pause the current level sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "Pause the current level sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "Pause", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_Pause_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_Pause_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_Pause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_Pause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_Play_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/**\n\x09 * Play the current level sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "Play the current level sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "Play", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_Play_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_PlayTo_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventPlayTo_Parms
		{
			FMovieSceneSequencePlaybackParams PlaybackParams;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlaybackParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_PlayTo_Statics::NewProp_PlaybackParams = { "PlaybackParams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventPlayTo_Parms, PlaybackParams), Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams, METADATA_PARAMS(0, nullptr) }; // 4092779417
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_PlayTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_PlayTo_Statics::NewProp_PlaybackParams,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_PlayTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/**\n\x09 * Play from the current time to the requested time in frames\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "Play from the current time to the requested time in frames" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_PlayTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "PlayTo", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_PlayTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_PlayTo_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_PlayTo_Statics::LevelSequenceEditorBlueprintLibrary_eventPlayTo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_PlayTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_PlayTo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_PlayTo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_PlayTo_Statics::LevelSequenceEditorBlueprintLibrary_eventPlayTo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_PlayTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_PlayTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_RefreshCurrentLevelSequence_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_RefreshCurrentLevelSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Refresh Sequencer UI. */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "Refresh Sequencer UI." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_RefreshCurrentLevelSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "RefreshCurrentLevelSequence", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_RefreshCurrentLevelSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_RefreshCurrentLevelSequence_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_RefreshCurrentLevelSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_RefreshCurrentLevelSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectBindings_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventSelectBindings_Parms
		{
			TArray<FMovieSceneBindingProxy> ObjectBindings;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectBindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectBindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectBindings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectBindings_Statics::NewProp_ObjectBindings_Inner = { "ObjectBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(0, nullptr) }; // 4121699848
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectBindings_Statics::NewProp_ObjectBindings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectBindings_Statics::NewProp_ObjectBindings = { "ObjectBindings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventSelectBindings_Parms, ObjectBindings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectBindings_Statics::NewProp_ObjectBindings_MetaData), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectBindings_Statics::NewProp_ObjectBindings_MetaData) }; // 4121699848
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectBindings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectBindings_Statics::NewProp_ObjectBindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectBindings_Statics::NewProp_ObjectBindings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectBindings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Select bindings */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "Select bindings" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "SelectBindings", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectBindings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectBindings_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectBindings_Statics::LevelSequenceEditorBlueprintLibrary_eventSelectBindings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectBindings_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectBindings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectBindings_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectBindings_Statics::LevelSequenceEditorBlueprintLibrary_eventSelectBindings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectBindings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectBindings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectChannels_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventSelectChannels_Parms
		{
			TArray<FSequencerChannelProxy> Channels;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Channels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Channels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Channels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectChannels_Statics::NewProp_Channels_Inner = { "Channels", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSequencerChannelProxy, METADATA_PARAMS(0, nullptr) }; // 2301359050
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectChannels_Statics::NewProp_Channels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectChannels_Statics::NewProp_Channels = { "Channels", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventSelectChannels_Parms, Channels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectChannels_Statics::NewProp_Channels_MetaData), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectChannels_Statics::NewProp_Channels_MetaData) }; // 2301359050
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectChannels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectChannels_Statics::NewProp_Channels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectChannels_Statics::NewProp_Channels,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectChannels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Select channels */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "Select channels" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "SelectChannels", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectChannels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectChannels_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectChannels_Statics::LevelSequenceEditorBlueprintLibrary_eventSelectChannels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectChannels_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectChannels_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectChannels_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectChannels_Statics::LevelSequenceEditorBlueprintLibrary_eventSelectChannels_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectChannels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectChannels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectFolders_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventSelectFolders_Parms
		{
			TArray<UMovieSceneFolder*> Folders;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Folders_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Folders_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Folders;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectFolders_Statics::NewProp_Folders_Inner = { "Folders", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneFolder_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectFolders_Statics::NewProp_Folders_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectFolders_Statics::NewProp_Folders = { "Folders", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventSelectFolders_Parms, Folders), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectFolders_Statics::NewProp_Folders_MetaData), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectFolders_Statics::NewProp_Folders_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectFolders_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectFolders_Statics::NewProp_Folders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectFolders_Statics::NewProp_Folders,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectFolders_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Select folders */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "Select folders" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectFolders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "SelectFolders", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectFolders_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectFolders_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectFolders_Statics::LevelSequenceEditorBlueprintLibrary_eventSelectFolders_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectFolders_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectFolders_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectFolders_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectFolders_Statics::LevelSequenceEditorBlueprintLibrary_eventSelectFolders_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectFolders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectFolders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectObjects_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventSelectObjects_Parms
		{
			TArray<FGuid> ObjectBinding;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectBinding_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectBinding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectObjects_Statics::NewProp_ObjectBinding_Inner = { "ObjectBinding", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectObjects_Statics::NewProp_ObjectBinding = { "ObjectBinding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventSelectObjects_Parms, ObjectBinding), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectObjects_Statics::NewProp_ObjectBinding_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectObjects_Statics::NewProp_ObjectBinding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "SelectObjects is deprecated, please use SelectBindings which takes an FMovieSceneBindingProxy" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "SelectObjects", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectObjects_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectObjects_Statics::LevelSequenceEditorBlueprintLibrary_eventSelectObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectObjects_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectObjects_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectObjects_Statics::LevelSequenceEditorBlueprintLibrary_eventSelectObjects_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectSections_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventSelectSections_Parms
		{
			TArray<UMovieSceneSection*> Sections;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectSections_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectSections_Statics::NewProp_Sections_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectSections_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventSelectSections_Parms, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectSections_Statics::NewProp_Sections_MetaData), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectSections_Statics::NewProp_Sections_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectSections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectSections_Statics::NewProp_Sections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectSections_Statics::NewProp_Sections,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectSections_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Select sections */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "Select sections" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectSections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "SelectSections", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectSections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectSections_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectSections_Statics::LevelSequenceEditorBlueprintLibrary_eventSelectSections_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectSections_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectSections_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectSections_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectSections_Statics::LevelSequenceEditorBlueprintLibrary_eventSelectSections_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectSections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectSections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectTracks_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventSelectTracks_Parms
		{
			TArray<UMovieSceneTrack*> Tracks;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Tracks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tracks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tracks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectTracks_Statics::NewProp_Tracks_Inner = { "Tracks", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectTracks_Statics::NewProp_Tracks_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectTracks_Statics::NewProp_Tracks = { "Tracks", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventSelectTracks_Parms, Tracks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectTracks_Statics::NewProp_Tracks_MetaData), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectTracks_Statics::NewProp_Tracks_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectTracks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectTracks_Statics::NewProp_Tracks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectTracks_Statics::NewProp_Tracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectTracks_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Select tracks */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "Select tracks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectTracks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "SelectTracks", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectTracks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectTracks_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectTracks_Statics::LevelSequenceEditorBlueprintLibrary_eventSelectTracks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectTracks_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectTracks_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectTracks_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectTracks_Statics::LevelSequenceEditorBlueprintLibrary_eventSelectTracks_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectTracks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectTracks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCurrentLocalTime_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventSetCurrentLocalTime_Parms
		{
			int32 NewFrame;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCurrentLocalTime_Statics::NewProp_NewFrame = { "NewFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventSetCurrentLocalTime_Parms, NewFrame), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCurrentLocalTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCurrentLocalTime_Statics::NewProp_NewFrame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCurrentLocalTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/**\n\x09 * Set local playback position for the current level sequence in frames\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "Set local playback position for the current level sequence in frames" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCurrentLocalTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "SetCurrentLocalTime", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCurrentLocalTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCurrentLocalTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCurrentLocalTime_Statics::LevelSequenceEditorBlueprintLibrary_eventSetCurrentLocalTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCurrentLocalTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCurrentLocalTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCurrentLocalTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCurrentLocalTime_Statics::LevelSequenceEditorBlueprintLibrary_eventSetCurrentLocalTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCurrentLocalTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCurrentLocalTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCurrentTime_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventSetCurrentTime_Parms
		{
			int32 NewFrame;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCurrentTime_Statics::NewProp_NewFrame = { "NewFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventSetCurrentTime_Parms, NewFrame), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCurrentTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCurrentTime_Statics::NewProp_NewFrame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCurrentTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/**\n\x09 * Set global playback position for the current level sequence in frames\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "Set global playback position for the current level sequence in frames" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCurrentTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "SetCurrentTime", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCurrentTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCurrentTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCurrentTime_Statics::LevelSequenceEditorBlueprintLibrary_eventSetCurrentTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCurrentTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCurrentTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCurrentTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCurrentTime_Statics::LevelSequenceEditorBlueprintLibrary_eventSetCurrentTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCurrentTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCurrentTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannel_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventSetCustomColorForChannel_Parms
		{
			UClass* Class;
			FString Identifier;
			FLinearColor NewColor;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannel_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventSetCustomColorForChannel_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannel_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannel_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventSetCustomColorForChannel_Parms, Identifier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannel_Statics::NewProp_Identifier_MetaData), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannel_Statics::NewProp_Identifier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannel_Statics::NewProp_NewColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannel_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventSetCustomColorForChannel_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannel_Statics::NewProp_NewColor_MetaData), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannel_Statics::NewProp_NewColor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannel_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannel_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannel_Statics::NewProp_NewColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Set Custom Color for specified channel idendified by it's class and identifier. This will be stored in editor user preferences.*/" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "Set Custom Color for specified channel idendified by it's class and identifier. This will be stored in editor user preferences." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "SetCustomColorForChannel", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannel_Statics::LevelSequenceEditorBlueprintLibrary_eventSetCustomColorForChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannel_Statics::LevelSequenceEditorBlueprintLibrary_eventSetCustomColorForChannel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannels_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventSetCustomColorForChannels_Parms
		{
			UClass* Class;
			TArray<FString> Identifiers;
			TArray<FLinearColor> NewColors;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Identifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Identifiers;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewColors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewColors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NewColors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannels_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventSetCustomColorForChannels_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannels_Statics::NewProp_Identifiers_Inner = { "Identifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannels_Statics::NewProp_Identifiers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannels_Statics::NewProp_Identifiers = { "Identifiers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventSetCustomColorForChannels_Parms, Identifiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannels_Statics::NewProp_Identifiers_MetaData), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannels_Statics::NewProp_Identifiers_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannels_Statics::NewProp_NewColors_Inner = { "NewColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannels_Statics::NewProp_NewColors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannels_Statics::NewProp_NewColors = { "NewColors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventSetCustomColorForChannels_Parms, NewColors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannels_Statics::NewProp_NewColors_MetaData), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannels_Statics::NewProp_NewColors_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannels_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannels_Statics::NewProp_Identifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannels_Statics::NewProp_Identifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannels_Statics::NewProp_NewColors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannels_Statics::NewProp_NewColors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Set Custom Color for specified channels idendified by it's class and identifiers. This will be stored in editor user preferences.*/" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "Set Custom Color for specified channels idendified by it's class and identifiers. This will be stored in editor user preferences." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "SetCustomColorForChannels", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannels_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannels_Statics::LevelSequenceEditorBlueprintLibrary_eventSetCustomColorForChannels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannels_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannels_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannels_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannels_Statics::LevelSequenceEditorBlueprintLibrary_eventSetCustomColorForChannels_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetLockCameraCutToViewport_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventSetLockCameraCutToViewport_Parms
		{
			bool bLock;
		};
		static void NewProp_bLock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLock;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetLockCameraCutToViewport_Statics::NewProp_bLock_SetBit(void* Obj)
	{
		((LevelSequenceEditorBlueprintLibrary_eventSetLockCameraCutToViewport_Parms*)Obj)->bLock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetLockCameraCutToViewport_Statics::NewProp_bLock = { "bLock", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LevelSequenceEditorBlueprintLibrary_eventSetLockCameraCutToViewport_Parms), &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetLockCameraCutToViewport_Statics::NewProp_bLock_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetLockCameraCutToViewport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetLockCameraCutToViewport_Statics::NewProp_bLock,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetLockCameraCutToViewport_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Sets the lock for the viewport to the camera cuts. */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "Sets the lock for the viewport to the camera cuts." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetLockCameraCutToViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "SetLockCameraCutToViewport", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetLockCameraCutToViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetLockCameraCutToViewport_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetLockCameraCutToViewport_Statics::LevelSequenceEditorBlueprintLibrary_eventSetLockCameraCutToViewport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetLockCameraCutToViewport_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetLockCameraCutToViewport_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetLockCameraCutToViewport_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetLockCameraCutToViewport_Statics::LevelSequenceEditorBlueprintLibrary_eventSetLockCameraCutToViewport_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetLockCameraCutToViewport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetLockCameraCutToViewport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetLockLevelSequence_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventSetLockLevelSequence_Parms
		{
			bool bLock;
		};
		static void NewProp_bLock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLock;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetLockLevelSequence_Statics::NewProp_bLock_SetBit(void* Obj)
	{
		((LevelSequenceEditorBlueprintLibrary_eventSetLockLevelSequence_Parms*)Obj)->bLock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetLockLevelSequence_Statics::NewProp_bLock = { "bLock", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LevelSequenceEditorBlueprintLibrary_eventSetLockLevelSequence_Parms), &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetLockLevelSequence_Statics::NewProp_bLock_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetLockLevelSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetLockLevelSequence_Statics::NewProp_bLock,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetLockLevelSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Sets the lock for the current level sequence and its descendants for editing. */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "Sets the lock for the current level sequence and its descendants for editing." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetLockLevelSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "SetLockLevelSequence", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetLockLevelSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetLockLevelSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetLockLevelSequence_Statics::LevelSequenceEditorBlueprintLibrary_eventSetLockLevelSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetLockLevelSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetLockLevelSequence_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetLockLevelSequence_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetLockLevelSequence_Statics::LevelSequenceEditorBlueprintLibrary_eventSetLockLevelSequence_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetLockLevelSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetLockLevelSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetPlaybackSpeed_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventSetPlaybackSpeed_Parms
		{
			float NewPlaybackSpeed;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewPlaybackSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetPlaybackSpeed_Statics::NewProp_NewPlaybackSpeed = { "NewPlaybackSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventSetPlaybackSpeed_Parms, NewPlaybackSpeed), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetPlaybackSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetPlaybackSpeed_Statics::NewProp_NewPlaybackSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetPlaybackSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/**\n\x09 * Set playback speed of the current level sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "Set playback speed of the current level sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetPlaybackSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "SetPlaybackSpeed", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetPlaybackSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetPlaybackSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetPlaybackSpeed_Statics::LevelSequenceEditorBlueprintLibrary_eventSetPlaybackSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetPlaybackSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetPlaybackSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetPlaybackSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetPlaybackSpeed_Statics::LevelSequenceEditorBlueprintLibrary_eventSetPlaybackSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetPlaybackSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetPlaybackSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetRandomColorForChannels_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventSetRandomColorForChannels_Parms
		{
			UClass* Class;
			TArray<FString> Identifiers;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Identifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Identifiers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetRandomColorForChannels_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventSetRandomColorForChannels_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetRandomColorForChannels_Statics::NewProp_Identifiers_Inner = { "Identifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetRandomColorForChannels_Statics::NewProp_Identifiers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetRandomColorForChannels_Statics::NewProp_Identifiers = { "Identifiers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventSetRandomColorForChannels_Parms, Identifiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetRandomColorForChannels_Statics::NewProp_Identifiers_MetaData), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetRandomColorForChannels_Statics::NewProp_Identifiers_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetRandomColorForChannels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetRandomColorForChannels_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetRandomColorForChannels_Statics::NewProp_Identifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetRandomColorForChannels_Statics::NewProp_Identifiers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetRandomColorForChannels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Set Random Colors for specified channels idendified by it's class and identifiers. This will be stored in editor user preferences.*/" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "Set Random Colors for specified channels idendified by it's class and identifiers. This will be stored in editor user preferences." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetRandomColorForChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "SetRandomColorForChannels", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetRandomColorForChannels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetRandomColorForChannels_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetRandomColorForChannels_Statics::LevelSequenceEditorBlueprintLibrary_eventSetRandomColorForChannels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetRandomColorForChannels_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetRandomColorForChannels_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetRandomColorForChannels_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetRandomColorForChannels_Statics::LevelSequenceEditorBlueprintLibrary_eventSetRandomColorForChannels_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetRandomColorForChannels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetRandomColorForChannels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetSelectionRangeEnd_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventSetSelectionRangeEnd_Parms
		{
			int32 NewFrame;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetSelectionRangeEnd_Statics::NewProp_NewFrame = { "NewFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventSetSelectionRangeEnd_Parms, NewFrame), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetSelectionRangeEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetSelectionRangeEnd_Statics::NewProp_NewFrame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetSelectionRangeEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Set the selection range end frame. */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "Set the selection range end frame." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetSelectionRangeEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "SetSelectionRangeEnd", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetSelectionRangeEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetSelectionRangeEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetSelectionRangeEnd_Statics::LevelSequenceEditorBlueprintLibrary_eventSetSelectionRangeEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetSelectionRangeEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetSelectionRangeEnd_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetSelectionRangeEnd_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetSelectionRangeEnd_Statics::LevelSequenceEditorBlueprintLibrary_eventSetSelectionRangeEnd_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetSelectionRangeEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetSelectionRangeEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetSelectionRangeStart_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventSetSelectionRangeStart_Parms
		{
			int32 NewFrame;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetSelectionRangeStart_Statics::NewProp_NewFrame = { "NewFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventSetSelectionRangeStart_Parms, NewFrame), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetSelectionRangeStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetSelectionRangeStart_Statics::NewProp_NewFrame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetSelectionRangeStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Set the selection range start frame. */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "Set the selection range start frame." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetSelectionRangeStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "SetSelectionRangeStart", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetSelectionRangeStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetSelectionRangeStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetSelectionRangeStart_Statics::LevelSequenceEditorBlueprintLibrary_eventSetSelectionRangeStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetSelectionRangeStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetSelectionRangeStart_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetSelectionRangeStart_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetSelectionRangeStart_Statics::LevelSequenceEditorBlueprintLibrary_eventSetSelectionRangeStart_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetSelectionRangeStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetSelectionRangeStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetTrackFilterEnabled_Statics
	{
		struct LevelSequenceEditorBlueprintLibrary_eventSetTrackFilterEnabled_Parms
		{
			FText TrackFilterName;
			bool bEnabled;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackFilterName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TrackFilterName;
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetTrackFilterEnabled_Statics::NewProp_TrackFilterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetTrackFilterEnabled_Statics::NewProp_TrackFilterName = { "TrackFilterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceEditorBlueprintLibrary_eventSetTrackFilterEnabled_Parms, TrackFilterName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetTrackFilterEnabled_Statics::NewProp_TrackFilterName_MetaData), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetTrackFilterEnabled_Statics::NewProp_TrackFilterName_MetaData) };
	void Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetTrackFilterEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((LevelSequenceEditorBlueprintLibrary_eventSetTrackFilterEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetTrackFilterEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LevelSequenceEditorBlueprintLibrary_eventSetTrackFilterEnabled_Parms), &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetTrackFilterEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetTrackFilterEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetTrackFilterEnabled_Statics::NewProp_TrackFilterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetTrackFilterEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetTrackFilterEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Sets the specified track filter to be on or off */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
		{ "ToolTip", "Sets the specified track filter to be on or off" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetTrackFilterEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, nullptr, "SetTrackFilterEnabled", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetTrackFilterEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetTrackFilterEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetTrackFilterEnabled_Statics::LevelSequenceEditorBlueprintLibrary_eventSetTrackFilterEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetTrackFilterEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetTrackFilterEnabled_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetTrackFilterEnabled_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetTrackFilterEnabled_Statics::LevelSequenceEditorBlueprintLibrary_eventSetTrackFilterEnabled_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetTrackFilterEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetTrackFilterEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelSequenceEditorBlueprintLibrary);
	UClass* Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary_NoRegister()
	{
		return ULevelSequenceEditorBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequenceEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_CloseLevelSequence, "CloseLevelSequence" }, // 2489021219
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_DeleteColorForChannels, "DeleteColorForChannels" }, // 2143393559
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_EmptySelection, "EmptySelection" }, // 3342708178
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_FocusLevelSequence, "FocusLevelSequence" }, // 1662811001
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_FocusParentSequence, "FocusParentSequence" }, // 3788663476
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetBoundObjects, "GetBoundObjects" }, // 2828114317
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentLevelSequence, "GetCurrentLevelSequence" }, // 969265868
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentLocalTime, "GetCurrentLocalTime" }, // 1799883502
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCurrentTime, "GetCurrentTime" }, // 3494998401
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetCustomColorForChannel, "GetCustomColorForChannel" }, // 3205348887
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetFocusedLevelSequence, "GetFocusedLevelSequence" }, // 1303743592
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetPlaybackSpeed, "GetPlaybackSpeed" }, // 1786295261
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedBindings, "GetSelectedBindings" }, // 2804000616
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedChannels, "GetSelectedChannels" }, // 2750826698
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedFolders, "GetSelectedFolders" }, // 481701200
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedObjects, "GetSelectedObjects" }, // 1863481047
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedSections, "GetSelectedSections" }, // 2696835553
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectedTracks, "GetSelectedTracks" }, // 49433256
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectionRangeEnd, "GetSelectionRangeEnd" }, // 2914935104
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSelectionRangeStart, "GetSelectionRangeStart" }, // 734652892
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetSubSequenceHierarchy, "GetSubSequenceHierarchy" }, // 2217320686
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_GetTrackFilterNames, "GetTrackFilterNames" }, // 3251604323
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_HasCustomColorForChannel, "HasCustomColorForChannel" }, // 4065189049
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsCameraCutLockedToViewport, "IsCameraCutLockedToViewport" }, // 1818756858
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsLevelSequenceLocked, "IsLevelSequenceLocked" }, // 1907499297
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsPlaying, "IsPlaying" }, // 2555901158
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_IsTrackFilterEnabled, "IsTrackFilterEnabled" }, // 2031926516
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_OpenLevelSequence, "OpenLevelSequence" }, // 180463628
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_Pause, "Pause" }, // 1565268349
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_Play, "Play" }, // 1330441692
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_PlayTo, "PlayTo" }, // 4093870860
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_RefreshCurrentLevelSequence, "RefreshCurrentLevelSequence" }, // 1464689128
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectBindings, "SelectBindings" }, // 2802213197
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectChannels, "SelectChannels" }, // 1588172456
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectFolders, "SelectFolders" }, // 1656241254
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectObjects, "SelectObjects" }, // 98376017
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectSections, "SelectSections" }, // 2287620806
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SelectTracks, "SelectTracks" }, // 191012013
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCurrentLocalTime, "SetCurrentLocalTime" }, // 1074636104
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCurrentTime, "SetCurrentTime" }, // 3435945794
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannel, "SetCustomColorForChannel" }, // 745191284
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetCustomColorForChannels, "SetCustomColorForChannels" }, // 934298515
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetLockCameraCutToViewport, "SetLockCameraCutToViewport" }, // 734402749
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetLockLevelSequence, "SetLockLevelSequence" }, // 1117788662
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetPlaybackSpeed, "SetPlaybackSpeed" }, // 3337954504
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetRandomColorForChannels, "SetRandomColorForChannels" }, // 221259593
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetSelectionRangeEnd, "SetSelectionRangeEnd" }, // 3314579709
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetSelectionRangeStart, "SetSelectionRangeStart" }, // 4286502748
		{ &Z_Construct_UFunction_ULevelSequenceEditorBlueprintLibrary_SetTrackFilterEnabled, "SetTrackFilterEnabled" }, // 4248735208
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelSequenceEditorBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSequenceEditorBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary_Statics::ClassParams = {
		&ULevelSequenceEditorBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_ULevelSequenceEditorBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelSequenceEditorBlueprintLibrary.OuterSingleton, Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelSequenceEditorBlueprintLibrary.OuterSingleton;
	}
	template<> LEVELSEQUENCEEDITOR_API UClass* StaticClass<ULevelSequenceEditorBlueprintLibrary>()
	{
		return ULevelSequenceEditorBlueprintLibrary::StaticClass();
	}
	ULevelSequenceEditorBlueprintLibrary::ULevelSequenceEditorBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequenceEditorBlueprintLibrary);
	ULevelSequenceEditorBlueprintLibrary::~ULevelSequenceEditorBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorBlueprintLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorBlueprintLibrary_h_Statics::ScriptStructInfo[] = {
		{ FSequencerChannelProxy::StaticStruct, Z_Construct_UScriptStruct_FSequencerChannelProxy_Statics::NewStructOps, TEXT("SequencerChannelProxy"), &Z_Registration_Info_UScriptStruct_SequencerChannelProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSequencerChannelProxy), 2301359050U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary, ULevelSequenceEditorBlueprintLibrary::StaticClass, TEXT("ULevelSequenceEditorBlueprintLibrary"), &Z_Registration_Info_UClass_ULevelSequenceEditorBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelSequenceEditorBlueprintLibrary), 2436121842U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorBlueprintLibrary_h_935949942(TEXT("/Script/LevelSequenceEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorBlueprintLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorBlueprintLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorBlueprintLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
