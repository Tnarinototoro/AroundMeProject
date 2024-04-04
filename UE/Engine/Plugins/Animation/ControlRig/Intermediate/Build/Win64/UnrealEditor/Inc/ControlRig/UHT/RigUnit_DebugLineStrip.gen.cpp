// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Debug/RigUnit_DebugLineStrip.h"
#include "Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_DebugLineStrip() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DebugBaseMutable();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_DebugLineStrip>() == std::is_polymorphic<FRigUnit_DebugBaseMutable>(), "USTRUCT FRigUnit_DebugLineStrip cannot be polymorphic unless super FRigUnit_DebugBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_DebugLineStrip;
class UScriptStruct* FRigUnit_DebugLineStrip::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DebugLineStrip.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_DebugLineStrip.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_DebugLineStrip"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_DebugLineStrip_Execute;
		Arguments_FRigUnit_DebugLineStrip_Execute.Emplace(TEXT("Points"), TEXT("TArray<FVector>"));
		Arguments_FRigUnit_DebugLineStrip_Execute.Emplace(TEXT("Color"), TEXT("FLinearColor"));
		Arguments_FRigUnit_DebugLineStrip_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigUnit_DebugLineStrip_Execute.Emplace(TEXT("Space"), TEXT("FName"));
		Arguments_FRigUnit_DebugLineStrip_Execute.Emplace(TEXT("WorldOffset"), TEXT("FTransform"));
		Arguments_FRigUnit_DebugLineStrip_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_DebugLineStrip::Execute"), &FRigUnit_DebugLineStrip::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_DebugLineStrip.OuterSingleton, Arguments_FRigUnit_DebugLineStrip_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DebugLineStrip.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_DebugLineStrip>()
{
	return FRigUnit_DebugLineStrip::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Space;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::Struct_MetaDataParams[] = {
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Draw Line Strip" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_DebugLineStrip.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_DebugLineStrip>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::NewProp_Points_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_DebugLineStrip.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DebugLineStrip, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::NewProp_Points_MetaData), Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::NewProp_Points_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_DebugLineStrip.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DebugLineStrip, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::NewProp_Color_MetaData), Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::NewProp_Color_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_DebugLineStrip.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DebugLineStrip, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::NewProp_Thickness_MetaData), Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::NewProp_Thickness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_DebugLineStrip.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DebugLineStrip, Space), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::NewProp_Space_MetaData), Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::NewProp_Space_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::NewProp_WorldOffset_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_DebugLineStrip.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::NewProp_WorldOffset = { "WorldOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DebugLineStrip, WorldOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::NewProp_WorldOffset_MetaData), Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::NewProp_WorldOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_DebugLineStrip.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FRigUnit_DebugLineStrip*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_DebugLineStrip), &Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::NewProp_bEnabled_MetaData), Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::NewProp_bEnabled_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::NewProp_Points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::NewProp_WorldOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::NewProp_bEnabled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_DebugBaseMutable,
		&NewStructOps,
		"RigUnit_DebugLineStrip",
		Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::PropPointers),
		sizeof(FRigUnit_DebugLineStrip),
		alignof(FRigUnit_DebugLineStrip),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_DebugLineStrip.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_DebugLineStrip.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_DebugLineStrip.InnerSingleton;
	}

void FRigUnit_DebugLineStrip::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_DebugLineStrip::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FVector> Points_0_Array(Points);
	
	StaticExecute(
		InExecuteContext,
		Points_0_Array,
		Color,
		Thickness,
		Space,
		WorldOffset,
		bEnabled
	);
}


