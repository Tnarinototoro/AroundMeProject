// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChooserPropertyAccess.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHOOSER_ChooserPropertyAccess_generated_h
#error "ChooserPropertyAccess.generated.h already included, missing '#pragma once' in ChooserPropertyAccess.h"
#endif
#define CHOOSER_ChooserPropertyAccess_generated_h

#define FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_19_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_19_ACCESSORS
#define FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHOOSER_API UHasContextClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CHOOSER_API UHasContextClass(UHasContextClass&&); \
	CHOOSER_API UHasContextClass(const UHasContextClass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHOOSER_API, UHasContextClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHasContextClass); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHasContextClass) \
	CHOOSER_API virtual ~UHasContextClass();


#define FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_19_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUHasContextClass(); \
	friend struct Z_Construct_UClass_UHasContextClass_Statics; \
public: \
	DECLARE_CLASS(UHasContextClass, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Chooser"), CHOOSER_API) \
	DECLARE_SERIALIZER(UHasContextClass)


#define FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_19_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_19_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_19_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IHasContextClass() {} \
public: \
	typedef UHasContextClass UClassType; \
	typedef IHasContextClass ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_19_ACCESSORS \
	FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHOOSER_API UClass* StaticClass<class UHasContextClass>();

#define FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChooserPropertyBinding_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct();


template<> CHOOSER_API UScriptStruct* StaticStruct<struct FChooserPropertyBinding>();

#define FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChooserEnumPropertyBinding_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct(); \
	typedef FChooserPropertyBinding Super;


template<> CHOOSER_API UScriptStruct* StaticStruct<struct FChooserEnumPropertyBinding>();

#define FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChooserObjectPropertyBinding_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct(); \
	typedef FChooserPropertyBinding Super;


template<> CHOOSER_API UScriptStruct* StaticStruct<struct FChooserObjectPropertyBinding>();

#define FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_82_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChooserStructPropertyBinding_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct(); \
	typedef FChooserPropertyBinding Super;


template<> CHOOSER_API UScriptStruct* StaticStruct<struct FChooserStructPropertyBinding>();

#define FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_102_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FContextObjectTypeBase_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct();


template<> CHOOSER_API UScriptStruct* StaticStruct<struct FContextObjectTypeBase>();

#define FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_112_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FContextObjectTypeClass_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct(); \
	typedef FContextObjectTypeBase Super;


template<> CHOOSER_API UScriptStruct* StaticStruct<struct FContextObjectTypeClass>();

#define FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_120_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FContextObjectTypeStruct_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct(); \
	typedef FContextObjectTypeBase Super;


template<> CHOOSER_API UScriptStruct* StaticStruct<struct FContextObjectTypeStruct>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h


#define FOREACH_ENUM_EOBJECTCHOOSERRESULTTYPE(op) \
	op(EObjectChooserResultType::ObjectResult) \
	op(EObjectChooserResultType::ClassResult) 

enum class EObjectChooserResultType;
template<> struct TIsUEnumClass<EObjectChooserResultType> { enum { Value = true }; };
template<> CHOOSER_API UEnum* StaticEnum<EObjectChooserResultType>();

#define FOREACH_ENUM_ECONTEXTOBJECTDIRECTION(op) \
	op(EContextObjectDirection::Read) \
	op(EContextObjectDirection::Write) \
	op(EContextObjectDirection::ReadWrite) 

enum class EContextObjectDirection;
template<> struct TIsUEnumClass<EContextObjectDirection> { enum { Value = true }; };
template<> CHOOSER_API UEnum* StaticEnum<EContextObjectDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
