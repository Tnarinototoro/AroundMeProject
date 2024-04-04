// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/VPFullScreenUserWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VPUTILITIES_VPFullScreenUserWidget_generated_h
#error "VPFullScreenUserWidget.generated.h already included, missing '#pragma once' in VPFullScreenUserWidget.h"
#endif
#define VPUTILITIES_VPFullScreenUserWidget_generated_h

#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPFullScreenUserWidget_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVPFullScreenUserWidget_Viewport_Statics; \
	VPUTILITIES_API static class UScriptStruct* StaticStruct();


template<> VPUTILITIES_API UScriptStruct* StaticStruct<struct FVPFullScreenUserWidget_Viewport>();

#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPFullScreenUserWidget_h_79_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPFullScreenUserWidget_h_79_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPFullScreenUserWidget_h_79_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPFullScreenUserWidget_h_79_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPFullScreenUserWidget_h_79_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPFullScreenUserWidget_h_79_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVPFullScreenUserWidget(); \
	friend struct Z_Construct_UClass_UVPFullScreenUserWidget_Statics; \
public: \
	DECLARE_CLASS(UVPFullScreenUserWidget, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VPUtilities"), NO_API) \
	DECLARE_SERIALIZER(UVPFullScreenUserWidget)


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPFullScreenUserWidget_h_79_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVPFullScreenUserWidget(UVPFullScreenUserWidget&&); \
	NO_API UVPFullScreenUserWidget(const UVPFullScreenUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVPFullScreenUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVPFullScreenUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVPFullScreenUserWidget) \
	NO_API virtual ~UVPFullScreenUserWidget();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPFullScreenUserWidget_h_76_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPFullScreenUserWidget_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPFullScreenUserWidget_h_79_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPFullScreenUserWidget_h_79_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPFullScreenUserWidget_h_79_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPFullScreenUserWidget_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPFullScreenUserWidget_h_79_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPFullScreenUserWidget_h_79_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPFullScreenUserWidget_h_79_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VPUTILITIES_API UClass* StaticClass<class UVPFullScreenUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPFullScreenUserWidget_h


#define FOREACH_ENUM_EVPWIDGETDISPLAYTYPE(op) \
	op(EVPWidgetDisplayType::Inactive) \
	op(EVPWidgetDisplayType::Viewport) \
	op(EVPWidgetDisplayType::PostProcessWithBlendMaterial) \
	op(EVPWidgetDisplayType::Composure) \
	op(EVPWidgetDisplayType::PostProcessSceneViewExtension) 

enum class EVPWidgetDisplayType : uint8;
template<> struct TIsUEnumClass<EVPWidgetDisplayType> { enum { Value = true }; };
template<> VPUTILITIES_API UEnum* StaticEnum<EVPWidgetDisplayType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
