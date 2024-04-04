// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetasoundBuilderSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IMetaSoundDocumentInterface;
class UAudioComponent;
class UMetaSoundBuilderBase;
class UMetasoundGeneratorHandle;
class UMetaSoundPatchBuilder;
class UMetaSoundSourceBuilder;
class UObject;
enum class EMetaSoundBuilderResult : uint8;
enum class EMetaSoundOutputAudioFormat : uint8;
struct FAudioParameter;
struct FMetaSoundBuilderNodeInputHandle;
struct FMetaSoundBuilderNodeOutputHandle;
struct FMetaSoundBuilderOptions;
struct FMetasoundFrontendClassName;
struct FMetasoundFrontendLiteral;
struct FMetasoundFrontendVersion;
struct FMetaSoundNodeHandle;
#ifdef METASOUNDENGINE_MetasoundBuilderSubsystem_generated_h
#error "MetasoundBuilderSubsystem.generated.h already included, missing '#pragma once' in MetasoundBuilderSubsystem.h"
#endif
#define METASOUNDENGINE_MetasoundBuilderSubsystem_generated_h

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_41_DELEGATE \
METASOUNDENGINE_API void FOnCreateAuditionGeneratorHandleDelegate_DelegateWrapper(const FScriptDelegate& OnCreateAuditionGeneratorHandleDelegate, UMetasoundGeneratorHandle* GeneratorHandle);


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FMetasoundFrontendVertexHandle Super;


template<> METASOUNDENGINE_API UScriptStruct* StaticStruct<struct FMetaSoundBuilderNodeInputHandle>();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FMetasoundFrontendVertexHandle Super;


template<> METASOUNDENGINE_API UScriptStruct* StaticStruct<struct FMetaSoundBuilderNodeOutputHandle>();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMetaSoundNodeHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> METASOUNDENGINE_API UScriptStruct* StaticStruct<struct FMetaSoundNodeHandle>();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_97_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> METASOUNDENGINE_API UScriptStruct* StaticStruct<struct FMetaSoundBuilderOptions>();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_131_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_131_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_131_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_131_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetGraphInputDefault); \
	DECLARE_FUNCTION(execSetNodeInputDefault); \
	DECLARE_FUNCTION(execRemoveNodeInputDefault); \
	DECLARE_FUNCTION(execRemoveNode); \
	DECLARE_FUNCTION(execRemoveInterface); \
	DECLARE_FUNCTION(execRemoveGraphOutput); \
	DECLARE_FUNCTION(execRemoveGraphInput); \
	DECLARE_FUNCTION(execConvertToPreset); \
	DECLARE_FUNCTION(execConvertFromPreset); \
	DECLARE_FUNCTION(execIsPreset); \
	DECLARE_FUNCTION(execNodeOutputIsConnected); \
	DECLARE_FUNCTION(execNodeInputIsConnected); \
	DECLARE_FUNCTION(execNodesAreConnected); \
	DECLARE_FUNCTION(execInterfaceIsDeclared); \
	DECLARE_FUNCTION(execGetReferencedPresetAsset); \
	DECLARE_FUNCTION(execGetNodeOutputData); \
	DECLARE_FUNCTION(execGetNodeInputClassDefault); \
	DECLARE_FUNCTION(execGetNodeInputDefault); \
	DECLARE_FUNCTION(execGetNodeInputData); \
	DECLARE_FUNCTION(execFindNodeClassVersion); \
	DECLARE_FUNCTION(execFindNodeOutputParent); \
	DECLARE_FUNCTION(execFindNodeInputParent); \
	DECLARE_FUNCTION(execFindInterfaceOutputNodes); \
	DECLARE_FUNCTION(execFindInterfaceInputNodes); \
	DECLARE_FUNCTION(execFindNodeOutputsByDataType); \
	DECLARE_FUNCTION(execFindNodeOutputs); \
	DECLARE_FUNCTION(execFindNodeOutputByName); \
	DECLARE_FUNCTION(execFindNodeInputsByDataType); \
	DECLARE_FUNCTION(execFindNodeInputs); \
	DECLARE_FUNCTION(execFindNodeInputByName); \
	DECLARE_FUNCTION(execFindGraphOutputNode); \
	DECLARE_FUNCTION(execFindGraphInputNode); \
	DECLARE_FUNCTION(execDisconnectNodesByInterfaceBindings); \
	DECLARE_FUNCTION(execDisconnectNodeOutput); \
	DECLARE_FUNCTION(execDisconnectNodeInput); \
	DECLARE_FUNCTION(execDisconnectNodes); \
	DECLARE_FUNCTION(execContainsNodeOutput); \
	DECLARE_FUNCTION(execContainsNodeInput); \
	DECLARE_FUNCTION(execContainsNode); \
	DECLARE_FUNCTION(execConnectNodeInputToGraphInput); \
	DECLARE_FUNCTION(execConnectNodeOutputToGraphOutput); \
	DECLARE_FUNCTION(execConnectNodeInputsToMatchingGraphInterfaceInputs); \
	DECLARE_FUNCTION(execConnectNodeOutputsToMatchingGraphInterfaceOutputs); \
	DECLARE_FUNCTION(execConnectNodesByInterfaceBindings); \
	DECLARE_FUNCTION(execConnectNodes); \
	DECLARE_FUNCTION(execAddNodeByClassName); \
	DECLARE_FUNCTION(execAddNode); \
	DECLARE_FUNCTION(execAddInterface); \
	DECLARE_FUNCTION(execAddGraphOutputNode); \
	DECLARE_FUNCTION(execAddGraphInputNode);


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_131_ACCESSORS
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_131_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaSoundBuilderBase(); \
	friend struct Z_Construct_UClass_UMetaSoundBuilderBase_Statics; \
