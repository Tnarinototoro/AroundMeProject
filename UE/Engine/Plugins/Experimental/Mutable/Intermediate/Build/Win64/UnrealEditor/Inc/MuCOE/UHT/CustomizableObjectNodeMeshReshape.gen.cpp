// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/Nodes/CustomizableObjectNodeMeshReshape.h"
#include "MuCOE/Nodes/CustomizableObjectNodeMeshReshapeCommon.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodeMeshReshape() {}
// Cross Module References
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNode();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeMeshReshape();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UEnum* Z_Construct_UEnum_CustomizableObjectEditor_EBoneDeformSelectionMethod();
	CUSTOMIZABLEOBJECTEDITOR_API UEnum* Z_Construct_UEnum_CustomizableObjectEditor_EMeshReshapeVertexColorChannelUsage();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMeshReshapeBoneReference();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMeshReshapeColorUsage();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshReshapeVertexColorChannelUsage;
	static UEnum* EMeshReshapeVertexColorChannelUsage_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshReshapeVertexColorChannelUsage.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshReshapeVertexColorChannelUsage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CustomizableObjectEditor_EMeshReshapeVertexColorChannelUsage, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("EMeshReshapeVertexColorChannelUsage"));
		}
		return Z_Registration_Info_UEnum_EMeshReshapeVertexColorChannelUsage.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UEnum* StaticEnum<EMeshReshapeVertexColorChannelUsage>()
	{
		return EMeshReshapeVertexColorChannelUsage_StaticEnum();
	}
	struct Z_Construct_UEnum_CustomizableObjectEditor_EMeshReshapeVertexColorChannelUsage_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CustomizableObjectEditor_EMeshReshapeVertexColorChannelUsage_Statics::Enumerators[] = {
		{ "EMeshReshapeVertexColorChannelUsage::None", (int64)EMeshReshapeVertexColorChannelUsage::None },
		{ "EMeshReshapeVertexColorChannelUsage::RigidClusterId", (int64)EMeshReshapeVertexColorChannelUsage::RigidClusterId },
		{ "EMeshReshapeVertexColorChannelUsage::MaskWeight", (int64)EMeshReshapeVertexColorChannelUsage::MaskWeight },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CustomizableObjectEditor_EMeshReshapeVertexColorChannelUsage_Statics::Enum_MetaDataParams[] = {
		{ "MaskWeight.Name", "EMeshReshapeVertexColorChannelUsage::MaskWeight" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshReshape.h" },
		{ "None.Name", "EMeshReshapeVertexColorChannelUsage::None" },
		{ "RigidClusterId.Name", "EMeshReshapeVertexColorChannelUsage::RigidClusterId" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CustomizableObjectEditor_EMeshReshapeVertexColorChannelUsage_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		"EMeshReshapeVertexColorChannelUsage",
		"EMeshReshapeVertexColorChannelUsage",
		Z_Construct_UEnum_CustomizableObjectEditor_EMeshReshapeVertexColorChannelUsage_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObjectEditor_EMeshReshapeVertexColorChannelUsage_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObjectEditor_EMeshReshapeVertexColorChannelUsage_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CustomizableObjectEditor_EMeshReshapeVertexColorChannelUsage_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CustomizableObjectEditor_EMeshReshapeVertexColorChannelUsage()
	{
		if (!Z_Registration_Info_UEnum_EMeshReshapeVertexColorChannelUsage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshReshapeVertexColorChannelUsage.InnerSingleton, Z_Construct_UEnum_CustomizableObjectEditor_EMeshReshapeVertexColorChannelUsage_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshReshapeVertexColorChannelUsage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshReshapeColorUsage;
class UScriptStruct* FMeshReshapeColorUsage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshReshapeColorUsage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshReshapeColorUsage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshReshapeColorUsage, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("MeshReshapeColorUsage"));
	}
	return Z_Registration_Info_UScriptStruct_MeshReshapeColorUsage.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* StaticStruct<FMeshReshapeColorUsage>()
{
	return FMeshReshapeColorUsage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_R_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_R_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_R;
		static const UECodeGen_Private::FIntPropertyParams NewProp_G_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_G_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_G;
		static const UECodeGen_Private::FIntPropertyParams NewProp_B_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_B;
		static const UECodeGen_Private::FIntPropertyParams NewProp_A_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_A;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshReshape.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshReshapeColorUsage>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics::NewProp_R_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics::NewProp_R_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshReshape.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshReshapeColorUsage, R), Z_Construct_UEnum_CustomizableObjectEditor_EMeshReshapeVertexColorChannelUsage, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics::NewProp_R_MetaData), Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics::NewProp_R_MetaData) }; // 1059820360
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics::NewProp_G_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics::NewProp_G_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshReshape.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics::NewProp_G = { "G", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshReshapeColorUsage, G), Z_Construct_UEnum_CustomizableObjectEditor_EMeshReshapeVertexColorChannelUsage, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics::NewProp_G_MetaData), Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics::NewProp_G_MetaData) }; // 1059820360
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics::NewProp_B_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics::NewProp_B_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshReshape.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshReshapeColorUsage, B), Z_Construct_UEnum_CustomizableObjectEditor_EMeshReshapeVertexColorChannelUsage, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics::NewProp_B_MetaData), Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics::NewProp_B_MetaData) }; // 1059820360
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics::NewProp_A_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics::NewProp_A_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshReshape.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshReshapeColorUsage, A), Z_Construct_UEnum_CustomizableObjectEditor_EMeshReshapeVertexColorChannelUsage, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics::NewProp_A_MetaData), Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics::NewProp_A_MetaData) }; // 1059820360
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics::NewProp_R_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics::NewProp_R,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics::NewProp_G_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics::NewProp_G,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics::NewProp_B_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics::NewProp_A_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics::NewProp_A,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		&NewStructOps,
		"MeshReshapeColorUsage",
		Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics::PropPointers),
		sizeof(FMeshReshapeColorUsage),
		alignof(FMeshReshapeColorUsage),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMeshReshapeColorUsage()
	{
		if (!Z_Registration_Info_UScriptStruct_MeshReshapeColorUsage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshReshapeColorUsage.InnerSingleton, Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MeshReshapeColorUsage.InnerSingleton;
	}
	void UCustomizableObjectNodeMeshReshape::StaticRegisterNativesUCustomizableObjectNodeMeshReshape()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeMeshReshape);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_NoRegister()
	{
		return UCustomizableObjectNodeMeshReshape::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReshapeVertices_MetaData[];
#endif
		static void NewProp_bReshapeVertices_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReshapeVertices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReshapeSkeleton_MetaData[];
#endif
		static void NewProp_bReshapeSkeleton_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReshapeSkeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReshapePhysicsVolumes_MetaData[];
#endif
		static void NewProp_bReshapePhysicsVolumes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReshapePhysicsVolumes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRigidParts_MetaData[];
#endif
		static void NewProp_bEnableRigidParts_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRigidParts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexColorUsage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexColorUsage;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectionMethod;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BonesToDeform_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonesToDeform_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BonesToDeform;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PhysicsSelectionMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsSelectionMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PhysicsSelectionMethod;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicsBodiesToDeform_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsBodiesToDeform_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PhysicsBodiesToDeform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeformAllBones_MetaData[];
#endif
		static void NewProp_bDeformAllBones_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeformAllBones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeformAllPhysicsBodies_MetaData[];
#endif
		static void NewProp_bDeformAllPhysicsBodies_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeformAllPhysicsBodies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNode,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeMeshReshape.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshReshape.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bReshapeVertices_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "/** Enable the deformation of the skeleton of the base mesh. */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshReshape.h" },
		{ "ToolTip", "Enable the deformation of the skeleton of the base mesh." },
	};
