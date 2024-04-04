// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/UIFSimpleButton.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
struct FMVVMEventField;
#ifdef UIFRAMEWORK_UIFSimpleButton_generated_h
#error "UIFSimpleButton.generated.h already included, missing '#pragma once' in UIFSimpleButton.h"
#endif
#define UIFRAMEWORK_UIFSimpleButton_generated_h

#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFSimpleButton_h_20_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFSimpleButton_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFSimpleButton_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFSimpleButton_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerClick_Implementation(APlayerController* PlayerController); \
 \
	DECLARE_FUNCTION(execServerClick); \
	DECLARE_FUNCTION(execOnRep_Message); \
	DECLARE_FUNCTION(execOnClick);


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFSimpleButton_h_20_ACCESSORS \
static void GetText_WrapperImpl(const void* Object, void* OutValue); \
static void GetClickEvent_WrapperImpl(const void* Object, void* OutValue);


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFSimpleButton_h_20_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFSimpleButton_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIFrameworkSimpleButton(); \
	friend struct Z_Construct_UClass_UUIFrameworkSimpleButton_Statics; \
public: \
	DECLARE_CLASS(UUIFrameworkSimpleButton, UUIFrameworkWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIFramework"), NO_API) \
	DECLARE_SERIALIZER(UUIFrameworkSimpleButton) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Message=NETFIELD_REP_START, \
		NETFIELD_REP_END=Message	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFSimpleButton_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIFrameworkSimpleButton(UUIFrameworkSimpleButton&&); \
	NO_API UUIFrameworkSimpleButton(const UUIFrameworkSimpleButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIFrameworkSimpleButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFrameworkSimpleButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIFrameworkSimpleButton) \
	NO_API virtual ~UUIFrameworkSimpleButton();


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFSimpleButton_h_20_FIELDNOTIFY \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_BEGIN(UIFRAMEWORK_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(Text) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(ClickEvent) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_BEGIN(Text) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(ClickEvent) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_END() \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_END();


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFSimpleButton_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFSimpleButton_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFSimpleButton_h_20_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFSimpleButton_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFSimpleButton_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFSimpleButton_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFSimpleButton_h_20_ACCESSORS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFSimpleButton_h_20_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFSimpleButton_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFSimpleButton_h_20_ENHANCED_CONSTRUCTORS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFSimpleButton_h_20_FIELDNOTIFY \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UIFRAMEWORK_API UClass* StaticClass<class UUIFrameworkSimpleButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFSimpleButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
