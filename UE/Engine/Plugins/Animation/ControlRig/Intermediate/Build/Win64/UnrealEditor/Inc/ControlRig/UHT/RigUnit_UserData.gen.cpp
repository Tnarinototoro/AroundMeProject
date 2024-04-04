// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Core/RigUnit_UserData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_UserData() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigDispatch_GetUserData();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigDispatchFactory();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ShapeExists();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigDispatch_GetUserData>() == std::is_polymorphic<FRigDispatchFactory>(), "USTRUCT FRigDispatch_GetUserData cannot be polymorphic unless super FRigDispatchFactory is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigDispatch_GetUserData;
class UScriptStruct* FRigDispatch_GetUserData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigDispatch_GetUserData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigDispatch_GetUserData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigDispatch_GetUserData, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigDispatch_GetUserData"));
	}
	return Z_Registration_Info_UScriptStruct_RigDispatch_GetUserData.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigDispatch_GetUserData>()
{
	return FRigDispatch_GetUserData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigDispatch_GetUserData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigDispatch_GetUserData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*\n * Retrieves a value from a namespaces user data\n */" },
		{ "DisplayName", "Get User Data" },
		{ "ExecuteContext", "FControlRigExecuteContext" },
		{ "Keywords", "AssetUserData,Metadata" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_UserData.h" },
		{ "ToolTip", "* Retrieves a value from a namespaces user data" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigDispatch_GetUserData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigDispatch_GetUserData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigDispatch_GetUserData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigDispatchFactory,
		&NewStructOps,
		"RigDispatch_GetUserData",
		nullptr,
		0,
		sizeof(FRigDispatch_GetUserData),
		alignof(FRigDispatch_GetUserData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigDispatch_GetUserData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigDispatch_GetUserData_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigDispatch_GetUserData()
	{
		if (!Z_Registration_Info_UScriptStruct_RigDispatch_GetUserData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigDispatch_GetUserData.InnerSingleton, Z_Construct_UScriptStruct_FRigDispatch_GetUserData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigDispatch_GetUserData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_SetupShapeLibraryFromUserData>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_SetupShapeLibraryFromUserData cannot be polymorphic unless super FRigUnitMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetupShapeLibraryFromUserData;
class UScriptStruct* FRigUnit_SetupShapeLibraryFromUserData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetupShapeLibraryFromUserData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetupShapeLibraryFromUserData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetupShapeLibraryFromUserData"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetupShapeLibraryFromUserData_Execute;
		Arguments_FRigUnit_SetupShapeLibraryFromUserData_Execute.Emplace(TEXT("NameSpace"), TEXT("FString"));
		Arguments_FRigUnit_SetupShapeLibraryFromUserData_Execute.Emplace(TEXT("Path"), TEXT("FString"));
		Arguments_FRigUnit_SetupShapeLibraryFromUserData_Execute.Emplace(TEXT("LibraryName"), TEXT("FString"));
		Arguments_FRigUnit_SetupShapeLibraryFromUserData_Execute.Emplace(TEXT("ReplaceExisting"), TEXT("bool"));
		Arguments_FRigUnit_SetupShapeLibraryFromUserData_Execute.Emplace(TEXT("LogShapeLibraries"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetupShapeLibraryFromUserData::Execute"), &FRigUnit_SetupShapeLibraryFromUserData::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetupShapeLibraryFromUserData.OuterSingleton, Arguments_FRigUnit_SetupShapeLibraryFromUserData_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetupShapeLibraryFromUserData.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetupShapeLibraryFromUserData>()
{
	return FRigUnit_SetupShapeLibraryFromUserData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameSpace_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NameSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LibraryName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LibraryName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplaceExisting_MetaData[];
#endif
		static void NewProp_ReplaceExisting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReplaceExisting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogShapeLibraries_MetaData[];
#endif
		static void NewProp_LogShapeLibraries_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LogShapeLibraries;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Allows to set / add a shape library on the running control rig from user data\n */" },
		{ "DisplayName", "Set Shape Library from User Data" },
		{ "Keywords", "Shape,Gizmo,Library" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_UserData.h" },
		{ "ToolTip", "Allows to set / add a shape library on the running control rig from user data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetupShapeLibraryFromUserData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics::NewProp_NameSpace_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/*\n\x09 * The name space of the user data to look the shape library up within\n\x09 */" },
		{ "CustomWidget", "UserDataNameSpace" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_UserData.h" },
		{ "ToolTip", "* The name space of the user data to look the shape library up within" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics::NewProp_NameSpace = { "NameSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetupShapeLibraryFromUserData, NameSpace), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics::NewProp_NameSpace_MetaData), Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics::NewProp_NameSpace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics::NewProp_Path_MetaData[] = {
		{ "AllowUObjects", "" },
		{ "Category", "Pins" },
		{ "Comment", "/*\n\x09 * The path within the user data for the shape library\n\x09 */" },
		{ "CustomWidget", "UserDataPath" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_UserData.h" },
		{ "ToolTip", "* The path within the user data for the shape library" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetupShapeLibraryFromUserData, Path), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics::NewProp_Path_MetaData), Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics::NewProp_Path_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics::NewProp_LibraryName_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/*\n\x09 * Optionally provide the namespace of the shape library to use.\n\x09 * This is only useful if you have multiple shape libraries and you\n\x09 * want to override a specific one.\n\x09 * If this is empty and ReplaceExisting is checked we'll replace the first\n\x09 * shape library on this rig. \n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_UserData.h" },
		{ "ToolTip", "* Optionally provide the namespace of the shape library to use.\n* This is only useful if you have multiple shape libraries and you\n* want to override a specific one.\n* If this is empty and ReplaceExisting is checked we'll replace the first\n* shape library on this rig." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics::NewProp_LibraryName = { "LibraryName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetupShapeLibraryFromUserData, LibraryName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics::NewProp_LibraryName_MetaData), Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics::NewProp_LibraryName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics::NewProp_ReplaceExisting_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/*\n\x09 * If true we'll try to replace an existing library.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_UserData.h" },
		{ "ToolTip", "* If true we'll try to replace an existing library." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics::NewProp_ReplaceExisting_SetBit(void* Obj)
	{
		((FRigUnit_SetupShapeLibraryFromUserData*)Obj)->ReplaceExisting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics::NewProp_ReplaceExisting = { "ReplaceExisting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_SetupShapeLibraryFromUserData), &Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics::NewProp_ReplaceExisting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics::NewProp_ReplaceExisting_MetaData), Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics::NewProp_ReplaceExisting_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics::NewProp_LogShapeLibraries_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/*\n\x09 * If this is checked we'll output the resulting shape libraries to the log for debugging.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_UserData.h" },
		{ "ToolTip", "* If this is checked we'll output the resulting shape libraries to the log for debugging." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics::NewProp_LogShapeLibraries_SetBit(void* Obj)
	{
		((FRigUnit_SetupShapeLibraryFromUserData*)Obj)->LogShapeLibraries = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics::NewProp_LogShapeLibraries = { "LogShapeLibraries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_SetupShapeLibraryFromUserData), &Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics::NewProp_LogShapeLibraries_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics::NewProp_LogShapeLibraries_MetaData), Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics::NewProp_LogShapeLibraries_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics::NewProp_NameSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics::NewProp_LibraryName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics::NewProp_ReplaceExisting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics::NewProp_LogShapeLibraries,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnitMutable,
		&NewStructOps,
		"RigUnit_SetupShapeLibraryFromUserData",
		Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics::PropPointers),
		sizeof(FRigUnit_SetupShapeLibraryFromUserData),
		alignof(FRigUnit_SetupShapeLibraryFromUserData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SetupShapeLibraryFromUserData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetupShapeLibraryFromUserData.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SetupShapeLibraryFromUserData.InnerSingleton;
	}

void FRigUnit_SetupShapeLibraryFromUserData::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_SetupShapeLibraryFromUserData::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		NameSpace,
		Path,
		LibraryName,
		ReplaceExisting,
		LogShapeLibraries
	);
}


static_assert(std::is_polymorphic<FRigUnit_ShapeExists>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_ShapeExists cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ShapeExists;
class UScriptStruct* FRigUnit_ShapeExists::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ShapeExists.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ShapeExists.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ShapeExists, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ShapeExists"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ShapeExists_Execute;
		Arguments_FRigUnit_ShapeExists_Execute.Emplace(TEXT("ShapeName"), TEXT("FName"));
		Arguments_FRigUnit_ShapeExists_Execute.Emplace(TEXT("Result"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ShapeExists::Execute"), &FRigUnit_ShapeExists::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ShapeExists.OuterSingleton, Arguments_FRigUnit_ShapeExists_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ShapeExists.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ShapeExists>()
{
	return FRigUnit_ShapeExists::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ShapeExists_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ShapeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ShapeExists_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Checks whether or not a shape is available in the rig's shape libraries\n */" },
		{ "DisplayName", "Shape Exists" },
		{ "Keywords", "Shape,Gizmo,Library,Exists,Contains" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_UserData.h" },
		{ "ToolTip", "Checks whether or not a shape is available in the rig's shape libraries" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ShapeExists_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ShapeExists>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ShapeExists_Statics::NewProp_ShapeName_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/*\n\x09 * The name of the shape to search for\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_UserData.h" },
		{ "ToolTip", "* The name of the shape to search for" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_ShapeExists_Statics::NewProp_ShapeName = { "ShapeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ShapeExists, ShapeName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ShapeExists_Statics::NewProp_ShapeName_MetaData), Z_Construct_UScriptStruct_FRigUnit_ShapeExists_Statics::NewProp_ShapeName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ShapeExists_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/*\n\x09 * True if the shape name exists in any of the shape libraries \n\x09 */" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_UserData.h" },
		{ "Output", "" },
		{ "ToolTip", "* True if the shape name exists in any of the shape libraries" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_ShapeExists_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FRigUnit_ShapeExists*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_ShapeExists_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_ShapeExists), &Z_Construct_UScriptStruct_FRigUnit_ShapeExists_Statics::NewProp_Result_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ShapeExists_Statics::NewProp_Result_MetaData), Z_Construct_UScriptStruct_FRigUnit_ShapeExists_Statics::NewProp_Result_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ShapeExists_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ShapeExists_Statics::NewProp_ShapeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ShapeExists_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ShapeExists_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_ShapeExists",
		Z_Construct_UScriptStruct_FRigUnit_ShapeExists_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ShapeExists_Statics::PropPointers),
		sizeof(FRigUnit_ShapeExists),
		alignof(FRigUnit_ShapeExists),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ShapeExists_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ShapeExists_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ShapeExists_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ShapeExists()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ShapeExists.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ShapeExists.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ShapeExists_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ShapeExists.InnerSingleton;
	}

void FRigUnit_ShapeExists::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_ShapeExists::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		ShapeName,
		Result
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_UserData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_UserData_h_Statics::ScriptStructInfo[] = {
		{ FRigDispatch_GetUserData::StaticStruct, Z_Construct_UScriptStruct_FRigDispatch_GetUserData_Statics::NewStructOps, TEXT("RigDispatch_GetUserData"), &Z_Registration_Info_UScriptStruct_RigDispatch_GetUserData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigDispatch_GetUserData), 3423921874U) },
		{ FRigUnit_SetupShapeLibraryFromUserData::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics::NewStructOps, TEXT("RigUnit_SetupShapeLibraryFromUserData"), &Z_Registration_Info_UScriptStruct_RigUnit_SetupShapeLibraryFromUserData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetupShapeLibraryFromUserData), 1089421U) },
		{ FRigUnit_ShapeExists::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ShapeExists_Statics::NewStructOps, TEXT("RigUnit_ShapeExists"), &Z_Registration_Info_UScriptStruct_RigUnit_ShapeExists, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ShapeExists), 473568544U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_UserData_h_3845141450(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_UserData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_UserData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