#endif
	void Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bReshapeVertices_SetBit(void* Obj)
	{
		((UCustomizableObjectNodeMeshReshape*)Obj)->bReshapeVertices = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bReshapeVertices = { "bReshapeVertices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCustomizableObjectNodeMeshReshape), &Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bReshapeVertices_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bReshapeVertices_MetaData), Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bReshapeVertices_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bReshapeSkeleton_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "/** Enable the deformation of the skeleton of the base mesh. */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshReshape.h" },
		{ "ToolTip", "Enable the deformation of the skeleton of the base mesh." },
	};
#endif
	void Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bReshapeSkeleton_SetBit(void* Obj)
	{
		((UCustomizableObjectNodeMeshReshape*)Obj)->bReshapeSkeleton = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bReshapeSkeleton = { "bReshapeSkeleton", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCustomizableObjectNodeMeshReshape), &Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bReshapeSkeleton_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bReshapeSkeleton_MetaData), Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bReshapeSkeleton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bReshapePhysicsVolumes_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "/** Enable the deformation of physics volumes of the base mesh */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshReshape.h" },
		{ "ToolTip", "Enable the deformation of physics volumes of the base mesh" },
	};
#endif
	void Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bReshapePhysicsVolumes_SetBit(void* Obj)
	{
		((UCustomizableObjectNodeMeshReshape*)Obj)->bReshapePhysicsVolumes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bReshapePhysicsVolumes = { "bReshapePhysicsVolumes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCustomizableObjectNodeMeshReshape), &Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bReshapePhysicsVolumes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bReshapePhysicsVolumes_MetaData), Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bReshapePhysicsVolumes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bEnableRigidParts_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshReshape.h" },
	};
