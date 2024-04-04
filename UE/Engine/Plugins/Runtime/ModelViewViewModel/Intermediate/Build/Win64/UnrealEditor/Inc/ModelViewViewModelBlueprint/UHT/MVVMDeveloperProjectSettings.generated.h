// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MVVMDeveloperProjectSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODELVIEWVIEWMODELBLUEPRINT_MVVMDeveloperProjectSettings_generated_h
#error "MVVMDeveloperProjectSettings.generated.h already included, missing '#pragma once' in MVVMDeveloperProjectSettings.h"
#endif
#define MODELVIEWVIEWMODELBLUEPRINT_MVVMDeveloperProjectSettings_generated_h

#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics; \
	MODELVIEWVIEWMODELBLUEPRINT_API static class UScriptStruct* StaticStruct();


template<> MODELVIEWVIEWMODELBLUEPRINT_API UScriptStruct* StaticStruct<struct FMVVMDeveloperProjectWidgetSettings>();

#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMVVMViewBindingFilterSettings_Statics; \
	MODELVIEWVIEWMODELBLUEPRINT_API static class UScriptStruct* StaticStruct();


template<> MODELVIEWVIEWMODELBLUEPRINT_API UScriptStruct* StaticStruct<struct FMVVMViewBindingFilterSettings>();

#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_64_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_64_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_64_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_64_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_64_ACCESSORS
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMVVMDeveloperProjectSettings(); \
	friend struct Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics; \
public: \
	DECLARE_CLASS(UMVVMDeveloperProjectSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModelViewViewModelBlueprint"), NO_API) \
	DECLARE_SERIALIZER(UMVVMDeveloperProjectSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("ModelViewViewModel");} \



#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_64_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMVVMDeveloperProjectSettings(UMVVMDeveloperProjectSettings&&); \
	NO_API UMVVMDeveloperProjectSettings(const UMVVMDeveloperProjectSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMVVMDeveloperProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMVVMDeveloperProjectSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMVVMDeveloperProjectSettings) \
	NO_API virtual ~UMVVMDeveloperProjectSettings();


#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_61_PROLOG
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_64_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_64_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_64_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_64_ACCESSORS \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_64_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODELVIEWVIEWMODELBLUEPRINT_API UClass* StaticClass<class UMVVMDeveloperProjectSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h


#define FOREACH_ENUM_EFILTERFLAG(op) \
	op(EFilterFlag::None) \
	op(EFilterFlag::All) 

enum class EFilterFlag : uint8;
template<> struct TIsUEnumClass<EFilterFlag> { enum { Value = true }; };
template<> MODELVIEWVIEWMODELBLUEPRINT_API UEnum* StaticEnum<EFilterFlag>();

#define FOREACH_ENUM_EMVVMDEVELOPERCONVERSIONFUNCTIONFILTERTYPE(op) \
	op(EMVVMDeveloperConversionFunctionFilterType::BlueprintActionRegistry) \
	op(EMVVMDeveloperConversionFunctionFilterType::AllowedList) 

enum class EMVVMDeveloperConversionFunctionFilterType : uint8;
template<> struct TIsUEnumClass<EMVVMDeveloperConversionFunctionFilterType> { enum { Value = true }; };
template<> MODELVIEWVIEWMODELBLUEPRINT_API UEnum* StaticEnum<EMVVMDeveloperConversionFunctionFilterType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
