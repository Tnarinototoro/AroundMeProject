// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCO/CustomizableObjectInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimInstance;
class UCustomizableObject;
class UCustomizableObjectInstance;
class UObject;
class USkeletalMesh;
class UTexture2D;
enum class ECustomizableObjectProjectorType : uint8;
struct FCustomizableObjectBoolParameterValue;
struct FCustomizableObjectFloatParameterValue;
struct FCustomizableObjectIntParameterValue;
struct FCustomizableObjectProjectorParameterValue;
struct FCustomizableObjectTextureParameterValue;
struct FCustomizableObjectVectorParameterValue;
struct FGameplayTagContainer;
struct FLinearColor;
struct FMultilayerProjectorLayer;
struct FMultilayerProjectorVirtualLayer;
struct FUpdateContext;
#ifdef CUSTOMIZABLEOBJECT_CustomizableObjectInstance_generated_h
#error "CustomizableObjectInstance.generated.h already included, missing '#pragma once' in CustomizableObjectInstance.h"
#endif
#define CUSTOMIZABLEOBJECT_CustomizableObjectInstance_generated_h

#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectInstance_h_84_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUpdateContext_Statics; \
	CUSTOMIZABLEOBJECT_API static class UScriptStruct* StaticStruct();


template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<struct FUpdateContext>();

#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectInstance_h_91_DELEGATE \
CUSTOMIZABLEOBJECT_API void FInstanceUpdateDelegate_DelegateWrapper(const FScriptDelegate& InstanceUpdateDelegate, FUpdateContext const& Result);


#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectInstance_h_104_DELEGATE \
CUSTOMIZABLEOBJECT_API void FBeginUpdateDelegate_DelegateWrapper(const FMulticastScriptDelegate& BeginUpdateDelegate, UCustomizableObjectInstance* Instance);


#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectInstance_h_109_DELEGATE \
CUSTOMIZABLEOBJECT_API void FObjectInstanceUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ObjectInstanceUpdatedDelegate, UCustomizableObjectInstance* Instance);


#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectInstance_h_112_DELEGATE \
CUSTOMIZABLEOBJECT_API void FBeginDestroyDelegate_DelegateWrapper(const FMulticastScriptDelegate& BeginDestroyDelegate, UCustomizableObjectInstance* Instance);


#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectInstance_h_117_DELEGATE \
CUSTOMIZABLEOBJECT_API void FEachComponentAnimInstanceClassDelegate_DelegateWrapper(const FScriptDelegate& EachComponentAnimInstanceClassDelegate, FName SlotIndex, TSubclassOf<UAnimInstance>  AnimInstClass);


