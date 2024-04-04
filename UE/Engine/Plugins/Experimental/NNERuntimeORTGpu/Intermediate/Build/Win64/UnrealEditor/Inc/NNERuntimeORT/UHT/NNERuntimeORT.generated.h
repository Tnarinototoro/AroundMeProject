// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NNERuntimeORT.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NNERUNTIMEORT_NNERuntimeORT_generated_h
#error "NNERuntimeORT.generated.h already included, missing '#pragma once' in NNERuntimeORT.h"
#endif
#define NNERUNTIMEORT_NNERuntimeORT_generated_h

#define FID_Engine_Plugins_Experimental_NNERuntimeORTGpu_Source_NNERuntimeORT_Private_NNERuntimeORT_h_33_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_NNERuntimeORTGpu_Source_NNERuntimeORT_Private_NNERuntimeORT_h_33_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_NNERuntimeORTGpu_Source_NNERuntimeORT_Private_NNERuntimeORT_h_33_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_NNERuntimeORTGpu_Source_NNERuntimeORT_Private_NNERuntimeORT_h_33_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_NNERuntimeORTGpu_Source_NNERuntimeORT_Private_NNERuntimeORT_h_33_ACCESSORS
#define FID_Engine_Plugins_Experimental_NNERuntimeORTGpu_Source_NNERuntimeORT_Private_NNERuntimeORT_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNNERuntimeORTGpuImpl(); \
	friend struct Z_Construct_UClass_UNNERuntimeORTGpuImpl_Statics; \
public: \
	DECLARE_CLASS(UNNERuntimeORTGpuImpl, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NNERuntimeORT"), NO_API) \
	DECLARE_SERIALIZER(UNNERuntimeORTGpuImpl) \
	virtual UObject* _getUObject() const override { return const_cast<UNNERuntimeORTGpuImpl*>(this); }


#define FID_Engine_Plugins_Experimental_NNERuntimeORTGpu_Source_NNERuntimeORT_Private_NNERuntimeORT_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNNERuntimeORTGpuImpl(UNNERuntimeORTGpuImpl&&); \
	NO_API UNNERuntimeORTGpuImpl(const UNNERuntimeORTGpuImpl&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNNERuntimeORTGpuImpl); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNNERuntimeORTGpuImpl); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNNERuntimeORTGpuImpl)


#define FID_Engine_Plugins_Experimental_NNERuntimeORTGpu_Source_NNERuntimeORT_Private_NNERuntimeORT_h_30_PROLOG
#define FID_Engine_Plugins_Experimental_NNERuntimeORTGpu_Source_NNERuntimeORT_Private_NNERuntimeORT_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_NNERuntimeORTGpu_Source_NNERuntimeORT_Private_NNERuntimeORT_h_33_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_NNERuntimeORTGpu_Source_NNERuntimeORT_Private_NNERuntimeORT_h_33_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_NNERuntimeORTGpu_Source_NNERuntimeORT_Private_NNERuntimeORT_h_33_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_NNERuntimeORTGpu_Source_NNERuntimeORT_Private_NNERuntimeORT_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_NNERuntimeORTGpu_Source_NNERuntimeORT_Private_NNERuntimeORT_h_33_ACCESSORS \
	FID_Engine_Plugins_Experimental_NNERuntimeORTGpu_Source_NNERuntimeORT_Private_NNERuntimeORT_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_NNERuntimeORTGpu_Source_NNERuntimeORT_Private_NNERuntimeORT_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NNERUNTIMEORT_API UClass* StaticClass<class UNNERuntimeORTGpuImpl>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_NNERuntimeORTGpu_Source_NNERuntimeORT_Private_NNERuntimeORT_h


#define FOREACH_ENUM_ENNERUNTIMEORTGPUPROVIDER(op) \
	op(ENNERuntimeORTGpuProvider::None) \
	op(ENNERuntimeORTGpuProvider::Dml) \
	op(ENNERuntimeORTGpuProvider::Cuda) 

enum class ENNERuntimeORTGpuProvider : uint8;
template<> struct TIsUEnumClass<ENNERuntimeORTGpuProvider> { enum { Value = true }; };
template<> NNERUNTIMEORT_API UEnum* StaticEnum<ENNERuntimeORTGpuProvider>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