public: \
	DECLARE_CLASS(UMetaSoundBuilderBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MetasoundEngine"), NO_API) \
	DECLARE_SERIALIZER(UMetaSoundBuilderBase)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_131_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaSoundBuilderBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMetaSoundBuilderBase(UMetaSoundBuilderBase&&); \
	NO_API UMetaSoundBuilderBase(const UMetaSoundBuilderBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaSoundBuilderBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundBuilderBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaSoundBuilderBase) \
	NO_API virtual ~UMetaSoundBuilderBase();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_128_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_131_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_131_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_131_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_131_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_131_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_131_ACCESSORS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_131_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_131_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> METASOUNDENGINE_API UClass* StaticClass<class UMetaSoundBuilderBase>();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_475_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_475_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_475_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_475_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBuild);


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_475_ACCESSORS
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_475_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaSoundPatchBuilder(); \
	friend struct Z_Construct_UClass_UMetaSoundPatchBuilder_Statics; \
public: \
	DECLARE_CLASS(UMetaSoundPatchBuilder, UMetaSoundBuilderBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MetasoundEngine"), NO_API) \
	DECLARE_SERIALIZER(UMetaSoundPatchBuilder)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_475_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaSoundPatchBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMetaSoundPatchBuilder(UMetaSoundPatchBuilder&&); \
	NO_API UMetaSoundPatchBuilder(const UMetaSoundPatchBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaSoundPatchBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundPatchBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaSoundPatchBuilder) \
	NO_API virtual ~UMetaSoundPatchBuilder();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_472_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_475_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_475_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_475_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_475_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_475_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_475_ACCESSORS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_475_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_475_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> METASOUNDENGINE_API UClass* StaticClass<class UMetaSoundPatchBuilder>();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_488_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_488_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_488_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_488_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetFormat); \
	DECLARE_FUNCTION(execGetLiveUpdatesEnabled); \
	DECLARE_FUNCTION(execBuild); \
	DECLARE_FUNCTION(execAudition);


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_488_ACCESSORS
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_488_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaSoundSourceBuilder(); \
	friend struct Z_Construct_UClass_UMetaSoundSourceBuilder_Statics; \
public: \
	DECLARE_CLASS(UMetaSoundSourceBuilder, UMetaSoundBuilderBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MetasoundEngine"), NO_API) \
	DECLARE_SERIALIZER(UMetaSoundSourceBuilder)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_488_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaSoundSourceBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMetaSoundSourceBuilder(UMetaSoundSourceBuilder&&); \
	NO_API UMetaSoundSourceBuilder(const UMetaSoundSourceBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaSoundSourceBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundSourceBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaSoundSourceBuilder) \
	NO_API virtual ~UMetaSoundSourceBuilder();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_485_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_488_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_488_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_488_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_488_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_488_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_488_ACCESSORS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_488_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_488_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> METASOUNDENGINE_API UClass* StaticClass<class UMetaSoundSourceBuilder>();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_537_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_537_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_537_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_537_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnregisterSourceBuilder); \
	DECLARE_FUNCTION(execUnregisterPatchBuilder); \
	DECLARE_FUNCTION(execUnregisterBuilder); \
	DECLARE_FUNCTION(execRegisterSourceBuilder); \
	DECLARE_FUNCTION(execRegisterPatchBuilder); \
	DECLARE_FUNCTION(execRegisterBuilder); \
	DECLARE_FUNCTION(execIsInterfaceRegistered); \
	DECLARE_FUNCTION(execFindSourceBuilder); \
	DECLARE_FUNCTION(execFindPatchBuilder); \
	DECLARE_FUNCTION(execFindBuilder); \
	DECLARE_FUNCTION(execCreateMetaSoundLiteralFromParam); \
	DECLARE_FUNCTION(execCreateStringArrayMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateStringMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateObjectArrayMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateObjectMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateIntArrayMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateIntMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateFloatArrayMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateFloatMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateBoolArrayMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateBoolMetaSoundLiteral); \
	DECLARE_FUNCTION(execCreateSourcePresetBuilder); \
	DECLARE_FUNCTION(execCreatePatchPresetBuilder); \
	DECLARE_FUNCTION(execCreateSourceBuilder); \
	DECLARE_FUNCTION(execCreatePatchBuilder);


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_537_ACCESSORS
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_537_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaSoundBuilderSubsystem(); \
	friend struct Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMetaSoundBuilderSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetasoundEngine"), NO_API) \
	DECLARE_SERIALIZER(UMetaSoundBuilderSubsystem)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_537_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaSoundBuilderSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMetaSoundBuilderSubsystem(UMetaSoundBuilderSubsystem&&); \
	NO_API UMetaSoundBuilderSubsystem(const UMetaSoundBuilderSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaSoundBuilderSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundBuilderSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaSoundBuilderSubsystem) \
	NO_API virtual ~UMetaSoundBuilderSubsystem();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_534_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_537_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_537_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_537_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_537_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_537_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_537_ACCESSORS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_537_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_537_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> METASOUNDENGINE_API UClass* StaticClass<class UMetaSoundBuilderSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h


#define FOREACH_ENUM_EMETASOUNDBUILDERRESULT(op) \
	op(EMetaSoundBuilderResult::Succeeded) \
	op(EMetaSoundBuilderResult::Failed) 

enum class EMetaSoundBuilderResult : uint8;
template<> struct TIsUEnumClass<EMetaSoundBuilderResult> { enum { Value = true }; };
template<> METASOUNDENGINE_API UEnum* StaticEnum<EMetaSoundBuilderResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
