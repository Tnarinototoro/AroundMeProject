// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
class UPCGGraphInterface;
class UPCGManagedResource;
struct FPCGDataCollection;
#ifdef PCG_PCGComponent_generated_h
#error "PCGComponent.generated.h already included, missing '#pragma once' in PCGComponent.h"
#endif
#define PCG_PCGComponent_generated_h

#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGComponent_h_72_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGComponent_h_72_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGComponent_h_72_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGComponent_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Cleanup_Implementation(bool bRemoveComponents, bool bSave); \
	virtual void Generate_Implementation(bool bForce); \
	virtual void SetGraph_Implementation(UPCGGraphInterface* InGraph); \
 \
	DECLARE_FUNCTION(execClearPCGLink); \
	DECLARE_FUNCTION(execGetGeneratedGraphOutput); \
	DECLARE_FUNCTION(execNotifyPropertiesChangedFromBlueprint); \
	DECLARE_FUNCTION(execCleanup); \
	DECLARE_FUNCTION(execGenerate); \
	DECLARE_FUNCTION(execCleanupLocal); \
	DECLARE_FUNCTION(execGenerateLocal); \
	DECLARE_FUNCTION(execAddToManagedResources); \
	DECLARE_FUNCTION(execSetGraph);


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGComponent_h_72_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGComponent_h_72_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGComponent_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGComponent(); \
	friend struct Z_Construct_UClass_UPCGComponent_Statics; \
public: \
	DECLARE_CLASS(UPCGComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGComponent)


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGComponent_h_72_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGComponent(UPCGComponent&&); \
	NO_API UPCGComponent(const UPCGComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGComponent)


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGComponent_h_66_PROLOG
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGComponent_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGComponent_h_72_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGComponent_h_72_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGComponent_h_72_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGComponent_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGComponent_h_72_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGComponent_h_72_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGComponent_h_72_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGComponent_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCG_API UClass* StaticClass<class UPCGComponent>();

#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGComponent_h_442_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPCGComponentInstanceData_Statics; \
	PCG_API static class UScriptStruct* StaticStruct(); \
	typedef FActorComponentInstanceData Super;


template<> PCG_API UScriptStruct* StaticStruct<struct FPCGComponentInstanceData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGComponent_h


#define FOREACH_ENUM_EPCGCOMPONENTINPUT(op) \
	op(EPCGComponentInput::Actor) \
	op(EPCGComponentInput::Landscape) \
	op(EPCGComponentInput::Other) 

enum class EPCGComponentInput : uint8;
template<> struct TIsUEnumClass<EPCGComponentInput> { enum { Value = true }; };
template<> PCG_API UEnum* StaticEnum<EPCGComponentInput>();

#define FOREACH_ENUM_EPCGCOMPONENTGENERATIONTRIGGER(op) \
	op(EPCGComponentGenerationTrigger::GenerateOnLoad) \
	op(EPCGComponentGenerationTrigger::GenerateOnDemand) 

enum class EPCGComponentGenerationTrigger : uint8;
template<> struct TIsUEnumClass<EPCGComponentGenerationTrigger> { enum { Value = true }; };
template<> PCG_API UEnum* StaticEnum<EPCGComponentGenerationTrigger>();

#define FOREACH_ENUM_EPCGCOMPONENTDIRTYFLAG(op) \
	op(EPCGComponentDirtyFlag::None) \
	op(EPCGComponentDirtyFlag::Actor) \
	op(EPCGComponentDirtyFlag::Landscape) \
	op(EPCGComponentDirtyFlag::Input) \
	op(EPCGComponentDirtyFlag::Data) \
	op(EPCGComponentDirtyFlag::All) 

enum class EPCGComponentDirtyFlag : uint8;
template<> struct TIsUEnumClass<EPCGComponentDirtyFlag> { enum { Value = true }; };
template<> PCG_API UEnum* StaticEnum<EPCGComponentDirtyFlag>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
