// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetasoundEditorSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IMetaSoundDocumentInterface;
class UMetaSoundBuilderBase;
class USoundWave;
enum class EMetaSoundBuilderResult : uint8;
struct FMetaSoundNodeHandle;
#ifdef METASOUNDEDITOR_MetasoundEditorSubsystem_generated_h
#error "MetasoundEditorSubsystem.generated.h already included, missing '#pragma once' in MetasoundEditorSubsystem.h"
#endif
#define METASOUNDEDITOR_MetasoundEditorSubsystem_generated_h

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorSubsystem_h_19_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorSubsystem_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorSubsystem_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorSubsystem_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetNodeLocation); \
	DECLARE_FUNCTION(execBuildToAsset);


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorSubsystem_h_19_ACCESSORS
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorSubsystem_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaSoundEditorSubsystem(); \
	friend struct Z_Construct_UClass_UMetaSoundEditorSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMetaSoundEditorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetasoundEditor"), NO_API) \
	DECLARE_SERIALIZER(UMetaSoundEditorSubsystem)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorSubsystem_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaSoundEditorSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMetaSoundEditorSubsystem(UMetaSoundEditorSubsystem&&); \
	NO_API UMetaSoundEditorSubsystem(const UMetaSoundEditorSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaSoundEditorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundEditorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaSoundEditorSubsystem) \
	NO_API virtual ~UMetaSoundEditorSubsystem();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorSubsystem_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorSubsystem_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorSubsystem_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorSubsystem_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorSubsystem_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorSubsystem_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorSubsystem_h_19_ACCESSORS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorSubsystem_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorSubsystem_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> METASOUNDEDITOR_API UClass* StaticClass<class UMetaSoundEditorSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
