// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/FractureToolMaterials.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFractureToolMaterials() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureMaterialsSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureMaterialsSettings_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureModalTool();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolMaterials();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolMaterials_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolSettings();
	FRACTUREEDITOR_API UEnum* Z_Construct_UEnum_FractureEditor_EMaterialAssignmentTargets();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FractureEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMaterialAssignmentTargets;
	static UEnum* EMaterialAssignmentTargets_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMaterialAssignmentTargets.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMaterialAssignmentTargets.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FractureEditor_EMaterialAssignmentTargets, (UObject*)Z_Construct_UPackage__Script_FractureEditor(), TEXT("EMaterialAssignmentTargets"));
		}
		return Z_Registration_Info_UEnum_EMaterialAssignmentTargets.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UEnum* StaticEnum<EMaterialAssignmentTargets>()
	{
		return EMaterialAssignmentTargets_StaticEnum();
	}
	struct Z_Construct_UEnum_FractureEditor_EMaterialAssignmentTargets_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FractureEditor_EMaterialAssignmentTargets_Statics::Enumerators[] = {
		{ "EMaterialAssignmentTargets::OnlyInternalFaces", (int64)EMaterialAssignmentTargets::OnlyInternalFaces },
		{ "EMaterialAssignmentTargets::OnlyExternalFaces", (int64)EMaterialAssignmentTargets::OnlyExternalFaces },
		{ "EMaterialAssignmentTargets::AllFaces", (int64)EMaterialAssignmentTargets::AllFaces },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FractureEditor_EMaterialAssignmentTargets_Statics::Enum_MetaDataParams[] = {
		{ "AllFaces.Name", "EMaterialAssignmentTargets::AllFaces" },
		{ "ModuleRelativePath", "Private/FractureToolMaterials.h" },
		{ "OnlyExternalFaces.Name", "EMaterialAssignmentTargets::OnlyExternalFaces" },
		{ "OnlyInternalFaces.Name", "EMaterialAssignmentTargets::OnlyInternalFaces" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FractureEditor_EMaterialAssignmentTargets_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FractureEditor,
		nullptr,
		"EMaterialAssignmentTargets",
		"EMaterialAssignmentTargets",
		Z_Construct_UEnum_FractureEditor_EMaterialAssignmentTargets_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_EMaterialAssignmentTargets_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_EMaterialAssignmentTargets_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FractureEditor_EMaterialAssignmentTargets_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_FractureEditor_EMaterialAssignmentTargets()
	{
		if (!Z_Registration_Info_UEnum_EMaterialAssignmentTargets.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMaterialAssignmentTargets.InnerSingleton, Z_Construct_UEnum_FractureEditor_EMaterialAssignmentTargets_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMaterialAssignmentTargets.InnerSingleton;
	}
	DEFINE_FUNCTION(UFractureMaterialsSettings::execGetMaterialNamesFunc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetMaterialNamesFunc();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFractureMaterialsSettings::execUseAssetMaterialsOnComponents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UseAssetMaterialsOnComponents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFractureMaterialsSettings::execRemoveMaterialSlot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveMaterialSlot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFractureMaterialsSettings::execAddMaterialSlot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMaterialSlot();
		P_NATIVE_END;
	}
	void UFractureMaterialsSettings::StaticRegisterNativesUFractureMaterialsSettings()
	{
		UClass* Class = UFractureMaterialsSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMaterialSlot", &UFractureMaterialsSettings::execAddMaterialSlot },
			{ "GetMaterialNamesFunc", &UFractureMaterialsSettings::execGetMaterialNamesFunc },
			{ "RemoveMaterialSlot", &UFractureMaterialsSettings::execRemoveMaterialSlot },
			{ "UseAssetMaterialsOnComponents", &UFractureMaterialsSettings::execUseAssetMaterialsOnComponents },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFractureMaterialsSettings_AddMaterialSlot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFractureMaterialsSettings_AddMaterialSlot_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "AssetMaterials" },
		{ "Comment", "/** Add a new material slot to the selected geometry collections */" },
		{ "ModuleRelativePath", "Private/FractureToolMaterials.h" },
		{ "ToolTip", "Add a new material slot to the selected geometry collections" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFractureMaterialsSettings_AddMaterialSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFractureMaterialsSettings, nullptr, "AddMaterialSlot", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFractureMaterialsSettings_AddMaterialSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFractureMaterialsSettings_AddMaterialSlot_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UFractureMaterialsSettings_AddMaterialSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFractureMaterialsSettings_AddMaterialSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFractureMaterialsSettings_GetMaterialNamesFunc_Statics
	{
		struct FractureMaterialsSettings_eventGetMaterialNamesFunc_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFractureMaterialsSettings_GetMaterialNamesFunc_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFractureMaterialsSettings_GetMaterialNamesFunc_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFractureMaterialsSettings_GetMaterialNamesFunc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FractureMaterialsSettings_eventGetMaterialNamesFunc_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFractureMaterialsSettings_GetMaterialNamesFunc_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UFractureMaterialsSettings_GetMaterialNamesFunc_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFractureMaterialsSettings_GetMaterialNamesFunc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFractureMaterialsSettings_GetMaterialNamesFunc_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFractureMaterialsSettings_GetMaterialNamesFunc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFractureMaterialsSettings_GetMaterialNamesFunc_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FractureToolMaterials.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFractureMaterialsSettings_GetMaterialNamesFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFractureMaterialsSettings, nullptr, "GetMaterialNamesFunc", nullptr, nullptr, Z_Construct_UFunction_UFractureMaterialsSettings_GetMaterialNamesFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFractureMaterialsSettings_GetMaterialNamesFunc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFractureMaterialsSettings_GetMaterialNamesFunc_Statics::FractureMaterialsSettings_eventGetMaterialNamesFunc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFractureMaterialsSettings_GetMaterialNamesFunc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFractureMaterialsSettings_GetMaterialNamesFunc_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFractureMaterialsSettings_GetMaterialNamesFunc_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFractureMaterialsSettings_GetMaterialNamesFunc_Statics::FractureMaterialsSettings_eventGetMaterialNamesFunc_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFractureMaterialsSettings_GetMaterialNamesFunc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFractureMaterialsSettings_GetMaterialNamesFunc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFractureMaterialsSettings_RemoveMaterialSlot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFractureMaterialsSettings_RemoveMaterialSlot_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "AssetMaterials" },
		{ "Comment", "/** Remove the last material slot from the selected Geometry Collections. (Will not remove the final material.) */" },
		{ "ModuleRelativePath", "Private/FractureToolMaterials.h" },
		{ "ToolTip", "Remove the last material slot from the selected Geometry Collections. (Will not remove the final material.)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFractureMaterialsSettings_RemoveMaterialSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFractureMaterialsSettings, nullptr, "RemoveMaterialSlot", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFractureMaterialsSettings_RemoveMaterialSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFractureMaterialsSettings_RemoveMaterialSlot_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UFractureMaterialsSettings_RemoveMaterialSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFractureMaterialsSettings_RemoveMaterialSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFractureMaterialsSettings_UseAssetMaterialsOnComponents_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFractureMaterialsSettings_UseAssetMaterialsOnComponents_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "ComponentMaterials" },
		{ "Comment", "/** Clear material overrides on components using this asset, so the asset materials are used */" },
		{ "ModuleRelativePath", "Private/FractureToolMaterials.h" },
		{ "ToolTip", "Clear material overrides on components using this asset, so the asset materials are used" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFractureMaterialsSettings_UseAssetMaterialsOnComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFractureMaterialsSettings, nullptr, "UseAssetMaterialsOnComponents", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFractureMaterialsSettings_UseAssetMaterialsOnComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFractureMaterialsSettings_UseAssetMaterialsOnComponents_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UFractureMaterialsSettings_UseAssetMaterialsOnComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFractureMaterialsSettings_UseAssetMaterialsOnComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureMaterialsSettings);
	UClass* Z_Construct_UClass_UFractureMaterialsSettings_NoRegister()
	{
		return UFractureMaterialsSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFractureMaterialsSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditingCollection_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EditingCollection;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlySelectedComponents_MetaData[];
#endif
		static void NewProp_bOnlySelectedComponents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlySelectedComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssignMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssignMaterial;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ToFaces_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToFaces_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ToFaces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlySelectedBones_MetaData[];
#endif
		static void NewProp_bOnlySelectedBones_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlySelectedBones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHaveTargetCollection_MetaData[];
#endif
		static void NewProp_bHaveTargetCollection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHaveTargetCollection;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssignMaterialNamesList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssignMaterialNamesList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssignMaterialNamesList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureMaterialsSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureMaterialsSettings_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UFractureMaterialsSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFractureMaterialsSettings_AddMaterialSlot, "AddMaterialSlot" }, // 2035342863
		{ &Z_Construct_UFunction_UFractureMaterialsSettings_GetMaterialNamesFunc, "GetMaterialNamesFunc" }, // 3248288580
		{ &Z_Construct_UFunction_UFractureMaterialsSettings_RemoveMaterialSlot, "RemoveMaterialSlot" }, // 283784482
		{ &Z_Construct_UFunction_UFractureMaterialsSettings_UseAssetMaterialsOnComponents, "UseAssetMaterialsOnComponents" }, // 176708471
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureMaterialsSettings_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureMaterialsSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Settings related to setting materials on a Geometry Collection **/" },
		{ "IncludePath", "FractureToolMaterials.h" },
		{ "ModuleRelativePath", "Private/FractureToolMaterials.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Settings related to setting materials on a Geometry Collection *" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_EditingCollection_MetaData[] = {
		{ "Category", "AssetMaterials" },
		{ "Comment", "/** Geometry Collection selected for editing */" },
		{ "ModuleRelativePath", "Private/FractureToolMaterials.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Geometry Collection selected for editing" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_EditingCollection = { "EditingCollection", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFractureMaterialsSettings, EditingCollection), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_EditingCollection_MetaData), Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_EditingCollection_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_Materials_MetaData[] = {
		{ "Category", "AssetMaterials" },
		{ "Comment", "/** Materials on the selected Geometry Collection's underlying asset (the Rest Collection). */" },
		{ "DisplayName", "Asset Materials" },
		{ "EditCondition", "bHaveTargetCollection" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Private/FractureToolMaterials.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Materials on the selected Geometry Collection's underlying asset (the Rest Collection)." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0014000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFractureMaterialsSettings, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_Materials_MetaData), Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_Materials_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_bOnlySelectedComponents_MetaData[] = {
		{ "Category", "ComponentMaterials" },
		{ "Comment", "/** Whether 'Use Asset Materials On Components' should only update the selected components, or update all components using this asset */" },
		{ "ModuleRelativePath", "Private/FractureToolMaterials.h" },
		{ "ToolTip", "Whether 'Use Asset Materials On Components' should only update the selected components, or update all components using this asset" },
	};
#endif
	void Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_bOnlySelectedComponents_SetBit(void* Obj)
	{
		((UFractureMaterialsSettings*)Obj)->bOnlySelectedComponents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_bOnlySelectedComponents = { "bOnlySelectedComponents", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFractureMaterialsSettings), &Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_bOnlySelectedComponents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_bOnlySelectedComponents_MetaData), Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_bOnlySelectedComponents_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_AssignMaterial_MetaData[] = {
		{ "Category", "AssignMaterials" },
		{ "Comment", "/** Material to assign to selected faces */" },
		{ "DisplayName", "Assign Material" },
		{ "GetOptions", "GetMaterialNamesFunc" },
		{ "ModuleRelativePath", "Private/FractureToolMaterials.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Material to assign to selected faces" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_AssignMaterial = { "AssignMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFractureMaterialsSettings, AssignMaterial), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_AssignMaterial_MetaData), Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_AssignMaterial_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_ToFaces_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_ToFaces_MetaData[] = {
		{ "Category", "AssignMaterials" },
		{ "Comment", "/** Which subset of faces to update materials assignments on, for the selected geometry */" },
		{ "ModuleRelativePath", "Private/FractureToolMaterials.h" },
		{ "ToolTip", "Which subset of faces to update materials assignments on, for the selected geometry" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_ToFaces = { "ToFaces", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFractureMaterialsSettings, ToFaces), Z_Construct_UEnum_FractureEditor_EMaterialAssignmentTargets, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_ToFaces_MetaData), Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_ToFaces_MetaData) }; // 2289430696
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_bOnlySelectedBones_MetaData[] = {
		{ "Category", "AssignMaterials" },
		{ "Comment", "/** Whether to only assign materials for faces in the selected bones, or the whole geometry collection */" },
		{ "ModuleRelativePath", "Private/FractureToolMaterials.h" },
		{ "ToolTip", "Whether to only assign materials for faces in the selected bones, or the whole geometry collection" },
	};
#endif
	void Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_bOnlySelectedBones_SetBit(void* Obj)
	{
		((UFractureMaterialsSettings*)Obj)->bOnlySelectedBones = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_bOnlySelectedBones = { "bOnlySelectedBones", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFractureMaterialsSettings), &Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_bOnlySelectedBones_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_bOnlySelectedBones_MetaData), Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_bOnlySelectedBones_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_bHaveTargetCollection_MetaData[] = {
		{ "ModuleRelativePath", "Private/FractureToolMaterials.h" },
	};
#endif
	void Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_bHaveTargetCollection_SetBit(void* Obj)
	{
		((UFractureMaterialsSettings*)Obj)->bHaveTargetCollection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_bHaveTargetCollection = { "bHaveTargetCollection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFractureMaterialsSettings), &Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_bHaveTargetCollection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_bHaveTargetCollection_MetaData), Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_bHaveTargetCollection_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_AssignMaterialNamesList_Inner = { "AssignMaterialNamesList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_AssignMaterialNamesList_MetaData[] = {
		{ "ModuleRelativePath", "Private/FractureToolMaterials.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_AssignMaterialNamesList = { "AssignMaterialNamesList", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFractureMaterialsSettings, AssignMaterialNamesList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_AssignMaterialNamesList_MetaData), Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_AssignMaterialNamesList_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureMaterialsSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_EditingCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_Materials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_Materials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_bOnlySelectedComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_AssignMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_ToFaces_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_ToFaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_bOnlySelectedBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_bHaveTargetCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_AssignMaterialNamesList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureMaterialsSettings_Statics::NewProp_AssignMaterialNamesList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureMaterialsSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureMaterialsSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureMaterialsSettings_Statics::ClassParams = {
		&UFractureMaterialsSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFractureMaterialsSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureMaterialsSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureMaterialsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UFractureMaterialsSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureMaterialsSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFractureMaterialsSettings()
	{
		if (!Z_Registration_Info_UClass_UFractureMaterialsSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureMaterialsSettings.OuterSingleton, Z_Construct_UClass_UFractureMaterialsSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureMaterialsSettings.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureMaterialsSettings>()
	{
		return UFractureMaterialsSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureMaterialsSettings);
	UFractureMaterialsSettings::~UFractureMaterialsSettings() {}
	void UFractureToolMaterials::StaticRegisterNativesUFractureToolMaterials()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureToolMaterials);
	UClass* Z_Construct_UClass_UFractureToolMaterials_NoRegister()
	{
		return UFractureToolMaterials::StaticClass();
	}
	struct Z_Construct_UClass_UFractureToolMaterials_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialsSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaterialsSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveSelectedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ActiveSelectedComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureToolMaterials_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureModalTool,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolMaterials_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolMaterials_Statics::Class_MetaDataParams[] = {
		{ "Category", "FractureTools" },
		{ "DisplayName", "Materials Tool" },
		{ "IncludePath", "FractureToolMaterials.h" },
		{ "ModuleRelativePath", "Private/FractureToolMaterials.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolMaterials_Statics::NewProp_MaterialsSettings_MetaData[] = {
		{ "Category", "Slicing" },
		{ "ModuleRelativePath", "Private/FractureToolMaterials.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureToolMaterials_Statics::NewProp_MaterialsSettings = { "MaterialsSettings", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFractureToolMaterials, MaterialsSettings), Z_Construct_UClass_UFractureMaterialsSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolMaterials_Statics::NewProp_MaterialsSettings_MetaData), Z_Construct_UClass_UFractureToolMaterials_Statics::NewProp_MaterialsSettings_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolMaterials_Statics::NewProp_ActiveSelectedComponent_MetaData[] = {
		{ "Comment", "// Track the geometry collection asset last used to populate the materials list, if any\n" },
		{ "ModuleRelativePath", "Private/FractureToolMaterials.h" },
		{ "ToolTip", "Track the geometry collection asset last used to populate the materials list, if any" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UFractureToolMaterials_Statics::NewProp_ActiveSelectedComponent = { "ActiveSelectedComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFractureToolMaterials, ActiveSelectedComponent), Z_Construct_UClass_UGeometryCollectionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolMaterials_Statics::NewProp_ActiveSelectedComponent_MetaData), Z_Construct_UClass_UFractureToolMaterials_Statics::NewProp_ActiveSelectedComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureToolMaterials_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureToolMaterials_Statics::NewProp_MaterialsSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureToolMaterials_Statics::NewProp_ActiveSelectedComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureToolMaterials_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureToolMaterials>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureToolMaterials_Statics::ClassParams = {
		&UFractureToolMaterials::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureToolMaterials_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolMaterials_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolMaterials_Statics::Class_MetaDataParams), Z_Construct_UClass_UFractureToolMaterials_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolMaterials_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFractureToolMaterials()
	{
		if (!Z_Registration_Info_UClass_UFractureToolMaterials.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureToolMaterials.OuterSingleton, Z_Construct_UClass_UFractureToolMaterials_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureToolMaterials.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureToolMaterials>()
	{
		return UFractureToolMaterials::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureToolMaterials);
	UFractureToolMaterials::~UFractureToolMaterials() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMaterials_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMaterials_h_Statics::EnumInfo[] = {
		{ EMaterialAssignmentTargets_StaticEnum, TEXT("EMaterialAssignmentTargets"), &Z_Registration_Info_UEnum_EMaterialAssignmentTargets, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2289430696U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMaterials_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFractureMaterialsSettings, UFractureMaterialsSettings::StaticClass, TEXT("UFractureMaterialsSettings"), &Z_Registration_Info_UClass_UFractureMaterialsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureMaterialsSettings), 545804160U) },
		{ Z_Construct_UClass_UFractureToolMaterials, UFractureToolMaterials::StaticClass, TEXT("UFractureToolMaterials"), &Z_Registration_Info_UClass_UFractureToolMaterials, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureToolMaterials), 920857564U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMaterials_h_2430946788(TEXT("/Script/FractureEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMaterials_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMaterials_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMaterials_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMaterials_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