#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectInstance_h_125_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectInstance_h_125_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectInstance_h_125_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectInstance_h_125_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNumComponents); \
	DECLARE_FUNCTION(execSetReplacePhysicsAssets); \
	DECLARE_FUNCTION(execForEachAnimInstance); \
	DECLARE_FUNCTION(execGetAnimationGameplayTags); \
	DECLARE_FUNCTION(execGetAnimBP); \
	DECLARE_FUNCTION(execMultilayerProjectorUpdateVirtualLayer); \
	DECLARE_FUNCTION(execMultilayerProjectorGetVirtualLayer); \
	DECLARE_FUNCTION(execMultilayerProjectorRemoveVirtualLayer); \
	DECLARE_FUNCTION(execMultilayerProjectorFindOrCreateVirtualLayer); \
	DECLARE_FUNCTION(execMultilayerProjectorCreateVirtualLayer); \
	DECLARE_FUNCTION(execMultilayerProjectorGetVirtualLayers); \
	DECLARE_FUNCTION(execMultilayerProjectorUpdateLayer); \
	DECLARE_FUNCTION(execMultilayerProjectorGetLayer); \
	DECLARE_FUNCTION(execMultilayerProjectorRemoveLayerAt); \
	DECLARE_FUNCTION(execMultilayerProjectorCreateLayer); \
	DECLARE_FUNCTION(execMultilayerProjectorNumLayers); \
	DECLARE_FUNCTION(execRemoveMultilayerProjector); \
	DECLARE_FUNCTION(execCreateMultiLayerProjector); \
	DECLARE_FUNCTION(execRemoveValueFromProjectorRange); \
	DECLARE_FUNCTION(execRemoveValueFromFloatRange); \
	DECLARE_FUNCTION(execRemoveValueFromIntRange); \
	DECLARE_FUNCTION(execAddValueToProjectorRange); \
	DECLARE_FUNCTION(execAddValueToFloatRange); \
	DECLARE_FUNCTION(execAddValueToIntRange); \
	DECLARE_FUNCTION(execFindProjectorParameterNameIndex); \
	DECLARE_FUNCTION(execFindVectorParameterNameIndex); \
	DECLARE_FUNCTION(execFindBoolParameterNameIndex); \
	DECLARE_FUNCTION(execFindFloatParameterNameIndex); \
	DECLARE_FUNCTION(execFindIntParameterNameIndex); \
	DECLARE_FUNCTION(execGetProjectorParameterType); \
	DECLARE_FUNCTION(execGetProjectorAngle); \
	DECLARE_FUNCTION(execGetProjectorScale); \
	DECLARE_FUNCTION(execGetProjectorUp); \
	DECLARE_FUNCTION(execGetProjectorDirection); \
	DECLARE_FUNCTION(execGetProjectorPosition); \
	DECLARE_FUNCTION(execGetProjectorValue); \
	DECLARE_FUNCTION(execSetProjectorValue); \
	DECLARE_FUNCTION(execSetVectorParameterSelectedOption); \
	DECLARE_FUNCTION(execSetBoolParameterSelectedOption); \
	DECLARE_FUNCTION(execGetBoolParameterSelectedOption); \
	DECLARE_FUNCTION(execSetColorParameterSelectedOption); \
	DECLARE_FUNCTION(execGetColorParameterSelectedOption); \
	DECLARE_FUNCTION(execSetTextureParameterSelectedOptionT); \
	DECLARE_FUNCTION(execSetTextureParameterSelectedOption); \
	DECLARE_FUNCTION(execGetTextureParameterSelectedOption); \
	DECLARE_FUNCTION(execSetFloatParameterSelectedOption); \
	DECLARE_FUNCTION(execGetFloatParameterSelectedOption); \
	DECLARE_FUNCTION(execSetIntParameterSelectedOption); \
	DECLARE_FUNCTION(execGetIntParameterSelectedOption); \
	DECLARE_FUNCTION(execGetTextureValueRange); \
	DECLARE_FUNCTION(execGetFloatValueRange); \
	DECLARE_FUNCTION(execGetIntValueRange); \
	DECLARE_FUNCTION(execGetProjectorValueRange); \
	DECLARE_FUNCTION(execIsParamMultidimensional); \
	DECLARE_FUNCTION(execIsParameterRelevant); \
	DECLARE_FUNCTION(execGetParameterDescription); \
	DECLARE_FUNCTION(execCloneStatic); \
	DECLARE_FUNCTION(execClone); \
	DECLARE_FUNCTION(execUpdateSkeletalMeshAsyncResult); \
	DECLARE_FUNCTION(execUpdateSkeletalMeshAsync); \
	DECLARE_FUNCTION(execSetRandomValues); \
	DECLARE_FUNCTION(execHasAnyParameters); \
	DECLARE_FUNCTION(execGetProjectorParameters); \
	DECLARE_FUNCTION(execGetVectorParameters); \
	DECLARE_FUNCTION(execGetTextureParameters); \
	DECLARE_FUNCTION(execGetFloatParameters); \
	DECLARE_FUNCTION(execGetIntParameters); \
	DECLARE_FUNCTION(execGetBoolParameters); \
	DECLARE_FUNCTION(execHasAnySkeletalMesh); \
	DECLARE_FUNCTION(execGetSkeletalMesh); \
	DECLARE_FUNCTION(execSetCurrentState); \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execSetBuildParameterRelevancy); \
	DECLARE_FUNCTION(execGetBuildParameterRelevancy); \
	DECLARE_FUNCTION(execSetBuildParameterDecorations); \
	DECLARE_FUNCTION(execGetBuildParameterDecorations); \
	DECLARE_FUNCTION(execGetCustomizableObject); \
	DECLARE_FUNCTION(execSetObject);


#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectInstance_h_125_ACCESSORS
#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectInstance_h_125_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UCustomizableObjectInstance, NO_API)


#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectInstance_h_125_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObjectInstance(); \
	friend struct Z_Construct_UClass_UCustomizableObjectInstance_Statics; \
public: \
	DECLARE_CLASS(UCustomizableObjectInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObject"), NO_API) \
	DECLARE_SERIALIZER(UCustomizableObjectInstance) \
	FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectInstance_h_125_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectInstance_h_125_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomizableObjectInstance(UCustomizableObjectInstance&&); \
	NO_API UCustomizableObjectInstance(const UCustomizableObjectInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomizableObjectInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomizableObjectInstance) \
	NO_API virtual ~UCustomizableObjectInstance();


#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectInstance_h_122_PROLOG
#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectInstance_h_125_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectInstance_h_125_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectInstance_h_125_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectInstance_h_125_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectInstance_h_125_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectInstance_h_125_ACCESSORS \
	FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectInstance_h_125_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectInstance_h_125_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CUSTOMIZABLEOBJECT_API UClass* StaticClass<class UCustomizableObjectInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectInstance_h


#define FOREACH_ENUM_EUPDATERESULT(op) \
	op(EUpdateResult::Success) \
	op(EUpdateResult::Error) \
	op(EUpdateResult::ErrorOptimized) \
	op(EUpdateResult::ErrorReplaced) \
	op(EUpdateResult::ErrorDiscarded) 

enum class EUpdateResult : uint8;
template<> struct TIsUEnumClass<EUpdateResult> { enum { Value = true }; };
template<> CUSTOMIZABLEOBJECT_API UEnum* StaticEnum<EUpdateResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
