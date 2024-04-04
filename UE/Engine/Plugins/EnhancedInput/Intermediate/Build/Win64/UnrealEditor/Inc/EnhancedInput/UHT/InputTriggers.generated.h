// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InputTriggers.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEnhancedPlayerInput;
enum class ETriggerState : uint8;
enum class ETriggerType : uint8;
struct FInputActionValue;
#ifdef ENHANCEDINPUT_InputTriggers_generated_h
#error "InputTriggers.generated.h already included, missing '#pragma once' in InputTriggers.h"
#endif
#define ENHANCEDINPUT_InputTriggers_generated_h

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_107_SPARSE_DATA
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_107_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_107_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_107_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateState); \
	DECLARE_FUNCTION(execGetTriggerType); \
	DECLARE_FUNCTION(execIsActuated);


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_107_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_107_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_107_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTrigger(); \
	friend struct Z_Construct_UClass_UInputTrigger_Statics; \
public: \
	DECLARE_CLASS(UInputTrigger, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), NO_API) \
	DECLARE_SERIALIZER(UInputTrigger) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_107_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputTrigger(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputTrigger(UInputTrigger&&); \
	NO_API UInputTrigger(const UInputTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputTrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTrigger); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTrigger) \
	NO_API virtual ~UInputTrigger();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_104_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_107_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_107_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_107_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_107_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_107_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_107_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_107_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_107_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_107_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputTrigger>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_179_SPARSE_DATA
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_179_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_179_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_179_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_179_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_179_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerTimedBase(); \
	friend struct Z_Construct_UClass_UInputTriggerTimedBase_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerTimedBase, UInputTrigger, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), NO_API) \
	DECLARE_SERIALIZER(UInputTriggerTimedBase)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_179_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputTriggerTimedBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputTriggerTimedBase(UInputTriggerTimedBase&&); \
	NO_API UInputTriggerTimedBase(const UInputTriggerTimedBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputTriggerTimedBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerTimedBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerTimedBase) \
	NO_API virtual ~UInputTriggerTimedBase();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_176_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_179_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_179_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_179_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_179_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_179_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_179_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_179_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_179_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputTriggerTimedBase>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_227_SPARSE_DATA
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_227_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_227_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_227_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_227_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_227_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerDown(); \
	friend struct Z_Construct_UClass_UInputTriggerDown_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerDown, UInputTrigger, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerDown)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_227_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerDown(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerDown(UInputTriggerDown&&); \
	ENHANCEDINPUT_API UInputTriggerDown(const UInputTriggerDown&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerDown); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerDown); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerDown) \
	ENHANCEDINPUT_API virtual ~UInputTriggerDown();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_224_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_227_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_227_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_227_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_227_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_227_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_227_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_227_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_227_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputTriggerDown>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_244_SPARSE_DATA
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_244_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_244_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_244_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_244_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_244_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerPressed(); \
	friend struct Z_Construct_UClass_UInputTriggerPressed_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerPressed, UInputTrigger, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerPressed)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_244_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerPressed(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerPressed(UInputTriggerPressed&&); \
	ENHANCEDINPUT_API UInputTriggerPressed(const UInputTriggerPressed&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerPressed); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerPressed); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerPressed) \
	ENHANCEDINPUT_API virtual ~UInputTriggerPressed();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_241_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_244_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_244_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_244_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_244_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_244_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_244_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_244_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_244_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputTriggerPressed>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_263_SPARSE_DATA
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_263_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_263_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_263_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_263_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_263_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerReleased(); \
	friend struct Z_Construct_UClass_UInputTriggerReleased_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerReleased, UInputTrigger, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerReleased)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_263_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerReleased(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerReleased(UInputTriggerReleased&&); \
	ENHANCEDINPUT_API UInputTriggerReleased(const UInputTriggerReleased&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerReleased); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerReleased); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerReleased) \
	ENHANCEDINPUT_API virtual ~UInputTriggerReleased();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_260_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_263_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_263_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_263_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_263_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_263_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_263_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_263_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_263_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputTriggerReleased>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_283_SPARSE_DATA
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_283_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_283_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_283_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_283_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_283_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerHold(); \
	friend struct Z_Construct_UClass_UInputTriggerHold_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerHold, UInputTriggerTimedBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerHold)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_283_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerHold(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerHold(UInputTriggerHold&&); \
	ENHANCEDINPUT_API UInputTriggerHold(const UInputTriggerHold&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerHold); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerHold); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerHold) \
	ENHANCEDINPUT_API virtual ~UInputTriggerHold();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_280_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_283_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_283_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_283_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_283_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_283_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_283_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_283_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_283_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputTriggerHold>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_311_SPARSE_DATA
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_311_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_311_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_311_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_311_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_311_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerHoldAndRelease(); \
	friend struct Z_Construct_UClass_UInputTriggerHoldAndRelease_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerHoldAndRelease, UInputTriggerTimedBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerHoldAndRelease)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_311_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerHoldAndRelease(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerHoldAndRelease(UInputTriggerHoldAndRelease&&); \
	ENHANCEDINPUT_API UInputTriggerHoldAndRelease(const UInputTriggerHoldAndRelease&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerHoldAndRelease); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerHoldAndRelease); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerHoldAndRelease) \
	ENHANCEDINPUT_API virtual ~UInputTriggerHoldAndRelease();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_308_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_311_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_311_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_311_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_311_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_311_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_311_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_311_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_311_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputTriggerHoldAndRelease>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_329_SPARSE_DATA
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_329_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_329_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_329_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_329_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_329_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerTap(); \
	friend struct Z_Construct_UClass_UInputTriggerTap_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerTap, UInputTriggerTimedBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerTap)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_329_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerTap(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerTap(UInputTriggerTap&&); \
	ENHANCEDINPUT_API UInputTriggerTap(const UInputTriggerTap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerTap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerTap); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerTap) \
	ENHANCEDINPUT_API virtual ~UInputTriggerTap();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_326_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_329_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_329_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_329_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_329_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_329_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_329_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_329_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_329_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputTriggerTap>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_351_SPARSE_DATA
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_351_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_351_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_351_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_351_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_351_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerPulse(); \
	friend struct Z_Construct_UClass_UInputTriggerPulse_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerPulse, UInputTriggerTimedBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerPulse)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_351_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerPulse(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerPulse(UInputTriggerPulse&&); \
	ENHANCEDINPUT_API UInputTriggerPulse(const UInputTriggerPulse&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerPulse); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerPulse); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerPulse) \
	ENHANCEDINPUT_API virtual ~UInputTriggerPulse();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_348_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_351_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_351_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_351_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_351_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_351_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_351_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_351_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_351_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputTriggerPulse>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_387_SPARSE_DATA
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_387_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_387_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_387_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_387_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_387_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerChordAction(); \
	friend struct Z_Construct_UClass_UInputTriggerChordAction_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerChordAction, UInputTrigger, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), NO_API) \
	DECLARE_SERIALIZER(UInputTriggerChordAction)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_387_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputTriggerChordAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputTriggerChordAction(UInputTriggerChordAction&&); \
	NO_API UInputTriggerChordAction(const UInputTriggerChordAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputTriggerChordAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerChordAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerChordAction) \
	NO_API virtual ~UInputTriggerChordAction();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_384_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_387_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_387_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_387_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_387_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_387_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_387_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_387_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_387_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputTriggerChordAction>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_412_SPARSE_DATA
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_412_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_412_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_412_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_412_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_412_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerChordBlocker(); \
	friend struct Z_Construct_UClass_UInputTriggerChordBlocker_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerChordBlocker, UInputTriggerChordAction, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerChordBlocker)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_412_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerChordBlocker(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerChordBlocker(UInputTriggerChordBlocker&&); \
	ENHANCEDINPUT_API UInputTriggerChordBlocker(const UInputTriggerChordBlocker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerChordBlocker); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerChordBlocker); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerChordBlocker) \
	ENHANCEDINPUT_API virtual ~UInputTriggerChordBlocker();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_409_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_412_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_412_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_412_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_412_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_412_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_412_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_412_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_412_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputTriggerChordBlocker>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_420_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputComboStepData_Statics; \
	ENHANCEDINPUT_API static class UScriptStruct* StaticStruct();


