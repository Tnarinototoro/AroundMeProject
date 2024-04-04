// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonUITypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef COMMONUI_CommonUITypes_generated_h
#error "CommonUITypes.generated.h already included, missing '#pragma once' in CommonUITypes.h"
#endif
#define COMMONUI_CommonUITypes_generated_h

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> COMMONUI_API UScriptStruct* StaticStruct<struct FCommonInputTypeInfo>();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_100_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> COMMONUI_API UScriptStruct* StaticStruct<struct FCommonInputActionDataBase>();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_198_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_198_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_198_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_198_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_198_ACCESSORS
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_198_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonInputMetadata(); \
	friend struct Z_Construct_UClass_UCommonInputMetadata_Statics; \
public: \
	DECLARE_CLASS(UCommonInputMetadata, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonInputMetadata)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_198_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonInputMetadata(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonInputMetadata(UCommonInputMetadata&&); \
	NO_API UCommonInputMetadata(const UCommonInputMetadata&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonInputMetadata); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonInputMetadata); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonInputMetadata) \
	NO_API virtual ~UCommonInputMetadata();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_195_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_198_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_198_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_198_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_198_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_198_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_198_ACCESSORS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_198_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_198_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUI_API UClass* StaticClass<class UCommonInputMetadata>();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_233_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_233_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_233_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_233_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_233_ACCESSORS
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_233_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonMappingContextMetadataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonMappingContextMetadataInterface(UCommonMappingContextMetadataInterface&&); \
	NO_API UCommonMappingContextMetadataInterface(const UCommonMappingContextMetadataInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonMappingContextMetadataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonMappingContextMetadataInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonMappingContextMetadataInterface) \
	NO_API virtual ~UCommonMappingContextMetadataInterface();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_233_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCommonMappingContextMetadataInterface(); \
	friend struct Z_Construct_UClass_UCommonMappingContextMetadataInterface_Statics; \
public: \
	DECLARE_CLASS(UCommonMappingContextMetadataInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonMappingContextMetadataInterface)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_233_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_233_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_233_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_233_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICommonMappingContextMetadataInterface() {} \
public: \
	typedef UCommonMappingContextMetadataInterface UClassType; \
	typedef ICommonMappingContextMetadataInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_230_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_238_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_233_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_233_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_233_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_233_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_233_ACCESSORS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_233_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUI_API UClass* StaticClass<class UCommonMappingContextMetadataInterface>();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_260_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_260_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_260_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_260_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_260_ACCESSORS
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_260_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonMappingContextMetadata(); \
	friend struct Z_Construct_UClass_UCommonMappingContextMetadata_Statics; \
public: \
	DECLARE_CLASS(UCommonMappingContextMetadata, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonMappingContextMetadata) \
	virtual UObject* _getUObject() const override { return const_cast<UCommonMappingContextMetadata*>(this); }


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_260_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonMappingContextMetadata(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonMappingContextMetadata(UCommonMappingContextMetadata&&); \
	NO_API UCommonMappingContextMetadata(const UCommonMappingContextMetadata&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonMappingContextMetadata); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonMappingContextMetadata); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonMappingContextMetadata) \
	NO_API virtual ~UCommonMappingContextMetadata();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_257_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_260_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_260_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_260_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_260_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_260_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_260_ACCESSORS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_260_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_260_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUI_API UClass* StaticClass<class UCommonMappingContextMetadata>();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_294_DELEGATE \
COMMONUI_API void FOnItemClicked_DelegateWrapper(const FScriptDelegate& OnItemClicked, UUserWidget* Widget);


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_295_DELEGATE \
COMMONUI_API void FOnItemSelected_DelegateWrapper(const FScriptDelegate& OnItemSelected, UUserWidget* Widget, bool Selected);


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h


#define FOREACH_ENUM_EINPUTACTIONSTATE(op) \
	op(EInputActionState::Enabled) \
	op(EInputActionState::Disabled) \
	op(EInputActionState::Hidden) \
	op(EInputActionState::HiddenAndDisabled) 

enum class EInputActionState : uint8;
template<> struct TIsUEnumClass<EInputActionState> { enum { Value = true }; };
template<> COMMONUI_API UEnum* StaticEnum<EInputActionState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