#endif
	void Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bEnableRigidParts_SetBit(void* Obj)
	{
		((UCustomizableObjectNodeMeshReshape*)Obj)->bEnableRigidParts_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bEnableRigidParts = { "bEnableRigidParts", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCustomizableObjectNodeMeshReshape), &Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bEnableRigidParts_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bEnableRigidParts_MetaData), Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bEnableRigidParts_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_VertexColorUsage_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshReshape.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_VertexColorUsage = { "VertexColorUsage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeMeshReshape, VertexColorUsage), Z_Construct_UScriptStruct_FMeshReshapeColorUsage, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_VertexColorUsage_MetaData), Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_VertexColorUsage_MetaData) }; // 1270823202
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_SelectionMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_SelectionMethod_MetaData[] = {
		{ "Category", "ReshapeBones" },
		{ "Comment", "/** Bone Reshape Selection Method */" },
		{ "EditCondition", "bReshapeSkeleton" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshReshape.h" },
		{ "ToolTip", "Bone Reshape Selection Method" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_SelectionMethod = { "SelectionMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeMeshReshape, SelectionMethod), Z_Construct_UEnum_CustomizableObjectEditor_EBoneDeformSelectionMethod, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_SelectionMethod_MetaData), Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_SelectionMethod_MetaData) }; // 2189638189
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_BonesToDeform_Inner = { "BonesToDeform", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMeshReshapeBoneReference, METADATA_PARAMS(0, nullptr) }; // 3425640109
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_BonesToDeform_MetaData[] = {
		{ "Category", "ReshapeBones" },
		{ "Comment", "/** Array with selected bones that will be deformed */" },
		{ "EditCondition", "bReshapeSkeleton && (SelectionMethod == EBoneDeformSelectionMethod::ONLY_SELECTED || SelectionMethod == EBoneDeformSelectionMethod::ALL_BUT_SELECTED)" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshReshape.h" },
		{ "ToolTip", "Array with selected bones that will be deformed" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_BonesToDeform = { "BonesToDeform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeMeshReshape, BonesToDeform), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_BonesToDeform_MetaData), Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_BonesToDeform_MetaData) }; // 3425640109
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_PhysicsSelectionMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_PhysicsSelectionMethod_MetaData[] = {
		{ "Category", "ReshapePhysics" },
		{ "DisplayName", "Selection Method" },
		{ "EditCondition", "bReshapePhysicsVolumes" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshReshape.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_PhysicsSelectionMethod = { "PhysicsSelectionMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeMeshReshape, PhysicsSelectionMethod), Z_Construct_UEnum_CustomizableObjectEditor_EBoneDeformSelectionMethod, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_PhysicsSelectionMethod_MetaData), Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_PhysicsSelectionMethod_MetaData) }; // 2189638189
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_PhysicsBodiesToDeform_Inner = { "PhysicsBodiesToDeform", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMeshReshapeBoneReference, METADATA_PARAMS(0, nullptr) }; // 3425640109
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_PhysicsBodiesToDeform_MetaData[] = {
		{ "Category", "ReshapePhysics" },
		{ "Comment", "/** Array with bones with physics bodies that will be deformed */" },
		{ "EditCondition", "bReshapePhysicsVolumes && (PhysicsSelectionMethod == EBoneDeformSelectionMethod::ONLY_SELECTED || PhysicsSelectionMethod == EBoneDeformSelectionMethod::ALL_BUT_SELECTED)" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshReshape.h" },
		{ "ToolTip", "Array with bones with physics bodies that will be deformed" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_PhysicsBodiesToDeform = { "PhysicsBodiesToDeform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeMeshReshape, PhysicsBodiesToDeform), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_PhysicsBodiesToDeform_MetaData), Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_PhysicsBodiesToDeform_MetaData) }; // 3425640109
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bDeformAllBones_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshReshape.h" },
	};
#endif
	void Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bDeformAllBones_SetBit(void* Obj)
	{
		((UCustomizableObjectNodeMeshReshape*)Obj)->bDeformAllBones_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bDeformAllBones = { "bDeformAllBones", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCustomizableObjectNodeMeshReshape), &Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bDeformAllBones_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bDeformAllBones_MetaData), Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bDeformAllBones_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bDeformAllPhysicsBodies_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshReshape.h" },
	};
#endif
	void Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bDeformAllPhysicsBodies_SetBit(void* Obj)
	{
		((UCustomizableObjectNodeMeshReshape*)Obj)->bDeformAllPhysicsBodies_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bDeformAllPhysicsBodies = { "bDeformAllPhysicsBodies", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCustomizableObjectNodeMeshReshape), &Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bDeformAllPhysicsBodies_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bDeformAllPhysicsBodies_MetaData), Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bDeformAllPhysicsBodies_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bReshapeVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bReshapeSkeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bReshapePhysicsVolumes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bEnableRigidParts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_VertexColorUsage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_SelectionMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_SelectionMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_BonesToDeform_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_BonesToDeform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_PhysicsSelectionMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_PhysicsSelectionMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_PhysicsBodiesToDeform_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_PhysicsBodiesToDeform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bDeformAllBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::NewProp_bDeformAllPhysicsBodies,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeMeshReshape>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::ClassParams = {
		&UCustomizableObjectNodeMeshReshape::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeMeshReshape()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeMeshReshape.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeMeshReshape.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeMeshReshape.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeMeshReshape>()
	{
		return UCustomizableObjectNodeMeshReshape::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeMeshReshape);
	UCustomizableObjectNodeMeshReshape::~UCustomizableObjectNodeMeshReshape() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCustomizableObjectNodeMeshReshape)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_Statics::EnumInfo[] = {
		{ EMeshReshapeVertexColorChannelUsage_StaticEnum, TEXT("EMeshReshapeVertexColorChannelUsage"), &Z_Registration_Info_UEnum_EMeshReshapeVertexColorChannelUsage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1059820360U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_Statics::ScriptStructInfo[] = {
		{ FMeshReshapeColorUsage::StaticStruct, Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics::NewStructOps, TEXT("MeshReshapeColorUsage"), &Z_Registration_Info_UScriptStruct_MeshReshapeColorUsage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshReshapeColorUsage), 1270823202U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodeMeshReshape, UCustomizableObjectNodeMeshReshape::StaticClass, TEXT("UCustomizableObjectNodeMeshReshape"), &Z_Registration_Info_UClass_UCustomizableObjectNodeMeshReshape, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeMeshReshape), 4054593361U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_3904795123(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
