// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FunctionLibraries/AssetFilteringAndSortingFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class EAssetTagMetaDataSortType : uint8;
enum class ESortOrder : uint8;
struct FAssetData;
#ifdef VIRTUALCAMERA_AssetFilteringAndSortingFunctionLibrary_generated_h
#error "AssetFilteringAndSortingFunctionLibrary.generated.h already included, missing '#pragma once' in AssetFilteringAndSortingFunctionLibrary.h"
#endif
#define VIRTUALCAMERA_AssetFilteringAndSortingFunctionLibrary_generated_h

#define FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_AssetFilteringAndSortingFunctionLibrary_h_30_DELEGATE \
VIRTUALCAMERA_API bool FAssetSortingPredicate_DelegateWrapper(const FScriptDelegate& AssetSortingPredicate, FAssetData const& Left, FAssetData const& Right);


#define FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_AssetFilteringAndSortingFunctionLibrary_h_36_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_AssetFilteringAndSortingFunctionLibrary_h_36_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_AssetFilteringAndSortingFunctionLibrary_h_36_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_AssetFilteringAndSortingFunctionLibrary_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSortByMetaData); \
	DECLARE_FUNCTION(execSortByAssetName); \
	DECLARE_FUNCTION(execSortByCustomPredicate); \
	DECLARE_FUNCTION(execGetAllAssetsByMetaDataTags);


#define FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_AssetFilteringAndSortingFunctionLibrary_h_36_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_AssetFilteringAndSortingFunctionLibrary_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetFilteringAndSortingFunctionLibrary(); \
	friend struct Z_Construct_UClass_UAssetFilteringAndSortingFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UAssetFilteringAndSortingFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VirtualCamera"), NO_API) \
	DECLARE_SERIALIZER(UAssetFilteringAndSortingFunctionLibrary)


#define FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_AssetFilteringAndSortingFunctionLibrary_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetFilteringAndSortingFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetFilteringAndSortingFunctionLibrary(UAssetFilteringAndSortingFunctionLibrary&&); \
	NO_API UAssetFilteringAndSortingFunctionLibrary(const UAssetFilteringAndSortingFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetFilteringAndSortingFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetFilteringAndSortingFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetFilteringAndSortingFunctionLibrary) \
	NO_API virtual ~UAssetFilteringAndSortingFunctionLibrary();


#define FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_AssetFilteringAndSortingFunctionLibrary_h_33_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_AssetFilteringAndSortingFunctionLibrary_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_AssetFilteringAndSortingFunctionLibrary_h_36_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_AssetFilteringAndSortingFunctionLibrary_h_36_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_AssetFilteringAndSortingFunctionLibrary_h_36_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_AssetFilteringAndSortingFunctionLibrary_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_AssetFilteringAndSortingFunctionLibrary_h_36_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_AssetFilteringAndSortingFunctionLibrary_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_AssetFilteringAndSortingFunctionLibrary_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIRTUALCAMERA_API UClass* StaticClass<class UAssetFilteringAndSortingFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_AssetFilteringAndSortingFunctionLibrary_h


#define FOREACH_ENUM_ESORTORDER(op) \
	op(ESortOrder::Ascending) \
	op(ESortOrder::Descending) 

enum class ESortOrder : uint8;
template<> struct TIsUEnumClass<ESortOrder> { enum { Value = true }; };
template<> VIRTUALCAMERA_API UEnum* StaticEnum<ESortOrder>();

#define FOREACH_ENUM_EASSETTAGMETADATASORTTYPE(op) \
	op(EAssetTagMetaDataSortType::String) \
	op(EAssetTagMetaDataSortType::Numeric) \
	op(EAssetTagMetaDataSortType::DateTime) 

enum class EAssetTagMetaDataSortType : uint8;
template<> struct TIsUEnumClass<EAssetTagMetaDataSortType> { enum { Value = true }; };
template<> VIRTUALCAMERA_API UEnum* StaticEnum<EAssetTagMetaDataSortType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
