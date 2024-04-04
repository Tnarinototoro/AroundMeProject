// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonButtonBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonButtonBase;
class UCommonButtonStyle;
class UCommonTextStyle;
class UInputAction;
class UMaterialInstanceDynamic;
class USoundBase;
enum class ECommonInputType : uint8;
struct FDataTableRowHandle;
struct FMargin;
struct FSlateBrush;
#ifdef COMMONUI_CommonButtonBase_generated_h
#error "CommonButtonBase.generated.h already included, missing '#pragma once' in CommonButtonBase.h"
#endif
#define COMMONUI_CommonButtonBase_generated_h

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics; \
	COMMONUI_API static class UScriptStruct* StaticStruct();


template<> COMMONUI_API UScriptStruct* StaticStruct<struct FCommonButtonStyleOptionalSlateSound>();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_61_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_61_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_61_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDisabledTextStyle); \
	DECLARE_FUNCTION(execGetSelectedHoveredTextStyle); \
	DECLARE_FUNCTION(execGetSelectedTextStyle); \
	DECLARE_FUNCTION(execGetNormalHoveredTextStyle); \
	DECLARE_FUNCTION(execGetNormalTextStyle); \
	DECLARE_FUNCTION(execGetCustomPadding); \
	DECLARE_FUNCTION(execGetButtonPadding); \
	DECLARE_FUNCTION(execGetDisabledBrush); \
	DECLARE_FUNCTION(execGetSelectedPressedBrush); \
	DECLARE_FUNCTION(execGetSelectedHoveredBrush); \
	DECLARE_FUNCTION(execGetSelectedBaseBrush); \
	DECLARE_FUNCTION(execGetNormalPressedBrush); \
	DECLARE_FUNCTION(execGetNormalHoveredBrush); \
	DECLARE_FUNCTION(execGetNormalBaseBrush); \
	DECLARE_FUNCTION(execGetMaterialBrush);


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_61_ACCESSORS
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonButtonStyle(); \
	friend struct Z_Construct_UClass_UCommonButtonStyle_Statics; \
public: \
	DECLARE_CLASS(UCommonButtonStyle, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonButtonStyle)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_61_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonButtonStyle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonButtonStyle(UCommonButtonStyle&&); \
	NO_API UCommonButtonStyle(const UCommonButtonStyle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonButtonStyle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonButtonStyle); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonButtonStyle) \
	NO_API virtual ~UCommonButtonStyle();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_58_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_61_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_61_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_61_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_61_ACCESSORS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_61_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUI_API UClass* StaticClass<class UCommonButtonStyle>();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_216_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_216_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_216_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_216_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_216_ACCESSORS
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_216_INCLASS \
private: \
	static void StaticRegisterNativesUCommonButtonInternalBase(); \
	friend struct Z_Construct_UClass_UCommonButtonInternalBase_Statics; \
public: \
	DECLARE_CLASS(UCommonButtonInternalBase, UButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonButtonInternalBase)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_216_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonButtonInternalBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonButtonInternalBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonButtonInternalBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonButtonInternalBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonButtonInternalBase(UCommonButtonInternalBase&&); \
	NO_API UCommonButtonInternalBase(const UCommonButtonInternalBase&); \
public: \
	NO_API virtual ~UCommonButtonInternalBase();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_213_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_216_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_216_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_216_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_216_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_216_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_216_ACCESSORS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_216_INCLASS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_216_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUI_API UClass* StaticClass<class UCommonButtonInternalBase>();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_284_DELEGATE \
