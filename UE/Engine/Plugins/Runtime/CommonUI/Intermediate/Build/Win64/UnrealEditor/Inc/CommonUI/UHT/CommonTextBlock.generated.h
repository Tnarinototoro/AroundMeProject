// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonTextBlock.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonTextStyle;
struct FLinearColor;
struct FMargin;
struct FSlateBrush;
struct FSlateFontInfo;
#ifdef COMMONUI_CommonTextBlock_generated_h
#error "CommonTextBlock.generated.h already included, missing '#pragma once' in CommonTextBlock.h"
#endif
#define COMMONUI_CommonTextBlock_generated_h

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_22_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_22_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetStrikeBrush); \
	DECLARE_FUNCTION(execGetShadowColor); \
	DECLARE_FUNCTION(execGetShadowOffset); \
	DECLARE_FUNCTION(execGetLineHeightPercentage); \
	DECLARE_FUNCTION(execGetMargin); \
	DECLARE_FUNCTION(execGetColor); \
	DECLARE_FUNCTION(execGetFont);


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_22_ACCESSORS
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonTextStyle(); \
	friend struct Z_Construct_UClass_UCommonTextStyle_Statics; \
public: \
	DECLARE_CLASS(UCommonTextStyle, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonTextStyle)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonTextStyle(UCommonTextStyle&&); \
	NO_API UCommonTextStyle(const UCommonTextStyle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonTextStyle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonTextStyle); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UCommonTextStyle) \
	NO_API virtual ~UCommonTextStyle();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_19_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_22_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_22_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_22_ACCESSORS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUI_API UClass* StaticClass<class UCommonTextStyle>();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_92_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_92_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_92_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_92_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_92_ACCESSORS
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_92_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonTextScrollStyle(); \
	friend struct Z_Construct_UClass_UCommonTextScrollStyle_Statics; \
public: \
	DECLARE_CLASS(UCommonTextScrollStyle, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonTextScrollStyle)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_92_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonTextScrollStyle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonTextScrollStyle(UCommonTextScrollStyle&&); \
	NO_API UCommonTextScrollStyle(const UCommonTextScrollStyle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonTextScrollStyle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonTextScrollStyle); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonTextScrollStyle) \
	NO_API virtual ~UCommonTextScrollStyle();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_89_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_92_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_92_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_92_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_92_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_92_ACCESSORS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_92_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_92_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUI_API UClass* StaticClass<class UCommonTextScrollStyle>();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_119_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_119_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_119_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_119_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetScrollingEnabled); \
	DECLARE_FUNCTION(execResetScrollState); \
	DECLARE_FUNCTION(execSetMobileFontSizeMultiplier); \
	DECLARE_FUNCTION(execGetMobileFontSizeMultiplier); \
	DECLARE_FUNCTION(execSetMargin); \
	DECLARE_FUNCTION(execGetMargin); \
	DECLARE_FUNCTION(execSetStyle); \
	DECLARE_FUNCTION(execSetLineHeightPercentage); \
	DECLARE_FUNCTION(execSetTextCase); \
	DECLARE_FUNCTION(execSetWrapTextWidth);


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_119_ACCESSORS \
static void GetMobileFontSizeMultiplier_WrapperImpl(const void* Object, void* OutValue); \
static void SetMobileFontSizeMultiplier_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_119_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UCommonTextBlock, NO_API)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_119_INCLASS \
private: \
	static void StaticRegisterNativesUCommonTextBlock(); \
	friend struct Z_Construct_UClass_UCommonTextBlock_Statics; \
public: \
	DECLARE_CLASS(UCommonTextBlock, UTextBlock, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonTextBlock) \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_119_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("CommonUI");} \



#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_119_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonTextBlock(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonTextBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonTextBlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonTextBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonTextBlock(UCommonTextBlock&&); \
	NO_API UCommonTextBlock(const UCommonTextBlock&); \
public: \
	NO_API virtual ~UCommonTextBlock();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_116_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_119_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_119_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_119_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_119_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_119_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_119_ACCESSORS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_119_INCLASS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_119_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUI_API UClass* StaticClass<class UCommonTextBlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTextBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
