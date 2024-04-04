// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Text3DComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFont;
class UMaterialInterface;
class USceneComponent;
class UStaticMeshComponent;
enum class EText3DBevelType : uint8;
enum class EText3DHorizontalTextAlignment : uint8;
enum class EText3DVerticalTextAlignment : uint8;
#ifdef TEXT3D_Text3DComponent_generated_h
#error "Text3DComponent.generated.h already included, missing '#pragma once' in Text3DComponent.h"
#endif
#define TEXT3D_Text3DComponent_generated_h

#define FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_68_DELEGATE \
static void FTextGenerated_DelegateWrapper(const FMulticastScriptDelegate& TextGenerated);


#define FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_50_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_50_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_50_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFormattedText); \
	DECLARE_FUNCTION(execGetTextScale); \
	DECLARE_FUNCTION(execGetGlyphMeshComponents); \
	DECLARE_FUNCTION(execGetGlyphMeshComponent); \
	DECLARE_FUNCTION(execGetGlyphKerningComponents); \
	DECLARE_FUNCTION(execGetGlyphKerningComponent); \
	DECLARE_FUNCTION(execGetGlyphCount); \
	DECLARE_FUNCTION(execGetBounds); \
	DECLARE_FUNCTION(execSetCastShadow); \
	DECLARE_FUNCTION(execSetFreeze); \
	DECLARE_FUNCTION(execSetScaleProportionally); \
	DECLARE_FUNCTION(execSetMaxHeight); \
	DECLARE_FUNCTION(execSetHasMaxHeight); \
	DECLARE_FUNCTION(execSetMaxWidth); \
	DECLARE_FUNCTION(execSetHasMaxWidth); \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetWordSpacing); \
	DECLARE_FUNCTION(execSetLineSpacing); \
	DECLARE_FUNCTION(execSetKerning); \
	DECLARE_FUNCTION(execSetBackMaterial); \
	DECLARE_FUNCTION(execSetExtrudeMaterial); \
	DECLARE_FUNCTION(execSetBevelMaterial); \
	DECLARE_FUNCTION(execSetFrontMaterial); \
	DECLARE_FUNCTION(execSetBevelSegments); \
	DECLARE_FUNCTION(execSetBevelType); \
	DECLARE_FUNCTION(execSetBevel); \
	DECLARE_FUNCTION(execSetExtrude); \
	DECLARE_FUNCTION(execSetOutlineExpand); \
	DECLARE_FUNCTION(execSetHasOutline); \
	DECLARE_FUNCTION(execSetFont); \
	DECLARE_FUNCTION(execSetText);