static_assert(std::is_polymorphic<FRigUnit_DebugLineStripItemSpace>() == std::is_polymorphic<FRigUnit_DebugBaseMutable>(), "USTRUCT FRigUnit_DebugLineStripItemSpace cannot be polymorphic unless super FRigUnit_DebugBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_DebugLineStripItemSpace;
class UScriptStruct* FRigUnit_DebugLineStripItemSpace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DebugLineStripItemSpace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_DebugLineStripItemSpace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_DebugLineStripItemSpace"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_DebugLineStripItemSpace_Execute;
		Arguments_FRigUnit_DebugLineStripItemSpace_Execute.Emplace(TEXT("Points"), TEXT("TArray<FVector>"));
		Arguments_FRigUnit_DebugLineStripItemSpace_Execute.Emplace(TEXT("Color"), TEXT("FLinearColor"));
		Arguments_FRigUnit_DebugLineStripItemSpace_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigUnit_DebugLineStripItemSpace_Execute.Emplace(TEXT("Space"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_DebugLineStripItemSpace_Execute.Emplace(TEXT("WorldOffset"), TEXT("FTransform"));
		Arguments_FRigUnit_DebugLineStripItemSpace_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_DebugLineStripItemSpace::Execute"), &FRigUnit_DebugLineStripItemSpace::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_DebugLineStripItemSpace.OuterSingleton, Arguments_FRigUnit_DebugLineStripItemSpace_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DebugLineStripItemSpace.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_DebugLineStripItemSpace>()
{
	return FRigUnit_DebugLineStripItemSpace::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Space;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Draws a line strip in the viewport given any number of points\n */" },
		{ "Deprecated", "5.2" },
		{ "DisplayName", "Draw Line Strip" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_DebugLineStrip.h" },
		{ "ToolTip", "Draws a line strip in the viewport given any number of points" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_DebugLineStripItemSpace>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::NewProp_Points_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_DebugLineStrip.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DebugLineStripItemSpace, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::NewProp_Points_MetaData), Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::NewProp_Points_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_DebugLineStrip.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DebugLineStripItemSpace, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::NewProp_Color_MetaData), Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::NewProp_Color_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_DebugLineStrip.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DebugLineStripItemSpace, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::NewProp_Thickness_MetaData), Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::NewProp_Thickness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_DebugLineStrip.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DebugLineStripItemSpace, Space), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::NewProp_Space_MetaData), Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::NewProp_Space_MetaData) }; // 422817336
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::NewProp_WorldOffset_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_DebugLineStrip.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::NewProp_WorldOffset = { "WorldOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DebugLineStripItemSpace, WorldOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::NewProp_WorldOffset_MetaData), Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::NewProp_WorldOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_DebugLineStrip.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FRigUnit_DebugLineStripItemSpace*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_DebugLineStripItemSpace), &Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::NewProp_bEnabled_MetaData), Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::NewProp_bEnabled_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::NewProp_Points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::NewProp_WorldOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::NewProp_bEnabled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_DebugBaseMutable,
		&NewStructOps,
		"RigUnit_DebugLineStripItemSpace",
		Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::PropPointers),
		sizeof(FRigUnit_DebugLineStripItemSpace),
		alignof(FRigUnit_DebugLineStripItemSpace),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_DebugLineStripItemSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_DebugLineStripItemSpace.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_DebugLineStripItemSpace.InnerSingleton;
	}

void FRigUnit_DebugLineStripItemSpace::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_DebugLineStripItemSpace::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FVector> Points_0_Array(Points);
	
	StaticExecute(
		InExecuteContext,
		Points_0_Array,
		Color,
		Thickness,
		Space,
		WorldOffset,
		bEnabled
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_DebugLineStrip_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_DebugLineStrip_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_DebugLineStrip::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics::NewStructOps, TEXT("RigUnit_DebugLineStrip"), &Z_Registration_Info_UScriptStruct_RigUnit_DebugLineStrip, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_DebugLineStrip), 2065387560U) },
		{ FRigUnit_DebugLineStripItemSpace::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::NewStructOps, TEXT("RigUnit_DebugLineStripItemSpace"), &Z_Registration_Info_UScriptStruct_RigUnit_DebugLineStripItemSpace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_DebugLineStripItemSpace), 1960500079U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_DebugLineStrip_h_1430240440(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_DebugLineStrip_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_DebugLineStrip_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
