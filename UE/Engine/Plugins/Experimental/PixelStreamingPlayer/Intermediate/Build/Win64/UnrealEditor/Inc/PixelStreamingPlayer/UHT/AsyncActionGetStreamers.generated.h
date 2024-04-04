// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncActionGetStreamers.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAsyncAction_GetStreamers;
class UPixelStreamingSignallingComponent;
#ifdef PIXELSTREAMINGPLAYER_AsyncActionGetStreamers_generated_h
#error "AsyncActionGetStreamers.generated.h already included, missing '#pragma once' in AsyncActionGetStreamers.h"
#endif
#define PIXELSTREAMINGPLAYER_AsyncActionGetStreamers_generated_h

#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Private_AsyncActionGetStreamers_h_8_DELEGATE \
PIXELSTREAMINGPLAYER_API void FOnStreamerListCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnStreamerListCompleted, TArray<FString> const& StreamerList);


#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Private_AsyncActionGetStreamers_h_13_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Private_AsyncActionGetStreamers_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Private_AsyncActionGetStreamers_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Private_AsyncActionGetStreamers_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetStreamerIdList);


#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Private_AsyncActionGetStreamers_h_13_ACCESSORS
#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Private_AsyncActionGetStreamers_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncAction_GetStreamers(); \
	friend struct Z_Construct_UClass_UAsyncAction_GetStreamers_Statics; \
public: \
	DECLARE_CLASS(UAsyncAction_GetStreamers, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PixelStreamingPlayer"), NO_API) \
	DECLARE_SERIALIZER(UAsyncAction_GetStreamers)


#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Private_AsyncActionGetStreamers_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncAction_GetStreamers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncAction_GetStreamers(UAsyncAction_GetStreamers&&); \
	NO_API UAsyncAction_GetStreamers(const UAsyncAction_GetStreamers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncAction_GetStreamers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncAction_GetStreamers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncAction_GetStreamers) \
	NO_API virtual ~UAsyncAction_GetStreamers();


#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Private_AsyncActionGetStreamers_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Private_AsyncActionGetStreamers_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Private_AsyncActionGetStreamers_h_13_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Private_AsyncActionGetStreamers_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Private_AsyncActionGetStreamers_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Private_AsyncActionGetStreamers_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Private_AsyncActionGetStreamers_h_13_ACCESSORS \
	FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Private_AsyncActionGetStreamers_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Private_AsyncActionGetStreamers_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PIXELSTREAMINGPLAYER_API UClass* StaticClass<class UAsyncAction_GetStreamers>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Private_AsyncActionGetStreamers_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