COMMONUI_API void FCommonSelectedStateChangedBase_DelegateWrapper(const FMulticastScriptDelegate& CommonSelectedStateChangedBase, UCommonButtonBase* Button, bool Selected);


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_285_DELEGATE \
COMMONUI_API void FCommonButtonBaseClicked_DelegateWrapper(const FMulticastScriptDelegate& CommonButtonBaseClicked, UCommonButtonBase* Button);


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_293_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_293_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_293_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_293_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHoldReset); \
	DECLARE_FUNCTION(execNativeOnActionComplete); \
	DECLARE_FUNCTION(execNativeOnHoldProgressRollback); \
	DECLARE_FUNCTION(execNativeOnHoldProgress); \
	DECLARE_FUNCTION(execNativeOnActionProgress); \
	DECLARE_FUNCTION(execGetConvertInputActionToHold); \
	DECLARE_FUNCTION(execSetSelectedInternal); \
	DECLARE_FUNCTION(execStopDoubleClickPropagation); \
	DECLARE_FUNCTION(execHandleButtonReleased); \
	DECLARE_FUNCTION(execHandleButtonPressed); \
	DECLARE_FUNCTION(execHandleFocusLost); \
	DECLARE_FUNCTION(execHandleFocusReceived); \
	DECLARE_FUNCTION(execHandleButtonClicked); \
	DECLARE_FUNCTION(execHandleTriggeringActionCommited); \
	DECLARE_FUNCTION(execUpdateHoldData); \
	DECLARE_FUNCTION(execOnInputMethodChanged); \
	DECLARE_FUNCTION(execSetLockedHoveredSoundOverride); \
	DECLARE_FUNCTION(execSetLockedPressedSoundOverride); \
	DECLARE_FUNCTION(execSetSelectedHoveredSoundOverride); \
	DECLARE_FUNCTION(execSetSelectedPressedSoundOverride); \
	DECLARE_FUNCTION(execSetHoveredSoundOverride); \
	DECLARE_FUNCTION(execSetPressedSoundOverride); \
	DECLARE_FUNCTION(execSetInputActionProgressMaterial); \
	DECLARE_FUNCTION(execGetSingleMaterialStyleMID); \
	DECLARE_FUNCTION(execGetIsFocusable); \
	DECLARE_FUNCTION(execSetIsFocusable); \
	DECLARE_FUNCTION(execGetEnhancedInputAction); \
	DECLARE_FUNCTION(execGetInputAction); \
	DECLARE_FUNCTION(execSetTriggeringEnhancedInputAction); \
	DECLARE_FUNCTION(execSetTriggeringInputAction); \
	DECLARE_FUNCTION(execSetTriggeredInputAction); \
	DECLARE_FUNCTION(execSetMinDimensions); \
	DECLARE_FUNCTION(execGetCurrentTextStyleClass); \
	DECLARE_FUNCTION(execGetCurrentTextStyle); \
	DECLARE_FUNCTION(execGetCurrentCustomPadding); \
	DECLARE_FUNCTION(execGetCurrentButtonPadding); \
	DECLARE_FUNCTION(execGetStyle); \
	DECLARE_FUNCTION(execSetStyle); \
	DECLARE_FUNCTION(execGetShouldSelectUponReceivingFocus); \
	DECLARE_FUNCTION(execSetShouldSelectUponReceivingFocus); \
	DECLARE_FUNCTION(execClearSelection); \
	DECLARE_FUNCTION(execGetLocked); \
	DECLARE_FUNCTION(execGetSelected); \
	DECLARE_FUNCTION(execSetIsLocked); \
	DECLARE_FUNCTION(execSetIsSelected); \
	DECLARE_FUNCTION(execSetShouldUseFallbackDefaultInputAction); \
	DECLARE_FUNCTION(execSetIsToggleable); \
	DECLARE_FUNCTION(execSetIsInteractableWhenSelected); \
	DECLARE_FUNCTION(execSetIsSelectable); \
	DECLARE_FUNCTION(execSetPressMethod); \
	DECLARE_FUNCTION(execSetTouchMethod); \
	DECLARE_FUNCTION(execSetClickMethod); \
	DECLARE_FUNCTION(execIsPressed); \
	DECLARE_FUNCTION(execIsInteractionEnabled); \
	DECLARE_FUNCTION(execSetHideInputAction); \
	DECLARE_FUNCTION(execSetIsInteractionEnabled); \
	DECLARE_FUNCTION(execDisableButtonWithReason);


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_293_ACCESSORS
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_293_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_293_INCLASS \
private: \
	static void StaticRegisterNativesUCommonButtonBase(); \
	friend struct Z_Construct_UClass_UCommonButtonBase_Statics; \
public: \
	DECLARE_CLASS(UCommonButtonBase, UCommonUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonButtonBase)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_293_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonButtonBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonButtonBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonButtonBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonButtonBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonButtonBase(UCommonButtonBase&&); \
	NO_API UCommonButtonBase(const UCommonButtonBase&); \
public: \
	NO_API virtual ~UCommonButtonBase();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_293_FIELDNOTIFY \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_BEGIN(COMMONUI_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(ClickEvent) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_BEGIN(ClickEvent) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_END() \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_END();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_290_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_293_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_293_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_293_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_293_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_293_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_293_ACCESSORS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_293_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_293_INCLASS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_293_STANDARD_CONSTRUCTORS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_293_FIELDNOTIFY \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUI_API UClass* StaticClass<class UCommonButtonBase>();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_964_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_964_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_964_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_964_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_964_ACCESSORS
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_964_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetLockedStateRegistration(); \
	friend struct Z_Construct_UClass_UWidgetLockedStateRegistration_Statics; \
public: \
	DECLARE_CLASS(UWidgetLockedStateRegistration, UWidgetBinaryStateRegistration, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UWidgetLockedStateRegistration)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_964_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetLockedStateRegistration(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetLockedStateRegistration(UWidgetLockedStateRegistration&&); \
	NO_API UWidgetLockedStateRegistration(const UWidgetLockedStateRegistration&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetLockedStateRegistration); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetLockedStateRegistration); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWidgetLockedStateRegistration) \
	NO_API virtual ~UWidgetLockedStateRegistration();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_961_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_964_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_964_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_964_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_964_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_964_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_964_ACCESSORS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_964_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_964_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUI_API UClass* StaticClass<class UWidgetLockedStateRegistration>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