#define FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_50_ACCESSORS \
static void GetbRefreshOnChange_WrapperImpl(const void* Object, void* OutValue); \
static void SetbRefreshOnChange_WrapperImpl(void* Object, const void* InValue); \
static void GetText_WrapperImpl(const void* Object, void* OutValue); \
static void SetText_WrapperImpl(void* Object, const void* InValue); \
static void GetExtrude_WrapperImpl(const void* Object, void* OutValue); \
static void SetExtrude_WrapperImpl(void* Object, const void* InValue); \
static void GetBevel_WrapperImpl(const void* Object, void* OutValue); \
static void SetBevel_WrapperImpl(void* Object, const void* InValue); \
static void GetBevelType_WrapperImpl(const void* Object, void* OutValue); \
static void SetBevelType_WrapperImpl(void* Object, const void* InValue); \
static void GetBevelSegments_WrapperImpl(const void* Object, void* OutValue); \
static void SetBevelSegments_WrapperImpl(void* Object, const void* InValue); \
static void GetbOutline_WrapperImpl(const void* Object, void* OutValue); \
static void SetbOutline_WrapperImpl(void* Object, const void* InValue); \
static void GetOutlineExpand_WrapperImpl(const void* Object, void* OutValue); \
static void SetOutlineExpand_WrapperImpl(void* Object, const void* InValue); \
static void GetFrontMaterial_WrapperImpl(const void* Object, void* OutValue); \
static void SetFrontMaterial_WrapperImpl(void* Object, const void* InValue); \
static void GetBevelMaterial_WrapperImpl(const void* Object, void* OutValue); \
static void SetBevelMaterial_WrapperImpl(void* Object, const void* InValue); \
static void GetExtrudeMaterial_WrapperImpl(const void* Object, void* OutValue); \
static void SetExtrudeMaterial_WrapperImpl(void* Object, const void* InValue); \
static void GetBackMaterial_WrapperImpl(const void* Object, void* OutValue); \
static void SetBackMaterial_WrapperImpl(void* Object, const void* InValue); \
static void GetFont_WrapperImpl(const void* Object, void* OutValue); \
static void SetFont_WrapperImpl(void* Object, const void* InValue); \
static void GetHorizontalAlignment_WrapperImpl(const void* Object, void* OutValue); \
static void SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void GetVerticalAlignment_WrapperImpl(const void* Object, void* OutValue); \
static void SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void GetKerning_WrapperImpl(const void* Object, void* OutValue); \
static void SetKerning_WrapperImpl(void* Object, const void* InValue); \
static void GetLineSpacing_WrapperImpl(const void* Object, void* OutValue); \
static void SetLineSpacing_WrapperImpl(void* Object, const void* InValue); \
static void SetWordSpacing_WrapperImpl(void* Object, const void* InValue); \
static void GetbHasMaxWidth_WrapperImpl(const void* Object, void* OutValue); \
static void SetbHasMaxWidth_WrapperImpl(void* Object, const void* InValue); \
static void GetMaxWidth_WrapperImpl(const void* Object, void* OutValue); \
static void SetMaxWidth_WrapperImpl(void* Object, const void* InValue); \
static void GetbHasMaxHeight_WrapperImpl(const void* Object, void* OutValue); \
static void SetbHasMaxHeight_WrapperImpl(void* Object, const void* InValue); \
static void GetMaxHeight_WrapperImpl(const void* Object, void* OutValue); \
static void SetMaxHeight_WrapperImpl(void* Object, const void* InValue); \
static void GetbScaleProportionally_WrapperImpl(const void* Object, void* OutValue); \
static void SetbScaleProportionally_WrapperImpl(void* Object, const void* InValue); \
static void GetbCastShadow_WrapperImpl(const void* Object, void* OutValue); \
static void SetbCastShadow_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUText3DComponent(); \
	friend struct Z_Construct_UClass_UText3DComponent_Statics; \
public: \
	DECLARE_CLASS(UText3DComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Text3D"), NO_API) \
	DECLARE_SERIALIZER(UText3DComponent)


#define FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_50_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UText3DComponent(UText3DComponent&&); \
	NO_API UText3DComponent(const UText3DComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UText3DComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UText3DComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UText3DComponent) \
	NO_API virtual ~UText3DComponent();


#define FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_47_PROLOG
#define FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_50_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_50_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_50_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_50_ACCESSORS \
	FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_50_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEXT3D_API UClass* StaticClass<class UText3DComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h


#define FOREACH_ENUM_ETEXT3DVERTICALTEXTALIGNMENT(op) \
	op(EText3DVerticalTextAlignment::FirstLine) \
	op(EText3DVerticalTextAlignment::Top) \
	op(EText3DVerticalTextAlignment::Center) \
	op(EText3DVerticalTextAlignment::Bottom) 

enum class EText3DVerticalTextAlignment : uint8;
template<> struct TIsUEnumClass<EText3DVerticalTextAlignment> { enum { Value = true }; };
template<> TEXT3D_API UEnum* StaticEnum<EText3DVerticalTextAlignment>();

#define FOREACH_ENUM_ETEXT3DHORIZONTALTEXTALIGNMENT(op) \
	op(EText3DHorizontalTextAlignment::Left) \
	op(EText3DHorizontalTextAlignment::Center) \
	op(EText3DHorizontalTextAlignment::Right) 

enum class EText3DHorizontalTextAlignment : uint8;
template<> struct TIsUEnumClass<EText3DHorizontalTextAlignment> { enum { Value = true }; };
template<> TEXT3D_API UEnum* StaticEnum<EText3DHorizontalTextAlignment>();

#define FOREACH_ENUM_ETEXT3DMODIFYFLAGS(op) \
	op(EText3DModifyFlags::None) \
	op(EText3DModifyFlags::Layout) \
	op(EText3DModifyFlags::Geometry) \
	op(EText3DModifyFlags::Unfreeze) \
	op(EText3DModifyFlags::All) 

enum class EText3DModifyFlags : uint8;
template<> struct TIsUEnumClass<EText3DModifyFlags> { enum { Value = true }; };
template<> TEXT3D_API UEnum* StaticEnum<EText3DModifyFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
