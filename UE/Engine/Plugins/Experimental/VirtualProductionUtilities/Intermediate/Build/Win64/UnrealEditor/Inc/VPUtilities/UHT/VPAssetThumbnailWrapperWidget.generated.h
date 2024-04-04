// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/VPAssetThumbnailWrapperWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class EAssetThumbnailDisplayMode : uint8;
struct FAssetData;
struct FSlateBrush;
#ifdef VPUTILITIES_VPAssetThumbnailWrapperWidget_generated_h
#error "VPAssetThumbnailWrapperWidget.generated.h already included, missing '#pragma once' in VPAssetThumbnailWrapperWidget.h"
#endif
#define VPUTILITIES_VPAssetThumbnailWrapperWidget_generated_h

#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPAssetThumbnailWrapperWidget_h_27_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPAssetThumbnailWrapperWidget_h_27_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPAssetThumbnailWrapperWidget_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPAssetThumbnailWrapperWidget_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetDisplayMode); \
	DECLARE_FUNCTION(execGetFallbackBrush); \
	DECLARE_FUNCTION(execSetFallbackBrush); \
	DECLARE_FUNCTION(execSetAssetByObject); \
	DECLARE_FUNCTION(execSetAsset); \
	DECLARE_FUNCTION(execGetEditorAssetWidget); \
	DECLARE_FUNCTION(execGetEditorThumbnailResolution); \
	DECLARE_FUNCTION(execSetEditorThumbnailResolution);


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPAssetThumbnailWrapperWidget_h_27_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPAssetThumbnailWrapperWidget_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVPAssetThumbnailWrapperWidget(); \
	friend struct Z_Construct_UClass_UVPAssetThumbnailWrapperWidget_Statics; \
public: \
	DECLARE_CLASS(UVPAssetThumbnailWrapperWidget, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VPUtilities"), NO_API) \
	DECLARE_SERIALIZER(UVPAssetThumbnailWrapperWidget)


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPAssetThumbnailWrapperWidget_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVPAssetThumbnailWrapperWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVPAssetThumbnailWrapperWidget(UVPAssetThumbnailWrapperWidget&&); \
	NO_API UVPAssetThumbnailWrapperWidget(const UVPAssetThumbnailWrapperWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVPAssetThumbnailWrapperWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVPAssetThumbnailWrapperWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVPAssetThumbnailWrapperWidget) \
	NO_API virtual ~UVPAssetThumbnailWrapperWidget();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPAssetThumbnailWrapperWidget_h_24_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPAssetThumbnailWrapperWidget_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPAssetThumbnailWrapperWidget_h_27_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPAssetThumbnailWrapperWidget_h_27_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPAssetThumbnailWrapperWidget_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPAssetThumbnailWrapperWidget_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPAssetThumbnailWrapperWidget_h_27_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPAssetThumbnailWrapperWidget_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPAssetThumbnailWrapperWidget_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VPUTILITIES_API UClass* StaticClass<class UVPAssetThumbnailWrapperWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPAssetThumbnailWrapperWidget_h


#define FOREACH_ENUM_EASSETTHUMBNAILDISPLAYMODE(op) \
	op(EAssetThumbnailDisplayMode::EditorThumbnail) \
	op(EAssetThumbnailDisplayMode::FallbackImage) 

enum class EAssetThumbnailDisplayMode : uint8;
template<> struct TIsUEnumClass<EAssetThumbnailDisplayMode> { enum { Value = true }; };
template<> VPUTILITIES_API UEnum* StaticEnum<EAssetThumbnailDisplayMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
