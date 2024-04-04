// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/UIFButton.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
struct FUIFrameworkSimpleSlot;
#ifdef UIFRAMEWORK_UIFButton_generated_h
#error "UIFButton.generated.h already included, missing '#pragma once' in UIFButton.h"
#endif
#define UIFRAMEWORK_UIFButton_generated_h

#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_20_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerClick_Implementation(APlayerController* PlayerController); \
 \
	DECLARE_FUNCTION(execOnRep_Slot); \
	DECLARE_FUNCTION(execServerClick); \
	DECLARE_FUNCTION(execHandleClick); \
	DECLARE_FUNCTION(execGetContent); \
	DECLARE_FUNCTION(execSetContent);


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_20_ACCESSORS
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_20_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIFrameworkButton(); \
	friend struct Z_Construct_UClass_UUIFrameworkButton_Statics; \
public: \
	DECLARE_CLASS(UUIFrameworkButton, UUIFrameworkWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIFramework"), NO_API) \
	DECLARE_SERIALIZER(UUIFrameworkButton) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Slot=NETFIELD_REP_START, \
		NETFIELD_REP_END=Slot	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIFrameworkButton(UUIFrameworkButton&&); \
	NO_API UUIFrameworkButton(const UUIFrameworkButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIFrameworkButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFrameworkButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIFrameworkButton) \
	NO_API virtual ~UUIFrameworkButton();


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_20_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_20_ACCESSORS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_20_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UIFRAMEWORK_API UClass* StaticClass<class UUIFrameworkButton>();

#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_62_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_62_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_62_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_62_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_62_ACCESSORS
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIFrameworkButtonWidget(); \
	friend struct Z_Construct_UClass_UUIFrameworkButtonWidget_Statics; \
public: \
	DECLARE_CLASS(UUIFrameworkButtonWidget, UButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIFramework"), NO_API) \
	DECLARE_SERIALIZER(UUIFrameworkButtonWidget)


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_62_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIFrameworkButtonWidget(UUIFrameworkButtonWidget&&); \
	NO_API UUIFrameworkButtonWidget(const UUIFrameworkButtonWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIFrameworkButtonWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFrameworkButtonWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIFrameworkButtonWidget) \
	NO_API virtual ~UUIFrameworkButtonWidget();


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_59_PROLOG
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_62_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_62_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_62_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_62_ACCESSORS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_62_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UIFRAMEWORK_API UClass* StaticClass<class UUIFrameworkButtonWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