template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<struct FInputComboStepData>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_441_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputCancelAction_Statics; \
	ENHANCEDINPUT_API static class UScriptStruct* StaticStruct();


template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<struct FInputCancelAction>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_461_SPARSE_DATA
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_461_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_461_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_461_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_461_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_461_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerCombo(); \
	friend struct Z_Construct_UClass_UInputTriggerCombo_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerCombo, UInputTrigger, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), NO_API) \
	DECLARE_SERIALIZER(UInputTriggerCombo)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_461_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputTriggerCombo(UInputTriggerCombo&&); \
	NO_API UInputTriggerCombo(const UInputTriggerCombo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputTriggerCombo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerCombo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInputTriggerCombo) \
	NO_API virtual ~UInputTriggerCombo();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_458_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_461_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_461_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_461_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_461_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_461_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_461_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_461_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_461_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputTriggerCombo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h


#define FOREACH_ENUM_ETRIGGERSTATE(op) \
	op(ETriggerState::None) \
	op(ETriggerState::Ongoing) \
	op(ETriggerState::Triggered) 

enum class ETriggerState : uint8;
template<> struct TIsUEnumClass<ETriggerState> { enum { Value = true }; };
template<> ENHANCEDINPUT_API UEnum* StaticEnum<ETriggerState>();

#define FOREACH_ENUM_ETRIGGEREVENT(op) \
	op(ETriggerEvent::None) \
	op(ETriggerEvent::Triggered) \
	op(ETriggerEvent::Started) \
	op(ETriggerEvent::Ongoing) \
	op(ETriggerEvent::Canceled) \
	op(ETriggerEvent::Completed) 

enum class ETriggerEvent : uint8;
template<> struct TIsUEnumClass<ETriggerEvent> { enum { Value = true }; };
template<> ENHANCEDINPUT_API UEnum* StaticEnum<ETriggerEvent>();

#define FOREACH_ENUM_ETRIGGERTYPE(op) \
	op(ETriggerType::Explicit) \
	op(ETriggerType::Implicit) \
	op(ETriggerType::Blocker) 

enum class ETriggerType : uint8;
template<> struct TIsUEnumClass<ETriggerType> { enum { Value = true }; };
template<> ENHANCEDINPUT_API UEnum* StaticEnum<ETriggerType>();

#define FOREACH_ENUM_ETRIGGEREVENTSSUPPORTED(op) \
	op(ETriggerEventsSupported::None) \
	op(ETriggerEventsSupported::Instant) \
	op(ETriggerEventsSupported::Uninterruptible) \
	op(ETriggerEventsSupported::Ongoing) \
	op(ETriggerEventsSupported::All) 

enum class ETriggerEventsSupported : uint8;
template<> struct TIsUEnumClass<ETriggerEventsSupported> { enum { Value = true }; };
template<> ENHANCEDINPUT_API UEnum* StaticEnum<ETriggerEventsSupported>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
