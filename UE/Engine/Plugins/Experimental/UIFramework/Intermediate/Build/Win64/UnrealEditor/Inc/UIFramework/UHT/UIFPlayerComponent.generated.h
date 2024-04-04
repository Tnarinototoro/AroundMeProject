// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UIFPlayerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUIFrameworkWidget;
struct FUIFrameworkGameLayerSlot;
struct FUIFrameworkWidgetId;
#ifdef UIFRAMEWORK_UIFPlayerComponent_generated_h
#error "UIFPlayerComponent.generated.h already included, missing '#pragma once' in UIFPlayerComponent.h"
#endif
#define UIFRAMEWORK_UIFPlayerComponent_generated_h

#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlot_Statics; \
	UIFRAMEWORK_API static class UScriptStruct* StaticStruct(); \
	typedef FUIFrameworkSlotBase Super;


template<> UIFRAMEWORK_API UScriptStruct* StaticStruct<struct FUIFrameworkGameLayerSlot>();

#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlotList_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializer Super; \
	UE_NET_DECLARE_FASTARRAY(FUIFrameworkGameLayerSlotList, Entries, );


template<> UIFRAMEWORK_API UScriptStruct* StaticStruct<struct FUIFrameworkGameLayerSlotList>();

#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_116_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_116_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_116_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerRemoveWidgetRootFromTree_Implementation(FUIFrameworkWidgetId WidgetId); \
 \
	DECLARE_FUNCTION(execServerRemoveWidgetRootFromTree); \
	DECLARE_FUNCTION(execRemoveWidget); \
	DECLARE_FUNCTION(execAddWidget);


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_116_ACCESSORS
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_116_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_116_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIFrameworkPlayerComponent(); \
	friend struct Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics; \
public: \
	DECLARE_CLASS(UUIFrameworkPlayerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UIFramework"), NO_API) \
	DECLARE_SERIALIZER(UUIFrameworkPlayerComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RootList=NETFIELD_REP_START, \
		WidgetTree, \
		NETFIELD_REP_END=WidgetTree	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_116_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIFrameworkPlayerComponent(UUIFrameworkPlayerComponent&&); \
	NO_API UUIFrameworkPlayerComponent(const UUIFrameworkPlayerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIFrameworkPlayerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFrameworkPlayerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIFrameworkPlayerComponent) \
	NO_API virtual ~UUIFrameworkPlayerComponent();


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_113_PROLOG
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_116_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_116_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_116_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_116_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_116_ACCESSORS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_116_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_116_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_116_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UIFRAMEWORK_API UClass* StaticClass<class UUIFrameworkPlayerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h


#define FOREACH_ENUM_EUIFRAMEWORKGAMELAYERTYPE(op) \
	op(EUIFrameworkGameLayerType::Viewport) \
	op(EUIFrameworkGameLayerType::PlayerScreen) 

enum class EUIFrameworkGameLayerType : uint8;
template<> struct TIsUEnumClass<EUIFrameworkGameLayerType> { enum { Value = true }; };
template<> UIFRAMEWORK_API UEnum* StaticEnum<EUIFrameworkGameLayerType>();

#define FOREACH_ENUM_EUIFRAMEWORKINPUTMODE(op) \
	op(EUIFrameworkInputMode::UI) \
	op(EUIFrameworkInputMode::Game) 

enum class EUIFrameworkInputMode : uint8;
template<> struct TIsUEnumClass<EUIFrameworkInputMode> { enum { Value = true }; };
template<> UIFRAMEWORK_API UEnum* StaticEnum<EUIFrameworkInputMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
