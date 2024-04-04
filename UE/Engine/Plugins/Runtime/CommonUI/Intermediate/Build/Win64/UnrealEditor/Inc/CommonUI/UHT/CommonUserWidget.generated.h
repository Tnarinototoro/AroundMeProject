// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonUserWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMMONUI_CommonUserWidget_generated_h
#error "CommonUserWidget.generated.h already included, missing '#pragma once' in CommonUserWidget.h"
#endif
#define COMMONUI_CommonUserWidget_generated_h

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_21_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetConsumePointerInput);


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_21_ACCESSORS
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUCommonUserWidget(); \
	friend struct Z_Construct_UClass_UCommonUserWidget_Statics; \
public: \
	DECLARE_CLASS(UCommonUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonUserWidget)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonUserWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonUserWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonUserWidget(UCommonUserWidget&&); \
	NO_API UCommonUserWidget(const UCommonUserWidget&); \
public: \
	NO_API virtual ~UCommonUserWidget();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_18_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_21_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_21_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_21_ACCESSORS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_21_INCLASS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUI_API UClass* StaticClass<class UCommonUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUserWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
